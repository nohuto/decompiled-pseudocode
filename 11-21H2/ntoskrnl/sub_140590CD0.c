/*
 * XREFs of sub_140590CD0 @ 0x140590CD0
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 */

__int64 __fastcall sub_140590CD0(__int64 a1)
{
  return KeGenericCallDpc((__int64)sub_140200230, a1);
}
