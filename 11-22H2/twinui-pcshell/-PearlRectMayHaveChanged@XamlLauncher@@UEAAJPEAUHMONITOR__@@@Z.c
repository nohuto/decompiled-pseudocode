/*
 * XREFs of ?PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x1800DE470
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x180059B70 (-GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180194BD0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@UIImmersiveLauncherInternal@@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@UIImmersiveLauncherInternal@@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801B286C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCW_ea_1801B286C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::PearlRectMayHaveChanged(XamlLauncher *this, HMONITOR a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  IUnknown *v7; // rcx
  HRESULT v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  void *v11; // rcx
  int CortanaVisibleMonitor; // edi
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 45);
  if ( !v4 )
    return 2147943568LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 120LL))(v4) )
  {
    CortanaVisibleMonitor = XamlLauncher::GetCortanaVisibleMonitor(
                              (XamlLauncher *)((char *)this + 32),
                              (HMONITOR *)&ppvOut);
    if ( CortanaVisibleMonitor < 0 )
    {
      v14 = 577LL;
    }
    else
    {
      if ( a2 != ppvOut )
        goto LABEL_3;
      CortanaVisibleMonitor = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 144LL))(*((_QWORD *)this + 20));
      if ( CortanaVisibleMonitor >= 0 )
        goto LABEL_3;
      v14 = 580LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)CortanaVisibleMonitor,
      v17);
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
      v9 = -2147467262;
      goto LABEL_23;
    }
    v8 = IUnknown_QueryService(
           v7,
           &GUID_749f2714_937d_445e_9d22_666f49e7ff32,
           &GUID_749f2714_937d_445e_9d22_666f49e7ff32,
           &ppvOut);
  }
  else
  {
    v8 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>>(
           (char *)this - 32,
           &GUID_749f2714_937d_445e_9d22_666f49e7ff32,
           &ppvOut);
  }
  v9 = v8;
  if ( v8 < 0 )
  {
LABEL_23:
    v15 = v9;
    v16 = 587LL;
    goto LABEL_24;
  }
  v10 = (*(__int64 (__fastcall **)(void *, HMONITOR))(*(_QWORD *)ppvOut + 40LL))(ppvOut, a2);
  v9 = v10;
  if ( v10 < 0 )
  {
    v15 = (unsigned int)v10;
    v16 = 588LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)v15,
      v17);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    return v9;
  }
  v11 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return 0LL;
}
