/*
 * XREFs of ?CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAVCompositionIslandTarget@234@@Z @ 0x18010F540
 * Callers:
 *     ?CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAUICompositionTarget@234@@Z @ 0x18010F498 (-CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAUICompositionTarget@234.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001E154 (-EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCoreWindowCI@Compositor@Composition@UI@Windows@@QEAAPEAUICoreWindow_CompositionIslands@Core@34@XZ @ 0x18008B604 (-GetCoreWindowCI@Compositor@Composition@UI@Windows@@QEAAPEAUICoreWindow_CompositionIslands@Core@.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x180108A7C (-EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ??$MakeAndInitialize2@VCompositionIslandTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionIsland@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionIslandTarget@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionIsland@456@@Z @ 0x18010DD8C (--$MakeAndInitialize2@VCompositionIslandTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::CreateTargetForCoreWindow(
        Windows::UI::Composition::Compositor *this,
        struct Windows::UI::Composition::CompositionIslandTarget **a2)
{
  __int64 v2; // rbx
  int v5; // eax
  struct Windows::UI::Core::ICoreWindow_CompositionIslands *CoreWindowCI; // rsi
  __int64 (__fastcall *v7)(struct Windows::UI::Core::ICoreWindow_CompositionIslands *, unsigned __int64, _QWORD); // rdi
  int v8; // eax
  unsigned int v9; // edi
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v11)(_QWORD, GUID *, struct IUnknown **); // rdi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  Windows::UI::Composition::CompositionObject *v16; // [rsp+20h] [rbp-20h] BYREF
  struct Windows::UI::Composition::CompositionIsland *v17; // [rsp+28h] [rbp-18h] BYREF
  struct Windows::UI::Composition::Compositor *v18; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IUnknown *v20; // [rsp+70h] [rbp+30h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, struct IUnknown **); // [rsp+80h] [rbp+40h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v22; // [rsp+88h] [rbp+48h] BYREF

  v2 = *((_QWORD *)this + 3);
  v21 = 0LL;
  ++*(_DWORD *)(v2 + 88);
  if ( *(_DWORD *)(v2 + 80) != *(_DWORD *)(v2 + 84) + *(_DWORD *)(v2 + 88) )
    Microsoft::WRL2::FailFast::Unexpected("Begin callout counts");
  Microsoft::WRL2::ContextSession::EnsureMessageExtensions((Microsoft::WRL2::ContextSession *)v2);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 128) + 96LL))(*(_QWORD *)(v2 + 128));
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1809LL,
      (__int64)"onecore\\private\\sdk\\inc\\wrl2\\Wrl2Agile.cpp",
      (const char *)(unsigned int)v5,
      (int)v16);
  CoreWindowCI = Windows::UI::Composition::Compositor::GetCoreWindowCI(this);
  v7 = *(__int64 (__fastcall **)(struct Windows::UI::Core::ICoreWindow_CompositionIslands *, unsigned __int64, _QWORD))(*(_QWORD *)CoreWindowCI + 64LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v21);
  v8 = v7(CoreWindowCI, ((unsigned __int64)this + 1080) & -(__int64)(this != 0LL), &v21);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C8,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL2::ContextSession::EndPrivateCallout((Microsoft::WRL2::ContextSession *)v2);
LABEL_13:
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v21);
    return v9;
  }
  Microsoft::WRL2::ContextSession::EndPrivateCallout((Microsoft::WRL2::ContextSession *)v2);
  v10 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21;
  v20 = 0LL;
  v11 = **v21;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v20);
  v12 = v11(v10, &GUID_9d031780_ae09_5272_80e0_50a215c0baf0, &v20);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      463LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)(unsigned int)v12,
      (int)v16);
  v22 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v22);
  v13 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
          this,
          v20,
          (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionIsland::s_InterfaceType,
          &v22);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      469LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)(unsigned int)v13,
      (int)v16);
  v16 = 0LL;
  v17 = v22;
  v18 = this;
  v14 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionIslandTarget,Windows::UI::Composition::CompositionIslandTarget,Windows::UI::Composition::Compositor *,Windows::UI::Composition::CompositionIsland *>(
          &v16,
          &v18,
          &v17);
  v9 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DC,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v16);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v22);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v20);
    goto LABEL_13;
  }
  *a2 = v16;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v22);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v21);
  return 0LL;
}
