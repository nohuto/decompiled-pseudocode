/*
 * XREFs of ?GetIids@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180106DB0
 * Callers:
 *     ?GetIids@CompositorControllerFactory@Core@Composition@UI@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AA390 (-GetIids@CompositorControllerFactory@Core@Composition@UI@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CompositorControllerFactory@Core@Composition@UI@Windows@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AA3B0 (-GetIids@CompositorControllerFactory@Core@Composition@UI@Windows@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Core::CompositorControllerFactory::GetIids(
        Windows::UI::Composition::Core::CompositorControllerFactory *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_00000035_0000_0000_c000_000000000046;
    v6[1] = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[2] = GUID_1ae27891_516c_4b9e_8018_b5f8d846685e;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
