/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VWindowWrapperBase@@@Details@23@UIWeakReferenceSource@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1804DD700
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1804DD910 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_1804DD910.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<WindowWrapperBase>,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_9230a21d_831d_414f_87f1_f0131a16a75a;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_175d1cfe_6fbc_42ba_81e5_e3bc56d5aae9;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_be4d17af_f213_4ed0_b92b_33a17d72d96d;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_35f1648c_265f_402c_b575_c9a325451df5;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 7)) = GUID_71a3f425_a716_4859_b1a4_1d9044e6a055;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 8)) = GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 9)) = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 10)) = GUID_a52f5b9b_ee55_4add_b559_55f1c012e15f;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 11)) = GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67;
  result = (unsigned int)(v3 + 12);
  *a2 = result;
  return result;
}
