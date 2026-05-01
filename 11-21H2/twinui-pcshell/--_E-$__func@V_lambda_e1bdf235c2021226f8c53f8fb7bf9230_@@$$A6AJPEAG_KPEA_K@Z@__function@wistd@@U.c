/*
 * XREFs of ??_E?$__func@V_lambda_e1bdf235c2021226f8c53f8fb7bf9230_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAPEAXI@Z @ 0x1802E1450
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_e1bdf235c2021226f8c53f8fb7bf9230_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
