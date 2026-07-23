/*
 * XREFs of sub_140365798 @ 0x140365798
 * Callers:
 *     sub_140350FA0 @ 0x140350FA0 (sub_140350FA0.c)
 *     sub_1403650F0 @ 0x1403650F0 (sub_1403650F0.c)
 *     sub_140365610 @ 0x140365610 (sub_140365610.c)
 * Callees:
 *     ExSetTimer @ 0x1402D5750 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140365798(_QWORD *a1)
{
  unsigned int v1; // ebx
  signed __int32 v2; // eax
  ULONG_PTR v3; // rcx
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  if ( dword_140C10DC8 )
  {
    if ( BYTE1(*a1) == 1 )
    {
      v2 = _InterlockedCompareExchange(&dword_140C10DC4, 1, 0);
      v3 = qword_140C10DD8;
    }
    else
    {
      v2 = _InterlockedCompareExchange(&dword_140C10DC0, 1, 0);
      v3 = qword_140C10DD0;
    }
    if ( !v2 )
    {
      v5[1] = -1LL;
      v5[0] = 0LL;
      ExSetTimer(v3, -10000000LL, 0LL, (__int64)v5);
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
