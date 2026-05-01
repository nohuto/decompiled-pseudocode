/*
 * XREFs of ??0_parameters_@?L@??ShowPinDialog@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@67@V?$shared_ptr@VPinOperationContext@@@std@@_N@Z@QEAA@PEAU234567@$$QEAV?$shared_ptr@VPinOperationContext@@@std@@1@Z @ 0x18069DD30
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_InitCoro$2 @ 0x180251C70 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall `winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog'::`11'::_parameters_::_parameters_(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        char a4)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = *a3;
  *(_QWORD *)(a1 + 16) = a3[1];
  result = a1;
  *a3 = 0LL;
  a3[1] = 0LL;
  *(_BYTE *)(a1 + 24) = a4;
  return result;
}
