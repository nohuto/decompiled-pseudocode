/*
 * XREFs of ?ScaleFactorToResourceScale@Common@ShellMRTHelper@@YA?AW4RESOURCE_SCALE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800C447C
 * Callers:
 *     ?InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ @ 0x1800C3B84 (-InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ShellMRTHelper::Common::ScaleFactorToResourceScale(int a1)
{
  int v1; // ecx
  int v2; // ecx
  __int64 result; // rax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx

  if ( a1 <= 200 )
  {
    if ( a1 == 200 )
      return 9LL;
    v1 = a1 - 100;
    if ( v1 )
    {
      v2 = v1 - 20;
      if ( !v2 )
        return 7LL;
      result = 5LL;
      v4 = v2 - 5;
      if ( !v4 )
        return 8LL;
      v5 = v4 - 15;
      if ( !v5 )
        return 1LL;
      v6 = v5 - 10;
      if ( !v6 )
        return 4LL;
      v7 = v6 - 10;
      if ( !v7 )
        return result;
      v8 = v7 - 15;
      if ( v8 )
      {
        if ( v8 == 5 )
          return 2LL;
        return 0LL;
      }
      return 9LL;
    }
    return 0LL;
  }
  v9 = a1 - 225;
  if ( !v9 )
    return 6LL;
  v10 = v9 - 25;
  if ( !v10 )
    return 12LL;
  v11 = v10 - 50;
  if ( !v11 )
    return 13LL;
  v12 = v11 - 50;
  if ( !v12 )
    return 14LL;
  v13 = v12 - 50;
  if ( !v13 )
    return 14LL;
  v14 = v13 - 50;
  if ( v14 && v14 != 50 )
    return 0LL;
  return 15LL;
}
