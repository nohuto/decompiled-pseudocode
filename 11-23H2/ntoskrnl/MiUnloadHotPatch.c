/*
 * XREFs of MiUnloadHotPatch @ 0x140A3C1E4
 * Callers:
 *     NtManageHotPatch @ 0x1407D41C0 (NtManageHotPatch.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14028B1E0 (RtlAvlRemoveNode.c)
 *     memset @ 0x140435E00 (memset.c)
 *     VslRevertHotPatch @ 0x14054CC2C (VslRevertHotPatch.c)
 *     MmAcquireLoadLock @ 0x1407047C0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x140704B40 (MmReleaseLoadLock.c)
 *     MiApplyHotPatchToDriver @ 0x140A35120 (MiApplyHotPatchToDriver.c)
 *     MiCompareHotPatchNodes @ 0x140A368B4 (MiCompareHotPatchNodes.c)
 *     MiDeleteHotPatchRecord @ 0x140A36B14 (MiDeleteHotPatchRecord.c)
 *     MiHotPatchAllProcesses @ 0x140A376B8 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchOperationStatus @ 0x140A39208 (MiLogHotPatchOperationStatus.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiUnloadHotPatch(unsigned int a1, unsigned int a2)
{
  unsigned __int64 *v4; // r14
  struct _KTHREAD *Lock; // r12
  int v6; // edi
  unsigned __int64 *v7; // rbx
  int v8; // eax
  signed int v9; // r15d
  int v10; // eax
  _DWORD v12[16]; // [rsp+30h] [rbp-58h] BYREF

  memset(v12, 0, sizeof(v12));
  v4 = 0LL;
  Lock = MmAcquireLoadLock();
  v6 = 0;
  MiDeleteHotPatchRecord((unsigned __int64 *)&xmmword_140C69830, 0, a1, a2);
  if ( (MiFlags & 0x4000) != 0 )
  {
    v7 = (unsigned __int64 *)qword_140C69840;
    v12[6] = a1;
    v12[7] = a2;
    while ( v7 )
    {
      v8 = MiCompareHotPatchNodes((__int64)v12, (__int64)v7);
      if ( v8 >= 0 )
      {
        if ( v8 <= 0 )
          break;
        v7 = (unsigned __int64 *)v7[1];
      }
      else
      {
        v7 = (unsigned __int64 *)*v7;
      }
    }
    if ( v7 )
    {
      v9 = VslRevertHotPatch(0LL, a1, a2);
      MiLogHotPatchOperationStatus(a1, a2, 0LL, v9, 2);
      if ( v9 < 0 )
      {
        v6 = v9;
      }
      else
      {
        RtlAvlRemoveNode((unsigned __int64 *)&qword_140C69840, v7);
        v4 = v7;
      }
    }
    v10 = MiApplyHotPatchToDriver(a1, a2, 0LL, 0LL);
    if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741515 && v6 >= 0 )
      v6 = v10;
  }
  MmReleaseLoadLock((__int64)Lock);
  MiHotPatchAllProcesses(a1, a2);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v6;
}
