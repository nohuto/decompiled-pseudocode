/*
 * XREFs of ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x1800FCEEC
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800FB980 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_CreatePerMonitorComponents(
        CApplicationManager *this,
        struct IServiceProvider *a2,
        struct IImmersiveMonitor *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  int v7; // r12d
  CCriticalFailureHandler *v8; // rcx
  int v9; // ebx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v11; // rcx
  CCriticalFailureHandler *v12; // rcx
  unsigned int i; // esi
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, _QWORD, _QWORD, GUID *); // rdi
  CCriticalFailureHandler *v16; // rcx
  unsigned __int64 *v18; // [rsp+20h] [rbp-40h]
  unsigned __int64 *v19; // [rsp+28h] [rbp-38h]
  unsigned int v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23[2]; // [rsp+48h] [rbp-18h] BYREF
  int v24; // [rsp+58h] [rbp-8h]
  int v25; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v26; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp+58h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 392) & -(__int64)(this != 0LL));
  v23[1] = (__int64)v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v6, 1LL);
  v24 = v7;
  v23[0] = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v23);
  (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 72) + 32LL))(
    *((_QWORD *)this + 72),
    0LL,
    &GUID_611aa8fe_b694_4129_86af_2c2553fff785,
    v23);
  v9 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64))(*(_QWORD *)a3 + 32LL))(a3, v23[0]);
  v25 = v9;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_2;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v26) >= 0 )
  {
    switch ( v26 )
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
        goto LABEL_18;
    }
    v25 = v9;
  }
LABEL_18:
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_2:
  if ( v9 < 0 )
  {
    if ( v9 != -2147024882 && v9 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v8,
        &v25,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x13FBu,
        v18,
        v19);
      v9 = v25;
    }
    if ( v9 < 0 )
      goto LABEL_14;
  }
  v21 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
         a2,
         &IID_IImmersiveShellCreationBehavior,
         &GUID_ac46f07f_3544_48d9_b2d3_f57b388ae361,
         &v21);
  v25 = v9;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v26) < 0 )
    {
LABEL_20:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_4;
    }
    switch ( v26 )
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
        goto LABEL_20;
    }
    v25 = v9;
    goto LABEL_20;
  }
LABEL_4:
  if ( v9 >= 0 )
    goto LABEL_5;
  if ( v9 != -2147024882 && v9 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v11,
      &v25,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x13FFu,
      v18,
      v19);
    v9 = v25;
  }
  if ( v9 >= 0 )
  {
LABEL_5:
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v21 + 72LL))(v21, 0LL, &v27);
    v25 = v9;
    for ( i = 0; ; ++i )
    {
      if ( CRVPrivate::cfhImmersiveShellStartup )
        goto LABEL_7;
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v26) >= 0 )
      {
        switch ( v26 )
        {
          case 2u:
            v9 = -2023406815;
            goto LABEL_61;
          case 3u:
            v9 = -2023406814;
            goto LABEL_61;
          case 4u:
            v9 = -2147418094;
            goto LABEL_61;
          case 5u:
            v9 = -2147022986;
LABEL_61:
            v25 = v9;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_7:
      if ( v9 < 0 )
      {
        if ( v9 != -2147024882 && v9 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v12,
            &v25,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            0x1404u,
            v18,
            v19);
          v9 = v25;
        }
        if ( v9 < 0 )
          break;
      }
      if ( i >= v27 )
        break;
      v22 = 0LL;
      v14 = v21;
      v15 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *))(*(_QWORD *)v21 + 80LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
      v18 = &v22;
      v9 = v15(v14, 0LL, i, &GUID_00000000_0000_0000_c000_000000000046);
      v25 = v9;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v20) < 0 )
        {
LABEL_24:
          CRVPrivate::cfhImmersiveShellStartup = 1;
          goto LABEL_10;
        }
        switch ( v20 )
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
            goto LABEL_24;
        }
        v25 = v9;
        goto LABEL_24;
      }
LABEL_10:
      if ( v9 >= 0 )
        goto LABEL_11;
      if ( v9 != -2147024882 && v9 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v16,
          &v25,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0x140Du,
          &v22,
          v19);
        v9 = v25;
      }
      if ( v9 >= 0 )
      {
LABEL_11:
        v9 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned __int64))(*(_QWORD *)a3 + 32LL))(a3, v22);
        v25 = v9;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v23);
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return (unsigned int)v9;
}
