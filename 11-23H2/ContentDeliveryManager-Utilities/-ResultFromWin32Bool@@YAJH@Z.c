/*
 * XREFs of ?ResultFromWin32Bool@@YAJH@Z @ 0x180079C58
 * Callers:
 *     ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z @ 0x180079B08 (-GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x180079BA8 (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18006A580 (-ResultFromKnownLastError@@YAJXZ.c)
 */

signed int __fastcall ResultFromWin32Bool(int a1)
{
  signed int result; // eax

  result = 0;
  if ( !a1 )
    return ResultFromKnownLastError();
  return result;
}
