/*
 * XREFs of safe_cast_wf_to_PDIALOG @ 0x1C014DE84
 * Callers:
 *     xxxSetWindowLong @ 0x1C00E4444 (xxxSetWindowLong.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall safe_cast_wf_to_PDIALOG(__int64 a1)
{
  __int64 v2; // rdx

  if ( !a1 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( _bittest16((const signed __int16 *)(v2 + 42), 0xCu) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v2 = *(_QWORD *)(a1 + 40);
  }
  if ( _bittest16((const signed __int16 *)(v2 + 42), 0xCu) || (*(_BYTE *)(v2 + 18) & 1) == 0 )
    return 0LL;
  if ( *(_DWORD *)(v2 + 248) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v2 + 296);
}
