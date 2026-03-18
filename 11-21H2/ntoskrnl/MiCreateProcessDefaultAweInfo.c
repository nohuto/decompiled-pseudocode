/*
 * XREFs of MiCreateProcessDefaultAweInfo @ 0x14097CC1C
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x14097BD88 (MiAllocateUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x14097CD04 (MiCreateUserPhysicalView.c)
 * Callees:
 *     MiLockAweVadsExclusive @ 0x1405AB9B8 (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1405AC950 (MiUnlockAweVadsExclusive.c)
 *     MiAllocateAweInfo @ 0x14097BBE0 (MiAllocateAweInfo.c)
 *     MiDeleteAweInfo @ 0x14097CFDC (MiDeleteAweInfo.c)
 */

__int64 __fastcall MiCreateProcessDefaultAweInfo(KPROCESSOR_MODE a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  unsigned __int64 v5; // r15
  __int64 v6; // rbx
  __int64 result; // rax
  int v8; // edi
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v5 = Process[1].ActiveProcessors.StaticBitmap[28];
  v6 = *(_QWORD *)(v5 + 376);
  v9 = v6;
  if ( !v6 )
  {
    result = MiAllocateAweInfo(0LL, 1, 0, a1, &v9);
    if ( (int)result < 0 )
      return result;
    v8 = 0;
    MiLockAweVadsExclusive((__int64)CurrentThread);
    v6 = v9;
    if ( !*(_QWORD *)(Process[1].ActiveProcessors.StaticBitmap[28] + 376) )
    {
      *(_QWORD *)(v5 + 376) = v9;
      v8 = 1;
    }
    MiUnlockAweVadsExclusive((__int64)CurrentThread);
    if ( !v8 )
    {
      MiDeleteAweInfo(KeGetCurrentThread()->ApcState.Process, v9);
      v6 = *(_QWORD *)(Process[1].ActiveProcessors.StaticBitmap[28] + 376);
    }
  }
  *a2 = v6;
  return 0LL;
}
