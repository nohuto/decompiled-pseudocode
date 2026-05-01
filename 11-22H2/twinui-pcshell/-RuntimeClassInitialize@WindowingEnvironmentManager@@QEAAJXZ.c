/*
 * XREFs of ?RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ @ 0x1800FCBA4
 * Callers:
 *     ??$MakeAndInitialize@VWindowingEnvironmentManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18019540C (--$MakeAndInitialize@VWindowingEnvironmentManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ @ 0x18018BD0C (-ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowingEnvironmentManager::RuntimeClassInitialize(RTL_SRWLOCK *this)
{
  unsigned int v2; // ebx
  CCriticalFailureHandler *v3; // rcx
  PVOID Ptr; // rcx
  CCriticalFailureHandler *v5; // rcx
  int ActivationFactory; // ebx
  PVOID v7; // rcx
  CCriticalFailureHandler *v8; // rcx
  int v9; // ebx
  PVOID v10; // rcx
  CCriticalFailureHandler *v11; // rcx
  int v12; // ebx
  CCriticalFailureHandler *v13; // rcx
  int v14; // ebx
  int v15; // edx
  LSTATUS DWORD; // eax
  LSTATUS v18; // eax
  unsigned __int64 *v19; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v20; // [rsp+28h] [rbp-60h]
  int v21; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-54h] BYREF
  RTL_SRWLOCK *v23; // [rsp+38h] [rbp-50h]
  _BYTE hstringHeader[32]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  *(GUID *)hstringHeader = GUID_9c4a7f24_303d_47a7_994e_503f26217d06;
  *(_OWORD *)&hstringHeader[16] = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (CImmersiveShellComponent *)&this[9],
         (const struct CImmersiveShellComponent::ISC_SERVICE *)hstringHeader,
         1u);
  v21 = v2;
  v3 = (CCriticalFailureHandler *)v2;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v22);
    v3 = (CCriticalFailureHandler *)v2;
    if ( DWORD < 0 )
    {
LABEL_23:
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
        goto LABEL_23;
    }
    v3 = (CCriticalFailureHandler *)v2;
    v21 = v2;
    goto LABEL_23;
  }
LABEL_2:
  if ( (int)v3 < 0 && (_DWORD)v3 != -2147024882 && v2 != -2144862209 )
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
  Ptr = this[23].Ptr;
  this[23].Ptr = 0LL;
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  *(_QWORD *)&hstringHeader[24] = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    (HSTRING_HEADER *)hstringHeader,
    L"Windows.Internal.ApplicationModel.WindowingEnvironment.WindowingEnvironmentModel",
    0x51u,
    0x50u);
  ActivationFactory = RoGetActivationFactory(
                        *(_QWORD *)&hstringHeader[24],
                        &GUID_23ebdea9_9eed_48c0_8dae_a9affe06eada,
                        &this[23]);
  v21 = ActivationFactory;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v22) < 0 )
    {
LABEL_25:
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
        goto LABEL_25;
    }
    v21 = ActivationFactory;
    goto LABEL_25;
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
  v7 = this[24].Ptr;
  this[24].Ptr = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 16LL))(v7);
  *(_QWORD *)&hstringHeader[24] = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    (HSTRING_HEADER *)hstringHeader,
    L"Windows.Internal.ApplicationModel.WindowingEnvironment.WindowingEnvironmentModelBatch",
    0x56u,
    0x55u);
  v9 = RoGetActivationFactory(*(_QWORD *)&hstringHeader[24], &GUID_4eb73a4e_44ee_4f8d_910e_1b9662698b21, &this[24]);
  v21 = v9;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v22) < 0 )
    {
LABEL_27:
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
        goto LABEL_27;
    }
    v21 = v9;
    goto LABEL_27;
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
  v10 = this[25].Ptr;
  this[25].Ptr = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
  *(_QWORD *)&hstringHeader[24] = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    (HSTRING_HEADER *)hstringHeader,
    L"Windows.Internal.ApplicationModel.WindowingEnvironment.DisplayRegionModel",
    0x4Au,
    0x49u);
  v12 = RoGetActivationFactory(*(_QWORD *)&hstringHeader[24], &GUID_c3eca212_6c7b_43a3_be47_ca8388a8643e, &this[25]);
  v21 = v12;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v22) < 0 )
    {
LABEL_29:
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
        goto LABEL_29;
    }
    v21 = v12;
    goto LABEL_29;
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
  AcquireSRWLockExclusive(this + 20);
  v23 = this + 20;
  v14 = WindowingEnvironmentManager::ResetWindowingEnvironments((WindowingEnvironmentManager *)this);
  v21 = v14;
  v15 = v14;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v18 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v22);
    v15 = v14;
    if ( v18 < 0 )
    {
LABEL_31:
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
        goto LABEL_31;
    }
    v15 = v14;
    v21 = v14;
    goto LABEL_31;
  }
LABEL_17:
  if ( v15 < 0 && v15 != -2147024882 && v14 != -2144862209 )
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
  if ( this != (RTL_SRWLOCK *)-160LL )
    ReleaseSRWLockExclusive(this + 20);
  return 0LL;
}
