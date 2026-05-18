/*
 * XREFs of sub_1800A112C @ 0x1800A112C
 * Callers:
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 *     sub_1800A2214 @ 0x1800A2214 (sub_1800A2214.c)
 * Callees:
 *     sub_180042D68 @ 0x180042D68 (sub_180042D68.c)
 *     sub_180057460 @ 0x180057460 (sub_180057460.c)
 *     sub_1800A101C @ 0x1800A101C (sub_1800A101C.c)
 */

__int64 *__fastcall sub_1800A112C(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r10
  __int64 v5; // r8
  _QWORD *v6; // r9
  __int64 v7; // r10

  if ( !sub_180042D68(a1 + 184) || sub_180057460(v4 + 185) )
  {
    *a2 = v3;
    a2[1] = v3;
  }
  else
  {
    sub_1800A101C(v7, a2, *(_QWORD *)(v7 + 192), v5, v6);
  }
  return a2;
}
