/*
 * XREFs of ?GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z @ 0x1C0007E20
 * Callers:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0007DA0 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYP.c)
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0007DD0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C020D650 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 * Callees:
 *     <none>
 */

const struct DirectComposition::ResPropInfo *__fastcall DirectComposition::CResourceMarshaler::GetTargetProperty(
        DirectComposition::CResourceMarshaler *this,
        int a2)
{
  int i; // ecx
  const struct DirectComposition::ResPropInfo *result; // rax

  for ( i = DirectComposition::ResourceInformation::resourceTypeInformation[*((unsigned int *)this + 9)];
        i != 206;
        i = *((_DWORD *)result + 1) )
  {
    result = (const struct DirectComposition::ResPropInfo *)((char *)&DirectComposition::ResourceInformation::resourcePropertyInformation
                                                           + 32 * i);
    if ( *(_DWORD *)result == a2 )
      return result;
  }
  return 0LL;
}
