/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceShared @ 0x140338770
 * Callers:
 *     DifExEnterPriorityRegionAndAcquireResourceSharedWrapper @ 0x1405D9020 (DifExEnterPriorityRegionAndAcquireResourceSharedWrapper.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x140230040 (PsBoostThreadIoEx.c)
 *     ExpAcquireResourceSharedLite @ 0x14023DE90 (ExpAcquireResourceSharedLite.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1403C8AC4 (ExpFastResourceLegacyAcquireShared.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceShared(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  __int16 v5; // dx
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *v7; // rcx
  struct _KTHREAD *v8; // rdx

  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 0, 0, 0LL);
  --CurrentThread->KernelApcDisable;
  v5 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( FeatureFastResource2 )
  {
    if ( (v5 & 0x41) != 1 )
    {
      if ( (v5 & 1) == 0 )
        goto LABEL_20;
      CurrentIrql = KeGetCurrentIrql();
      v7 = KeGetCurrentThread();
      if ( CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
      if ( (v7->ApcState.InProgressFlags & 2) == 0 )
      {
        if ( CurrentIrql || (v7->MiscFlags & 0x400) != 0 || v7->WaitBlock[3].SpareLong )
        {
          v5 = *(_WORD *)(BugCheckParameter2 + 26);
          goto LABEL_18;
        }
LABEL_25:
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
LABEL_24:
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    }
LABEL_22:
    KeBugCheckEx(0x1C6u, 0xFuLL, BugCheckParameter2, 0LL, 0LL);
  }
  if ( (v5 & 0x41) == 1 )
    goto LABEL_22;
  if ( (v5 & 1) != 0 )
  {
    v3 = KeGetCurrentIrql();
    v8 = KeGetCurrentThread();
    if ( (unsigned __int8)v3 > 1u )
      KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)v3, 1uLL, 0LL);
    if ( (v8->ApcState.InProgressFlags & 2) != 0 )
      goto LABEL_24;
    if ( !(_BYTE)v3 && (v8->MiscFlags & 0x400) == 0 && !v8->WaitBlock[3].SpareLong )
      goto LABEL_25;
    LOBYTE(v5) = *(_WORD *)(BugCheckParameter2 + 26);
  }
LABEL_18:
  if ( (v5 & 1) != 0 )
  {
    ExpFastResourceLegacyAcquireShared(BugCheckParameter2);
    return CurrentThread->WaitBlock[2].SparePtr;
  }
LABEL_20:
  ExpAcquireResourceSharedLite(BugCheckParameter2, 1, v3, v4);
  return CurrentThread->WaitBlock[2].SparePtr;
}
