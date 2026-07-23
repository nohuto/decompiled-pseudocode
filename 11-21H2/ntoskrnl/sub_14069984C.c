/*
 * XREFs of sub_14069984C @ 0x14069984C
 * Callers:
 *     sub_140698510 @ 0x140698510 (sub_140698510.c)
 *     sub_140699E6C @ 0x140699E6C (sub_140699E6C.c)
 *     sub_14076DD0C @ 0x14076DD0C (sub_14076DD0C.c)
 *     sub_140776EE8 @ 0x140776EE8 (sub_140776EE8.c)
 *     sub_1407770E0 @ 0x1407770E0 (sub_1407770E0.c)
 *     sub_14094A034 @ 0x14094A034 (sub_14094A034.c)
 * Callees:
 *     sub_1406998CC @ 0x1406998CC (sub_1406998CC.c)
 *     sub_14077C924 @ 0x14077C924 (sub_14077C924.c)
 */

__int64 __fastcall sub_14069984C(int a1, int a2, int a3, int a4, char a5, __int64 a6, _QWORD *a7)
{
  int v8; // r8d

  *a7 = 0LL;
  if ( !a1 )
    return sub_14077C924(qword_140D00AC0, a2, a3, a4, a5, (__int64)a7);
  if ( a1 != 1 )
    return 3221225485LL;
  v8 = a4;
  LOBYTE(a4) = a5;
  return sub_1406998CC(a2, a3, v8, a4, a6, (__int64)a7);
}
