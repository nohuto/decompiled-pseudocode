/*
 * XREFs of floorf @ 0x18005D2D4
 * Callers:
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x180011F9C (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CDWriteText@@UEAAJXZ @ 0x1800180F0 (-ValidateVisual@CDWriteText@@UEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x1800284A0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180028AF0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     DwmpCalculateColorizationColor @ 0x18003D85C (DwmpCalculateColorizationColor.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180045468 (-RoundToNearestInt@@YAHM@Z.c)
 *     PacksRGBColor @ 0x1800C1248 (PacksRGBColor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf(float X)
{
  return __imp_floorf(X);
}
