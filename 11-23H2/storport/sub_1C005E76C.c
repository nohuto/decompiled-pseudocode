/*
 * XREFs of sub_1C005E76C @ 0x1C005E76C
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 */

NTSTATUS __fastcall sub_1C005E76C(__int64 a1, IRP *a2)
{
  unsigned int v2; // esi

  v2 = 0;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x18 )
  {
    v2 = -1073741820;
LABEL_3:
    a2->IoStatus.Information = 0LL;
    return sub_1C0003440(a2, 0, v2);
  }
  if ( sub_1C0008B84(a1) )
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
