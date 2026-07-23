/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceShared @ 0x140338380
 * Callers:
 *     DifExEnterCriticalRegionAndAcquireResourceSharedWrapper @ 0x1405D8CF0 (DifExEnterCriticalRegionAndAcquireResourceSharedWrapper.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x14023DE90 (ExpAcquireResourceSharedLite.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1403C8AC4 (ExpFastResourceLegacyAcquireShared.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceShared(PERESOURCE Resource)
{
  __int64 CurrentIrql; // r8
  __int64 v2; // r9
  struct _KTHREAD *CurrentThread; // rax
  USHORT Flag; // dx
  struct _KTHREAD *v5; // rdx
  struct _KTHREAD *v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Flag = Resource->Flag;
  if ( FeatureFastResource2 )
  {
    if ( (Flag & 0x41) != 1 )
    {
      if ( (Flag & 1) == 0 )
      {
LABEL_20:
        ExpAcquireResourceSharedLite((__int64)Resource, 1, CurrentIrql, v2);
        return KeGetCurrentThread()->WaitBlock[2].SparePtr;
      }
      CurrentIrql = KeGetCurrentIrql();
      v5 = KeGetCurrentThread();
      if ( (unsigned __int8)CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
      if ( (v5->ApcState.InProgressFlags & 2) == 0 )
      {
        if ( (_BYTE)CurrentIrql || (v5->MiscFlags & 0x400) != 0 || v5->WaitBlock[3].SpareLong )
        {
          Flag = Resource->Flag;
          goto LABEL_18;
        }
LABEL_26:
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
LABEL_25:
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    }
LABEL_23:
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  CurrentIrql = Flag;
  if ( (Flag & 0x41) == 1 )
    goto LABEL_23;
  if ( (Flag & 1) != 0 )
  {
    v2 = KeGetCurrentIrql();
    v6 = KeGetCurrentThread();
    if ( (unsigned __int8)v2 > 1u )
      KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)v2, 1uLL, 0LL);
    if ( (v6->ApcState.InProgressFlags & 2) != 0 )
      goto LABEL_25;
    if ( !(_BYTE)v2 && (v6->MiscFlags & 0x400) == 0 && !v6->WaitBlock[3].SpareLong )
      goto LABEL_26;
    LOBYTE(Flag) = CurrentIrql;
  }
LABEL_18:
  if ( (Flag & 1) == 0 )
    goto LABEL_20;
  ExpFastResourceLegacyAcquireShared((ULONG_PTR)Resource);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
