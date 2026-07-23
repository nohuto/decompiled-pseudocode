/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140334790
 * Callers:
 *     DifExEnterCriticalRegionAndAcquireResourceExclusiveWrapper @ 0x1405D8BE0 (DifExEnterCriticalRegionAndAcquireResourceExclusiveWrapper.c)
 * Callees:
 *     ExpAcquireResourceExclusiveLite @ 0x14023B5A0 (ExpAcquireResourceExclusiveLite.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x1403C9A00 (ExpFastResourceLegacyAcquireExclusive.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceExclusive(PERESOURCE Resource)
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
        ExpAcquireResourceExclusiveLite((__int64)Resource, 1, CurrentIrql, v2);
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
  ExpFastResourceLegacyAcquireExclusive((ULONG_PTR)Resource);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
