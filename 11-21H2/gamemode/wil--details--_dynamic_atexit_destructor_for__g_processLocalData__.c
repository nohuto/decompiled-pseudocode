/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x100077B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAEXXZ @ 0x10004163 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     __EH_epilog3 @ 0x10007399 (__EH_epilog3.c)
 *     __EH_prolog3 @ 0x100073C8 (__EH_prolog3.c)
 */

void __cdecl wil::details::_dynamic_atexit_destructor_for__g_processLocalData__()
{
  if ( dword_1000802C )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release((wil::details **)dword_1000802C);
}
