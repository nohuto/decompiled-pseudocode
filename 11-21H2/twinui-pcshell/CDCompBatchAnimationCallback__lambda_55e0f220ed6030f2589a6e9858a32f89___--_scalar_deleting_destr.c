/*
 * XREFs of CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_scalar_deleting_destructor_ @ 0x1804C92E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___ @ 0x1804C8F00 (CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___--_CDCompBatchAnimationC.c)
 */

void *__fastcall CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
