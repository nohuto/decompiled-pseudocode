/*
 * XREFs of ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z @ 0x18003DAE0
 * Callers:
 *     ?CheckImplicitLoad@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z @ 0x18003C0B0 (-CheckImplicitLoad@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z.c)
 * Callees:
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x18003DB90 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 *     ?_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@Z @ 0x18003EC84 (-_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@.c)
 *     ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x1800456CC (-GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z.c)
 */

HMODULE __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        ATL::CAtlBaseModule *a1,
        unsigned int a2)
{
  HMODULE result; // rax
  int i; // edi
  HINSTANCE v6; // rbx
  HRSRC Resource; // rax
  ATL::CAtlBaseModule *v8; // rcx
  int v9; // edx

  result = ATL::CAtlBaseModule::GetHInstanceAt(a1, 0);
  for ( i = 1; ; ++i )
  {
    v6 = result;
    if ( !result )
      break;
    Resource = FindResourceExW(result, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((a2 >> 4) + 1), 0);
    if ( Resource && ATL::_AtlGetStringResourceImage(v6, Resource, a2) )
      return (HMODULE)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
                        a1,
                        v6,
                        a2);
    v9 = i;
    result = ATL::CAtlBaseModule::GetHInstanceAt(v8, v9);
  }
  return result;
}
