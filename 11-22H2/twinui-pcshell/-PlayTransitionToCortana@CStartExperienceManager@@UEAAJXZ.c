/*
 * XREFs of ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x1804454E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18001B048 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x1800D4F14 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x1800DD81C (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800EDA34 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJNPEAPEAUIInspectable@@@ZN@Z @ 0x180444070 (--$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJUSize@63@PEAPEAUIInspectable@@@Z1@Z @ 0x1804441C0 (--$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEA.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180444854 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x1804448EC (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x1804450E8 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
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
  HSTRING_HEADER *v13; // rax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // r8
  unsigned int v15; // r8d
  HSTRING_HEADER *v16; // rax
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // r8
  unsigned int v18; // r8d
  bool v19; // zf
  char v20; // bl
  HSTRING_HEADER *v21; // rax
  __int64 v22; // r8
  unsigned int v23; // r8d
  HSTRING v24; // rbx
  HSTRING_HEADER *v25; // rax
  bool v27[4]; // [rsp+48h] [rbp-69h] BYREF
  int v28; // [rsp+4Ch] [rbp-65h] BYREF
  int v29; // [rsp+50h] [rbp-61h] BYREF
  HSTRING v30; // [rsp+58h] [rbp-59h] BYREF
  HSTRING v31; // [rsp+60h] [rbp-51h] BYREF
  HMONITOR hMonitor; // [rsp+68h] [rbp-49h] BYREF
  HWND hWnd; // [rsp+70h] [rbp-41h] BYREF
  _BYTE v34[8]; // [rsp+78h] [rbp-39h] BYREF
  HWND *p_hWnd; // [rsp+80h] [rbp-31h]
  char v36; // [rsp+88h] [rbp-29h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-21h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-9h]
  struct tagMONITORINFO mi; // [rsp+B0h] [rbp-1h] BYREF
  HSTRING_HEADER v40; // [rsp+D8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  hWnd = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 38), a2);
  EnableWindow(hWnd, 0);
  p_hWnd = &hWnd;
  v3 = 1;
  v36 = 1;
  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         (CStartExperienceManager *)((char *)this - 40),
                         v4,
                         (struct tagRECT *)&hstringHeader,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v29,
                         v27,
                         &hMonitor);
  if ( MonitorInformation >= 0 )
  {
    v31 = 0LL;
    v38 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v6 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v38,
           (__int64 *)&v31);
    MonitorInformation = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x551,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
LABEL_28:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
      goto LABEL_29;
    }
    v30 = v31;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( !GetMonitorInfoW(hMonitor, &mi) )
    {
      MonitorInformation = -2147418113;
      v7 = 2147549183LL;
      v8 = 1369LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)v7);
LABEL_27:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
      goto LABEL_28;
    }
    *(_DWORD *)&hstringHeader.Reserved.Reserved2[4] = *((_DWORD *)this + 175);
    v9 = 344;
    if ( mi.rcMonitor.right - mi.rcMonitor.left < 1196 )
      v9 = 320;
    *(float *)&hstringHeader.Reserved.Reserved1 = (float)v9 + 48.0;
    v28 = 0;
    CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x37, &v28);
    if ( v28 || CortanaFlightingHelpers::IsWideQFDeltaEnabled(v10) )
    {
      DpiForMonitor = GetDpiForMonitor(hMonitor, 0LL, &v28, v34);
      MonitorInformation = DpiForMonitor;
      if ( DpiForMonitor < 0 )
      {
        v8 = 1378LL;
LABEL_24:
        v7 = (unsigned int)DpiForMonitor;
        goto LABEL_25;
      }
      *(float *)&hstringHeader.Reserved.Reserved1 = (float)(int)GetDefaultCortanaWidthWithoutGutter(&mi.rcMonitor, v28)
                                                  + 48.0;
    }
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v40, (const WCHAR **)&off_1807F4450, v11);
    DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<Windows::Foundation::Size>(
                      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                      (HSTRING)v13[1].Reserved.Reserved1,
                      v14);
    MonitorInformation = DpiForMonitor;
    if ( DpiForMonitor >= 0 )
    {
      v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v40, (const WCHAR **)&off_1807F4440, v15);
      DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<double>(
                        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                        (HSTRING)v16[1].Reserved.Reserved1,
                        v17);
      MonitorInformation = DpiForMonitor;
      if ( DpiForMonitor >= 0 )
      {
        if ( v27[0] )
          v19 = v29 == 0;
        else
          v19 = v29 == 2;
        v20 = !v19;
        v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v40, (const WCHAR **)&off_1807F4460, v18);
        DpiForMonitor = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                          (HSTRING)v21[1].Reserved.Reserved1,
                          v22,
                          v20);
        MonitorInformation = DpiForMonitor;
        if ( DpiForMonitor >= 0 )
        {
          v24 = v31;
          v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v40, (const WCHAR **)&off_1807F4438, v23);
          DpiForMonitor = ExperienceManagerUtils::RaiseReactivatedEvent(
                            *((ExperienceManagerUtils **)this + 38),
                            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this
                                                                                                 + 102),
                            *((HSTRING *)this + 36),
                            *((HSTRING *)this + 37),
                            (HSTRING)v25[1].Reserved.Reserved1,
                            v24);
          MonitorInformation = DpiForMonitor;
          if ( DpiForMonitor >= 0 )
          {
            *((_BYTE *)this + 720) = 1;
            v3 = 0;
            MonitorInformation = 0;
            goto LABEL_27;
          }
          v8 = 1417LL;
        }
        else
        {
          v8 = 1412LL;
        }
      }
      else
      {
        v8 = 1390LL;
      }
    }
    else
    {
      v8 = 1387LL;
    }
    goto LABEL_24;
  }
LABEL_29:
  if ( v3 )
    EnableWindow(hWnd, 1);
  return (unsigned int)MonitorInformation;
}
