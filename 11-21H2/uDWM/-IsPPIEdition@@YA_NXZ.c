/*
 * XREFs of ?IsPPIEdition@@YA_NXZ @ 0x180018A58
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x180018AA4 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002D380 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180034220 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     <none>
 */

bool IsPPIEdition(void)
{
  DWORD v0; // eax

  v0 = `IsPPIEdition'::`2'::s_dwProductType;
  if ( !`IsPPIEdition'::`2'::s_dwProductType )
  {
    GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
    v0 = `IsPPIEdition'::`2'::s_dwProductType;
  }
  return v0 == 119;
}
