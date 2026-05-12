/*
 * XREFs of RaUnitPowerCapIoctl @ 0x1C005E0FC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 */

NTSTATUS __fastcall RaUnitPowerCapIoctl(__int64 a1, IRP *a2)
{
  unsigned int v2; // esi

  v2 = 0;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x18 )
  {
    v2 = -1073741820;
LABEL_3:
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, v2);
  }
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v2 = -1073741808;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
    goto LABEL_3;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 4896LL) )
    goto LABEL_3;
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
}
