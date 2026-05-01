/*
 * XREFs of ?on_result@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXAEBUTipReportingInfo@@@Z @ 0x18046D4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x180045DE4 (-to_hstring@winrt@@YA-AUhstring@1@AEBUguid@1@@Z.c)
 *     ??$convert@$00U_GUID@@@guid@winrt@@CA?AU01@AEBU_GUID@@@Z @ 0x180088608 (--$convert@$00U_GUID@@@guid@winrt@@CA-AU01@AEBU_GUID@@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$UndockedSearchExperienceManager_ShowResult@AEA_NPEBGAEAW4FullActivationTestSource@@AEBIAEBG@UndockedSearchExperienceManagerTIPTelemetry@@SAXAEA_N$$QEAPEBGAEAW4FullActivationTestSource@@AEBIAEBG@Z @ 0x1801E6BE0 (--$UndockedSearchExperienceManager_ShowResult@AEA_NPEBGAEAW4FullActivationTestSource@@AEBIAEBG@U.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::on_result(
        __int64 a1,
        __int64 a2)
{
  char v4; // di
  unsigned int v5[10]; // [rsp+30h] [rbp-28h] BYREF
  bool v6; // [rsp+60h] [rbp+8h] BYREF
  volatile signed __int32 *v7; // [rsp+68h] [rbp+10h] BYREF
  const unsigned __int16 *v8; // [rsp+70h] [rbp+18h] BYREF

  v4 = *(_BYTE *)(a2 + 40);
  winrt::guid::convert<1,_GUID>((__int64)v5, (int *)(a2 + 20));
  winrt::to_hstring((winrt::hstring *)&v7, v5);
  if ( (v4 & 0xFB) != 0 )
  {
    v6 = (unsigned __int8)(v4 - 1) <= 1u;
    v8 = winrt::hstring::c_str((winrt::hstring *)&v7);
    UndockedSearchExperienceManagerTIPTelemetry::UndockedSearchExperienceManager_ShowResult<bool &,unsigned short const *,enum FullActivationTestSource &,unsigned int const &,unsigned short const &>(
      (char *)&v6,
      (__int64 *)&v8,
      (int *)(a1 + 264),
      (int *)(a2 + 100),
      (unsigned __int16 *)(a2 + 42));
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
}
