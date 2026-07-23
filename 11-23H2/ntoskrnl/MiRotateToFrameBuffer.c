/*
 * XREFs of MiRotateToFrameBuffer @ 0x140A31950
 * Callers:
 *     MmRotatePhysicalView @ 0x140A31E80 (MmRotatePhysicalView.c)
 * Callees:
 *     MmSizeOfMdl @ 0x140206EA0 (MmSizeOfMdl.c)
 *     MmProbeAndLockPages @ 0x140238860 (MmProbeAndLockPages.c)
 *     MiIsPfn @ 0x14023F190 (MiIsPfn.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402F176C (MiLegitimatePageForDriversToMap.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402F17EC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSanitizePage @ 0x140335EA0 (MiSanitizePage.c)
 *     MiDereferenceIoPages @ 0x140336384 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140336790 (MiReferenceIoPages.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     MiDeleteRotateAndStopFaults @ 0x140632B08 (MiDeleteRotateAndStopFaults.c)
 *     MiRotateComplete @ 0x14063331C (MiRotateComplete.c)
 *     MiSlowRotateCopy @ 0x1406334B4 (MiSlowRotateCopy.c)
 *     MiGetVadCacheAttribute @ 0x1406610F4 (MiGetVadCacheAttribute.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRotateToFrameBuffer(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int (__fastcall *a6)(__int64, struct _MDL *, __int64),
        __int64 a7)
{
  SIZE_T v8; // r15
  __int64 result; // rax
  int v10; // esi
  __int64 v11; // r9
  unsigned __int64 *v12; // r14
  unsigned __int64 *v13; // rcx
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // edi
  SIZE_T v17; // rax
  struct _MDL *Pool; // rax
  struct _MDL *v19; // rdi
  __int64 v20; // r15
  unsigned int i; // [rsp+40h] [rbp-78h]
  int VadCacheAttribute; // [rsp+44h] [rbp-74h]
  char *P; // [rsp+50h] [rbp-68h]
  __int64 v24; // [rsp+58h] [rbp-60h]
  __int128 v25; // [rsp+68h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]

  v25 = 0LL;
  CurrentThread = 0LL;
  v8 = a5 << 12;
  if ( a5 << 12 > 0xFFFFFFFF )
    return 3221225990LL;
  v24 = v8 + a3 - 1;
  VadCacheAttribute = MiGetVadCacheAttribute(a2);
  v10 = 0;
  v12 = (unsigned __int64 *)(v11 + 48);
  v13 = (unsigned __int64 *)(v11 + 48);
  P = (char *)(v11 + 48);
  for ( i = 0; i < a5; P += 8 )
  {
    v14 = *v13;
    if ( (unsigned int)MiIsPfn(*v13) )
    {
      result = MiLegitimatePageForDriversToMap(48 * v14 - 0x220000000000LL);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v15 = MiSanitizePage(v14);
      v16 = MiReferenceIoPages(1, v15, 1uLL, VadCacheAttribute, 0LL, 0LL);
      if ( v16 < 0 )
        goto LABEL_21;
      ++v10;
    }
    ++i;
    v13 = (unsigned __int64 *)(P + 8);
  }
  if ( (unsigned int)MiChargeCommit(a1, a5, 0LL) )
  {
    v17 = MmSizeOfMdl((PVOID)a3, v8);
    Pool = (struct _MDL *)MiAllocatePool(64, v17, 0x6F666E49u);
    v19 = Pool;
    if ( Pool )
    {
      Pool->Next = 0LL;
      Pool->Size = 8 * ((((a3 & 0xFFF) + v8 + 4095) >> 12) + 6);
      Pool->MdlFlags = 0;
      Pool->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
      Pool->ByteOffset = a3 & 0xFFF;
      Pool->ByteCount = v8;
      MmProbeAndLockPages(Pool, 1, IoReadAccess);
      *((_QWORD *)&v25 + 1) = a2;
      CurrentThread = KeGetCurrentThread();
      MiDeleteRotateAndStopFaults(a3, v24, &v25);
      v19->MdlFlags |= 0x2000u;
      if ( a6(a4, v19, a7) < 0 )
        MiSlowRotateCopy(a4, (__int64)v19, a2);
      MiMapLockedPagesInUserSpaceHelper(a3, (__int64)v12, &v19[1].Next, VadCacheAttribute, a5, 0LL, 16);
      MiRotateComplete((unsigned __int64 *)&v25);
      MmUnlockPages(v19);
      ExFreePoolWithTag(v19, 0);
      return 0LL;
    }
    MiReturnCommit(a1, a5);
  }
  v16 = -1073741670;
LABEL_21:
  while ( v10 )
  {
    v20 = *v12;
    if ( !(unsigned int)MiIsPfn(*v12) )
    {
      MiDereferenceIoPages(1, v20, 1uLL);
      --v10;
    }
    ++v12;
  }
  return (unsigned int)v16;
}
