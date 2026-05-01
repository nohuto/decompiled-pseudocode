/*
 * XREFs of ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x180637960
 * Callers:
 *     <none>
 * Callees:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x180031A50 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x180032BE0 (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x180033370 (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x1800333B4 (--$find@X@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$.c)
 *     ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x1800339E8 (-GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV-$vector@.c)
 *     ?WindowId@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800350CC (-WindowId@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@.c)
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x180092240 (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ @ 0x180117BCC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x180637DDC (-SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnTabsChanged(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabDataModel *a2,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabDataModelTabsChangedEventArgs *a3)
{
  __int64 v4; // r13
  RTL_SRWLOCK *v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  _QWORD *Ptr; // rdi
  _QWORD *i; // rbx
  __int128 v10; // [rsp+28h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h]
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]
  RTL_SRWLOCK *v14; // [rsp+90h] [rbp+30h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+48h] BYREF

  v4 = (unsigned int)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModel<winrt::Windows::Internal::UI::Shell::IWindowTabDataModel>::WindowId((__int64 *)a2);
  v14 = (RTL_SRWLOCK *)v4;
  AcquireSRWLockShared(this + 77);
  if ( (PVOID)*std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find<void>(
                 (__int64)&this[78],
                 &v15,
                 (__int64)&v14) == this[79].Ptr )
  {
    if ( this != (RTL_SRWLOCK *)-616LL )
      ReleaseSRWLockShared(this + 77);
  }
  else
  {
    if ( this != (RTL_SRWLOCK *)-616LL )
      ReleaseSRWLockShared(this + 77);
    v15 = *(_QWORD *)(std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                        (unsigned __int64)&this[78],
                        (const unsigned __int8 *)&v14)
                    + 184);
    v12 = 0LL;
    v13 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    AcquireSRWLockShared(this + 77);
    v5 = (RTL_SRWLOCK *)std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                          (unsigned __int64)&this[78],
                          (const unsigned __int8 *)&v14);
    winrt::Windows::Internal::Shell::implementation::WindowData::GetPendingTabChanges(v5, (__int64)&v12, (__int64)&v10);
    if ( this != (RTL_SRWLOCK *)-616LL )
      ReleaseSRWLockShared(this + 77);
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder(
      this,
      v4,
      (__int64 *)&v12,
      (__int64 *)&v10);
    v6 = (__int64)(*((_QWORD *)&v10 + 1) - v10) >> 4;
    v7 = (__int64)(*((_QWORD *)&v12 + 1) - v12) >> 4;
    if ( v6 >= v7 + v15 )
    {
      AcquireSRWLockExclusive(this + 77);
      v14 = this + 77;
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel(
        (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)this,
        v4);
      if ( this != (RTL_SRWLOCK *)-616LL )
        ReleaseSRWLockExclusive(this + 77);
    }
    if ( v7 + v6 )
    {
      AcquireSRWLockShared(this + 77);
      v14 = this + 77;
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl) )
      {
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncAllAppWindows((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)this);
      }
      else
      {
        Ptr = this[79].Ptr;
        for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
          winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncWindowTabDataModel(
            (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)this,
            i[2]);
      }
      if ( this != (RTL_SRWLOCK *)-616LL )
        ReleaseSRWLockShared(this + 77);
    }
    if ( (_QWORD)v10 )
      std::_Deallocate<16,0>((void *)v10, (v11 - v10) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (_QWORD)v12 )
      std::_Deallocate<16,0>((void *)v12, (v13 - v12) & 0xFFFFFFFFFFFFFFF0uLL);
  }
}
