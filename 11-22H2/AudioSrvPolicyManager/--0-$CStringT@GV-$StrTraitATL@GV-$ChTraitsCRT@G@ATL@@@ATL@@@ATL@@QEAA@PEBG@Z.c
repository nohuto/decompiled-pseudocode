/*
 * XREFs of ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x1800423CC
 * Callers:
 *     ?DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z @ 0x180042B30 (-DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z.c)
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180043504 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180012AB8 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?CheckImplicitLoad@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z @ 0x18003D540 (-CheckImplicitLoad@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18003FD28 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 */

// Hidden C++ exception states: #wind=1
const void **__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        const void **a1,
        _BYTE *a2)
{
  __int64 v4; // r8
  char v5; // al
  signed int v6; // r8d
  __int64 v7; // rax

  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(a1, (__int64)&ATL::g_strmgr);
  v5 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CheckImplicitLoad(
         (__int64)a1,
         (__int64)a2,
         v4);
  v6 = 0;
  if ( !v5 )
  {
    if ( a2 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( *(_WORD *)&a2[2 * v7] );
      v6 = v7;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(a1, a2, v6);
  }
  return a1;
}
