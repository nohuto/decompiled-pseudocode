/*
 * XREFs of ?CreateForCoreWindow@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJPEAUICoreWindow@245@PEAPEAUICompositorController@2345@@Z @ 0x18012CAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$MakeAndInitialize2@VCompositorController@Core@Composition@UI@Windows@@V12345@PEAUIDispatcherQueue@System@5@AEAPEAUICoreWindow@245@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositorController@Core@Composition@UI@Windows@@$$QEAPEAUIDispatcherQueue@System@7@AEAPEAUICoreWindow@467@@Z @ 0x18012C980 (--$MakeAndInitialize2@VCompositorController@Core@Composition@UI@Windows@@V12345@PEA_ea_18012C980.c)
 */

__int64 __fastcall Windows::UI::Composition::Core::CompositorControllerFactory::CreateForCoreWindow(
        Windows::UI::Composition::Core::CompositorControllerFactory *this,
        struct Windows::UI::Core::ICoreWindow *a2,
        struct Windows::UI::Composition::Core::ICompositorController **a3)
{
  unsigned int v5; // ebx
  __int64 (__fastcall *v7)(struct Windows::UI::Core::ICoreWindow *, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, struct Windows::System::IDispatcherQueue **); // rdi
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+20h] [rbp-20h]
  const char *v14; // [rsp+28h] [rbp-18h]
  Microsoft::WRL2::NestableRuntimeClass *v15; // [rsp+30h] [rbp-10h] BYREF
  struct Windows::System::IDispatcherQueue *v16; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::UI::Core::ICoreWindow *v18; // [rsp+68h] [rbp+28h] BYREF
  struct Windows::System::IDispatcherQueue *v19; // [rsp+70h] [rbp+30h] BYREF
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF

  v18 = a2;
  *a3 = 0LL;
  if ( !a2 )
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x170,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositorcontroller.cpp",
      (const char *)0x80070057LL,
      (int)"Must provide valid CoreWindow",
      v14);
    return v5;
  }
  v20 = 0LL;
  v7 = **(__int64 (__fastcall ***)(struct Windows::UI::Core::ICoreWindow *, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v20);
  v8 = v7(a2, &GUID_4b4ae1e1_2e6d_4eaa_bda1_1c5cc1bee141, &v20);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      371LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositorcontroller.cpp",
      (const char *)(unsigned int)v8,
      v13);
  v9 = v20;
  v19 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, struct Windows::System::IDispatcherQueue **))(*(_QWORD *)v20 + 48LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v19);
  v11 = v10(v9, &v19);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      374LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositorcontroller.cpp",
      (const char *)(unsigned int)v11,
      v13);
  v15 = 0LL;
  v16 = v19;
  v12 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Core::CompositorController,Windows::UI::Composition::Core::CompositorController,Windows::System::IDispatcherQueue *,Windows::UI::Core::ICoreWindow * &>(
          &v15,
          &v16,
          &v18);
  v5 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17C,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositorcontroller.cpp",
      (const char *)(unsigned int)v12);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v20);
    return v5;
  }
  *a3 = (struct Windows::UI::Composition::Core::ICompositorController *)(((unsigned __int64)v15 + 40) & -(__int64)(v15 != 0LL));
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v20);
  return 0LL;
}
