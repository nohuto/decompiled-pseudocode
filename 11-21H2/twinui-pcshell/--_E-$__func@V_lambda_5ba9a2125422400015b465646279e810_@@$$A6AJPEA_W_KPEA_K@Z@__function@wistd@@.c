/*
 * XREFs of ??_E?$__func@V_lambda_5ba9a2125422400015b465646279e810_@@$$A6AJPEA_W_KPEA_K@Z@__function@wistd@@UEAAPEAXI@Z @ 0x180420410
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_5ba9a2125422400015b465646279e810_,long (wchar_t *,unsigned __int64,unsigned __int64 *)>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<long (wchar_t *,unsigned __int64,unsigned __int64 *)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
