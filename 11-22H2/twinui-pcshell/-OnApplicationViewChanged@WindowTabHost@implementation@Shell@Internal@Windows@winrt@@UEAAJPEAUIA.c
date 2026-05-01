/*
 * XREFs of ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801536B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x180032BE0 (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 *     ?UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@0@Z @ 0x180036228 (-UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAU.c)
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x180092240 (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ @ 0x180117BCC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1801538A0 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@win.c)
 *     ?DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@_K@Z @ 0x18021A4CC (-DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ?SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x180637DDC (-SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        int a3)
{
  int v4; // r8d
  unsigned int WindowForView; // eax
  HWND v7; // rbx
  HWND PropW; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 appended; // rax
  PVOID Ptr; // rcx
  _QWORD *v13; // rdi
  _QWORD *i; // rbx
  unsigned __int8 v15[8]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v16[32]; // [rsp+28h] [rbp-20h] BYREF
  char v17; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    v4 = a3 - 1;
    if ( v4 )
    {
      if ( v4 == 6 )
      {
        WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp(
          a1,
          &v17,
          WindowForView);
      }
    }
    else
    {
      v9 = (unsigned int)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
      *(_QWORD *)v15 = v9;
      AcquireSRWLockExclusive(a1 + 77);
      appended = std::_Fnv1a_append_bytes(v10, v15, 8uLL);
      Ptr = *(PVOID *)(std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::_Find_last<unsigned __int64>(
                         &a1[78],
                         v16,
                         v15,
                         appended)
                     + 8);
      if ( !Ptr )
        Ptr = a1[79].Ptr;
      if ( Ptr != a1[79].Ptr )
      {
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel(
          (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1,
          v9);
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl) )
        {
          winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncAllAppWindows((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1);
        }
        else
        {
          v13 = a1[79].Ptr;
          for ( i = (_QWORD *)*v13; i != v13; i = (_QWORD *)*i )
            winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncWindowTabDataModel(
              (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1,
              i[2]);
        }
      }
      if ( a1 != (RTL_SRWLOCK *)-616LL )
        ReleaseSRWLockExclusive(a1 + 77);
    }
  }
  else
  {
    v7 = (HWND)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
    PropW = (HWND)GetPropW(v7, (LPCWSTR)0xA920);
    if ( PropW )
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateActivationTimestamps(
        (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1,
        v7,
        PropW);
  }
  return 0LL;
}
