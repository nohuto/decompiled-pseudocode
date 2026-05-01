/*
 * XREFs of ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@123@PEAKPEAPEAU_GUID@@@Z @ 0x18059A564
 * Callers:
 *     ?GetIids@CSnapAssistController@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18059C580 (-GetIids@CSnapAssistController@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CSnapAssistControllerBase>>(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  GUID *v5; // rax

  *a3 = 0LL;
  *a2 = 0;
  v5 = (GUID *)CoTaskMemAlloc(0x80uLL);
  if ( !v5 )
    return 2147942414LL;
  *v5 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
  v5[1] = GUID_caeccf9d_10d6_4d55_9fc5_819ad14b2f33;
  v5[2] = GUID_c60c7e8a_f650_4afb_917b_8d93242dbc36;
  v5[3] = GUID_76d7759a_857c_46bd_ba0c_841904e0fc8d;
  v5[4] = GUID_b07acdd8_280b_4fe2_b920_95f945832a24;
  v5[5] = GUID_e8127611_f3b8_5321_bca4_3293938bbab9;
  v5[6] = GUID_1272c5ac_d7c9_5a11_88e3_f6ffaf79e9b1;
  v5[7] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  *a2 = 8;
  *a3 = v5;
  return 0LL;
}
