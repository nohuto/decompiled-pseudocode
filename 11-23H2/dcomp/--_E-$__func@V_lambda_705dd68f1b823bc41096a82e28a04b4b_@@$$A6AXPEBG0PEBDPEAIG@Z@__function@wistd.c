/*
 * XREFs of ??_E?$__func@V_lambda_705dd68f1b823bc41096a82e28a04b4b_@@$$A6AXPEBG0PEBDPEAIG@Z@__function@wistd@@UEAAPEAXI@Z @ 0x18009AC40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_705dd68f1b823bc41096a82e28a04b4b_,void (unsigned short const *,unsigned short const *,char const *,unsigned int *,unsigned short)>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (unsigned short const *,unsigned short const *,char const *,unsigned int *,unsigned short)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
