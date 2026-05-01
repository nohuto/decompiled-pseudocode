/*
 * XREFs of ??$ActivateInstance@UPhysicalGestureRecognizer@Input@Internal@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUPhysicalGestureRecognizer@Input@Internal@UI@23@XZ @ 0x180169A18
 * Callers:
 *     ??0TouchGestureProcessor@@QEAA@AEBU?$com_ptr@VTouchGestureSettings@@@winrt@@@Z @ 0x18006458C (--0TouchGestureProcessor@@QEAA@AEBU-$com_ptr@VTouchGestureSettings@@@winrt@@@Z.c)
 *     ?_lambda_invoker_cdecl_@_lambda_3da8103c4b1f6d0ac378af30f7531e06_@@CA?AUPhysicalGestureRecognizer@Input@Internal@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@67@@Z @ 0x1801699F0 (-_lambda_invoker_cdecl_@_lambda_3da8103c4b1f6d0ac378af30f7531e06_@@CA-AUPhysicalGestureRecognize.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer>(
        _QWORD *a1,
        _QWORD *a2)
{
  int v3; // eax
  void (__fastcall ***v4)(_QWORD, void *, _QWORD *); // rax
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, void (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)*a1 + 48LL))(
         *a1,
         &v6);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  v4 = v6;
  if ( v6 )
  {
    v7 = 0LL;
    (**v6)(v6, &winrt::impl::guid_v<winrt::Windows::UI::Internal::Input::IPhysicalGestureRecognizer>, &v7);
    *a2 = v7;
    v4 = v6;
  }
  else
  {
    *a2 = 0LL;
  }
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return a2;
}
