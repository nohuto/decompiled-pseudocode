/*
 * XREFs of sub_18000D00C @ 0x18000D00C
 * Callers:
 *     sub_18000A73C @ 0x18000A73C (sub_18000A73C.c)
 * Callees:
 *     sub_18000CDF4 @ 0x18000CDF4 (sub_18000CDF4.c)
 *     sub_18000CEA0 @ 0x18000CEA0 (sub_18000CEA0.c)
 *     sub_18000CEC0 @ 0x18000CEC0 (sub_18000CEC0.c)
 *     sub_18000D0D8 @ 0x18000D0D8 (sub_18000D0D8.c)
 *     sub_18000DD90 @ 0x18000DD90 (sub_18000DD90.c)
 *     sub_180011A6C @ 0x180011A6C (sub_180011A6C.c)
 */

void __fastcall sub_18000D00C(__int64 a1)
{
  __int64 v2; // rcx

  *(_BYTE *)a1 = 0;
  sub_180011A6C(a1 + 48, 0LL);
  sub_180011A6C(a1 + 56, 0LL);
  v2 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 256) = 0LL;
  if ( v2 )
    sub_18000DD90();
  sub_18000CDF4((_QWORD *)(a1 + 224));
  sub_18000D0D8(a1 + 152);
  sub_18000CEC0((__int64 *)(a1 + 144));
  sub_18000D0D8(a1 + 72);
  sub_18000CEA0((struct _TP_TIMER **)(a1 + 56));
  sub_18000CEA0((struct _TP_TIMER **)(a1 + 48));
  Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)(a1 + 8));
}
