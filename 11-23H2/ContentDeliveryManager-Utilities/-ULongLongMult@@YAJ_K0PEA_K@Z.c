/*
 * XREFs of ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180041AE4
 * Callers:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x1800429B0 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ??$_AllocArray@GVCTCoAllocPolicy@@@@YAJPEAXK_KPEAPEAG@Z @ 0x18004F490 (--$_AllocArray@GVCTCoAllocPolicy@@@@YAJPEAXK_KPEAPEAG@Z.c)
 *     ?Create@XPlex@XWinRT@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1800A2FF8 (-Create@XPlex@XWinRT@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEB_WPEAPEA_W@Z @ 0x1800BAB6C (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEB_WPEAPEA_W@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ULongLongMult(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v4 = a1 * a2;
  result = 0LL;
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = v4;
  }
  else
  {
    *a3 = -1LL;
    return 2147942934LL;
  }
  return result;
}
