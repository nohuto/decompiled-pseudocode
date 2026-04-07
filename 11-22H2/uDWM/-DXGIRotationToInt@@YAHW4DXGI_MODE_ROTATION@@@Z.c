/*
 * XREFs of ?DXGIRotationToInt@@YAHW4DXGI_MODE_ROTATION@@@Z @ 0x1800BFDD8
 * Callers:
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x1800BFCC0 (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGIRotationToInt(enum DXGI_MODE_ROTATION a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 2;
  if ( !v1 )
    return 90LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 180LL;
  if ( v2 == 1 )
    return 270LL;
  return 0LL;
}
