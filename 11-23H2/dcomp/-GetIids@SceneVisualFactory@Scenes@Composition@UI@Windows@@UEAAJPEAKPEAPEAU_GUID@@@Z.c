/*
 * XREFs of ?GetIids@SceneVisualFactory@Scenes@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180107440
 * Callers:
 *     ?GetIids@SceneVisualFactory@Scenes@Composition@UI@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AA5B0 (-GetIids@SceneVisualFactory@Scenes@Composition@UI@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneVisualFactory::GetIids(
        Windows::UI::Composition::Scenes::SceneVisualFactory *this,
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
    v6[1] = GUID_b8347e9a_50aa_4527_8d34_de4cb8ea88b4;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
