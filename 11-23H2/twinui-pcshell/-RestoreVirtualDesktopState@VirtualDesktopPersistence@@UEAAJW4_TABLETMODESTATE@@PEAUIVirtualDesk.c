/*
 * XREFs of ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x180162340
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000E158 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180024560 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180118CC8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180186BAC (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReadPerDesktopStringData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGPEAPEAG@Z @ 0x1802E73D6 (-ReadPerDesktopStringData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGPEAPEAG@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall VirtualDesktopPersistence::RestoreVirtualDesktopState(
        VirtualDesktopPersistence *a1,
        unsigned int a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rdi
  __int64 *v6; // r14
  __int64 (__fastcall *v8)(__int64 *, __int64 *); // rbx
  unsigned int v9; // ebx
  CCriticalFailureHandler *v10; // rcx
  char v11; // si
  LPVOID *p_pv; // rdx
  __int64 v13; // r9
  LPVOID v14; // rbx
  __int64 v15; // rax
  unsigned int v16; // ebx
  CCriticalFailureHandler *v17; // rcx
  void *v18; // rcx
  LSTATUS DWORD; // eax
  LSTATUS v21; // eax
  wil::details::in1diag3 *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rdx
  _OWORD *v25; // rdi
  unsigned __int64 v26; // r15
  _QWORD *v27; // rbx
  int (__fastcall *v28)(_QWORD *, __int64, _QWORD, const wchar_t *); // rsi
  __int64 v29; // rdx
  unsigned __int64 i; // r12
  _QWORD *v31; // r14
  __int64 *v32; // rsi
  __int64 (__fastcall *v33)(__int64 *, _QWORD *, struct IVirtualDesktop **); // rbx
  unsigned int v34; // ebx
  CCriticalFailureHandler *v35; // rcx
  LSTATUS v36; // eax
  __int64 v37; // rax
  struct IVirtualDesktop *v38; // rbx
  __int64 (__fastcall *v39)(struct IVirtualDesktop *, GUID *, __int64 *); // rsi
  int v40; // eax
  unsigned __int16 **v41; // rax
  VirtualDesktopPersistence *v42; // rbx
  __int64 v43; // r9
  __int64 v44; // rbx
  __int64 (__fastcall *v45)(__int64, _QWORD); // rsi
  __int64 v46; // rax
  int v47; // eax
  unsigned __int16 **v48; // rax
  __int64 v49; // rbx
  __int64 (__fastcall *v50)(__int64, _QWORD); // rsi
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rax
  __int64 *v54; // rsi
  __int64 (__fastcall *v55)(__int64 *, struct IVirtualDesktop *, __int64); // rbx
  __int64 v56; // r8
  int v57; // eax
  void *v58; // rcx
  void *v59; // rcx
  __int64 (__fastcall *v60)(__int64 *, __int64, __int64, void **); // rbx
  unsigned int v61; // ebx
  CCriticalFailureHandler *v62; // rcx
  LSTATUS v63; // eax
  void *v64; // rcx
  void *v65; // rcx
  void *v66; // rcx
  __int64 *v67; // rax
  CCriticalFailureHandler *v68; // rcx
  int v69; // ebx
  int v70; // edx
  LSTATUS v71; // eax
  void *v72; // rcx
  void *v73; // rcx
  unsigned __int64 *v74; // [rsp+20h] [rbp-118h]
  unsigned __int64 *v75; // [rsp+28h] [rbp-110h]
  unsigned __int64 *v76; // [rsp+28h] [rbp-110h]
  LPVOID v77; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v78; // [rsp+48h] [rbp-F0h] BYREF
  LPVOID v79; // [rsp+50h] [rbp-E8h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-E0h] BYREF
  void *v81; // [rsp+60h] [rbp-D8h] BYREF
  unsigned int v82; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v83; // [rsp+70h] [rbp-C8h] BYREF
  struct IVirtualDesktop *v84; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v85; // [rsp+80h] [rbp-B8h] BYREF
  __int64 *v86; // [rsp+88h] [rbp-B0h]
  LPVOID v87; // [rsp+90h] [rbp-A8h] BYREF
  LPVOID v88; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v89; // [rsp+A0h] [rbp-98h] BYREF
  VirtualDesktopPersistence *v90; // [rsp+A8h] [rbp-90h]
  unsigned __int64 v91; // [rsp+B0h] [rbp-88h]
  __int64 v92; // [rsp+B8h] [rbp-80h]
  __int64 v93; // [rsp+C0h] [rbp-78h]
  _OWORD *v94; // [rsp+C8h] [rbp-70h]
  __int128 v95; // [rsp+D0h] [rbp-68h]
  _BYTE v96[32]; // [rsp+E0h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v5 = a4;
  v89 = a4;
  v6 = a3;
  v86 = a3;
  v78 = a2;
  v90 = a1;
  v93 = a5;
  v83 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(*a3 + 360);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v83);
  v9 = v8(v6, &v83);
  LODWORD(v77) = v9;
  v10 = (CCriticalFailureHandler *)v9;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_2;
  DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v82);
  v10 = (CCriticalFailureHandler *)v9;
  if ( DWORD >= 0 )
  {
    switch ( v82 )
    {
      case 2u:
        v9 = -2023406815;
        break;
      case 3u:
        v9 = -2023406814;
        break;
      case 4u:
        v9 = -2147418094;
        break;
      case 5u:
        v9 = -2147022986;
        break;
      default:
        goto LABEL_14;
    }
    v10 = (CCriticalFailureHandler *)v9;
    LODWORD(v77) = v9;
  }
LABEL_14:
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_2:
  if ( (int)v10 < 0 && (_DWORD)v10 != -2147024882 && v9 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v10,
      (int *)&v77,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      0x6Au,
      v74,
      v75);
    v9 = (unsigned int)v77;
  }
  if ( (v9 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v83);
    return v9;
  }
  v81 = 0LL;
  pv = 0LL;
  v11 = 0;
  p_pv = &pv;
  v76 = (unsigned __int64 *)&pv;
  LODWORD(v74) = 3;
  LOBYTE(p_pv) = 1;
  if ( (*(int (__fastcall **)(_QWORD *, LPVOID *, _QWORD, const wchar_t *))(**((_QWORD **)a1 + 2) + 24LL))(
         *((_QWORD **)a1 + 2),
         p_pv,
         0LL,
         L"VirtualDesktopIDs") < 0 )
  {
LABEL_5:
    Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)&v81, &v83);
    goto LABEL_6;
  }
  v22 = retaddr;
  if ( !v91 )
  {
    v23 = 2147943568LL;
    v24 = 116LL;
LABEL_32:
    wil::details::in1diag3::_Log_Hr(
      v22,
      (void *)v24,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)v23);
    goto LABEL_5;
  }
  v22 = retaddr;
  if ( (v91 & 0xF) != 0 )
  {
    v23 = 2147549183LL;
    v24 = 117LL;
    goto LABEL_32;
  }
  v25 = pv;
  pv = 0LL;
  v94 = v25;
  v26 = v91 >> 4;
  v95 = *v25;
  v79 = 0LL;
  v27 = (_QWORD *)*((_QWORD *)a1 + 2);
  v28 = *(int (__fastcall **)(_QWORD *, __int64, _QWORD, const wchar_t *))(*v27 + 24LL);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
    1u,
    3u,
    v13);
  v76 = (unsigned __int64 *)&v79;
  LODWORD(v74) = 3;
  LOBYTE(v29) = 1;
  if ( v28(v27, v29, 0LL, L"CurrentVirtualDesktop") >= 0 )
  {
    if ( v92 == 16 )
      v95 = *(_OWORD *)v79;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7E,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)0x8000FFFFLL);
  }
  for ( i = 0LL; i < v26; ++i )
  {
    v31 = &v25[i];
    v84 = 0LL;
    v32 = v86;
    v33 = *(__int64 (__fastcall **)(__int64 *, _QWORD *, struct IVirtualDesktop **))(*v86 + 240);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v84);
    v34 = v33(v32, v31, &v84);
    LODWORD(v77) = v34;
    v35 = (CCriticalFailureHandler *)v34;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      v36 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v82);
      v35 = (CCriticalFailureHandler *)v34;
      if ( v36 < 0 )
        goto LABEL_51;
      switch ( v82 )
      {
        case 2u:
          v34 = -2023406815;
          break;
        case 3u:
          v34 = -2023406814;
          break;
        case 4u:
          v34 = -2147418094;
          break;
        case 5u:
          v34 = -2147022986;
          break;
        default:
LABEL_51:
          CRVPrivate::cfhImmersiveShellStartup = 1;
          goto LABEL_52;
      }
      v35 = (CCriticalFailureHandler *)v34;
      LODWORD(v77) = v34;
      goto LABEL_51;
    }
LABEL_52:
    if ( (int)v35 < 0 && (_DWORD)v35 != -2147024882 && v34 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v35,
        (int *)&v77,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        0x87u,
        v74,
        v76);
      v34 = (unsigned int)v77;
    }
    if ( (v34 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x87,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)v34);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v84);
      v58 = v79;
      v79 = 0LL;
      CoTaskMemFree(v58);
      CoTaskMemFree(v25);
      v59 = pv;
      pv = 0LL;
      CoTaskMemFree(v59);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v81);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v83);
      return v34;
    }
    v37 = *v31 - v95;
    if ( *v31 == (_QWORD)v95 )
      v37 = v31[1] - *((_QWORD *)&v95 + 1);
    if ( !v37 )
      Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)&v81, (__int64 *)&v84);
    v85 = 0LL;
    v38 = v84;
    v39 = **(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v84;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v85);
    v40 = v39(v38, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v85);
    if ( v40 >= 0 )
    {
      v87 = 0LL;
      v41 = (unsigned __int16 **)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v87);
      v42 = v90;
      if ( (int)VirtualDesktopPersistence::ReadPerDesktopStringData(v90, v84, L"Name", v41) >= 0 )
      {
        v44 = v85;
        v45 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v85 + 24LL);
        v77 = v87;
        v46 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v96, &v77);
        v47 = v45(v44, *(_QWORD *)(v46 + 24));
        if ( v47 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x93,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
            (const char *)(unsigned int)v47);
        v42 = v90;
      }
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
        1u,
        3u,
        v43);
      v77 = 0LL;
      v48 = (unsigned __int16 **)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v77);
      if ( (int)VirtualDesktopPersistence::ReadPerDesktopStringData(v42, v84, L"Wallpaper", v48) >= 0 )
      {
        v49 = v85;
        v50 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v85 + 40LL);
        v88 = v77;
        v51 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v96, &v88);
        v52 = v50(v49, *(_QWORD *)(v51 + 24));
        if ( v52 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x9B,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
            (const char *)(unsigned int)v52);
        v53 = *v31 - v95;
        if ( *v31 == (_QWORD)v95 )
          v53 = v31[1] - *((_QWORD *)&v95 + 1);
        if ( !v53 )
        {
          v54 = v86;
          v55 = *(__int64 (__fastcall **)(__int64 *, struct IVirtualDesktop *, __int64))(*v86 + 128);
          v88 = v77;
          v56 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v96, &v88) + 24);
          v57 = v55(v54, v84, v56);
          if ( v57 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x9E,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
              (const char *)(unsigned int)v57);
        }
      }
      if ( v77 )
        CoTaskMemFree(v77);
      if ( v87 )
        CoTaskMemFree(v87);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)(unsigned int)v40);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v85);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v84);
  }
  v6 = v86;
  if ( v81 )
    goto LABEL_100;
  v60 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64, void **))(*v86 + 376);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v81);
  v61 = v60(v6, v83, 5LL, &v81);
  LODWORD(v77) = v61;
  v62 = (CCriticalFailureHandler *)v61;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_94;
  v63 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v82);
  v62 = (CCriticalFailureHandler *)v61;
  if ( v63 < 0 )
    goto LABEL_93;
  switch ( v82 )
  {
    case 2u:
      v61 = -2023406815;
      goto LABEL_92;
    case 3u:
      v61 = -2023406814;
      goto LABEL_92;
    case 4u:
      v61 = -2147418094;
LABEL_92:
      v62 = (CCriticalFailureHandler *)v61;
      LODWORD(v77) = v61;
      break;
    case 5u:
      v61 = -2147022986;
      goto LABEL_92;
  }
LABEL_93:
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_94:
  if ( (int)v62 < 0 && (_DWORD)v62 != -2147024882 && v61 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v62,
      (int *)&v77,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      0xAAu,
      v74,
      v76);
    v61 = (unsigned int)v77;
  }
  if ( (v61 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAA,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)v61);
    v64 = v79;
    v79 = 0LL;
    CoTaskMemFree(v64);
    CoTaskMemFree(v25);
    v65 = pv;
    pv = 0LL;
    CoTaskMemFree(v65);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v81);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v83);
    return v61;
  }
LABEL_100:
  v11 = 1;
  v66 = v79;
  v79 = 0LL;
  CoTaskMemFree(v66);
  CoTaskMemFree(v25);
  v5 = v89;
LABEL_6:
  v14 = v81;
  v79 = v81;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v79);
  if ( v78 == 1 )
  {
    v67 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 96LL))(v5, &v89);
    Microsoft::WRL::ComPtr<IClassicWindow>::operator=((__int64 *)&v79, v67);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v89);
    v14 = v79;
  }
  v15 = *v6;
  if ( v11 )
  {
    v69 = (*(__int64 (__fastcall **)(__int64 *, __int64, LPVOID))(v15 + 248))(v6, v83, v14);
    LODWORD(v77) = v69;
    v70 = v69;
    if ( CRVPrivate::cfhImmersiveShellStartup )
      goto LABEL_113;
    v71 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v78);
    v70 = v69;
    if ( v71 >= 0 )
    {
      switch ( v78 )
      {
        case 2u:
          v69 = -2023406815;
          goto LABEL_111;
        case 3u:
          v69 = -2023406814;
          goto LABEL_111;
        case 4u:
          v69 = -2147418094;
          goto LABEL_111;
        case 5u:
          v69 = -2147022986;
LABEL_111:
          v70 = v69;
          LODWORD(v77) = v69;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_113:
    if ( v70 < 0 && v70 != -2147024882 && v69 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v68,
        (int *)&v77,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        0xC0u,
        v74,
        v76);
      v69 = (int)v77;
    }
    if ( v69 >= 0 )
      goto LABEL_12;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC0,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v69);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v79);
    v72 = pv;
    pv = 0LL;
    CoTaskMemFree(v72);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v81);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v83);
    return (unsigned int)v69;
  }
  v16 = (*(__int64 (__fastcall **)(__int64 *, LPVOID))(v15 + 256))(v6, v14);
  LODWORD(v77) = v16;
  v17 = (CCriticalFailureHandler *)v16;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v21 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v78);
    v17 = (CCriticalFailureHandler *)v16;
    if ( v21 < 0 )
    {
LABEL_16:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_10;
    }
    switch ( v78 )
    {
      case 2u:
        v16 = -2023406815;
        break;
      case 3u:
        v16 = -2023406814;
        break;
      case 4u:
        v16 = -2147418094;
        break;
      case 5u:
        v16 = -2147022986;
        break;
      default:
        goto LABEL_16;
    }
    v17 = (CCriticalFailureHandler *)v16;
    LODWORD(v77) = v16;
    goto LABEL_16;
  }
LABEL_10:
  if ( (int)v17 < 0 && (_DWORD)v17 != -2147024882 && v16 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v17,
      (int *)&v77,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      0xC4u,
      v74,
      v76);
    v16 = (unsigned int)v77;
  }
  if ( (v16 & 0x80000000) == 0 )
  {
LABEL_12:
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v93 + 40LL))(v93, v81);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v79);
    v18 = pv;
    pv = 0LL;
    CoTaskMemFree(v18);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v81);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v83);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC4,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
    (const char *)v16);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v79);
  v73 = pv;
  pv = 0LL;
  CoTaskMemFree(v73);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v81);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v83);
  return v16;
}
