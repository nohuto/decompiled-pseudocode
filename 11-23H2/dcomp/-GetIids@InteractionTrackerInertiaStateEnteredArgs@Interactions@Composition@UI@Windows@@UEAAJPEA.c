/*
 * XREFs of ?GetIids@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180139490
 * Callers:
 *     ?GetIids@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AF620 (-GetIids@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@WDA@EAAJ.c)
 *     ?GetIids@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AF640 (-GetIids@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@WDI@EAAJ.c)
 *     ?GetIids@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@WEA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AF660 (-GetIids@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@WEA@EAAJ.c)
 *     ?GetIids@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@WEI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AF680 (-GetIids@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@WEI@EAAJ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs::GetIids(
        Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x60uLL);
  if ( v6 )
  {
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_87108cf2_e7ff_4f7d_9ffd_d72f1e409b63;
    v6[3] = GUID_b1eb32f6_c26c_41f6_a189_fabc22b323cc;
    v6[4] = GUID_48ac1c2f_47bd_59af_a58c_79bd2eb9ef71;
    v6[5] = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    *a2 = 6;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
