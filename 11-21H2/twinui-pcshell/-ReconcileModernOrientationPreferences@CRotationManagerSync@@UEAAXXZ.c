/*
 * XREFs of ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x180058340
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerInputAppRequestedResizeEventArgs@23456@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180031790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x180058438 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     _lambda_f6f69901abcf4556c2ac2b4f02b3e468_::operator() @ 0x180058464 (_lambda_f6f69901abcf4556c2ac2b4f02b3e468_--operator().c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_f6f69901abcf4556c2ac2b4f02b3e468__&__1_long___lambda_f6f69901abcf4556c2ac2b4f02b3e468__&_ @ 0x180058550 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_180058550.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CRotationManagerSync::ReconcileModernOrientationPreferences(CRotationManagerSync *this)
{
  char *v2; // rbx
  CIAMGlobals *v3; // rcx
  __int64 *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+20h] BYREF
  __int64 v10; // [rsp+58h] [rbp+28h] BYREF
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF

  v2 = (char *)this - 72;
  v10 = (__int64)this - 72;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
  v8[0] = (__int64)v2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
  v8[1] = (__int64)v2;
  if ( CIAMGlobals::IsCalledOnIAMThread(v3) )
  {
    lambda_f6f69901abcf4556c2ac2b4f02b3e468_::operator()(v8);
  }
  else
  {
    v4 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_f6f69901abcf4556c2ac2b4f02b3e468_____1_long___lambda_f6f69901abcf4556c2ac2b4f02b3e468____(
                      &v9,
                      v8);
    v6 = *v4;
    v11 = *v4;
    *v4 = 0LL;
    v7 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedResizeEventArgs *>>::Release(
        v7,
        v5);
    }
    if ( v6 )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 9) + 72LL))(*((_QWORD *)this + 9), v6, 0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  }
  if ( v8[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
  if ( v2 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
}
