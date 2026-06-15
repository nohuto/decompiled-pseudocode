/*
 * XREFs of ?Find@?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEBAPEAU__POSITION@@PEBGPEAU3@@Z @ 0x180131C04
 * Callers:
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x18001FE90 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::Find(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *result; // rax
  unsigned __int16 *v4; // rcx
  __int64 v5; // r8
  int v6; // r9d
  int v7; // edx

  for ( result = (_QWORD *)*a1; result; result = (_QWORD *)*result )
  {
    v4 = (unsigned __int16 *)result[2];
    v5 = a2 - (_QWORD)v4;
    do
    {
      v6 = *(unsigned __int16 *)((char *)v4 + v5);
      v7 = *v4 - v6;
      if ( v7 )
        break;
      ++v4;
    }
    while ( v6 );
    if ( !v7 )
      break;
  }
  return result;
}
