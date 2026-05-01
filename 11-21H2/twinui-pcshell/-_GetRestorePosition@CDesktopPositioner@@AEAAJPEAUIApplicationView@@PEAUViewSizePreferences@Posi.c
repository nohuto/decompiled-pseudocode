/*
 * XREFs of ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800F0618
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1800F0318 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     _lambda_c6623334da8ed11a0378a692878c9731_::operator() @ 0x1804FA740 (_lambda_c6623334da8ed11a0378a692878c9731_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x1800563F4 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800F0A94 (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800F15EC (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z @ 0x1800F173C (-_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1800F1820 (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     IsPeoplePane @ 0x1800F23D0 (IsPeoplePane.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F36C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x180117BE4 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180364EF4 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1804FD118 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CDesktopPositioner::_GetRestorePosition(
        IUnknown *this,
        struct IApplicationView *a2,
        struct PositionerPropertySetHelpers::ViewSizePreferences *a3,
        struct IApplicationViewPosition **a4)
{
  struct IApplicationView *v6; // rsi
  struct IApplicationView *v8; // rdx
  int LaunchPosition; // eax
  unsigned int v10; // ebx
  __int64 (__fastcall *v12)(struct IApplicationView *, __int64 *); // rbx
  int v13; // eax
  CDesktopPositioner *v14; // rcx
  struct IUnknownVtbl *lpVtbl; // rdi
  int (__fastcall *v16)(struct IUnknownVtbl *, _QWORD, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int (__fastcall *v18)(struct IApplicationView *, __int64 *); // rbx
  struct IApplicationView *v19; // rbx
  int (__fastcall *v20)(struct IApplicationView *, GUID *, __int64 *); // rdi
  int v21; // eax
  CDesktopPositioner *v22; // rcx
  int v23; // eax
  int v24; // eax
  struct IApplicationView *v25; // [rsp+20h] [rbp-99h] BYREF
  int v26; // [rsp+28h] [rbp-91h] BYREF
  __int64 v27; // [rsp+30h] [rbp-89h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v28; // [rsp+38h] [rbp-81h] BYREF
  int v29; // [rsp+44h] [rbp-75h]
  int v30; // [rsp+48h] [rbp-71h] BYREF
  __int64 v31; // [rsp+50h] [rbp-69h] BYREF
  __int64 v32; // [rsp+58h] [rbp-61h]
  __int64 v33; // [rsp+60h] [rbp-59h]
  __int64 v34; // [rsp+68h] [rbp-51h] BYREF
  __int64 v35; // [rsp+70h] [rbp-49h]
  __int64 v36; // [rsp+78h] [rbp-41h]
  unsigned int v37[2]; // [rsp+80h] [rbp-39h] BYREF
  const char *v38; // [rsp+88h] [rbp-31h]
  __int64 v39; // [rsp+90h] [rbp-29h]
  __int16 v40; // [rsp+98h] [rbp-21h]
  RECT rc; // [rsp+B0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v6 = a2;
  *a4 = 0LL;
  *(_QWORD *)v37 = retaddr;
  v38 = "pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp";
  v39 = 0LL;
  v40 = 1172;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PeopleBar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetImpl'::`2'::impl,
    a2);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)&v28);
  if ( (unsigned __int8)IsPeoplePane(v6)
    && (LaunchPosition = CDesktopPositioner::_GetLaunchPosition(this, v6, a4), v10 = LaunchPosition, LaunchPosition < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x498,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)LaunchPosition);
    wil::details::ReportFeatureError(
      (wil::details *)v10,
      (int)&v28,
      (struct wil::ThreadErrorContext *)0x60F183,
      (unsigned int)v37,
      (const struct DiagnosticsInfo *)v25);
  }
  else
  {
    v10 = 0;
  }
  if ( v28 )
    *((_DWORD *)v28 + 4) = v29;
  if ( (v10 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49D,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v10);
    return v10;
  }
  if ( !*a4 )
  {
    if ( !ApplicationViewHelpers::CanMaximizeView(v6, v8) )
      return 2147943568LL;
    rc = 0LL;
    v25 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    v12 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)v6 + 488LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v31);
    v32 = -1LL;
    v33 = -1LL;
    v13 = v12(v6, &v31);
    v10 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4B2,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v13);
LABEL_39:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v31);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v25);
      return v10;
    }
    if ( v31 )
      goto LABEL_36;
    if ( a3 && *(_QWORD *)a3 )
    {
      lpVtbl = this[34].lpVtbl;
      v16 = (int (__fastcall *)(struct IUnknownVtbl *, _QWORD, __int64 *))*((_QWORD *)lpVtbl->QueryInterface + 6);
      AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v25);
      if ( v16(lpVtbl, *(_QWORD *)a3, AddressOf) >= 0 )
      {
        v26 = 0;
        v34 = 0LL;
        v35 = 0LL;
        v36 = 0LL;
        v18 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)v6 + 136LL);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v34);
        v35 = -1LL;
        v36 = -1LL;
        if ( v18(v6, &v34) >= 0 )
          (*(void (__fastcall **)(struct IApplicationView *, __int64, int *))(*(_QWORD *)v25 + 152LL))(v25, v34, &v26);
        v27 = 0LL;
        if ( v26 )
        {
          v19 = v25;
          v20 = *(int (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)v25 + 104LL);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
          if ( v20(v19, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v27) >= 0
            && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 32LL))(v27, &v30) >= 0 )
          {
            if ( v30 == 2 )
            {
              v21 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v27 + 24LL))(v27, &rc);
              if ( v21 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x4D1,
                  (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                  (const char *)(unsigned int)v21);
            }
            else
            {
              v28 = 0LL;
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
              if ( (int)CDesktopPositioner::_GetFullPositionSnapshot(v22, v25, &v28) >= 0 )
              {
                v23 = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v28 + 56LL))(
                        v28,
                        &rc);
                if ( v23 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x4DC,
                    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                    (const char *)(unsigned int)v23);
              }
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
            }
          }
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v34);
      }
      if ( v31 )
        goto LABEL_36;
    }
    if ( CDesktopPositioner::_UsePreferredSizeForStandaloneWindows(v14, v6)
      || IsRectEmpty(&rc)
      || CDesktopPositioner::_GetOffsetPosition((CDesktopPositioner *)this, &rc, a4) < 0 )
    {
LABEL_36:
      v28 = 0LL;
      if ( (int)CDesktopPositioner::_GetPreferredPosition((CDesktopPositioner *)this, v6, &rc, a4) < 0 )
      {
        v24 = CDesktopPositioner::_GetLaunchPosition(this, v6, a4);
        v10 = v24;
        if ( v24 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4EF,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v24);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
          goto LABEL_39;
        }
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v31);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v25);
  }
  return 0LL;
}
