/*
 * XREFs of ?MaxTextureSizeFromFeatureLevel@CDevice@DirectComposition@@SAIW4D3D_FEATURE_LEVEL@@@Z @ 0x180038880
 * Callers:
 *     ?GetSafeMaxTextureSize@CDevice@DirectComposition@@QEAAIXZ @ 0x1800387F8 (-GetSafeMaxTextureSize@CDevice@DirectComposition@@QEAAIXZ.c)
 *     ?Initialize@CDxDevice@DirectComposition@@IEAAJPEAUIUnknown@@@Z @ 0x18009BA98 (-Initialize@CDxDevice@DirectComposition@@IEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::MaxTextureSizeFromFeatureLevel(int a1)
{
  __int64 result; // rax

  if ( a1 <= 37376 )
    return 2048LL;
  if ( a1 <= 37632 )
    return 4096LL;
  result = 0x4000LL;
  if ( a1 <= 41216 )
    return 0x2000LL;
  return result;
}
