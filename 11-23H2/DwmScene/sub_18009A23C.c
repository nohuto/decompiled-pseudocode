/*
 * XREFs of sub_18009A23C @ 0x18009A23C
 * Callers:
 *     sub_180098B1C @ 0x180098B1C (sub_180098B1C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_1800161AC @ 0x1800161AC (sub_1800161AC.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180054950 @ 0x180054950 (sub_180054950.c)
 *     sub_180059D9C @ 0x180059D9C (sub_180059D9C.c)
 *     sub_180073DDC @ 0x180073DDC (sub_180073DDC.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18009A23C(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  int v4; // edi
  int v5; // r15d
  int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // eax
  void **v10; // rax
  __int64 v11; // rax
  __int64 v13[4]; // [rsp+20h] [rbp-59h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-39h] BYREF
  int v15; // [rsp+48h] [rbp-31h]
  int v16; // [rsp+4Ch] [rbp-2Dh]
  int v17; // [rsp+50h] [rbp-29h]
  int v18; // [rsp+54h] [rbp-25h]
  int v19; // [rsp+58h] [rbp-21h]
  __int128 v20; // [rsp+5Ch] [rbp-1Dh]
  int v21; // [rsp+6Ch] [rbp-Dh]
  int v22; // [rsp+70h] [rbp-9h]
  _QWORD v23[2]; // [rsp+78h] [rbp-1h] BYREF
  _BYTE v24[32]; // [rsp+88h] [rbp+Fh] BYREF

  v13[3] = (__int64)a1;
  v4 = 1;
  if ( a3 )
  {
    if ( *a3 == 1 )
    {
      v4 = 0;
    }
    else if ( *a3 != 2 )
    {
      switch ( *a3 )
      {
        case 3:
          v4 = 2;
          break;
        case 4:
          v4 = 7;
          break;
        case 5:
          v4 = 8;
          break;
        case 6:
          v4 = 9;
          break;
        case 7:
          v4 = 10;
          break;
        case 8:
          v4 = 6;
          break;
      }
    }
    if ( a3[1] == 1 )
      v5 = 2;
    else
      v5 = a3[1] == 3;
    if ( a3[2] == 1 )
      v6 = 2;
    else
      v6 = a3[2] == 3;
    v7 = sub_180026618(a2);
    sub_1800161AC(v7, v13);
    v8 = v13[0];
    v9 = sub_180059D9C((__int64)&unk_1801D3D90);
    sub_180073DDC((__int64)v24, v9);
    v10 = (void **)sub_18001C6E8(&v14, (__int64)"Deserialized sampler ", v24);
    sub_180029824(v8, v10);
    sub_180011B24((__int64)v24);
    v16 = 0;
    v17 = 0;
    v18 = 1;
    v19 = 7;
    v20 = xmmword_180106A08;
    v21 = 0;
    v22 = 2139095039;
    v14 = __PAIR64__(v5, v4);
    v15 = v6;
    sub_180054950(v13[0], &v14, 0LL);
    *a1 = v13[0];
    a1[1] = v13[1];
  }
  else
  {
    v11 = sub_180026618(a2);
    sub_1800161AC(v11, v23);
    *a1 = v23[0];
    a1[1] = v23[1];
  }
  return a1;
}
