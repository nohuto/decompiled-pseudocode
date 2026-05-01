/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___::_scalar_deleting_destructor_ @ 0x1801BEA00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___::_CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___ @ 0x1801BE6A8 (CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___--_CMultitaskingViewTas.c)
 */

void *__fastcall CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___::_CMultitaskingViewTaskCallback__lambda_257868cc277a89cd587da3eed8fcd545___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
