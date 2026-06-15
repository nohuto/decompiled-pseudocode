/*
 * XREFs of ?CheckImplicitLoad@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z @ 0x180033A60
 * Callers:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180034568 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z @ 0x18003B694 (-DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z.c)
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18003C8A4 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 * Callees:
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x18003614C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 *     ?_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@Z @ 0x1800376FC (-_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@.c)
 *     ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x180041034 (-GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z.c)
 */

char __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CheckImplicitLoad(
        ATL::CAtlBaseModule *a1,
        __int64 a2)
{
  char v2; // bl
  unsigned int v4; // esi
  int v5; // ebp
  HMODULE HInstanceAt; // rdi
  HRSRC Resource; // rax
  ATL::CAtlBaseModule *v8; // rcx
  int v9; // edx

  v2 = 0;
  if ( (unsigned __int64)(a2 - 1) <= 0xFFFE )
  {
    v4 = (unsigned __int16)a2;
    v5 = 1;
    HInstanceAt = ATL::CAtlBaseModule::GetHInstanceAt(a1, 0);
    if ( HInstanceAt )
    {
      while ( 1 )
      {
        Resource = FindResourceExW(HInstanceAt, (LPCWSTR)6, (LPCWSTR)(((unsigned __int64)v4 >> 4) + 1), 0);
        if ( Resource )
        {
          if ( ATL::_AtlGetStringResourceImage(HInstanceAt, Resource, v4) )
            break;
        }
        v9 = v5++;
        HInstanceAt = ATL::CAtlBaseModule::GetHInstanceAt(v8, v9);
        if ( !HInstanceAt )
          return 1;
      }
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        a1,
        HInstanceAt,
        v4);
    }
    return 1;
  }
  return v2;
}
