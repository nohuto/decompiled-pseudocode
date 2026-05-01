/*
 * XREFs of __lambda_190ccd1a8be9aac816201cee4203407b_$_InitCoro$2::operator()_::_1_::dtor$0 @ 0x180256D27
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall _lambda_190ccd1a8be9aac816201cee4203407b___InitCoro_2::operator()_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 72) + 10LL) )
  {
    *(_QWORD *)(a2 + 32) = 25LL;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 72);
    operator delete(*(void **)(a2 + 40));
  }
}
