/*
 * XREFs of ?CreateInstance@GamingOverlayExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18013D930
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VGamingOverlayExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18013D9E0 (--$MakeAndInitialize@VGamingOverlayExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGa.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@UIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@ABI@@UIXamlExplorerHostChildWindowStatics@89Internal@Windows@ABI@@UIXamlExplorerHostComponent@89Internal@Windows@ABI@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013FB90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18013FB90.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCImmersiveShellComponentWithGITSite@@UIWeakReferenceSource@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@GamingOverlay@Internal@Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18032D790 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspect_ea_18032D790.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GamingOverlayExperienceManagerFactory::CreateInstance(
        GamingOverlayExperienceManagerFactory *this,
        struct IUnknown *a2,
        struct _GUID *a3,
        void **a4)
{
  int v6; // eax
  int CanCastTo; // edi
  void *v8; // rbx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v13; // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
    return 2147746064LL;
  v13 = 0LL;
  v6 = Microsoft::WRL::Details::MakeAndInitialize<GamingOverlayExperienceManager,GamingOverlayExperienceManager,>(&v13);
  CanCastTo = v6;
  v8 = v13;
  if ( v6 < 0 )
  {
    v10 = (unsigned int)v6;
    v11 = 3613LL;
  }
  else
  {
    *a4 = 0LL;
    if ( InlineIsEqualGUID(a3, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(a3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a4 = v8;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 8LL))(v8);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,CImmersiveShellComponentWithGITSite,IWeakReferenceSource,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::CanCastTo(
                    v8,
                    a3,
                    a4);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
    }
    if ( CanCastTo >= 0 )
      goto LABEL_6;
    v10 = (unsigned int)CanCastTo;
    v11 = 3614LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)v10);
LABEL_6:
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostComponent,Microsoft::WRL::FtmBase>::Release(v8);
  return (unsigned int)CanCastTo;
}
