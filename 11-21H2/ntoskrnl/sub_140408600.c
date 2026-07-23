/*
 * XREFs of sub_140408600 @ 0x140408600
 * Callers:
 *     <none>
 * Callees:
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_140400F98 @ 0x140400F98 (sub_140400F98.c)
 *     sub_1404011D4 @ 0x1404011D4 (sub_1404011D4.c)
 *     sub_140401368 @ 0x140401368 (sub_140401368.c)
 */

__int64 __fastcall sub_140408600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // rbp
  __int64 *v9; // rsi
  __int64 v11; // r15
  __int64 v12; // rbx
  _QWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF

  v6 = *(_DWORD **)(a1 + 616);
  v14[1] = 0LL;
  v9 = v14;
  v11 = 2LL;
  v12 = (unsigned int)sub_140401368((__int64)v6);
  do
  {
    a5 += v12;
    *v9 = sub_140400F4C();
    a6 -= v12;
    ++v9;
    --v11;
  }
  while ( v11 );
  sub_1404011D4(v6, a2 + 32);
  sub_1404011D4(v6, a3 + 32);
  return sub_140400F98();
}
