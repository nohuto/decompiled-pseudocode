/*
 * XREFs of sub_140579620 @ 0x140579620
 * Callers:
 *     sub_1405788B0 @ 0x1405788B0 (sub_1405788B0.c)
 * Callees:
 *     sub_140552C20 @ 0x140552C20 (sub_140552C20.c)
 *     sub_140579B48 @ 0x140579B48 (sub_140579B48.c)
 */

__int64 __fastcall sub_140579620(char a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v7[12]; // [rsp+28h] [rbp-18h]

  v6 = 0LL;
  BYTE4(v6) = a1;
  *(_DWORD *)v7 = 0;
  sub_140552C20((int *)&v6);
  *(_DWORD *)&v7[8] = a2;
  v6 = 0LL;
  *(_QWORD *)v7 = a3;
  result = sub_140579B48(&v6);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&v7[4] = 0LL;
    v6 = 1LL;
    *(_DWORD *)v7 = 192;
    return sub_140579B48(&v6);
  }
  return result;
}
