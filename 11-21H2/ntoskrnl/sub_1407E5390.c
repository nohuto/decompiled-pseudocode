/*
 * XREFs of sub_1407E5390 @ 0x1407E5390
 * Callers:
 *     sub_1406CE4C4 @ 0x1406CE4C4 (sub_1406CE4C4.c)
 *     sub_1407E5234 @ 0x1407E5234 (sub_1407E5234.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402CD7F0 @ 0x1402CD7F0 (sub_1402CD7F0.c)
 *     sub_14036669C @ 0x14036669C (sub_14036669C.c)
 *     sub_1407F8C9C @ 0x1407F8C9C (sub_1407F8C9C.c)
 */

struct _EX_RUNDOWN_REF *__fastcall sub_1407E5390(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v5; // rbx
  struct _EX_RUNDOWN_REF *v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rdi

  v5 = 0LL;
  v6 = sub_1402CD7F0(a1);
  v7 = v6;
  if ( v6 )
  {
    if ( (int)sub_14036669C((__int64)v6, a2, a3) < 0 )
    {
      sub_1407F8C9C(v7);
      sub_1402AD030(v7 + 45);
    }
    else
    {
      return v7;
    }
  }
  return (struct _EX_RUNDOWN_REF *)v5;
}
