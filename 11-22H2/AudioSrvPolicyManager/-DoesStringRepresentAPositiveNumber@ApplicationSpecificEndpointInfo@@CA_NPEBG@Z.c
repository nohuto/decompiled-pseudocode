/*
 * XREFs of ?DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z @ 0x180042B30
 * Callers:
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180043504 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18003FBC0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x1800423CC (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ??A?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x180042464 (--A-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber(unsigned __int16 *a1)
{
  bool v1; // di
  _DWORD *v2; // rcx
  int v3; // esi
  int i; // ebx
  WCHAR v5; // ax
  WCHAR v6; // ax
  _DWORD *v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (const void **)&v8,
    a1);
  v2 = v8;
  v3 = *(v8 - 4);
  if ( v3 > 0 )
  {
    for ( i = 0; i < v3; ++i )
    {
      v5 = ATL::CSimpleStringT<unsigned short,0>::operator[]((__int64 *)&v8, i);
      if ( !IsCharAlphaNumericW(v5) )
        break;
      v6 = ATL::CSimpleStringT<unsigned short,0>::operator[]((__int64 *)&v8, i);
      if ( IsCharAlphaW(v6) )
        break;
    }
    v1 = i == v3;
    v2 = v8;
  }
  ATL::CStringData::Release((ATL::CStringData *)(v2 - 6));
  return v1;
}
