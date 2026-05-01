/*
 * XREFs of ?Invoke@?$GitInvokeHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@UEAAJPEAUISplashScreen@Activation@ApplicationModel@4@PEAUIInspectable@@@Z @ 0x1803CACE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Localize@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803CAD90 (-Localize@-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr,2>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rbx
  int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v5 = a1 + 48;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  v6 = Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Localize(
         v5,
         &GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
         &v8);
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, a2, a3);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  return (unsigned int)v6;
}
