/*
 * XREFs of InitSecurityCookie @ 0x1800AF690
 * Callers:
 *     LdrpInitialize @ 0x1800744E8 (LdrpInitialize.c)
 * Callees:
 *     LdrpGenRandom @ 0x18002B614 (LdrpGenRandom.c)
 *     LdrInitSecurityCookie @ 0x18002B654 (LdrInitSecurityCookie.c)
 *     ZwDelayExecution @ 0x1800A1530 (ZwDelayExecution.c)
 */

__int64 InitSecurityCookie()
{
  __int64 result; // rax
  __int64 v1; // rax
  signed __int32 v2[8]; // [rsp+0h] [rbp-38h] BYREF

  result = (unsigned int)_InterlockedIncrement(&SecurityCookieInitCount);
  if ( (_DWORD)result == 1 )
  {
    v1 = LdrpGenRandom();
    result = LdrInitSecurityCookie(0LL, 0LL, &_security_cookie, v1 ^ (unsigned int)dword_18019C3A8, 0LL);
    _InterlockedOr(v2, 0);
    SecurityCookieInitialized = 1;
  }
  else
  {
    while ( !SecurityCookieInitialized )
      result = ZwDelayExecution();
  }
  return result;
}
