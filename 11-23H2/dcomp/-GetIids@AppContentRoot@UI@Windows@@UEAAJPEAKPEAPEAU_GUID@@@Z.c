/*
 * XREFs of ?GetIids@AppContentRoot@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180114270
 * Callers:
 *     ?GetIids@AppContentRoot@UI@Windows@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AD3B0 (-GetIids@AppContentRoot@UI@Windows@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@AppContentRoot@UI@Windows@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AD3D0 (-GetIids@AppContentRoot@UI@Windows@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::AppContentRoot::GetIids(
        Windows::UI::AppContentRoot *this,
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
    *v6 = GUID_1dfcbac6_b36b_5cb9_9bc5_2b7a0eddc378;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
