/*
 * XREFs of ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x1800C4A64
 * Callers:
 *     ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800C2774 (-SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18001B540 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     GetStaticImmersiveColorPrivForHighContrastState @ 0x18006F1D2 (GetStaticImmersiveColorPrivForHighContrastState.c)
 */

void __fastcall CImmersiveState::GetPillarBoxColor(struct _D3DCOLORVALUE *a1, __int64 a2)
{
  char IsHighContrastMode; // al
  int StaticImmersiveColorPrivForHighContrastState; // eax
  D3DVALUE v5; // xmm0_4

  IsHighContrastMode = CDesktopManager::IsHighContrastMode((__int64)a1, a2);
  StaticImmersiveColorPrivForHighContrastState = GetStaticImmersiveColorPrivForHighContrastState(
                                                   570,
                                                   IsHighContrastMode);
  v5 = GammaLUT_sRGB_to_scRGB[(unsigned __int8)StaticImmersiveColorPrivForHighContrastState] / 255.0;
  a1->a = 1.0;
  a1->r = v5;
  a1->g = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)StaticImmersiveColorPrivForHighContrastState >> 8]
        / 255.0;
  a1->b = GammaLUT_sRGB_to_scRGB[BYTE2(StaticImmersiveColorPrivForHighContrastState)] / 255.0;
}
