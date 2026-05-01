/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x18004E310
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800085D8 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
int wil::details::_dynamic_atexit_destructor_for__g_processLocalData__()
{
  int result; // eax

  if ( lpMem )
    return wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release((char *)lpMem);
  return result;
}
