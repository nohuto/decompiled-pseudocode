/*
 * XREFs of ?GetAppWindowRemoteDesktopProperties@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBA?AUAppWindowRemoteDesktopProperties@3456@_K@Z @ 0x1800BDAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$convert@$00U_GUID@@@guid@winrt@@CA?AU01@AEBU_GUID@@@Z @ 0x180088608 (--$convert@$00U_GUID@@@guid@winrt@@CA-AU01@AEBU_GUID@@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetAll@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$unordered_map@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@5@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@@std@@XZ @ 0x1800BDD04 (-GetAll@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AV-$unordered_.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _lambda_d0d4ed4ae20f08bb1b2e1f4766442458_::operator()_winrt::com_ptr_IVirtualDesktop___ @ 0x180281E30 (_lambda_d0d4ed4ae20f08bb1b2e1f4766442458_--operator()_winrt--com_ptr_IVirtualDesktop___.c)
 *     ?GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSystem@3456@AEBUhstring@6@@Z @ 0x180712E84 (-GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AURemoteS.c)
 *     ??1?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@QEAA@XZ @ 0x18071D1FC (--1-$pair@$$CBUhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@@std@@QEAA@XZ.c)
 *     ?HasWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x180729A90 (-HasWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::GetAppWindowRemoteDesktopProperties(
        __int64 a1,
        __int64 a2,
        HWND a3)
{
  bool v6; // r12
  struct winrt::impl::hstring_header *v7; // rdx
  void *v8; // rdi
  void *i; // rbx
  _QWORD *RemoteSystem; // rax
  winrt::Windows::Internal::Shell::implementation::RemoteSystem *v11; // r14
  __int64 v12; // rcx
  int *v13; // rax
  __int64 v14; // rcx
  int *v15; // rax
  _QWORD **v16; // rcx
  _QWORD *v17; // rdi
  _QWORD *v18; // rbx
  struct winrt::impl::hstring_header *v20; // [rsp+20h] [rbp-59h] BYREF
  __int64 v21; // [rsp+28h] [rbp-51h] BYREF
  __int128 v22; // [rsp+30h] [rbp-49h] BYREF
  void *v23; // [rsp+48h] [rbp-31h]
  __int64 v24; // [rsp+58h] [rbp-21h]
  __int128 v25; // [rsp+60h] [rbp-19h]
  _BYTE v26[16]; // [rsp+80h] [rbp+7h] BYREF

  *(_BYTE *)a2 = 0;
  *(_OWORD *)(a2 + 4) = 0LL;
  *(_BYTE *)(a2 + 20) = 1;
  v6 = GetPropW(a3, L"RemoteDesktopWindow") != 0LL;
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::GetAll(*(PSRWLOCK *)(a1 + 136));
  v8 = v23;
  for ( i = *(void **)v23; i != v8; i = *(void **)i )
  {
    if ( v6 )
    {
      v20 = (struct winrt::impl::hstring_header *)*((_QWORD *)i + 3);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
      v15 = (int *)lambda_d0d4ed4ae20f08bb1b2e1f4766442458_::operator()_winrt::com_ptr_IVirtualDesktop___(
                     v14,
                     v26,
                     &v20);
      winrt::guid::convert<1,_GUID>((__int64)&v22, v15);
      *(_OWORD *)(a2 + 4) = v22;
      *(_BYTE *)a2 = 1;
      if ( !GetPropW(a3, L"AllowOnLocalDesktops") )
        *(_BYTE *)(a2 + 20) = 0;
      break;
    }
    v20 = winrt::impl::duplicate_hstring(*((winrt::impl **)i + 2), v7);
    RemoteSystem = (_QWORD *)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetRemoteSystem(
                               &v21,
                               &v20);
    v11 = (winrt::Windows::Internal::Shell::implementation::RemoteSystem *)((*RemoteSystem - 16LL) & -(__int64)(*RemoteSystem != 0LL));
    if ( v21 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
    if ( v11 )
    {
      *(_QWORD *)&v22 = a3;
      if ( winrt::Windows::Internal::Shell::implementation::RemoteSystem::HasWindow(
             v11,
             (const struct winrt::Windows::UI::WindowId *)&v22) )
      {
        v21 = *((_QWORD *)i + 3);
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
        v13 = (int *)lambda_d0d4ed4ae20f08bb1b2e1f4766442458_::operator()_winrt::com_ptr_IVirtualDesktop___(
                       v12,
                       v26,
                       &v21);
        winrt::guid::convert<1,_GUID>((__int64)&v22, v13);
        *(_OWORD *)(a2 + 4) = v22;
        *(_BYTE *)a2 = 1;
        *(_BYTE *)(a2 + 20) = 0;
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v20);
        break;
      }
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v20);
  }
  std::_Deallocate<16,0>(v24, (v25 - v24) & 0xFFFFFFFFFFFFFFF8uLL);
  v24 = 0LL;
  v25 = 0LL;
  v16 = (_QWORD **)v23;
  **((_QWORD **)v23 + 1) = 0LL;
  v17 = *v16;
  if ( *v16 )
  {
    do
    {
      v18 = (_QWORD *)*v17;
      std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>::~pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>(v17 + 2);
      std::_Deallocate<16,0>(v17, 32LL);
      v17 = v18;
    }
    while ( v18 );
  }
  operator delete(v23, 0x20uLL);
  return a2;
}
