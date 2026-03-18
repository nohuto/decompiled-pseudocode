/*
 * XREFs of DpcWatchdogTimerRemainsMoreThan @ 0x1C00264F0
 * Callers:
 *     CheckDpcWatchdogTimerExpireSoon @ 0x1C00263D8 (CheckDpcWatchdogTimerExpireSoon.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00038A0 (__security_check_cookie.c)
 */

char __fastcall DpcWatchdogTimerRemainsMoreThan(__int64 a1, __int64 a2, char a3)
{
  bool v5; // dl
  _BYTE v6[8]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+28h] [rbp-30h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  if ( !a3 )
  {
    v6[0] = 0;
    StorPortExtendedFunction(109LL, a1, v6);
    if ( v6[0] != 2 )
      return 1;
  }
  v8 = 0;
  v7 = 0LL;
  if ( (unsigned int)StorPortExtendedFunction(106LL, a1, &v7) )
    return 1;
  v5 = 1;
  if ( DWORD2(v7) )
    v5 = 100 * HIDWORD(v7) >= (unsigned int)(5 * DWORD2(v7));
  if ( (_DWORD)v7 )
  {
    if ( 100 * DWORD1(v7) < (unsigned int)(5 * v7) )
      return 0;
  }
  return v5;
}
