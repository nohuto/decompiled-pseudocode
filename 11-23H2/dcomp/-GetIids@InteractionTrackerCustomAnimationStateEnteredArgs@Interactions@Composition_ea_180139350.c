/*
 * XREFs of ?GetIids@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180139350
 * Callers:
 *     ?GetIids@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AF560 (-GetIids@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@.c)
 *     ?GetIids@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AF580 (-GetIids@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition_ea_1800AF580.c)
 *     ?GetIids@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@WEA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AF5A0 (-GetIids@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition_ea_1800AF5A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs::GetIids(
        Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x50uLL);
  if ( v6 )
  {
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_8d1c8cf1_d7b0_434c_a5d2_2d7611864834;
    v6[3] = GUID_47d579b7_0985_5e99_b024_2f32c380c1a4;
    v6[4] = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    *a2 = 5;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
