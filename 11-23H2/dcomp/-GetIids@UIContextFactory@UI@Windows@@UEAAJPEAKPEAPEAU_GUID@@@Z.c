/*
 * XREFs of ?GetIids@UIContextFactory@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180102540
 * Callers:
 *     ?GetIids@UIContextFactory@UI@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A9810 (-GetIids@UIContextFactory@UI@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::UIContextFactory::GetIids(
        Windows::UI::UIContextFactory *this,
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
    v6[1] = GUID_97473389_5b37_5c96_9c2b_0fd29d43a6c1;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
