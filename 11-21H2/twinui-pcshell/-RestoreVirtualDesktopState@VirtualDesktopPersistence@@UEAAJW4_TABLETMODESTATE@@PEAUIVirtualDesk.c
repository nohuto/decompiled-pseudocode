/*
 * XREFs of ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x180110060
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180036AA8 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800375A8 (--4-$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180106484 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18010988C (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@AEAAXXZ @ 0x18031D0B8 (-_Tidy@-$vector@PEAUHMONITOR__@@V-$allocator@PEAUHMONITOR__@@@std@@@std@@AEAAXXZ.c)
 *     ?AssignMonitorToVirtualDesktop@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEBV?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@@Z @ 0x18055C3AC (-AssignMonitorToVirtualDesktop@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEBV-$vector.c)
 *     ?ReadPerDesktopStringData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGPEAPEAG@Z @ 0x18055CDF0 (-ReadPerDesktopStringData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGPEAPEAG@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall VirtualDesktopPersistence::RestoreVirtualDesktopState(
        VirtualDesktopPersistence *a1,
        unsigned int a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rsi
  __int64 *v6; // r14
  __int64 v8; // r13
  __int64 (__fastcall *v9)(__int64 *, _QWORD, __int64 *); // rbx
  unsigned int v10; // ebx
  CCriticalFailureHandler *v11; // rcx
  char v12; // di
  LPVOID *p_pv; // rdx
  __int64 v14; // r9
  LPVOID v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // ebx
  CCriticalFailureHandler *v18; // rcx
  void *v19; // rcx
  LSTATUS DWORD; // eax
  LSTATUS v22; // eax
  wil::details::in1diag3 *v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rdx
  _OWORD *v26; // rsi
  unsigned __int64 v27; // r12
  _QWORD *v28; // rbx
  int (__fastcall *v29)(_QWORD *, __int64, _QWORD, const wchar_t *); // rdi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 i; // r13
  _QWORD *v34; // r15
  __int64 (__fastcall *v35)(__int64 *, _QWORD, _QWORD *, struct IVirtualDesktop **); // rbx
  unsigned int v36; // ebx
  CCriticalFailureHandler *v37; // rcx
  LSTATUS v38; // eax
  __int64 v39; // rax
  struct IVirtualDesktop *v40; // rbx
  __int64 (__fastcall *v41)(struct IVirtualDesktop *, GUID *, __int64 *); // rdi
  int v42; // eax
  VirtualDesktopPersistence *v43; // rbx
  unsigned int v44; // r8d
  __int64 v45; // r9
  __int64 v46; // rbx
  __int64 (__fastcall *v47)(__int64, PVOID); // rdi
  HSTRING_HEADER *v48; // rax
  int v49; // eax
  unsigned int v50; // r8d
  __int64 v51; // rbx
  __int64 (__fastcall *v52)(__int64, PVOID); // r14
  unsigned __int16 *v53; // rdi
  HSTRING_HEADER *v54; // rax
  int v55; // eax
  unsigned int v56; // r8d
  __int64 v57; // rax
  __int64 (__fastcall *v58)(__int64 *, struct IVirtualDesktop *, PVOID); // rbx
  PVOID Reserved1; // r8
  int v60; // eax
  int v61; // eax
  void *v62; // rcx
  void *v63; // rcx
  __int64 (__fastcall *v64)(__int64 *, __int64, __int64, void **); // rbx
  unsigned int v65; // ebx
  CCriticalFailureHandler *v66; // rcx
  LSTATUS v67; // eax
  void *v68; // rcx
  void *v69; // rcx
  void *v70; // rcx
  __int64 *v71; // rax
  CCriticalFailureHandler *v72; // rcx
  int v73; // ebx
  int v74; // edx
  LSTATUS v75; // eax
  void *v76; // rcx
  void *v77; // rcx
  unsigned __int64 *v78; // [rsp+20h] [rbp-138h]
  unsigned __int64 *v79; // [rsp+28h] [rbp-130h]
  unsigned __int64 *v80; // [rsp+28h] [rbp-130h]
  unsigned __int16 *v81; // [rsp+40h] [rbp-118h] BYREF
  unsigned int v82; // [rsp+48h] [rbp-110h] BYREF
  LPVOID v83; // [rsp+50h] [rbp-108h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-100h] BYREF
  void *v85; // [rsp+60h] [rbp-F8h] BYREF
  unsigned int v86; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v87; // [rsp+70h] [rbp-E8h] BYREF
  struct IVirtualDesktop *v88; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v89; // [rsp+80h] [rbp-D8h] BYREF
  VirtualDesktopPersistence *v90; // [rsp+88h] [rbp-D0h]
  unsigned __int16 *v91; // [rsp+90h] [rbp-C8h] BYREF
  const WCHAR *v92; // [rsp+98h] [rbp-C0h] BYREF
  __int64 v93; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 *v94; // [rsp+A8h] [rbp-B0h]
  __int128 v95; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v96; // [rsp+C0h] [rbp-98h]
  unsigned __int64 v97; // [rsp+C8h] [rbp-90h]
  __int64 v98; // [rsp+D0h] [rbp-88h]
  __int64 v99; // [rsp+D8h] [rbp-80h]
  _OWORD *v100; // [rsp+E0h] [rbp-78h]
  __int128 v101; // [rsp+E8h] [rbp-70h]
  HSTRING_HEADER v102; // [rsp+F8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v5 = a4;
  v99 = a4;
  v6 = a3;
  v94 = a3;
  v82 = a2;
  v90 = a1;
  v8 = a5;
  v93 = a5;
  v87 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*a3 + 312);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v87);
  v10 = v9(v6, 0LL, &v87);
  LODWORD(v81) = v10;
  v11 = (CCriticalFailureHandler *)v10;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_2;
  DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v86);
  v11 = (CCriticalFailureHandler *)v10;
  if ( DWORD >= 0 )
  {
    switch ( v86 )
    {
      case 2u:
        v10 = -2023406815;
        break;
      case 3u:
        v10 = -2023406814;
        break;
      case 4u:
        v10 = -2147418094;
        break;
      case 5u:
        v10 = -2147022986;
        break;
      default:
        goto LABEL_14;
    }
    v11 = (CCriticalFailureHandler *)v10;
    LODWORD(v81) = v10;
  }
LABEL_14:
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_2:
  if ( (int)v11 < 0 && (_DWORD)v11 != -2147024882 && (_DWORD)v11 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v11,
      (int *)&v81,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      0x71u,
      v78,
      v79);
    v10 = (unsigned int)v81;
  }
  if ( (v10 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)v10);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v87);
    return v10;
  }
  v85 = 0LL;
  pv = 0LL;
  v12 = 0;
  p_pv = &pv;
  v80 = (unsigned __int64 *)&pv;
  LODWORD(v78) = 3;
  LOBYTE(p_pv) = 1;
  if ( (*(int (__fastcall **)(_QWORD *, LPVOID *, _QWORD, const wchar_t *))(**((_QWORD **)a1 + 2) + 24LL))(
         *((_QWORD **)a1 + 2),
         p_pv,
         0LL,
         L"VirtualDesktopIDs") < 0 )
  {
LABEL_5:
    Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)&v85, &v87);
    goto LABEL_6;
  }
  v23 = retaddr;
  if ( !v97 )
  {
    v24 = 2147943568LL;
    v25 = 123LL;
LABEL_32:
    wil::details::in1diag3::_Log_Hr(
      v23,
      (void *)v25,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)v24);
    goto LABEL_5;
  }
  v23 = retaddr;
  if ( (v97 & 0xF) != 0 )
  {
    v24 = 2147549183LL;
    v25 = 124LL;
    goto LABEL_32;
  }
  v26 = pv;
  pv = 0LL;
  v100 = v26;
  v27 = v97 >> 4;
  v101 = *v26;
  v83 = 0LL;
  v28 = (_QWORD *)*((_QWORD *)a1 + 2);
  v29 = *(int (__fastcall **)(_QWORD *, __int64, _QWORD, const wchar_t *))(*v28 + 24LL);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
    1u,
    3u,
    v14);
  v80 = (unsigned __int64 *)&v83;
  LODWORD(v78) = 3;
  LOBYTE(v30) = 1;
  if ( v29(v28, v30, 0LL, L"CurrentVirtualDesktop") >= 0 )
  {
    if ( v98 == 16 )
      v101 = *(_OWORD *)v83;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x86,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)0x8000FFFFLL);
  }
  v95 = 0LL;
  v96 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    v31,
    v32);
  for ( i = 0LL; i < v27; ++i )
  {
    v34 = &v26[i];
    v88 = 0LL;
    v35 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *, struct IVirtualDesktop **))(*v6 + 224);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v88);
    v36 = v35(v6, 0LL, v34, &v88);
    LODWORD(v81) = v36;
    v37 = (CCriticalFailureHandler *)v36;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      v38 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v86);
      v37 = (CCriticalFailureHandler *)v36;
      if ( v38 < 0 )
        goto LABEL_51;
      switch ( v86 )
      {
        case 2u:
          v36 = -2023406815;
          break;
        case 3u:
          v36 = -2023406814;
          break;
        case 4u:
          v36 = -2147418094;
          break;
        case 5u:
          v36 = -2147022986;
          break;
        default:
LABEL_51:
          CRVPrivate::cfhImmersiveShellStartup = 1;
          goto LABEL_52;
      }
      v37 = (CCriticalFailureHandler *)v36;
      LODWORD(v81) = v36;
      goto LABEL_51;
    }
LABEL_52:
    if ( (int)v37 < 0 && (_DWORD)v37 != -2147024882 && (_DWORD)v37 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v37,
        (int *)&v81,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        0x96u,
        v78,
        v80);
      v36 = (unsigned int)v81;
    }
    if ( (v36 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)v36);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v88);
      std::vector<HMONITOR__ *>::_Tidy(&v95);
      v62 = v83;
      v83 = 0LL;
      CoTaskMemFree(v62);
      CoTaskMemFree(v26);
      v63 = pv;
      pv = 0LL;
      CoTaskMemFree(v63);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v85);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v87);
      return v36;
    }
    v39 = *v34 - v101;
    if ( *v34 == (_QWORD)v101 )
      v39 = v34[1] - *((_QWORD *)&v101 + 1);
    if ( !v39 )
      Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)&v85, (__int64 *)&v88);
    v89 = 0LL;
    v40 = v88;
    v41 = **(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v88;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v89);
    v42 = v41(v40, &GUID_eddfebdb_99be_41b5_924b_71dee9de176c, &v89);
    if ( v42 >= 0 )
    {
      v91 = 0LL;
      v43 = v90;
      if ( (int)VirtualDesktopPersistence::ReadPerDesktopStringData(v90, v88, L"Name", &v91) >= 0 )
      {
        v46 = v89;
        v47 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v89 + 40LL);
        v81 = v91;
        v48 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v102, (const WCHAR **)&v81, v44);
        v49 = v47(v46, v48[1].Reserved.Reserved1);
        if ( v49 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA2,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
            (const char *)(unsigned int)v49);
        v43 = v90;
      }
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
        1u,
        3u,
        v45);
      v81 = 0LL;
      if ( (int)VirtualDesktopPersistence::ReadPerDesktopStringData(v43, v88, L"Wallpaper", &v81) >= 0 )
      {
        v51 = v89;
        v52 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v89 + 56LL);
        v53 = v81;
        v92 = v81;
        v54 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v102, &v92, v50);
        v55 = v52(v51, v54[1].Reserved.Reserved1);
        if ( v55 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xAA,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
            (const char *)(unsigned int)v55);
        v57 = *v34 - v101;
        if ( *v34 == (_QWORD)v101 )
          v57 = v34[1] - *((_QWORD *)&v101 + 1);
        v6 = v94;
        if ( !v57 )
        {
          v58 = *(__int64 (__fastcall **)(__int64 *, struct IVirtualDesktop *, PVOID))(*v94 + 128);
          v92 = v53;
          Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v102, &v92, v56)[1].Reserved.Reserved1;
          v60 = v58(v6, v88, Reserved1);
          if ( v60 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xAD,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
              (const char *)(unsigned int)v60);
        }
      }
      wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&v81);
      if ( *((_DWORD *)v90 + 6) == 1 )
      {
        if ( (__int64)(*((_QWORD *)&v95 + 1) - v95) >> 3 )
        {
          v61 = VirtualDesktopPersistence::AssignMonitorToVirtualDesktop(v90, v88, &v95);
          if ( v61 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xB5,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
              (const char *)(unsigned int)v61);
        }
      }
      wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&v91);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9D,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)(unsigned int)v42);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v89);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v88);
  }
  if ( v85 )
    goto LABEL_101;
  v64 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64, void **))(*v6 + 328);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v85);
  v65 = v64(v6, v87, 5LL, &v85);
  LODWORD(v81) = v65;
  v66 = (CCriticalFailureHandler *)v65;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_95;
  v67 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v86);
  v66 = (CCriticalFailureHandler *)v65;
  if ( v67 < 0 )
    goto LABEL_94;
  switch ( v86 )
  {
    case 2u:
      v65 = -2023406815;
      goto LABEL_93;
    case 3u:
      v65 = -2023406814;
      goto LABEL_93;
    case 4u:
      v65 = -2147418094;
LABEL_93:
      v66 = (CCriticalFailureHandler *)v65;
      LODWORD(v81) = v65;
      break;
    case 5u:
      v65 = -2147022986;
      goto LABEL_93;
  }
LABEL_94:
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_95:
  if ( (int)v66 < 0 && (_DWORD)v66 != -2147024882 && (_DWORD)v66 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v66,
      (int *)&v81,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      0xBFu,
      v78,
      v80);
    v65 = (unsigned int)v81;
  }
  if ( (v65 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBF,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)v65);
    std::vector<HMONITOR__ *>::_Tidy(&v95);
    v68 = v83;
    v83 = 0LL;
    CoTaskMemFree(v68);
    CoTaskMemFree(v26);
    v69 = pv;
    pv = 0LL;
    CoTaskMemFree(v69);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v85);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v87);
    return v65;
  }
LABEL_101:
  v12 = 1;
  std::vector<HMONITOR__ *>::_Tidy(&v95);
  v70 = v83;
  v83 = 0LL;
  CoTaskMemFree(v70);
  CoTaskMemFree(v26);
  v5 = v99;
  v8 = v93;
LABEL_6:
  v15 = v85;
  v83 = v85;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v83);
  if ( v82 == 1 )
  {
    v71 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 104LL))(v5, &v93);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice>::operator=(
      (__int64 *)&v83,
      v71);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v93);
    v15 = v83;
  }
  v16 = *v6;
  if ( v12 )
  {
    v73 = (*(__int64 (__fastcall **)(__int64 *, __int64, LPVOID))(v16 + 232))(v6, v87, v15);
    LODWORD(v81) = v73;
    v74 = v73;
    if ( CRVPrivate::cfhImmersiveShellStartup )
      goto LABEL_114;
    v75 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v82);
    v74 = v73;
    if ( v75 >= 0 )
    {
      switch ( v82 )
      {
        case 2u:
          v73 = -2023406815;
          goto LABEL_112;
        case 3u:
          v73 = -2023406814;
          goto LABEL_112;
        case 4u:
          v73 = -2147418094;
          goto LABEL_112;
        case 5u:
          v73 = -2147022986;
LABEL_112:
          v74 = v73;
          LODWORD(v81) = v73;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_114:
    if ( v74 < 0 && v74 != -2147024882 && v74 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v72,
        (int *)&v81,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        0xD5u,
        v78,
        v80);
      v73 = (int)v81;
    }
    if ( v73 >= 0 )
      goto LABEL_12;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v73);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v83);
    v76 = pv;
    pv = 0LL;
    CoTaskMemFree(v76);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v85);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v87);
    return (unsigned int)v73;
  }
  v17 = (*(__int64 (__fastcall **)(__int64 *, LPVOID))(v16 + 240))(v6, v15);
  LODWORD(v81) = v17;
  v18 = (CCriticalFailureHandler *)v17;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v22 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v82);
    v18 = (CCriticalFailureHandler *)v17;
    if ( v22 < 0 )
    {
LABEL_16:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_10;
    }
    switch ( v82 )
    {
      case 2u:
        v17 = -2023406815;
        break;
      case 3u:
        v17 = -2023406814;
        break;
      case 4u:
        v17 = -2147418094;
        break;
      case 5u:
        v17 = -2147022986;
        break;
      default:
        goto LABEL_16;
    }
    v18 = (CCriticalFailureHandler *)v17;
    LODWORD(v81) = v17;
    goto LABEL_16;
  }
LABEL_10:
  if ( (int)v18 < 0 && (_DWORD)v18 != -2147024882 && (_DWORD)v18 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v18,
      (int *)&v81,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      0xD9u,
      v78,
      v80);
    v17 = (unsigned int)v81;
  }
  if ( (v17 & 0x80000000) == 0 )
  {
LABEL_12:
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 40LL))(v8, v85);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v83);
    v19 = pv;
    pv = 0LL;
    CoTaskMemFree(v19);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v85);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v87);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD9,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
    (const char *)v17);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v83);
  v77 = pv;
  pv = 0LL;
  CoTaskMemFree(v77);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v85);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v87);
  return v17;
}
