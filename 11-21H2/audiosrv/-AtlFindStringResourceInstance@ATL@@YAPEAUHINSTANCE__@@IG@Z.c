/*
 * XREFs of ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1800D691C
 * Callers:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001C6E0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18001DD20 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CheckImplicitLoad@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z @ 0x1800D6A70 (-CheckImplicitLoad@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z.c)
 * Callees:
 *     ?_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@Z @ 0x1800DB294 (-_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@.c)
 *     ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x18015142C (-GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z.c)
 */

HINSTANCE __fastcall ATL::AtlFindStringResourceInstance(ATL::CAtlBaseModule *a1)
{
  unsigned int v1; // esi
  HMODULE HInstanceAt; // rbx
  int v3; // edi
  HRSRC Resource; // rax
  ATL::CAtlBaseModule *v5; // rcx
  int v6; // edx

  v1 = (unsigned int)a1;
  HInstanceAt = ATL::CAtlBaseModule::GetHInstanceAt(a1, 0);
  v3 = 1;
  if ( !HInstanceAt )
    return 0LL;
  while ( 1 )
  {
    Resource = FindResourceExW(HInstanceAt, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((v1 >> 4) + 1), 0);
    if ( Resource )
    {
      if ( ATL::_AtlGetStringResourceImage(HInstanceAt, Resource, v1) )
        break;
    }
    v6 = v3++;
    HInstanceAt = ATL::CAtlBaseModule::GetHInstanceAt(v5, v6);
    if ( !HInstanceAt )
      return 0LL;
  }
  return HInstanceAt;
}
