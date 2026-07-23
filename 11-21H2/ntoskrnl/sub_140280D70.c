/*
 * XREFs of sub_140280D70 @ 0x140280D70
 * Callers:
 *     sub_140243500 @ 0x140243500 (sub_140243500.c)
 *     sub_14062E9B0 @ 0x14062E9B0 (sub_14062E9B0.c)
 *     sub_1406F6CA4 @ 0x1406F6CA4 (sub_1406F6CA4.c)
 *     sub_14079D948 @ 0x14079D948 (sub_14079D948.c)
 * Callees:
 *     sub_140281380 @ 0x140281380 (sub_140281380.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406F7C44 @ 0x1406F7C44 (sub_1406F7C44.c)
 */

void __fastcall sub_140280D70(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        char a8,
        __int64 a9,
        unsigned int a10)
{
  unsigned __int16 v11; // cx
  __int64 v13; // rdx
  int v14; // eax
  _QWORD v15[2]; // [rsp+30h] [rbp-81h] BYREF
  int v16; // [rsp+40h] [rbp-71h]
  int v17; // [rsp+44h] [rbp-6Dh]
  int v18; // [rsp+48h] [rbp-69h]
  char v19; // [rsp+4Ch] [rbp-65h]
  char v20; // [rsp+4Dh] [rbp-64h]
  __int16 v21; // [rsp+4Eh] [rbp-63h]
  __int64 v22; // [rsp+50h] [rbp-61h]
  _BYTE v23[24]; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v24[3]; // [rsp+70h] [rbp-41h] BYREF
  int v25; // [rsp+88h] [rbp-29h]
  int v26; // [rsp+8Ch] [rbp-25h]
  __int64 *v27; // [rsp+90h] [rbp-21h]
  __int64 v28; // [rsp+98h] [rbp-19h]

  if ( a1 )
  {
    memset(v23, 0, sizeof(v23));
    v11 = *a1;
    if ( v11 )
    {
      v13 = *((_QWORD *)a1 + 1);
      if ( v13 )
      {
        if ( a2 )
          v14 = *(_DWORD *)(a2 + 1088);
        else
          v14 = 0;
        v16 = v14;
        v17 = a5;
        v18 = a6;
        v19 = a7;
        v20 = a8;
        v15[0] = a3;
        v15[1] = a4;
        v21 = 0;
        v22 = a9;
        *(_OWORD *)v23 = 0LL;
        if ( qword_140D05008 != -4540 && (*(_DWORD *)(qword_140D05008 + 4540) & 4) != 0 )
        {
          sub_1406F7C44(a1, v15, 5122LL, a10);
          v13 = *((_QWORD *)a1 + 1);
          v11 = *a1;
        }
        v24[1] = 56LL;
        v24[0] = v15;
        v25 = v11;
        v27 = &qword_14000EF90;
        v24[2] = v13;
        v26 = 0;
        v28 = 2LL;
        if ( a2 )
          sub_140281380(*(_QWORD *)(a2 + 2160), (unsigned int)v24, 3, 4, 5122, a10 != 0 ? 20977923 : 4200707);
        else
          sub_14035EDE4((unsigned int)v24, 3, 4, 5122, a10 != 0 ? 20977923 : 4200707);
      }
    }
  }
}
