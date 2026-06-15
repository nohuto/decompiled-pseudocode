/*
 * XREFs of std::_Func_impl_no_alloc__lambda_aa732a8a991b7eb0f1632fe44cffa677__void_::_Delete_this @ 0x1800230D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::__lambda_aa732a8a991b7eb0f1632fe44cffa677_ @ 0x18002028C (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--__lambda_aa732a8a991b7eb0f1632fe44cffa677_.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_aa732a8a991b7eb0f1632fe44cffa677__void_::_Delete_this(
        __int64 *a1,
        char a2)
{
  lambda_aa732a8a991b7eb0f1632fe44cffa677_::__lambda_aa732a8a991b7eb0f1632fe44cffa677_(a1 + 1);
  if ( a2 )
    operator delete(a1);
}
