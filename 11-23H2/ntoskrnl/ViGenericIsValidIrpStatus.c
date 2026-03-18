/*
 * XREFs of ViGenericIsValidIrpStatus @ 0x140AC30D0
 * Callers:
 *     <none>
 * Callees:
 *     IoIsValidIrpStatus @ 0x140AC2F80 (IoIsValidIrpStatus.c)
 */

bool __fastcall ViGenericIsValidIrpStatus(__int64 a1, unsigned int a2)
{
  return IoIsValidIrpStatus(a2);
}
