/*
 * XREFs of floorf @ 0x180060ED4
 * Callers:
 *     DwmpCalculateColorizationColor @ 0x18000B1D8 (DwmpCalculateColorizationColor.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180018180 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x1800181B0 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18002CD50 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002D380 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     PacksRGBColor @ 0x1800BD2F4 (PacksRGBColor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf(float X)
{
  return __imp_floorf(X);
}
