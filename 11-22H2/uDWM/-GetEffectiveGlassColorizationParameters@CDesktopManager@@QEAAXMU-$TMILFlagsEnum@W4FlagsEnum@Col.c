/*
 * XREFs of ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x1800B50C0
 * Callers:
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800E60E4 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180028AF0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 */

__int64 __fastcall CDesktopManager::GetEffectiveGlassColorizationParameters(
        __int64 a1,
        float a2,
        __int16 a3,
        char a4,
        _OWORD *a5)
{
  __int64 v5; // r10
  int v7; // [rsp+48h] [rbp+20h] BYREF

  v5 = (__int64)a5;
  *a5 = *(_OWORD *)(a1 + 476);
  *(_OWORD *)(v5 + 16) = *(_OWORD *)(a1 + 492);
  v7 = *(_DWORD *)(a1 + 440);
  if ( !a4 && *(_BYTE *)(a1 + 25) )
    a3 |= 4u;
  if ( *(_BYTE *)(a1 + 508) )
    a3 |= 0x20u;
  return CGlassColorizationParameters::AdjustWindowColorization((unsigned __int8 *)v5, (unsigned __int8 *)&v7, a2, a3);
}
