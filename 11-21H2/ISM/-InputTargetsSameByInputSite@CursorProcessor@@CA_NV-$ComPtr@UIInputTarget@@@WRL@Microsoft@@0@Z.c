/*
 * XREFs of ?InputTargetsSameByInputSite@CursorProcessor@@CA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@0@Z @ 0x18013918C
 * Callers:
 *     ?CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z @ 0x180138B0C (-CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIInputSiteTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801389F8 (--$As@UIInputSiteTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=7
bool __fastcall CursorProcessor::InputTargetsSameByInputSite(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rsi
  _QWORD *v4; // rbx
  bool v5; // bl
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+38h] BYREF
  __int64 v12; // [rsp+78h] [rbp+40h] BYREF

  v3 = a1;
  if ( !*a1 || !*a2 )
    goto LABEL_11;
  v12 = 0LL;
  v11 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IInputSiteTarget>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1,
              &v12) < 0
    || (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IInputSiteTarget>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2,
              &v11) < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v12);
    a1 = v3;
LABEL_11:
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a1);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a2);
    return 0;
  }
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v10);
  v5 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v9) == *v4;
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v3);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(a2);
  return v5;
}
