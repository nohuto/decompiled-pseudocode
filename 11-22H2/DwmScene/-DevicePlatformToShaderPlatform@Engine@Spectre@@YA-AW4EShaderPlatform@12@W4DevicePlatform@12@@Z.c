/*
 * XREFs of ?DevicePlatformToShaderPlatform@Engine@Spectre@@YA?AW4EShaderPlatform@12@W4DevicePlatform@12@@Z @ 0x18004F950
 * Callers:
 *     ?OnInitialize@Engine@1Spectre@@MEAAXAEBUEngineDescription@12@@Z @ 0x1800352A0 (-OnInitialize@Engine@1Spectre@@MEAAXAEBUEngineDescription@12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::DevicePlatformToShaderPlatform(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return 1LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 1LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 2LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 1LL;
  if ( v3 == 1 )
    return 3LL;
  return 0LL;
}
