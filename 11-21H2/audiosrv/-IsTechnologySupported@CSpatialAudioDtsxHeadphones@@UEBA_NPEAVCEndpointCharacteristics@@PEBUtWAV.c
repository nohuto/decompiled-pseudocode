/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800532A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004E4A0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMA.c)
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x180053518 (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x180053BA4 (-FormFactor@CEndpointCharacteristics@@QEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x18005439C (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 */

char __fastcall CSpatialAudioDtsxHeadphones::IsTechnologySupported(
        CSpatialAudioDtsxHeadphones *this,
        SystemEffectDescriptor **a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        unsigned __int16 a5,
        unsigned int *a6,
        bool *a7,
        struct WAVEFORMATEXTENSIBLE *a8)
{
  unsigned int *v8; // rdi
  char v9; // bl
  bool *v10; // rsi
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v15; // r14d

  v8 = a6;
  v9 = 0;
  v10 = a7;
  *a6 = 0;
  *v10 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  if ( *((_QWORD *)this + 1) || !byte_1801C1A70 )
  {
    LOBYTE(a6) = CSpatialAudioTechHRTF::IsTechnologySupported(this, a2, a3, a4, a5, v8, v10, a8);
    v9 = (char)a6;
    if ( (_BYTE)a6 )
    {
      v15 = CEndpointCharacteristics::FormFactor((CEndpointCharacteristics *)a2);
      CSpatialAudioTech::AssignPriority(this, v15, Headphones, 2u, v8, (bool *)&a6);
      v9 = (char)a6;
      if ( (_BYTE)a6 )
      {
        if ( *v8 )
        {
          *v10 = 1;
        }
        else
        {
          CSpatialAudioTech::AssignPriority(this, v15, Speakers, 2u, v8, (bool *)&a6);
          return (char)a6;
        }
      }
    }
  }
  return v9;
}
