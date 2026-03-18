/*
 * XREFs of KxSwapStacksAndRetireDpcList @ 0x1404282C0
 * Callers:
 *     KiSwapStacksAndRetireDpcList @ 0x1404282A0 (KiSwapStacksAndRetireDpcList.c)
 * Callees:
 *     KiRetireDpcList @ 0x1402459F0 (KiRetireDpcList.c)
 */

void __fastcall KxSwapStacksAndRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x1404282AFLL);
}
