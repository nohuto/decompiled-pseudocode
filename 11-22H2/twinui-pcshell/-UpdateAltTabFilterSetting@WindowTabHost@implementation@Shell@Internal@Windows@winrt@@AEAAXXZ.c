/*
 * XREFs of ?UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801A2240
 * Callers:
 *     ?perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800AE6C0 (-perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAX.c)
 *     ?OnSettingChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x180637930 (-OnSettingChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJW4SETTING_IDEN.c)
 * Callees:
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x180092240 (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ @ 0x180117BCC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x180637DDC (-SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateAltTabFilterSetting(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbp
  int v3; // eax
  int v4; // eax
  _QWORD *Ptr; // rdi
  _QWORD *i; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v10; // [rsp+50h] [rbp+18h]

  v2 = this + 77;
  AcquireSRWLockExclusive(this + 77);
  v10 = v2;
  v8 = 0;
  v9 = 4;
  if ( (int)SHWindowsPolicyGetValue(&POLID_MultiTaskingAltTabFilter, &v8, &v9) >= 0 && v8 )
  {
    v4 = --v8;
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(PVOID, __int64, int *))(*(_QWORD *)this[20].Ptr + 40LL))(this[20].Ptr, 19LL, &v8);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x286,
        (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
        (const char *)(unsigned int)v3);
    v4 = v8;
  }
  if ( LODWORD(this[99].Ptr) != v4 )
  {
    LODWORD(this[99].Ptr) = v4;
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
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
