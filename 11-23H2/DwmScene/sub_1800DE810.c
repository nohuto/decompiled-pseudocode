/*
 * XREFs of sub_1800DE810 @ 0x1800DE810
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003F4EC @ 0x18003F4EC (sub_18003F4EC.c)
 *     sub_18003F614 @ 0x18003F614 (sub_18003F614.c)
 *     sub_1800DFA94 @ 0x1800DFA94 (sub_1800DFA94.c)
 */

_QWORD *__fastcall sub_1800DE810(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  _QWORD *v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rcx
  _BYTE v10[16]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]

  v3 = (_QWORD *)(a1 + 144);
  sub_18003F4EC((__int64 *)(a1 + 144), (__int64)v10, a3);
  v6 = a3;
  v7 = v11;
  if ( !sub_18003F614(v8, v11, v6) || v7 == *v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  else
  {
    sub_1800DFA94(v7 + 64, a2);
  }
  return a2;
}
