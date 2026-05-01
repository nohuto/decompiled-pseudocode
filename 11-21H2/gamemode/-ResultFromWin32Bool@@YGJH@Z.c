/*
 * XREFs of ?ResultFromWin32Bool@@YGJH@Z @ 0x10006293
 * Callers:
 *     ?GetImpersonationTokenFromProcess@CallerIdentity@@YGJPAXKPAPAX@Z @ 0x100064A9 (-GetImpersonationTokenFromProcess@CallerIdentity@@YGJPAXKPAPAX@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall ResultFromWin32Bool(void *this)
{
  int result; // eax
  bool v2; // sf

  if ( this )
    return 0;
  result = GetLastError();
  v2 = result < 0;
  if ( result > 0 )
  {
    result = (unsigned __int16)result | 0x80070000;
    v2 = result < 0;
  }
  if ( !v2 )
    return -2147467259;
  return result;
}
