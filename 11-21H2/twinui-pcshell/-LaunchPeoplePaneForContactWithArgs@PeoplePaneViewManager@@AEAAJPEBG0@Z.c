/*
 * XREFs of ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x1803D8584
 * Callers:
 *     _lambda_1e2111a03014b93961ed011eca3e3935_::operator() @ 0x1803D5600 (_lambda_1e2111a03014b93961ed011eca3e3935_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_42c463a65dbba8f6c2411568f097b711___::Run @ 0x1803D90B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_42c463a65dbba8f6c2411568f097b711___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x18022AC3E (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1802FB4F4 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x1803D9DFC (-s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::LaunchPeoplePaneForContactWithArgs(
        PeoplePaneViewManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HRESULT v8; // eax
  __int64 v9; // rdx
  HWND WindowW; // rax
  const char *v11; // r9
  LPVOID v12; // rbx
  __int64 (__fastcall *v13)(LPVOID, const unsigned __int16 *, _QWORD, _QWORD, PeoplePaneViewManager **); // rdi
  const unsigned __int16 *AppId; // rax
  _QWORD v16[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  PeoplePaneViewManager *v18; // [rsp+70h] [rbp+20h] BYREF
  LPVOID ppv; // [rsp+88h] [rbp+38h] BYREF

  v18 = this;
  memset(v16, 0, 24);
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
         v16,
         L"Windows.Internal.ShellExperience.PeoplePane",
         0x2BuLL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(v16, L" ", 1uLL);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 247LL;
      goto LABEL_12;
    }
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
           (__int64)v16,
           (__int64)a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 248LL;
      goto LABEL_12;
    }
    if ( a3 )
    {
      v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(v16, L" ", 1uLL);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 252LL;
        goto LABEL_12;
      }
      v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
             (__int64)v16,
             (__int64)a3);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 253LL;
        goto LABEL_12;
      }
    }
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
    v8 = CoCreateInstance(&CLSID_ApplicationActivationClient, 0LL, 1u, &GUID_2e941141_7f97_4756_ba1d_9decde894a3d, &ppv);
    v6 = v8;
    if ( v8 >= 0 )
    {
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      if ( !SetForegroundWindow(WindowW) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x107,
          (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          v11);
      v12 = ppv;
      v13 = *(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, _QWORD, _QWORD, PeoplePaneViewManager **))(*(_QWORD *)ppv + 24LL);
      AppId = PeoplePaneViewManager::s_GetAppId();
      v8 = v13(v12, AppId, v16[0], 0LL, &v18);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v6 = 0;
        goto LABEL_21;
      }
      v9 = 270LL;
    }
    else
    {
      v9 = 261LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_21:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
    goto LABEL_22;
  }
  v7 = 246LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_22:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v16);
  return v6;
}
