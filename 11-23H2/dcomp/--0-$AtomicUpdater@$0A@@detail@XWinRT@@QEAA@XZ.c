/*
 * XREFs of ??0?$AtomicUpdater@$0A@@detail@XWinRT@@QEAA@XZ @ 0x180140F7C
 * Callers:
 *     ??0?$SimpleVectorIterator@PEAVSceneComponent@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Internal@785@UNoVersionTag@Internal@785@$0A@@Internal@Collections@Foundation@Windows@@QEAA@PEAU?$IVector@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@234@Upermission@01234@@Z @ 0x180140FCC (--0-$SimpleVectorIterator@PEAVSceneComponent@Scenes@Composition@UI@Windows@@U-$IVector@PEAVScene.c)
 *     ??0?$SimpleVectorIterator@PEAVSceneNode@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Internal@785@UNoVersionTag@Internal@785@$0A@@Internal@Collections@Foundation@Windows@@QEAA@PEAU?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@234@Upermission@01234@@Z @ 0x180141080 (--0-$SimpleVectorIterator@PEAVSceneNode@Scenes@Composition@UI@Windows@@U-$IVector@PEAVSceneNode@.c)
 *     ??0?$SimpleVectorIterator@MU?$IVector@M@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@M@Internal@234@UNoVersionTag@6234@$0A@@Internal@Collections@Foundation@Windows@@QEAA@PEAU?$IVector@M@234@Upermission@01234@@Z @ 0x1801700B4 (--0-$SimpleVectorIterator@MU-$IVector@M@Collections@Foundation@Windows@@U-$DefaultLifetimeTraits.c)
 *     ??0?$SimpleVectorIterator@PEAVCompositionColorGradientStop@Composition@UI@Windows@@U?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@QEAA@PEAU?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@234@Upermission@01234@@Z @ 0x180173090 (--0-$SimpleVectorIterator@PEAVCompositionColorGradientStop@Composition@UI@Windows@@U-$IVector@PE.c)
 *     ??0?$SimpleVectorIterator@PEAVCompositionShape@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionShape@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@QEAA@PEAU?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@234@Upermission@01234@@Z @ 0x1801A0690 (--0-$SimpleVectorIterator@PEAVCompositionShape@Composition@UI@Windows@@U-$IVector@PEAVCompositio.c)
 * Callees:
 *     <none>
 */

char *__fastcall XWinRT::detail::AtomicUpdater<0>::AtomicUpdater<0>(char *a1)
{
  HRESULT ApartmentType; // eax
  APTTYPE v3; // ecx
  char v4; // dl
  APTTYPE pAptType; // [rsp+30h] [rbp+8h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+38h] [rbp+10h] BYREF

  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v3 = pAptType;
  v4 = 0;
  if ( ApartmentType < 0 )
    v3 = APTTYPE_MTA;
  if ( v3 == APTTYPE_MAINSTA || v3 == APTTYPE_STA )
    v4 = 1;
  *a1 = v4;
  return a1;
}
