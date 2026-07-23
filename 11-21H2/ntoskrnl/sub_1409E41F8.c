/*
 * XREFs of sub_1409E41F8 @ 0x1409E41F8
 * Callers:
 *     sub_1409E4114 @ 0x1409E4114 (sub_1409E4114.c)
 * Callees:
 *     sub_1402044B8 @ 0x1402044B8 (sub_1402044B8.c)
 *     sub_140204630 @ 0x140204630 (sub_140204630.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1409E41F8(int a1, _WORD *a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  int v6; // [rsp+38h] [rbp-380h]
  int v7; // [rsp+38h] [rbp-380h]
  int v8; // [rsp+48h] [rbp-370h]
  _QWORD v9[2]; // [rsp+60h] [rbp-358h] BYREF
  _BYTE v10[8]; // [rsp+70h] [rbp-348h] BYREF
  __int64 v11; // [rsp+78h] [rbp-340h]

  v9[0] = 0LL;
  result = sub_1402044B8(a1, (__int64)a2, (__int64)v10, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( *(_DWORD *)(v11 + 24) <= 2u )
    {
      v7 = 43;
      LODWORD(result) = sub_140204630(
                          a2,
                          *a3,
                          v9,
                          0LL,
                          0x800u,
                          L"%wZ%wc%wZ",
                          *(_QWORD *)(v11 + 32),
                          v7,
                          *(_QWORD *)(v11 + 32) + 16LL);
    }
    else
    {
      v8 = 35;
      v6 = 43;
      LODWORD(result) = sub_140204630(
                          a2,
                          *a3,
                          v9,
                          0LL,
                          0x800u,
                          L"%wZ%wc%wZ%wc%wZ",
                          *(_QWORD *)(v11 + 32),
                          v6,
                          *(_QWORD *)(v11 + 32) + 16LL,
                          v8,
                          *(_QWORD *)(v11 + 32) + 32LL);
    }
    if ( (int)result >= 0 )
      *a3 = v9[0] - (_QWORD)a2 + 2LL;
    return (unsigned int)result;
  }
  return result;
}
