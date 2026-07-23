/*
 * XREFs of sub_140A27CF4 @ 0x140A27CF4
 * Callers:
 *     sub_14076E224 @ 0x14076E224 (sub_14076E224.c)
 *     sub_140A297B0 @ 0x140A297B0 (sub_140A297B0.c)
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 */

__int64 __fastcall sub_140A27CF4(int *a1, int a2, int a3, _WORD *a4)
{
  __int64 result; // rax
  int v8; // [rsp+38h] [rbp-90h]
  int v9; // [rsp+40h] [rbp-88h]
  _WORD v10[40]; // [rsp+50h] [rbp-78h] BYREF

  result = sub_140773030(a1, v10);
  if ( (int)result >= 0 )
  {
    v9 = a3;
    v8 = a2;
    return sub_1402DFBC4(a4, 0x39uLL, 0LL, 0LL, 0x800u, L"%ws\\%04X\\%u", v10, v8, v9);
  }
  return result;
}
