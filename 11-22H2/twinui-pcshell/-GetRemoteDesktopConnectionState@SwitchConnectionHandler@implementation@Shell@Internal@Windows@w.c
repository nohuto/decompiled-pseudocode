/*
 * XREFs of ?GetRemoteDesktopConnectionState@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBA?AW4CloudPCState@3456@AEBUguid@6@@Z @ 0x180731D90
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetAll@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$unordered_map@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@5@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@@std@@XZ @ 0x1800BDD04 (-GetAll@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AV-$unordered_.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSystem@3456@AEBUhstring@6@@Z @ 0x180712E84 (-GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AURemoteS.c)
 *     ?State@?$consume_Windows_Internal_Shell_IRemoteSystemStateChangedEventArgs@UIRemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180718DB4 (-State@-$consume_Windows_Internal_Shell_IRemoteSystemStateChangedEventArgs@UIRemoteSystemStateCh.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18071CED0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@U-$com_ptr@UIVirtualDes.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::GetRemoteDesktopConnectionState(
        __int64 a1)
{
  struct winrt::impl::hstring_header *v1; // rdx
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-40h] BYREF
  void *v7; // [rsp+28h] [rbp-38h]
  __int64 v8; // [rsp+30h] [rbp-30h]
  void *v9; // [rsp+38h] [rbp-28h]
  __int128 v10; // [rsp+40h] [rbp-20h]
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+10h] BYREF
  struct winrt::impl::hstring_header *v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF

  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::GetAll(*(PSRWLOCK *)(a1 + 136), (__int64)v6);
  if ( v8 )
  {
    v12 = winrt::impl::duplicate_hstring(*(winrt::impl **)(*(_QWORD *)v7 + 16LL), v1, v2);
    winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetRemoteSystem((char *)&v11, &v12);
    v13 = 0LL;
    if ( winrt::Windows::Foundation::operator==(&v11, &v13) )
      v3 = 100;
    else
      v3 = winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemStateChangedEventArgs<winrt::Windows::Internal::Shell::IRemoteSystemStateChangedEventArgs>::State((__int64 *)&v11);
    if ( v11 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v12);
  }
  else
  {
    v3 = 100;
  }
  std::_Deallocate<16,0>(v9, (v10 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL);
  v9 = 0LL;
  v10 = 0LL;
  std::_List_node<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>,void *>>>(
    v4,
    (__int64)v7);
  std::_Deallocate<16,0>(v7, 0x20uLL);
  return v3;
}
