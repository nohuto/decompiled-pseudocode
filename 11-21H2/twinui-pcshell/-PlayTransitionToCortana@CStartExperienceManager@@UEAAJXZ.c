/*
 * XREFs of ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x18036FA80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18004C24C (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x18007398C (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180093360 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800A47E0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJNPEAPEAUIInspectable@@@ZN@Z @ 0x18036E428 (--$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJUSize@63@PEAPEAUIInspectable@@@Z1@Z @ 0x18036E578 (--$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEA.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x18036EDF4 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x18036EE8C (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x18036F694 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CStartExperienceManager::PlayTransitionToCortana(
        CStartExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  char v3; // si
  struct CSingleViewShellExperience *v4; // rdx
  int MonitorInformation; // ebx
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // ecx
  CortanaFlightingHelpers *v10; // rcx
  unsigned int v11; // r8d
  int DpiForMonitor; // eax
  __int64 v13; // rax
  unsigned int v14; // r8d
  __int64 v15; // rax
  unsigned int v16; // r8d
  bool v17; // zf
  char v18; // bl
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned int v21; // r8d
  HSTRING v22; // rbx
  __int64 v23; // rax
  bool v25[4]; // [rsp+48h] [rbp-69h] BYREF
  int v26; // [rsp+4Ch] [rbp-65h] BYREF
  int v27; // [rsp+50h] [rbp-61h] BYREF
  HSTRING v28; // [rsp+58h] [rbp-59h] BYREF
  HSTRING v29; // [rsp+60h] [rbp-51h] BYREF
  HMONITOR hMonitor; // [rsp+68h] [rbp-49h] BYREF
  HWND hWnd; // [rsp+70h] [rbp-41h] BYREF
  _BYTE v32[8]; // [rsp+78h] [rbp-39h] BYREF
  HWND *p_hWnd; // [rsp+80h] [rbp-31h]
  char v34; // [rsp+88h] [rbp-29h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-21h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-9h]
  struct tagMONITORINFO mi; // [rsp+B0h] [rbp-1h] BYREF
  _BYTE v38[32]; // [rsp+D8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  hWnd = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 38), a2);
  EnableWindow(hWnd, 0);
  p_hWnd = &hWnd;
  v3 = 1;
  v34 = 1;
  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         (CStartExperienceManager *)((char *)this - 40),
                         v4,
                         (struct tagRECT *)&hstringHeader,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v27,
                         v25,
                         &hMonitor);
  if ( MonitorInformation >= 0 )
  {
    v29 = 0LL;
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v6 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v36,
           (__int64 *)&v29);
    MonitorInformation = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4EE,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
LABEL_28:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
      goto LABEL_29;
    }
    v28 = v29;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( !GetMonitorInfoW(hMonitor, &mi) )
    {
      MonitorInformation = -2147418113;
      v7 = 2147549183LL;
      v8 = 1270LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)v7);
LABEL_27:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
      goto LABEL_28;
    }
    *(_DWORD *)&hstringHeader.Reserved.Reserved2[4] = *((_DWORD *)this + 157);
    v9 = 344;
    if ( mi.rcMonitor.right - mi.rcMonitor.left < 1196 )
      v9 = 320;
    *(float *)&hstringHeader.Reserved.Reserved1 = (float)v9 + 48.0;
    v26 = 0;
    CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x37, &v26);
    if ( v26 || CortanaFlightingHelpers::IsWideQFDeltaEnabled(v10) )
    {
      DpiForMonitor = GetDpiForMonitor(hMonitor, 0LL, &v26, v32);
      MonitorInformation = DpiForMonitor;
      if ( DpiForMonitor < 0 )
      {
        v8 = 1279LL;
LABEL_24:
        v7 = (unsigned int)DpiForMonitor;
        goto LABEL_25;
      }
      *(float *)&hstringHeader.Reserved.Reserved1 = (float)(int)GetDefaultCortanaWidthWithoutGutter(&mi.rcMonitor, v26)
                                                  + 48.0;
    }
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)v38,
            (const WCHAR **)&off_180669520,
            v11);
    DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<Windows::Foundation::Size>(
                      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v28,
                      *(HSTRING *)(v13 + 24));
    MonitorInformation = DpiForMonitor;
    if ( DpiForMonitor >= 0 )
    {
      v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              (__int64)v38,
              (const WCHAR **)&off_180669518,
              v14);
      DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<double>(
                        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v28,
                        *(HSTRING *)(v15 + 24));
      MonitorInformation = DpiForMonitor;
      if ( DpiForMonitor >= 0 )
      {
        if ( v25[0] )
          v17 = v27 == 0;
        else
          v17 = v27 == 2;
        v18 = !v17;
        v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (__int64)v38,
                (const WCHAR **)&off_180669510,
                v16);
        DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v28,
                          *(HSTRING *)(v19 + 24),
                          v20,
                          v18);
        MonitorInformation = DpiForMonitor;
        if ( DpiForMonitor >= 0 )
        {
          v22 = v29;
          v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  (__int64)v38,
                  (const WCHAR **)&off_180669530,
                  v21);
          DpiForMonitor = ExperienceManagerUtils::RaiseReactivatedEvent(
                            *((ExperienceManagerUtils **)this + 38),
                            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this
                                                                                                 + 102),
                            *((HSTRING *)this + 36),
                            *((HSTRING *)this + 37),
                            *(HSTRING *)(v23 + 24),
                            v22);
          MonitorInformation = DpiForMonitor;
          if ( DpiForMonitor >= 0 )
          {
            *((_BYTE *)this + 648) = 1;
            v3 = 0;
            MonitorInformation = 0;
            goto LABEL_27;
          }
          v8 = 1318LL;
        }
        else
        {
          v8 = 1313LL;
        }
      }
      else
      {
        v8 = 1291LL;
      }
    }
    else
    {
      v8 = 1288LL;
    }
    goto LABEL_24;
  }
LABEL_29:
  if ( v3 )
    EnableWindow(hWnd, 1);
  return (unsigned int)MonitorInformation;
}
