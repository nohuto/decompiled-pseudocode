/*
 * XREFs of sub_140A82710 @ 0x140A82710
 * Callers:
 *     <none>
 * Callees:
 *     IoIsValidIrpStatus @ 0x140A825C0 (IoIsValidIrpStatus.c)
 */

bool __fastcall sub_140A82710(__int64 a1, unsigned int a2)
{
  return IoIsValidIrpStatus(a2);
}
