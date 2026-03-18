/*
 * XREFs of ExConvertExclusiveToSharedLite @ 0x140239790
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14028B12C (FsRtlAcquireFileForModWriteEx.c)
 *     DifExConvertExclusiveToSharedLiteWrapper @ 0x140607A20 (DifExConvertExclusiveToSharedLiteWrapper.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140678C4C (PspAllocateAndQueryNotificationChannel.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     CmpReplicateKeyToVirtual @ 0x1409174A4 (CmpReplicateKeyToVirtual.c)
 *     NtMapCMFModule @ 0x140A05860 (NtMapCMFModule.c)
 * Callees:
 *     ExpConvertExclusiveToSharedLite @ 0x140239810 (ExpConvertExclusiveToSharedLite.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x14039C830 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall ExConvertExclusiveToSharedLite(PERESOURCE Resource)
{
  USHORT Flag; // dx
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rdx

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    ExpFastResourceLegacyConvertExclusiveToShared((ULONG_PTR)Resource);
  }
  else
  {
    ExpConvertExclusiveToSharedLite();
  }
}
