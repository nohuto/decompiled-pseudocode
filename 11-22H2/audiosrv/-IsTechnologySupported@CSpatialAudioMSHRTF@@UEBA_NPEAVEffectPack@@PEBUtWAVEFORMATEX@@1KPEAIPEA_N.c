/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18001FA40
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x18001FB8C (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x18001FE84 (-FormFactor@CEndpointCharacteristics@@QEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800322F0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA.c)
 */

char __fastcall CSpatialAudioMSHRTF::IsTechnologySupported(
        CSpatialAudioMSHRTF *this,
        CEndpointCharacteristics **a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        unsigned int a5,
        unsigned int *a6,
        bool *a7,
        struct WAVEFORMATEXTENSIBLE *a8)
{
  char v12; // bl
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v13; // ebp
  bool v14; // cl
  int v16; // eax
  bool v17[16]; // [rsp+40h] [rbp-28h] BYREF

  v12 = 1;
  if ( !byte_1801CF971 )
  {
    v16 = IsHrtfApoAvailable();
    byte_1801CF971 = 1;
    byte_1801CF970 = v16 != 0;
  }
  v17[0] = CSpatialAudioTechHRTF::IsTechnologySupported(this, (struct EffectPack *)a2, a3, a4, a5, a6, a7, a8);
  if ( !v17[0] )
    return 0;
  v13 = CEndpointCharacteristics::FormFactor(a2[161]);
  CSpatialAudioTech::AssignPriority(this, v13, Headphones, 0xAu, a6, v17);
  v14 = v17[0];
  if ( !v17[0] )
    return 0;
  if ( *a6 )
  {
    *a7 = 1;
  }
  else
  {
    CSpatialAudioTech::AssignPriority(this, v13, Speakers, 0xAu, a6, v17);
    v14 = v17[0];
  }
  if ( !v14 || !byte_1801CF970 )
    return 0;
  return v12;
}
