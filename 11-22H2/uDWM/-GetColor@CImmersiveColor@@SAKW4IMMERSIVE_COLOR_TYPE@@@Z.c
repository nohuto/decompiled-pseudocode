/*
 * XREFs of ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18005774C
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180028AF0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18006BC34 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveColor::GetColor(unsigned int a1)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  GetUserColorPreference(&v3, 0LL);
  return GetColorFromPreference(&v3, a1, 0LL, 1LL);
}
