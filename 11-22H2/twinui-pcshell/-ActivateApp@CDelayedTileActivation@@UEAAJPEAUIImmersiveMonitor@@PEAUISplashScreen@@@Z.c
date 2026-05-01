/*
 * XREFs of ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x18059F8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802E5D00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCop_ea_1802E5D00.c)
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1802EBAF4 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 *     ??$Make@VDelayedTileActivationCallSite@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@AEAW4IAM_DESKTOP_SWITCH_OPTION@@AEAV?$optional@_N@std@@AEAV?$optional@H@9@AEA_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VDelayedTileActivationCallSite@@@12@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@AEAW4IAM_DESKTOP_SWITCH_OPTION@@AEAV?$optional@_N@std@@AEAV?$optional@H@std@@AEA_N@Z @ 0x18059EDC4 (--$Make@VDelayedTileActivationCallSite@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAU.c)
 *     ?IsPropertySetEmpty@ViewSizePreferenceHelpers@@YA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1805A0830 (-IsPropertySetEmpty@ViewSizePreferenceHelpers@@YA_NPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1805A10A4 (-SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Founda.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDelayedTileActivation::ActivateApp(
        CDelayedTileActivation *this,
        struct IImmersiveMonitor *a2,
        struct ISplashScreen *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int Instance; // eax
  struct Windows::Foundation::Collections::IPropertySet *v9; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v10; // r8
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rdx
  HRESULT v16; // eax
  volatile int *v17; // rdx
  volatile int *v18; // rdx
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  struct IUnknown *v20; // [rsp+48h] [rbp-18h] BYREF
  IUnknown *v21; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v23; // [rsp+88h] [rbp+28h] BYREF
  IUnknown *punk; // [rsp+98h] [rbp+38h] BYREF

  v19 = 0LL;
  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v19);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB4,
        (int)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  punk = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManager,
               0LL,
               1u,
               &GUID_54e4c428_d1d4_47d4_ade6_46c829114a7d,
               (LPVOID *)&punk);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v12 = 184LL;
    goto LABEL_20;
  }
  if ( *((_QWORD *)this + 17)
    || !ViewSizePreferenceHelpers::IsPropertySetEmpty(*((ViewSizePreferenceHelpers **)this + 16), v9)
    || *((_BYTE *)this + 149) )
  {
    Instance = ViewSizePreferenceHelpers::SetViewValueSet(
                 (ViewSizePreferenceHelpers *)punk,
                 *((struct IUnknown **)this + 16),
                 v10);
    v11 = Instance;
    if ( Instance < 0 )
    {
      v12 = 189LL;
      goto LABEL_20;
    }
    v20 = (struct IUnknown *)*((_QWORD *)this + 16);
    Microsoft::WRL::Details::Make<DelayedTileActivationCallSite,Windows::Foundation::Collections::IPropertySet *,HWND__ * &,enum IAM_DESKTOP_SWITCH_OPTION &,std::optional<bool> &,std::optional<int> &,bool &>(
      (__int64 *)&v21,
      &v20,
      (__int64)this + 136,
      (__int64)this + 144,
      (__int16 *)this + 74,
      (__int64 *)this + 19,
      (char *)this + 160);
    v13 = (__int64)v21;
    if ( !v21 )
    {
      v11 = -2147024882;
      v14 = 2147942414LL;
      v15 = 193LL;
      goto LABEL_15;
    }
    v16 = IUnknown_SetSite(punk, v21 + 1);
    v11 = v16;
    if ( v16 < 0 )
    {
      v14 = (unsigned int)v16;
      v15 = 194LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
        (const char *)v14);
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>::Release(
          v13,
          v18);
      goto LABEL_22;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>::Release(
      v13,
      v17);
  }
  Instance = ActivateApplicationForLaunchWithManager(
               (__int64)punk,
               *((_QWORD *)this + 7),
               *((_QWORD *)this + 10),
               *((_QWORD *)this + 13),
               *((_DWORD *)this + 12),
               a3,
               v19,
               (CImmersiveWindowFactory *)&v23);
  v11 = Instance;
  if ( Instance >= 0 )
  {
    v11 = 0;
    goto LABEL_22;
  }
  v12 = 199LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
    (const char *)(unsigned int)Instance);
LABEL_22:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
  return v11;
}
