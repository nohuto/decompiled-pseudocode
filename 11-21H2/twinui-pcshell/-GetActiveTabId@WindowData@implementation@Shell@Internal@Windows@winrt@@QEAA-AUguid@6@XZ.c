/*
 * XREFs of ?GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUguid@6@XZ @ 0x18001C934
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x1801BA2E0 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_1801BA2E0.c)
 * Callees:
 *     ??$_Find_last@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@1@AEBUguid@winrt@@_K@Z @ 0x18001C5E0 (--$_Find_last@Uguid@winrt@@@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt.c)
 *     ?Id@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUguid@3@XZ @ 0x18001CAA0 (-Id@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows.c)
 *     ?ActiveTab@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowTabView@Shell@UI@Internal@Windows@3@XZ @ 0x18001CC88 (-ActiveTab@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall winrt::Windows::Internal::Shell::implementation::WindowData::GetActiveTabId(
        RTL_SRWLOCK *a1,
        _OWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // al
  __int64 v13; // [rsp+20h] [rbp-60h] BYREF
  int v14; // [rsp+28h] [rbp-58h]
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  RTL_SRWLOCK *v16; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+48h] [rbp-38h]
  _BYTE v19[16]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v20[16]; // [rsp+60h] [rbp-20h] BYREF

  v14 = 0;
  AcquireSRWLockShared(a1);
  v16 = a1;
  winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModel<winrt::Windows::Internal::UI::Shell::IWindowTabDataModel>::ActiveTab(
    &a1[2],
    &v13);
  v15 = 0LL;
  v14 = 1;
  if ( (unsigned __int8)winrt::Windows::Foundation::operator==(&v13, &v15) )
    goto LABEL_6;
  v4 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::Id(
         &v13,
         v19);
  v5 = *((_QWORD *)a1[20].Ptr + ((__int64)a1[22].Ptr & ((__int64)a1[21].Ptr - 1)));
  v6 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  do
  {
    v7 = 0x100000001B3LL * (*(unsigned __int8 *)(v6 + v5) ^ (unsigned __int64)v7);
    ++v6;
  }
  while ( v6 < 0x10 );
  std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Find_last<winrt::guid>(
    &a1[11].Ptr,
    &v17,
    v5,
    v7);
  if ( !v18 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    goto LABEL_14;
  }
  v8 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::Id(
         v18 + 32,
         v20);
  if ( (unsigned __int8)winrt::operator==(v8, v4, v9, v10) )
LABEL_6:
    v11 = 1;
  else
    v11 = 0;
  if ( v11 )
  {
    *a2 = *(_OWORD *)*((_QWORD *)a1[20].Ptr + ((__int64)a1[22].Ptr & ((__int64)a1[21].Ptr - 1)));
    goto LABEL_9;
  }
LABEL_14:
  winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::Id(
    &v13,
    a2);
LABEL_9:
  if ( v13 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v16);
  return a2;
}
