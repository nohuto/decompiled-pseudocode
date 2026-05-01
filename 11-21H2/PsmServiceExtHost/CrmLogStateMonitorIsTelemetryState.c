/*
 * XREFs of CrmLogStateMonitorIsTelemetryState @ 0x18002F2DC
 * Callers:
 *     CrmLogStateMonitorRundown @ 0x18002E854 (CrmLogStateMonitorRundown.c)
 *     CrmLogStateMonitorStop @ 0x180035F24 (CrmLogStateMonitorStop.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrmLogStateMonitorIsTelemetryState(unsigned __int64 a1)
{
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned int)a1 <= 0x27 )
  {
    v1 = 0xC50001FFF8LL;
    if ( _bittest64(&v1, a1) )
      return 1;
  }
  return result;
}
