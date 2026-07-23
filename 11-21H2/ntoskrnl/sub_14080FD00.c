/*
 * XREFs of sub_14080FD00 @ 0x14080FD00
 * Callers:
 *     sub_14080FBCC @ 0x14080FBCC (sub_14080FBCC.c)
 * Callees:
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_14071BC64 @ 0x14071BC64 (sub_14071BC64.c)
 *     sub_14071C0FC @ 0x14071C0FC (sub_14071C0FC.c)
 */

_QWORD *__fastcall sub_14080FD00(volatile signed __int64 *a1)
{
  PLOOKASIDE_LIST_EX v2; // r9
  _QWORD *v3; // rax
  _QWORD *v4; // rbx

  sub_14071BC64(a1);
  v3 = Allocate(PagedPool, 0x20uLL, 0x33374D43u, v2);
  v4 = v3;
  if ( v3 )
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 1LL;
    v3[3] = a1;
  }
  else
  {
    sub_14071C0FC(a1);
  }
  return v4;
}
