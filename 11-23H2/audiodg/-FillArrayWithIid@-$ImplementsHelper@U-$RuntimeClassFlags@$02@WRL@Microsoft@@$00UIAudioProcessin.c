/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAudioProcessingObjectRT@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIApoAuxiliaryInputRT@@UIApoAcousticEchoCancellation@@UIAudioAmbisonics@@UIAPOPreferredFormatSupport@@UISystemEffectWrapper@@UIAudioProcessingObjectNotifications2@@UIAPOWrapperSrv@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x14002E040
 * Callers:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@UIAudioProcessingObject@@UIWeakReferenceSource@@UIAudioProcessingObjectConfiguration@@UIAudioProcessingObjectRT@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIApoAuxiliaryInputRT@@UIApoAcousticEchoCancellation@@UIAudioAmbisonics@@UIAPOPreferredFormatSupport@@UISystemEffectWrapper@@UIAudioProcessingObjectNotifications2@@UIAPOWrapperSrv@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x14002E12C (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioProcessingObjectRT,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAPOPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_f851809c_c177_49a0_b1b2_b66f017943ab;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_25385759_3236_4101_a943_25693dfb5d2d;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_8ab91395_f920_4132_873f_7a40607f7901;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 7)) = GUID_1c5c2642_7b14_48c8_94d0_f2a41d7ea9bc;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 8)) = GUID_ca2cfbde_a9d6_4eb0_bc95_c4d026b380f0;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 9)) = GUID_0421e7a2_5d3d_4d19_9886_e8bdafa5822c;
  result = (unsigned int)(v3 + 10);
  *a2 = result;
  return result;
}
