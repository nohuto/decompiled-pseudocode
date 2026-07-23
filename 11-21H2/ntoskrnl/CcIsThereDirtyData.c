/*
 * XREFs of CcIsThereDirtyData @ 0x14053A950
 * Callers:
 *     <none>
 * Callees:
 *     sub_140363C8C @ 0x140363C8C (sub_140363C8C.c)
 */

BOOLEAN __stdcall CcIsThereDirtyData(PVPB Vpb)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  *(_QWORD *)&v2 = Vpb;
  BYTE8(v2) = 0;
  sub_140363C8C((__int64)sub_14053AAE0, (__int64)&v2, 1, 1);
  return BYTE8(v2);
}
