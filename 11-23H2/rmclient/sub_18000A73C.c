/*
 * XREFs of sub_18000A73C @ 0x18000A73C
 * Callers:
 *     sub_1800181B0 @ 0x1800181B0 (sub_1800181B0.c)
 * Callees:
 *     sub_18000F66C @ 0x18000F66C (sub_18000F66C.c)
 */

void __fastcall sub_18000A73C(_BYTE *a1)
{
  if ( (unsigned __int8)sub_18000F66C() )
  {
    *a1 = 0;
    Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)(a1 + 8));
  }
  else
  {
    sub_18000D00C(a1);
  }
}
