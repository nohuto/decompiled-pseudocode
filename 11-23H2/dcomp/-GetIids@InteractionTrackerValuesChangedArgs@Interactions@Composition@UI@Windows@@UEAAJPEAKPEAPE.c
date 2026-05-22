/*
 * XREFs of ?GetIids@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180139670
 * Callers:
 *     ?GetIids@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AF740 (-GetIids@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@WDA@EAAJPEAKPE.c)
 *     ?GetIids@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AF760 (-GetIids@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@WDI@EAAJPEAKPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs::GetIids(
        Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_cf1578ef_d3df_4501_b9e6_f02fb22f73d0;
    v6[3] = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
