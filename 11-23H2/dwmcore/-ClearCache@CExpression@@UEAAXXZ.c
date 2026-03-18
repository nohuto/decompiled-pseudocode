/*
 * XREFs of ?ClearCache@CExpression@@UEAAXXZ @ 0x18022BD90
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18010FFF8 (memset_0.c)
 */

void __fastcall CExpression::ClearCache(void **this)
{
  if ( this[45] )
    memset_0(this[45], 0, *((unsigned int *)this + 92));
}
