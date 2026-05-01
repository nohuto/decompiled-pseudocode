/*
 * XREFs of __EH_prolog3 @ 0x100073C8
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YGPAUThreadLocalData@12@_N@Z @ 0x100039FA (-GetThreadLocalDataCache@details_abi@wil@@YGPAUThreadLocalData@12@_N@Z.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAEXXZ @ 0x10004163 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QAEXXZ.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x100077B0 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     <none>
 */

_DWORD *__usercall _EH_prolog3@<eax>(int a1@<eax>)
{
  _DWORD v3[2]; // [esp-8h] [ebp-8h] BYREF
  int retaddr; // [esp+0h] [ebp+0h]

  v3[1] = a1;
  v3[0] = NtCurrentTeb()->NtTib.ExceptionList;
  retaddr = -1;
  return v3;
}
