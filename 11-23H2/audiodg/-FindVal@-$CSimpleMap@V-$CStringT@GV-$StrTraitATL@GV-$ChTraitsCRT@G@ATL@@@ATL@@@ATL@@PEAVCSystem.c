/*
 * XREFs of ?FindVal@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAHAEBQEAVCSystemAudioDeviceBase@@@Z @ 0x1400380BE
 * Callers:
 *     ?GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z @ 0x1400563DC (-GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x140056774 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::FindVal(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax
  __int64 i; // rcx

  result = 0LL;
  if ( (int)qword_1400CF7B0 <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = 0LL; *(_QWORD *)(i + qword_1400CF7A8) != *a2; i += 8LL )
  {
    result = (unsigned int)(result + 1);
    if ( (int)result >= (int)qword_1400CF7B0 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
