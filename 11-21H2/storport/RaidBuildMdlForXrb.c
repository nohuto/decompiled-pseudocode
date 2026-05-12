/*
 * XREFs of RaidBuildMdlForXrb @ 0x1C0011554
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0037180 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0037644 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C0086400 (StorGetNVMeIdentifyInfo.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidBuildMdlForXrb(__int64 a1, void *a2, ULONG a3)
{
  struct _MDL *Mdl; // rax

  Mdl = IoAllocateMdl(a2, a3, 0, 0, 0LL);
  *(_QWORD *)(a1 + 104) = Mdl;
  if ( !Mdl )
    return 3221225495LL;
  *(_BYTE *)(a1 + 16) |= 1u;
  MmBuildMdlForNonPagedPool(Mdl);
  return 0LL;
}
