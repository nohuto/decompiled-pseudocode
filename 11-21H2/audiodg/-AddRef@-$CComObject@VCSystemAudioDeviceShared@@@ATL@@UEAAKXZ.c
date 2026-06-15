/*
 * XREFs of ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140027790
 * Callers:
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ @ 0x140032EF0 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ @ 0x140032F10 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBCI@EAAKXZ @ 0x140032F30 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBCI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBDA@EAAKXZ @ 0x140032F50 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBDA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ @ 0x140032F70 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceShared>::AddRef(__int64 a1)
{
  unsigned int v1; // r9d
  signed __int32 v2; // r8d

  v1 = 0x7FFFFFFF;
  while ( 1 )
  {
    v2 = *(_DWORD *)(a1 + 368);
    if ( v2 == 0x7FFFFFFF )
      break;
    if ( v2 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 368), v2 + 1, v2) )
      return (unsigned int)(v2 + 1);
  }
  return v1;
}
