/*
 * XREFs of sub_18003890C @ 0x18003890C
 * Callers:
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 *     sub_180031CF0 @ 0x180031CF0 (sub_180031CF0.c)
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 *     sub_180057760 @ 0x180057760 (sub_180057760.c)
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 *     sub_18008ACE0 @ 0x18008ACE0 (sub_18008ACE0.c)
 *     sub_18008BEC0 @ 0x18008BEC0 (sub_18008BEC0.c)
 *     sub_1800A2214 @ 0x1800A2214 (sub_1800A2214.c)
 *     sub_1800A22CC @ 0x1800A22CC (sub_1800A22CC.c)
 * Callees:
 *     sub_180011A3C @ 0x180011A3C (sub_180011A3C.c)
 */

_QWORD *__fastcall sub_18003890C(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rcx
  _QWORD *v4; // r9

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 && sub_180011A3C(v3) )
  {
    *v2 = *v4;
    v2[1] = v4[1];
  }
  return v2;
}
