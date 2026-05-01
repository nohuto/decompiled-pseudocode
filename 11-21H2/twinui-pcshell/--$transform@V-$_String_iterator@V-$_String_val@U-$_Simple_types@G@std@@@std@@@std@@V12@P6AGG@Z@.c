/*
 * XREFs of ??$transform@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V12@P6AGG@Z@std@@YA?AV?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@0V10@P6AGG@Z@Z @ 0x180584018
 * Callers:
 *     ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x180586AC8 (-IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::transform<std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short (*)(unsigned short)>(
        _QWORD *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        _WORD *a4,
        __int64 (__fastcall *a5)(_QWORD))
{
  unsigned __int16 *i; // rbx
  _QWORD *result; // rax

  for ( i = a2; i != a3; ++a4 )
    *a4 = a5(*i++);
  result = a1;
  *a1 = a4;
  return result;
}
