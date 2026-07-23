/*
 * XREFs of sub_14080FD5C @ 0x14080FD5C
 * Callers:
 *     sub_14080F9EC @ 0x14080F9EC (sub_14080F9EC.c)
 * Callees:
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_14071BC64 @ 0x14071BC64 (sub_14071BC64.c)
 *     sub_14071C0FC @ 0x14071C0FC (sub_14071C0FC.c)
 */

_QWORD *__fastcall sub_14080FD5C(volatile signed __int64 *a1)
{
  PLOOKASIDE_LIST_EX v2; // r9
  _QWORD *v3; // rbx

  sub_14071BC64(a1);
  v3 = Allocate(PagedPool, 0x20uLL, 0x34374D43u, v2);
  if ( v3 )
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[3] = 0LL;
    v3[2] = a1;
  }
  else
  {
    sub_14071C0FC(a1);
  }
  return v3;
}
