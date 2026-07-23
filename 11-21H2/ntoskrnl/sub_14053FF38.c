/*
 * XREFs of sub_14053FF38 @ 0x14053FF38
 * Callers:
 *     sub_140832E84 @ 0x140832E84 (sub_140832E84.c)
 * Callees:
 *     ExSetTimer @ 0x1402D5750 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14053FF38(__int64 a1)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a1 + 337) )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    result = ExSetTimer(*(_QWORD *)(a1 + 488), -600000000LL, 0LL, (__int64)v3);
    *(_BYTE *)(a1 + 337) = 1;
  }
  return result;
}
