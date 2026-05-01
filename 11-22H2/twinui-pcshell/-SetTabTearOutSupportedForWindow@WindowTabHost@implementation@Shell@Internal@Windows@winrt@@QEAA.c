/*
 * XREFs of ?SetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800332C8
 * Callers:
 *     ?SetTabTearOutSupportedForWindow@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAH_K@Z @ 0x180032F30 (-SetTabTearOutSupportedForWindow@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x180033370 (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x1800333B4 (--$find@X@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ @ 0x180117BCC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::SetTabTearOutSupportedForWindow(
        RTL_SRWLOCK *this,
        __int64 a2)
{
  RTL_SRWLOCK *v3; // rdi
  PVOID *v4; // rax
  const char *v5; // r9
  __int64 v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  char v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a2;
  v3 = this + 77;
  AcquireSRWLockExclusive(this + 77);
  v4 = (PVOID *)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find<void>(
                  &this[78],
                  &v9,
                  &v8);
  try
  {
    if ( *v4 != this[79].Ptr )
    {
      if ( BYTE1(this[109].Ptr) )
      {
        v6 = std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
               &this[78],
               &v8);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl) )
          *(_BYTE *)(v6 + 208) = 1;
      }
    }
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xFB,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
      v5);
  }
}
