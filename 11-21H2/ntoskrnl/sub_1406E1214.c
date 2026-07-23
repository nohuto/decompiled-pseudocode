/*
 * XREFs of sub_1406E1214 @ 0x1406E1214
 * Callers:
 *     sub_1406E1100 @ 0x1406E1100 (sub_1406E1100.c)
 * Callees:
 *     PsChargeProcessWakeCounter @ 0x1406E1310 (PsChargeProcessWakeCounter.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 */

__int64 __fastcall sub_1406E1214(__int64 a1, __int64 a2)
{
  char v4; // r9
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+50h] [rbp-30h] BYREF
  int v7; // [rsp+68h] [rbp-18h]
  int v8; // [rsp+6Ch] [rbp-14h]
  __int128 v9; // [rsp+70h] [rbp-10h]

  v8 = 0;
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  v6[1] = 0LL;
  v6[2] = 0LL;
  v6[0] = 48LL;
  v7 = 32;
  v9 = 0LL;
  result = sub_14072B3B0(0, qword_140D06FC8, (unsigned int)v6, v4);
  if ( (int)result >= 0 )
  {
    MEMORY[0] = PsChargeProcessWakeCounter(a1);
    return sub_140729C30(0LL, 0LL, 0, 0LL, a2);
  }
  return result;
}
