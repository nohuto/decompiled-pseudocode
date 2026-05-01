/*
 * XREFs of ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x1803B8394
 * Callers:
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1803B81E0 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?add_ref@?$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ @ 0x18004159C (-add_ref@-$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18010F5F8 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 *     ??$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z @ 0x1803B5F00 (--$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1803B7048 (--0-$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@M.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1803B70BC (--0Iterator@-$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V-$ComPtr@UIPenWorkspaceLayoutIte.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1803B7D84 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V-$ComPtr@UIPenWor.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1803B8B7C (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ?GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z @ 0x1803BA518 (-GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadOEMApps(
        PenWorkspace::Discover::RecentAppsCache *this,
        struct _FILETIME a2,
        int *a3)
{
  HRESULT v5; // eax
  unsigned int v6; // ebx
  LPVOID v7; // rbx
  void (__fastcall *v8)(LPVOID, __int64, __int64 *); // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  int (__fastcall *v12)(__int64, HSTRING *); // r15
  HSTRING v13; // r14
  DWORD LastError; // edi
  unsigned int v15; // r8d
  __int64 v16; // rax
  HSTRING *v17; // r8
  const unsigned __int16 *v18; // rax
  unsigned __int64 v19; // rdx
  HSTRING v21; // [rsp+30h] [rbp-89h] BYREF
  HSTRING v22; // [rsp+38h] [rbp-81h] BYREF
  HSTRING string; // [rsp+40h] [rbp-79h] BYREF
  __int64 v24; // [rsp+48h] [rbp-71h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-69h] BYREF
  const unsigned __int16 *StringRawBuffer; // [rsp+58h] [rbp-61h] BYREF
  struct _FILETIME v27; // [rsp+60h] [rbp-59h] BYREF
  __int64 v28; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v29; // [rsp+70h] [rbp-49h] BYREF
  __int64 v30[2]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v31; // [rsp+88h] [rbp-31h] BYREF
  int v32; // [rsp+90h] [rbp-29h]
  int v33; // [rsp+98h] [rbp-21h] BYREF
  __int64 v34[2]; // [rsp+A0h] [rbp-19h] BYREF
  _BYTE v35[32]; // [rsp+B0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  *a3 = 0;
  v21 = (HSTRING)(*(_QWORD *)&a2 + 100000000LL);
  v27 = (struct _FILETIME)(*(_QWORD *)&a2 + 100000000LL);
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  v5 = CoCreateInstance(
         &GUID_9280e842_f931_4d24_b074_739fb4da43f4,
         0LL,
         1u,
         &GUID_9302a129_7433_42a0_9cb8_5da5964f2756,
         &ppv);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v24 = 0LL;
    v7 = ppv;
    v8 = *(void (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 32LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    v8(v7, 1LL, &v24);
    if ( v24 )
    {
      details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>(
        (__int64)&v31,
        v24);
      details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::Iterator::Iterator(
        (__int64)&v29,
        (__int64)&v31,
        0);
      details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::Iterator::Iterator(
        (__int64)&v33,
        (__int64)&v31,
        v32);
      while ( v29 != v33 || v30[1] != v34[1] )
      {
        v9 = v30[0];
        v28 = v30[0];
        winrt::com_ptr<IServiceProvider>::add_ref(&v28);
        string = 0LL;
        v21 = 0LL;
        v10 = *(_QWORD *)v9;
        string = 0LL;
        if ( (*(int (__fastcall **)(__int64, HSTRING *))(v10 + 24))(v9, &string) < 0 )
        {
          v12 = *(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v9 + 32LL);
          v13 = v21;
          if ( v21 )
          {
            LastError = GetLastError();
            WindowsDeleteString(v13);
            SetLastError(LastError);
          }
          v21 = 0LL;
          if ( v12(v9, &v21) >= 0 && v21 )
          {
            StringRawBuffer = WindowsGetStringRawBuffer(v21, 0LL);
            v22 = 0LL;
            WindowsDeleteString(0LL);
            v22 = 0LL;
            v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v35, &StringRawBuffer, v15);
            if ( (int)PenWorkspace::Discover::GetApplicationUserModelIdFromLinkFile(
                        *(HSTRING *)(v16 + 24),
                        (HSTRING)&v22,
                        v17) >= 0 )
            {
              v18 = WindowsGetStringRawBuffer(v22, 0LL);
              if ( (int)PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, v18, &v27) >= 0 )
              {
                PenWorkspaceBrokerTelemetry::OemAppLoaded<unsigned short const * &>(&StringRawBuffer, v19);
                ++*a3;
              }
            }
            WindowsDeleteString(v22);
            v22 = 0LL;
          }
        }
        else
        {
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          if ( (int)PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, StringRawBuffer, &v27) >= 0 )
          {
            PenWorkspaceBrokerTelemetry::OemAppLoaded<unsigned short const * &>(&StringRawBuffer, v11);
            ++*a3;
          }
        }
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v21);
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v28);
        ++v29;
        details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::Iterator::GetCurrentObject(&v29);
      }
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v34);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v30);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
    }
    v6 = 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B4,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  return v6;
}
