/*
 * XREFs of ?GetIids@SceneMetallicRoughnessMaterialFactory@Scenes@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801072C0
 * Callers:
 *     ?GetIids@SceneMetallicRoughnessMaterialFactory@Scenes@Composition@UI@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AA550 (-GetIids@SceneMetallicRoughnessMaterialFactory@Scenes@Composition@UI@Windows@@WCI@EAAJPEAKPEAPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterialFactory::GetIids(
        Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterialFactory *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x20uLL);
  if ( v6 )
  {
    *v6 = GUID_00000035_0000_0000_c000_000000000046;
    v6[1] = GUID_3bddca50_6d9d_4531_8dc4_b27e3e49b7ab;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
