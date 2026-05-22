/*
 * XREFs of ?CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAVCompositionTarget@234@@Z @ 0x18010F780
 * Callers:
 *     ?CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAUICompositionTarget@234@@Z @ 0x18010F498 (-CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAUICompositionTarget@234.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?IsSessionThread@ContextSession@WRL2@Microsoft@@QEBA_NXZ @ 0x18006B72C (-IsSessionThread@ContextSession@WRL2@Microsoft@@QEBA_NXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$MakeAndInitialize2@VGlobalCompositionTarget@Composition@UI@Windows@@VCompositionTarget@234@AEAPEAVCompositor@234@AEAPEAUICompositionTargetHostPartner@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionTarget@Composition@UI@Windows@@AEAPEAVCompositor@456@AEAPEAUICompositionTargetHostPartner@456@@Z @ 0x180158AD8 (--$MakeAndInitialize2@VGlobalCompositionTarget@Composition@UI@Windows@@VCompositionTarget@234@AE.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::CreateTargetForCoreWindow(
        Windows::UI::Composition::Compositor *this,
        struct Windows::UI::Composition::CompositionTarget **a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-20h]
  const char *v11; // [rsp+28h] [rbp-18h]
  Windows::UI::Composition::Compositor *v12; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v15; // [rsp+80h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF

  *a2 = 0LL;
  if ( Microsoft::WRL2::ContextSession::IsSessionThread(this)
    && (v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 59)) != 0LL )
  {
    v14 = 0LL;
    v5 = **v4;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v14);
    v6 = v5(v4, &GUID_d7bb651f_832f_41cb_8bb5_1180ccc21d6a, &v14);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        413LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
        (const char *)(unsigned int)v6,
        v10);
    v15 = 0LL;
    v16 = v14;
    v12 = this;
    v7 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::GlobalCompositionTarget,Windows::UI::Composition::CompositionTarget,Windows::UI::Composition::Compositor * &,Windows::UI::Composition::ICompositionTargetHostPartner * &>(
           &v15,
           &v12,
           &v16);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *a2 = v15;
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v14);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A4,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v14);
  }
  else
  {
    v8 = -2147024891;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x19A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)0x80070005LL,
      (int)"The current thread or Compositor does not have an associated CoreWindow.",
      v11);
  }
  return v8;
}
