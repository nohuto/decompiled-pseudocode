/*
 * XREFs of ?RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ @ 0x1800E07D4
 * Callers:
 *     ??$MakeAndInitialize@VWindowingEnvironmentManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18015E4AC (--$MakeAndInitialize@VWindowingEnvironmentManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ @ 0x180156070 (-ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowingEnvironmentManager::RuntimeClassInitialize(WindowingEnvironmentManager *this)
{
  unsigned int v2; // ebx
  CCriticalFailureHandler *v3; // rcx
  __int64 v4; // rcx
  CCriticalFailureHandler *v5; // rcx
  int ActivationFactory; // ebx
  __int64 v7; // rcx
  CCriticalFailureHandler *v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  CCriticalFailureHandler *v11; // rcx
  int v12; // ebx
  CCriticalFailureHandler *v13; // rcx
  int v14; // ebx
  int v15; // edx
  int DWORD; // eax
  int v18; // eax
  unsigned __int64 *v19; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-44h] BYREF
  RTL_SRWLOCK *v23; // [rsp+38h] [rbp-40h] BYREF
  _BYTE hstringHeader[32]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *(GUID *)hstringHeader = GUID_9c4a7f24_303d_47a7_994e_503f26217d06;
  *(_OWORD *)&hstringHeader[16] = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (WindowingEnvironmentManager *)((char *)this + 72),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)hstringHeader,
         1uLL);
  v21 = v2;
  v3 = (CCriticalFailureHandler *)v2;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v22);
    v3 = (CCriticalFailureHandler *)v2;
    if ( DWORD < 0 )
    {
LABEL_21:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_2;
    }
    switch ( v22 )
    {
      case 2u:
        v2 = -2023406815;
        break;
      case 3u:
        v2 = -2023406814;
        break;
      case 4u:
        v2 = -2147418094;
        break;
      case 5u:
        v2 = -2147022986;
        break;
      default:
        goto LABEL_21;
    }
    v3 = (CCriticalFailureHandler *)v2;
    v21 = v2;
    goto LABEL_21;
  }
LABEL_2:
  if ( (int)v3 < 0 && (_DWORD)v3 != -2147024882 && (_DWORD)v3 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      &v21,
      L"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      0xEu,
      v19,
      v20);
    v2 = v21;
  }
  if ( (v2 & 0x80000000) != 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      (const char *)v2,
      (int)v19);
  v4 = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *(_QWORD *)&hstringHeader[24] = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    (HSTRING_HEADER *)hstringHeader,
    L"Windows.Internal.ApplicationModel.WindowingEnvironment.WindowingEnvironmentModel",
    0x51u,
    0x50u);
  ActivationFactory = RoGetActivationFactory(
                        *(_QWORD *)&hstringHeader[24],
                        &GUID_23ebdea9_9eed_48c0_8dae_a9affe06eada,
                        (char *)this + 184);
  v21 = ActivationFactory;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v22) < 0 )
    {
LABEL_23:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_7;
    }
    switch ( v22 )
    {
      case 2u:
        ActivationFactory = -2023406815;
        break;
      case 3u:
        ActivationFactory = -2023406814;
        break;
      case 4u:
        ActivationFactory = -2147418094;
        break;
      case 5u:
        ActivationFactory = -2147022986;
        break;
      default:
        goto LABEL_23;
    }
    v21 = ActivationFactory;
    goto LABEL_23;
  }
LABEL_7:
  if ( ActivationFactory < 0 )
  {
    if ( ActivationFactory != -2147024882 && ActivationFactory != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v5,
        &v21,
        L"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        0x12u,
        v19,
        v20);
      ActivationFactory = v21;
    }
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x12,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)ActivationFactory,
        (int)v19);
  }
  v7 = *((_QWORD *)this + 24);
  *((_QWORD *)this + 24) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *(_QWORD *)&hstringHeader[24] = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    (HSTRING_HEADER *)hstringHeader,
    L"Windows.Internal.ApplicationModel.WindowingEnvironment.WindowingEnvironmentModelBatch",
    0x56u,
    0x55u);
  v9 = RoGetActivationFactory(
         *(_QWORD *)&hstringHeader[24],
         &GUID_4eb73a4e_44ee_4f8d_910e_1b9662698b21,
         (char *)this + 192);
  v21 = v9;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v22) < 0 )
    {
LABEL_25:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_11;
    }
    switch ( v22 )
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
        goto LABEL_25;
    }
    v21 = v9;
    goto LABEL_25;
  }
LABEL_11:
  if ( v9 < 0 )
  {
    if ( v9 != -2147024882 && v9 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v8,
        &v21,
        L"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        0x15u,
        v19,
        v20);
      v9 = v21;
    }
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v9,
        (int)v19);
  }
  v10 = *((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  *(_QWORD *)&hstringHeader[24] = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    (HSTRING_HEADER *)hstringHeader,
    L"Windows.Internal.ApplicationModel.WindowingEnvironment.DisplayRegionModel",
    0x4Au,
    0x49u);
  v12 = RoGetActivationFactory(
          *(_QWORD *)&hstringHeader[24],
          &GUID_c3eca212_6c7b_43a3_be47_ca8388a8643e,
          (char *)this + 200);
  v21 = v12;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v22) < 0 )
    {
LABEL_27:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_15;
    }
    switch ( v22 )
    {
      case 2u:
        v12 = -2023406815;
        break;
      case 3u:
        v12 = -2023406814;
        break;
      case 4u:
        v12 = -2147418094;
        break;
      case 5u:
        v12 = -2147022986;
        break;
      default:
        goto LABEL_27;
    }
    v21 = v12;
    goto LABEL_27;
  }
LABEL_15:
  if ( v12 < 0 )
  {
    if ( v12 != -2147024882 && v12 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v11,
        &v21,
        L"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        0x18u,
        v19,
        v20);
      v12 = v21;
    }
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v12,
        (int)v19);
  }
  wil::AcquireSRWLockExclusive(&v23, (char *)this + 160);
  v14 = WindowingEnvironmentManager::ResetWindowingEnvironments(this);
  v21 = v14;
  v15 = v14;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v18 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v22);
    v15 = v14;
    if ( v18 < 0 )
    {
LABEL_29:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_17;
    }
    switch ( v22 )
    {
      case 2u:
        v14 = -2023406815;
        break;
      case 3u:
        v14 = -2023406814;
        break;
      case 4u:
        v14 = -2147418094;
        break;
      case 5u:
        v14 = -2147022986;
        break;
      default:
        goto LABEL_29;
    }
    v15 = v14;
    v21 = v14;
    goto LABEL_29;
  }
LABEL_17:
  if ( v15 < 0 && v15 != -2147024882 && v15 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v13,
      &v21,
      L"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      0x1Cu,
      v19,
      v20);
    v14 = v21;
  }
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      (const char *)(unsigned int)v14,
      (int)v19);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v23);
  return 0LL;
}
