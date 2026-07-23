/*
 * XREFs of KxSwapStacksAndRetireDpcList @ 0x140428650
 * Callers:
 *     KiSwapStacksAndRetireDpcList @ 0x140428630 (KiSwapStacksAndRetireDpcList.c)
 * Callees:
 *     KiRetireDpcList @ 0x140245AC0 (KiRetireDpcList.c)
 */

void __fastcall KxSwapStacksAndRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x14042863FLL);
}
