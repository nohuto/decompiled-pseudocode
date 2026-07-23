/*
 * XREFs of sub_14045A2D2 @ 0x14045A2D2
 * Callers:
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 */

__int64 __fastcall sub_14045A2D2(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  *(_QWORD *)(a1 + 8) |= 1uLL;
  LODWORD(v6) = 0;
  *a2 = a1;
  do
    sub_1402F32E0(&v6, (__int64)a2, a3, a4);
  while ( (*(_QWORD *)(a1 + 8) & 1) != 0 );
  return (unsigned int)v6;
}
