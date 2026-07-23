/*
 * XREFs of sub_1403C48E0 @ 0x1403C48E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140227020 @ 0x140227020 (sub_140227020.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1403C49DC @ 0x1403C49DC (sub_1403C49DC.c)
 *     sub_1403CA3D0 @ 0x1403CA3D0 (sub_1403CA3D0.c)
 *     sub_14045BBAE @ 0x14045BBAE (sub_14045BBAE.c)
 */

__int64 __fastcall sub_1403C48E0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v8; // rbp
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v5 = *(_QWORD *)(a1 + 24);
  v12 = sub_140317A10(a2);
  if ( (v12 & 0x20) == 0 )
    return 0LL;
  v8 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v12) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( !(unsigned int)sub_140227020(v5, a2, v8, a3 == 0, &v12) )
    return 0LL;
  v9 = *(_QWORD *)(v3 + 16);
  v10 = (__int64)(a2 << 25) >> 16;
  if ( !v9 || v10 > 0x7FFFFFFEFFFFLL )
  {
    sub_1403C49DC(v5, a2, v10, v8, v3, 0);
    return 0LL;
  }
  if ( !(unsigned int)sub_14045BBAE(v9, (__int64)(a2 << 25) >> 16) )
    return 0LL;
  return sub_1403CA3D0(a1);
}
