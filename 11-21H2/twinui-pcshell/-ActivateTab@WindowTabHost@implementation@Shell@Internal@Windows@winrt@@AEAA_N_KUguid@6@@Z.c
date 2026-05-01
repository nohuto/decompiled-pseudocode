/*
 * XREFs of ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x180577D64
 * Callers:
 *     ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x180578710 (-OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTa.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@std@@@std@@@1@AEBUguid@winrt@@@Z @ 0x18001CAE8 (--$find@X@-$_Hash@V-$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V-$_Uh.c)
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x18001D9FC (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800205DC (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18002071C (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@SnapEduc.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??H?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x18022B9C4 (--H-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@QEBA-AV.c)
 *     ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x180238AF6 (-ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ??$_Try_emplace@AEBUguid@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@_N@1@AEBUguid@winrt@@@Z @ 0x1805772D8 (--$_Try_emplace@AEBUguid@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Ugu.c)
 *     ?erase@?$deque@_KV?$allocator@_K@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@0@Z @ 0x180579434 (-erase@-$deque@_KV-$allocator@_K@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_Deque_val@U-$_Deque_sim.c)
 *     ?push_front@?$deque@_KV?$allocator@_K@std@@@std@@QEAAXAEB_K@Z @ 0x180579644 (-push_front@-$deque@_KV-$allocator@_K@std@@@std@@QEAAXAEB_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::ActivateTab(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  RTL_SRWLOCK *v5; // rbx
  __int128 v6; // xmm6
  char v7; // si
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // r9
  _QWORD *v15; // rax
  _QWORD *i; // rax
  unsigned __int64 v17; // rdx
  RTL_SRWLOCK *v19; // [rsp+28h] [rbp-89h] BYREF
  __int64 v20; // [rsp+30h] [rbp-81h] BYREF
  __int128 v21[2]; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v22[3]; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v23[3]; // [rsp+70h] [rbp-41h] BYREF
  _QWORD v24[3]; // [rsp+A0h] [rbp-11h] BYREF
  _BYTE v25[48]; // [rsp+B8h] [rbp+7h] BYREF

  v20 = a2;
  v5 = (RTL_SRWLOCK *)std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                        (unsigned __int64)(a1 + 76),
                        (const unsigned __int8 *)&v20);
  v6 = *a3;
  v21[0] = *a3;
  wil::AcquireSRWLockExclusive(&v19, v5);
  if ( winrt::operator==(*((_QWORD **)v5[20].Ptr + ((__int64)v5[22].Ptr & ((__int64)v5[21].Ptr - 1))), v21) )
  {
    v7 = 0;
  }
  else
  {
    v21[0] = v6;
    winrt::Windows::Internal::Shell::implementation::WindowData::ActivateTabUnderLock(v5, v21);
    v7 = 1;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v19);
  if ( v7 )
  {
    v8 = a1[88];
    v9 = std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::find<void>(
           a1 + 89,
           &v19,
           (__int64)a3);
    v10 = (_QWORD *)a1[90];
    if ( (_QWORD *)*v9 != v10 )
    {
      v22[1] = 0LL;
      v22[2] = a1[87];
      v22[0] = a1[84];
      std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Try_emplace<winrt::guid const &,>(
        a1 + 89,
        (__int64)v21,
        a3);
      v11 = std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>::operator+((__int64)v22);
      v12 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>(
              v23,
              v11);
      v13 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
              v21,
              (__int64)v12);
      ++v13[2];
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v22,
        (__int64)v13);
      v15 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
              v24,
              v14);
      std::deque<unsigned __int64>::erase(a1 + 84, v25, v15, v22);
      v8 = *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Try_emplace<winrt::guid const &,>(
                                    a1 + 89,
                                    (__int64)v21,
                                    a3)
                     + 32LL);
      v10 = (_QWORD *)a1[90];
    }
    for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
    {
      v17 = i[4];
      if ( v17 < v8 )
        i[4] = v17 + 1;
    }
    *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Try_emplace<winrt::guid const &,>(
                             a1 + 89,
                             (__int64)v21,
                             a3)
              + 32LL) = 0LL;
    std::deque<unsigned __int64>::push_front(a1 + 84, &v20);
  }
  return v7;
}
