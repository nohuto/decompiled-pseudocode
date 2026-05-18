/*
 * XREFs of sub_1800463EC @ 0x1800463EC
 * Callers:
 *     sub_180070344 @ 0x180070344 (sub_180070344.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180046128 @ 0x180046128 (sub_180046128.c)
 *     sub_1800462CC @ 0x1800462CC (sub_1800462CC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_1800463EC(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v5; // r9
  __int64 *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0LL;
  v5 = a3[1];
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = a3[1];
  }
  *(_QWORD *)&v8 = *a3;
  *((_QWORD *)&v8 + 1) = v5;
  v6 = sub_1800462CC(a1, v9, (__int64 *)&v8);
  sub_180046128(*v6, a2);
  sub_180010910((__int64)v9);
  sub_180010910((__int64)a3);
  return a2;
}
