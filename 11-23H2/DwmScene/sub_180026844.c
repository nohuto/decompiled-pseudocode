/*
 * XREFs of sub_180026844 @ 0x180026844
 * Callers:
 *     sub_1800A2788 @ 0x1800A2788 (sub_1800A2788.c)
 *     sub_1800A29C8 @ 0x1800A29C8 (sub_1800A29C8.c)
 *     sub_1800A2DA0 @ 0x1800A2DA0 (sub_1800A2DA0.c)
 *     sub_1800A2EC0 @ 0x1800A2EC0 (sub_1800A2EC0.c)
 *     sub_1800A38B4 @ 0x1800A38B4 (sub_1800A38B4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_1800A1AB8 @ 0x1800A1AB8 (sub_1800A1AB8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180026844(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v6 = (_QWORD *)sub_180011D4C(a1 + 8, &v10);
  v9 = 0LL;
  v8 = a1 + 4096;
  v9 = v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  sub_1800A1AB8(a2, &v8, a3);
  if ( v11 )
    sub_180010530(v11);
  return a2;
}
