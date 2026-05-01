/*
 * XREFs of wistd::__function::__func__lambda_5f2a6c8ab12a39d6e57c75a98da72756__long___cdecl(void)_::_scalar_deleting_destructor_ @ 0x180237B70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_5f2a6c8ab12a39d6e57c75a98da72756__long___cdecl_void__::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
