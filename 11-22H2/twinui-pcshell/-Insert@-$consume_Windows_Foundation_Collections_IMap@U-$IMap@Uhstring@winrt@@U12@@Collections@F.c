/*
 * XREFs of ?Insert@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@Uhstring@5@U65@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x18055935C
 * Callers:
 *     ?CreateTriggerForFlickScaleAnimtion@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@0@Z @ 0x180557F08 (-CreateTriggerForFlickScaleAnimtion@CAppThumbnailWindow@@AEAA-AUCompositionAnimationTriggerValue.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x18055B734 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>,winrt::hstring,winrt::hstring>::Insert(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v4; // eax
  char v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))(*(_QWORD *)v3 + 80LL))(v3, *a2, *a3, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  return v6;
}
