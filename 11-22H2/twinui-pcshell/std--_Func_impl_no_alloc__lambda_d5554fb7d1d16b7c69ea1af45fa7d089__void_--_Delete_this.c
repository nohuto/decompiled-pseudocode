/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d5554fb7d1d16b7c69ea1af45fa7d089__void_::_Delete_this @ 0x180283AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _lambda_d5554fb7d1d16b7c69ea1af45fa7d089_::__lambda_d5554fb7d1d16b7c69ea1af45fa7d089_ @ 0x1802824C0 (_lambda_d5554fb7d1d16b7c69ea1af45fa7d089_--__lambda_d5554fb7d1d16b7c69ea1af45fa7d089_.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_d5554fb7d1d16b7c69ea1af45fa7d089__void_::_Delete_this(
        void *a1,
        char a2)
{
  lambda_d5554fb7d1d16b7c69ea1af45fa7d089_::__lambda_d5554fb7d1d16b7c69ea1af45fa7d089_((__int64)a1 + 8);
  if ( a2 )
    operator delete(a1);
}
