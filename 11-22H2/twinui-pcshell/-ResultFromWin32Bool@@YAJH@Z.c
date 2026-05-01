/*
 * XREFs of ?ResultFromWin32Bool@@YAJH@Z @ 0x1803B0ED0
 * Callers:
 *     s_OnDrawItemHelper @ 0x18028640C (s_OnDrawItemHelper.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 */

signed int __fastcall ResultFromWin32Bool(int a1)
{
  signed int result; // eax

  result = 0;
  if ( !a1 )
    return ResultFromKnownLastError();
  return result;
}
