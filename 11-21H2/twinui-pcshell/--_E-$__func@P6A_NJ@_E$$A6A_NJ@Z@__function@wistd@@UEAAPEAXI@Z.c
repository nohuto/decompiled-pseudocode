/*
 * XREFs of ??_E?$__func@P6A_NJ@_E$$A6A_NJ@Z@__function@wistd@@UEAAPEAXI@Z @ 0x1804EF7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall ___E____func_P6A_NJ__E__A6A_NJ_Z___function_wistd__UEAAPEAXI_Z(_QWORD *a1, char a2)
{
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
