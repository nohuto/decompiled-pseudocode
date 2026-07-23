/*
 * XREFs of KeInitializeDpc @ 0x1402940D0
 * Callers:
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406A1000 @ 0x1406A1000 (sub_1406A1000.c)
 *     sub_1406B4B90 @ 0x1406B4B90 (sub_1406B4B90.c)
 *     sub_1406EFD44 @ 0x1406EFD44 (sub_1406EFD44.c)
 *     sub_1407A41E0 @ 0x1407A41E0 (sub_1407A41E0.c)
 *     sub_1407D7B88 @ 0x1407D7B88 (sub_1407D7B88.c)
 *     sub_1407DA91C @ 0x1407DA91C (sub_1407DA91C.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 *     PoUserShutdownInitiated @ 0x1407EC000 (PoUserShutdownInitiated.c)
 *     sub_1407F32E0 @ 0x1407F32E0 (sub_1407F32E0.c)
 *     sub_140817258 @ 0x140817258 (sub_140817258.c)
 *     sub_1408268AC @ 0x1408268AC (sub_1408268AC.c)
 *     sub_14082A0D8 @ 0x14082A0D8 (sub_14082A0D8.c)
 *     sub_14082A224 @ 0x14082A224 (sub_14082A224.c)
 *     sub_140832270 @ 0x140832270 (sub_140832270.c)
 *     sub_1408334E4 @ 0x1408334E4 (sub_1408334E4.c)
 *     sub_14083697C @ 0x14083697C (sub_14083697C.c)
 *     sub_140851878 @ 0x140851878 (sub_140851878.c)
 *     sub_1408633F0 @ 0x1408633F0 (sub_1408633F0.c)
 *     sub_14093FB40 @ 0x14093FB40 (sub_14093FB40.c)
 *     sub_1409466AC @ 0x1409466AC (sub_1409466AC.c)
 *     KeInitializeSecondaryInterruptServices @ 0x1409618C0 (KeInitializeSecondaryInterruptServices.c)
 *     sub_140990100 @ 0x140990100 (sub_140990100.c)
 *     sub_1409A2F78 @ 0x1409A2F78 (sub_1409A2F78.c)
 *     sub_1409EEA80 @ 0x1409EEA80 (sub_1409EEA80.c)
 *     sub_140A48D9C @ 0x140A48D9C (sub_140A48D9C.c)
 *     sub_140A4AF0C @ 0x140A4AF0C (sub_140A4AF0C.c)
 *     sub_140A4E4B0 @ 0x140A4E4B0 (sub_140A4E4B0.c)
 *     sub_140A50C40 @ 0x140A50C40 (sub_140A50C40.c)
 *     sub_140A54598 @ 0x140A54598 (sub_140A54598.c)
 *     sub_140A57CB4 @ 0x140A57CB4 (sub_140A57CB4.c)
 *     sub_140A58CF8 @ 0x140A58CF8 (sub_140A58CF8.c)
 *     sub_140A59654 @ 0x140A59654 (sub_140A59654.c)
 *     sub_140A5B0D0 @ 0x140A5B0D0 (sub_140A5B0D0.c)
 *     sub_140A5B2F8 @ 0x140A5B2F8 (sub_140A5B2F8.c)
 *     sub_140A660C0 @ 0x140A660C0 (sub_140A660C0.c)
 *     sub_140A68BE8 @ 0x140A68BE8 (sub_140A68BE8.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 *     sub_140A91368 @ 0x140A91368 (sub_140A91368.c)
 *     sub_140A95A04 @ 0x140A95A04 (sub_140A95A04.c)
 *     sub_140A9D00C @ 0x140A9D00C (sub_140A9D00C.c)
 *     sub_140AAB5FC @ 0x140AAB5FC (sub_140AAB5FC.c)
 *     sub_140AAC1BC @ 0x140AAC1BC (sub_140AAC1BC.c)
 *     sub_140AAD1C4 @ 0x140AAD1C4 (sub_140AAD1C4.c)
 *     sub_140AAED7C @ 0x140AAED7C (sub_140AAED7C.c)
 *     sub_140AF2E9C @ 0x140AF2E9C (sub_140AF2E9C.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeDpc(PRKDPC Dpc, PKDEFERRED_ROUTINE DeferredRoutine, PVOID DeferredContext)
{
  Dpc->TargetInfoAsUlong = 275;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  Dpc->DeferredRoutine = DeferredRoutine;
  Dpc->DeferredContext = DeferredContext;
}
