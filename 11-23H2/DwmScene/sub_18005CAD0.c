/*
 * XREFs of sub_18005CAD0 @ 0x18005CAD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800294DC @ 0x1800294DC (sub_1800294DC.c)
 *     sub_18005BA58 @ 0x18005BA58 (sub_18005BA58.c)
 *     sub_18005D714 @ 0x18005D714 (sub_18005D714.c)
 *     sub_180081538 @ 0x180081538 (sub_180081538.c)
 */

__int64 __fastcall sub_18005CAD0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v6; // ecx
  int v7; // r9d
  _DWORD *v8; // rax
  int v9; // r9d
  _DWORD *v10; // r8
  __int64 *v11; // rbx
  int v12; // eax
  _DWORD *v13; // rax
  __int128 v14; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v16[8]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-28h] BYREF

  result = *a4;
  v6 = *(_DWORD *)(*a4 + 440);
  if ( (v6 & 0x10000) != 0 && (v6 & 0x100000) != 0 && result != a1 )
  {
    sub_1800294DC((__int64)v16, 12LL, 8LL, sub_180010200);
    v7 = 0;
    do
    {
      v8 = (_DWORD *)sub_18005BA58((__int64)&v14, v7);
      v7 = v9 + 1;
      *(v10 - 2) = *v8;
      *(v10 - 1) = v8[1];
      *v10 = v8[2];
    }
    while ( v7 < 8 );
    v11 = (__int64 *)v16;
    do
    {
      v12 = *((_DWORD *)v11 + 2);
      *(_QWORD *)&v14 = *v11;
      DWORD2(v14) = v12;
      v13 = (_DWORD *)sub_18005D714(a1, &v15, &v14);
      *(_DWORD *)v11 = *v13;
      *((_DWORD *)v11 + 1) = v13[1];
      *((_DWORD *)v11 + 2) = v13[2];
      v11 = (__int64 *)((char *)v11 + 12);
    }
    while ( v11 != &v17 );
    v15 = xmmword_18019B980;
    v14 = xmmword_18019B980;
    sub_180081538(a1);
  }
  return result;
}
