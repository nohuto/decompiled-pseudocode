/*
 * XREFs of ?ResultFromWin32Bool@@YAJH@Z @ 0x180079CA8
 * Callers:
 *     ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z @ 0x180079B58 (-GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x180079BF8 (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18006A5D0 (-ResultFromKnownLastError@@YAJXZ.c)
 */

signed int __fastcall ResultFromWin32Bool(int a1)
{
  signed int result; // eax

  result = 0;
  if ( !a1 )
    return ResultFromKnownLastError();
  return result;
}
