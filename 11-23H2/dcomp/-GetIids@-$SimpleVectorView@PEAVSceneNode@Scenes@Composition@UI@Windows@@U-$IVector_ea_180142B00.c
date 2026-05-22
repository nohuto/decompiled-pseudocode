/*
 * XREFs of ?GetIids@?$SimpleVectorView@PEAVSceneNode@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Internal@785@UNoVersionTag@Internal@785@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180142B00
 * Callers:
 *     ?GetIids@?$SimpleVectorView@PEAVSceneNode@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Internal@785@UNoVersionTag@Internal@785@$0A@@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B0400 (-GetIids@-$SimpleVectorView@PEAVSceneNode@Scenes@Composition@UI@Windows@@U-$IVector@PEAVSceneNod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Composition::Scenes::SceneNode *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneNode *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::Scenes::SceneNode *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_b5871458_c28c_50c9_acd8_76e7871937fb;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_db4730e4_f364_576b_878e_59a7c459a752;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
