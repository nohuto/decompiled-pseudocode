/*
 * XREFs of ?PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x180073BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x18003B500 (-GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011CEA0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@UIImmersiveLauncherInternal@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180177DFC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_180177DFC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::PearlRectMayHaveChanged(XamlLauncher *this, HMONITOR a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  IUnknown *v7; // rcx
  HRESULT CanCastTo; // ebx
  int v9; // eax
  void *v10; // rcx
  int CortanaVisibleMonitor; // edi
  __int64 v13; // rdx
  void *v14; // r9
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  void *ppvOut; // [rsp+30h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 39);
  if ( !v4 )
    return 2147943568LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 120LL))(v4) )
  {
    CortanaVisibleMonitor = XamlLauncher::GetCortanaVisibleMonitor(
                              (XamlLauncher *)((char *)this + 32),
                              (HMONITOR *)&ppvOut);
    if ( CortanaVisibleMonitor < 0 )
    {
      v13 = 476LL;
    }
    else
    {
      if ( a2 != ppvOut )
        goto LABEL_3;
      CortanaVisibleMonitor = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 144LL))(*((_QWORD *)this + 19));
      if ( CortanaVisibleMonitor >= 0 )
        goto LABEL_3;
      v13 = 479LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)CortanaVisibleMonitor,
      savedregs);
    return (unsigned int)CortanaVisibleMonitor;
  }
LABEL_3:
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl,
    v5);
  ppvOut = 0LL;
  v6 = *(_QWORD *)&GUID_749f2714_937d_445e_9d22_666f49e7ff32.Data1 - *(_QWORD *)&SID_ImmersiveLauncher.Revision;
  if ( *(_QWORD *)&GUID_749f2714_937d_445e_9d22_666f49e7ff32.Data1 == *(_QWORD *)&SID_ImmersiveLauncher.Revision )
    v6 = *(_QWORD *)GUID_749f2714_937d_445e_9d22_666f49e7ff32.Data4 - *(_QWORD *)SID_ImmersiveLauncher.SubAuthority;
  if ( v6 )
  {
    v7 = (IUnknown *)*((_QWORD *)this - 2);
    if ( !v7 )
    {
      CanCastTo = -2147467262;
      goto LABEL_27;
    }
    CanCastTo = IUnknown_QueryService(
                  v7,
                  &GUID_749f2714_937d_445e_9d22_666f49e7ff32,
                  &GUID_749f2714_937d_445e_9d22_666f49e7ff32,
                  &ppvOut);
  }
  else
  {
    ppvOut = 0LL;
    if ( (unsigned int)InlineIsEqualGUID(
                         &GUID_749f2714_937d_445e_9d22_666f49e7ff32,
                         &GUID_00000000_0000_0000_c000_000000000046) )
    {
      ppvOut = v14;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 8LL))(v14);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>::CanCastTo(
                    v14,
                    &GUID_749f2714_937d_445e_9d22_666f49e7ff32,
                    &ppvOut);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 8LL))(ppvOut);
    }
  }
  if ( CanCastTo < 0 )
  {
LABEL_27:
    v15 = (unsigned int)CanCastTo;
    v16 = 486LL;
    goto LABEL_28;
  }
  v9 = (*(__int64 (__fastcall **)(void *, HMONITOR))(*(_QWORD *)ppvOut + 40LL))(ppvOut, a2);
  CanCastTo = v9;
  if ( v9 < 0 )
  {
    v15 = (unsigned int)v9;
    v16 = 487LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)v15,
      savedregs);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    return (unsigned int)CanCastTo;
  }
  v10 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
