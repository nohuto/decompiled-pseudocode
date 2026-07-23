/*
 * XREFs of sub_14036DBE4 @ 0x14036DBE4
 * Callers:
 *     sub_14036EEAC @ 0x14036EEAC (sub_14036EEAC.c)
 *     sub_140693A28 @ 0x140693A28 (sub_140693A28.c)
 * Callees:
 *     sub_14036EBE8 @ 0x14036EBE8 (sub_14036EBE8.c)
 *     sub_1403724D8 @ 0x1403724D8 (sub_1403724D8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_14036DBE4()
{
  _QWORD *v0; // rbx
  _QWORD *v1; // rdi
  __int64 v2; // rsi

  v0 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 608LL);
  if ( v0[1822] )
    sub_14036EBE8();
  if ( v0[1823] )
    sub_14036EBE8();
  v1 = v0 + 1811;
  v2 = 4LL;
  do
  {
    if ( *v1 )
      sub_14036EBE8();
    v1 += 2;
    --v2;
  }
  while ( v2 );
  sub_1403724D8(v0 + 2);
  sub_1403724D8(v0 + 15);
  ExFreePoolWithTag(v0, 0x65537048u);
}
