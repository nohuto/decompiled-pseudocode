/*
 * XREFs of ?CreateData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@3456@AEBU7RemoteSystemData@@@Z @ 0x18070FE84
 * Callers:
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x180719DA8 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wil@@QEAA_NXZ @ 0x180115AF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wi.c)
 *     ??$make@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@W4CloudPCState@3456@@winrt@@YA?A_PAEBUhstring@0@$$QEAW4CloudPCState@Shell@Internal@Windows@0@@Z @ 0x18070C2B4 (--$make@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@W4CloudPCState@.c)
 *     ??$make@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@W4CloudPCState@3456@AEAV?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@winrt@@YA?A_PAEBUhstring@0@$$QEAW4CloudPCState@Shell@Internal@Windows@0@AEAV?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@Z @ 0x18070C344 (--$make@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@W4_ea_18070C344.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::CreateData(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v7 = a1;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Frontline>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Frontline>::GetImpl'::`2'::impl) )
  {
    v5 = *(unsigned __int16 *)(a3 + 24);
    if ( v5 == 0xFFFF )
      v5 = 2;
    LODWORD(v7) = v5;
    v8 = *(_DWORD *)(a3 + 8);
    winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystem,winrt::hstring const &,enum winrt::Windows::Internal::Shell::CloudPCState,std::chrono::duration<int,std::ratio<60,1>> &>(
      a2,
      a3,
      (__int64)&v8,
      (int *)&v7);
  }
  else
  {
    LODWORD(v7) = *(_DWORD *)(a3 + 8);
    winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystem,winrt::hstring const &,enum winrt::Windows::Internal::Shell::CloudPCState>(
      a2,
      a3,
      (__int64)&v7);
  }
  return a2;
}
