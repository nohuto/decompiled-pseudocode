/*
 * XREFs of ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA?AUInputSite@Input@Internal@UI@Windows@3@XZ @ 0x1801785A8
 * Callers:
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x1800F69A4 (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_a5e19194432ba5e1a4e075778a86de15_@@CA?AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@34567@@Z @ 0x180178580 (-_lambda_invoker_cdecl_@_lambda_a5e19194432ba5e1a4e075778a86de15_@@CA-AUInputSite@Input@Internal.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 88LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
