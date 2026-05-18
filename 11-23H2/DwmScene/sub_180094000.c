/*
 * XREFs of sub_180094000 @ 0x180094000
 * Callers:
 *     sub_180095580 @ 0x180095580 (sub_180095580.c)
 *     sub_18009564C @ 0x18009564C (sub_18009564C.c)
 * Callees:
 *     sub_18003A4B0 @ 0x18003A4B0 (sub_18003A4B0.c)
 *     sub_180095158 @ 0x180095158 (sub_180095158.c)
 */

_QWORD *__fastcall sub_180094000(_QWORD *a1, unsigned __int64 a2)
{
  LPVOID v3; // rax
  LPVOID lpMem; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  if ( a2 > 0x100 )
  {
    if ( a2 == 0x7FFFFFFFFFFFFFFFLL )
      a2 = 0x7FFFFFFFFFFFFFFFLL;
    sub_18003A4B0((__int64 *)&lpMem, a2);
    if ( v6 <= 0x100 )
    {
      sub_180095158(lpMem);
      v3 = a1 + 2;
      a1[1] = 256LL;
    }
    else
    {
      v3 = lpMem;
      a1[1] = v6;
    }
    *a1 = v3;
  }
  else
  {
    a1[1] = a2;
    *a1 = a1 + 2;
  }
  return a1;
}
