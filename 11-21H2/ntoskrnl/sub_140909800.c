/*
 * XREFs of sub_140909800 @ 0x140909800
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140909764 @ 0x140909764 (sub_140909764.c)
 */

__int64 __fastcall sub_140909800(int *a1, _DWORD *a2)
{
  __int64 result; // rax

  result = sub_140909764(a1);
  if ( (int)result >= 0 )
    *a2 = 0;
  return result;
}
