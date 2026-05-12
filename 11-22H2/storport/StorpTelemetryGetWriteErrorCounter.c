/*
 * XREFs of StorpTelemetryGetWriteErrorCounter @ 0x1C006EBB0
 * Callers:
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C0072334 (StorpTelemetrySendUnitScsiDiagnostics.c)
 * Callees:
 *     <none>
 */

char __fastcall StorpTelemetryGetWriteErrorCounter(__int64 a1, __int16 a2, _QWORD *a3)
{
  unsigned __int16 v3; // ax
  unsigned __int64 v4; // r9

  LOBYTE(v3) = *(_BYTE *)(a1 + 3);
  v4 = 0LL;
  switch ( (_BYTE)v3 )
  {
    case 2:
      v3 = __ROR2__(*(_WORD *)(a1 + 4), 8);
      v4 = v3;
      break;
    case 4:
      v4 = _byteswap_ulong(*(_DWORD *)(a1 + 4));
      break;
    case 8:
      v4 = _byteswap_uint64(*(_QWORD *)(a1 + 4));
      break;
  }
  switch ( a2 )
  {
    case 2:
      a3[11] = v4;
      break;
    case 3:
      a3[12] = v4;
      break;
    case 6:
      a3[13] = v4;
      break;
  }
  return v3;
}
