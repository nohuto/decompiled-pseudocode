/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18001F950
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x18001FB8C (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x18001FE84 (-FormFactor@CEndpointCharacteristics@@QEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800322F0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA.c)
 */

bool __fastcall CSpatialAudioDtsxHeadphones::IsTechnologySupported(
        CSpatialAudioDtsxHeadphones *this,
        CEndpointCharacteristics **a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        unsigned int a5,
        unsigned int *a6,
        bool *a7,
        struct WAVEFORMATEXTENSIBLE *a8)
{
  unsigned int *v8; // rbx
  bool result; // al
  bool *v10; // rdi
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v13; // ebp

  v8 = a6;
  result = 0;
  v10 = a7;
  *a6 = 0;
  *v10 = 0;
  if ( *((_QWORD *)this + 1) || !byte_1801CEA80 )
  {
    result = CSpatialAudioTechHRTF::IsTechnologySupported(this, (struct EffectPack *)a2, a3, a4, a5, v8, v10, a8);
    LOBYTE(a6) = result;
    if ( result )
    {
      v13 = CEndpointCharacteristics::FormFactor(a2[161]);
      CSpatialAudioTech::AssignPriority(this, v13, Headphones, 2u, v8, (bool *)&a6);
      result = (char)a6;
      if ( (_BYTE)a6 )
      {
        if ( *v8 )
        {
          *v10 = 1;
        }
        else
        {
          CSpatialAudioTech::AssignPriority(this, v13, Speakers, 2u, v8, (bool *)&a6);
          return (char)a6;
        }
      }
    }
  }
  return result;
}
