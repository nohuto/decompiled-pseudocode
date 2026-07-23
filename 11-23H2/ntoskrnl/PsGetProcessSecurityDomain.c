/*
 * XREFs of PsGetProcessSecurityDomain @ 0x1405A4638
 * Callers:
 *     KiUpdateSpeculationControl @ 0x140325E50 (KiUpdateSpeculationControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSecurityDomain(__int64 a1)
{
  return *(_QWORD *)(a1 + 2528);
}
