/*
 * XREFs of sub_14023BC68 @ 0x14023BC68
 * Callers:
 *     sub_14023B798 @ 0x14023B798 (sub_14023B798.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405D868C @ 0x1405D868C (sub_1405D868C.c)
 */

__int64 __fastcall sub_14023BC68(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v2; // rdx
  int v4; // esi
  int v5; // edi
  __int64 result; // rax
  unsigned int v7; // eax
  unsigned int v8; // ecx
  bool v9; // cf
  int v10; // eax
  _BYTE v11[12]; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+3Ch] [rbp-34h]
  int v13; // [rsp+40h] [rbp-30h]
  __int128 v14; // [rsp+48h] [rbp-28h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h]

  v1 = *(_DWORD **)(a1 + 33976);
  v2 = *(_QWORD *)(a1 + 33968);
  v14 = 0LL;
  v15 = 0LL;
  v4 = v1[16];
  v5 = v1[19];
  if ( (xmmword_140D06910 & 0x8000) != 0 )
  {
    HIDWORD(v14) = 0;
    v7 = *(_DWORD *)(v2 + 512);
    v8 = v1[18];
    *(_DWORD *)&v11[8] = 24;
    if ( v8 >= v7 )
      v8 = v7;
    v9 = v8 < *(_DWORD *)(v2 + 448);
    DWORD1(v14) = v5;
    v12 = 0;
    LODWORD(v14) = v9 + 1;
    DWORD2(v14) = v1[27];
    v15 = *(_QWORD *)(a1 + 200);
    *(_QWORD *)v11 = &v14;
    sub_14035EDE4((unsigned int)v11, 1, -2147450880, 4659, 4200450);
  }
  result = (unsigned int)dword_140CE2078;
  if ( dword_140CE2078 )
  {
    v10 = *(_DWORD *)(a1 + 36);
    *(_QWORD *)&v11[4] = 0LL;
    v13 = v10;
    *(_DWORD *)v11 = v4;
    v12 = v5;
    return sub_1405D868C(a1 + 33832, &qword_1400264A0, 20LL, v11);
  }
  return result;
}
