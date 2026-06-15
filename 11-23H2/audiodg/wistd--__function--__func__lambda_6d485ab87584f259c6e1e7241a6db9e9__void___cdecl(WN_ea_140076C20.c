/*
 * XREFs of wistd::__function::__func__lambda_6d485ab87584f259c6e1e7241a6db9e9__void___cdecl(WNF_AUDIO_ORIENTATION_STATE_const_&)_::_scalar_deleting_destructor_ @ 0x140076C20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_6d485ab87584f259c6e1e7241a6db9e9__void___cdecl_WNF_AUDIO_ORIENTATION_STATE_const____::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (WNF_AUDIO_ORIENTATION_STATE const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
