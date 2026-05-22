/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerIdleStateEnteredArgs2@6789@UIInspectable@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801393F0
 * Callers:
 *     ?GetIids@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AF5C0 (-GetIids@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WDA@EAAJPEA.c)
 *     ?GetIids@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AF5E0 (-GetIids@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WDI@EAAJPEA.c)
 *     ?GetIids@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WEA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AF600 (-GetIids@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WEA@EAAJPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2,IInspectable>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x50uLL);
  if ( v6 )
  {
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_50012faa_1510_4142_a1a5_019b09f8857b;
    v6[3] = GUID_f2e771ed_b803_5137_9435_1c96e48721e9;
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
