/*
 * XREFs of sub_140351E90 @ 0x140351E90
 * Callers:
 *     sub_140351880 @ 0x140351880 (sub_140351880.c)
 *     sub_1403625F8 @ 0x1403625F8 (sub_1403625F8.c)
 *     sub_14036F04C @ 0x14036F04C (sub_14036F04C.c)
 *     sub_1403700FC @ 0x1403700FC (sub_1403700FC.c)
 *     sub_140370C40 @ 0x140370C40 (sub_140370C40.c)
 * Callees:
 *     sub_14023CD70 @ 0x14023CD70 (sub_14023CD70.c)
 *     sub_140352090 @ 0x140352090 (sub_140352090.c)
 *     sub_140362B58 @ 0x140362B58 (sub_140362B58.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403E0320 @ 0x1403E0320 (sub_1403E0320.c)
 */

__int64 __fastcall sub_140351E90(__int64 *a1, __int64 *a2, __int64 a3, int a4, int a5, __int128 *a6)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // esi
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int128 v20; // [rsp+50h] [rbp-49h]
  unsigned int v21[3]; // [rsp+60h] [rbp-39h] BYREF
  int v22; // [rsp+6Ch] [rbp-2Dh]
  __int64 v23; // [rsp+70h] [rbp-29h]
  __int128 v24; // [rsp+80h] [rbp-19h] BYREF
  int v25; // [rsp+90h] [rbp-9h]

  *(_QWORD *)&v24 = 0x100000001000LL;
  *((_QWORD *)&v24 + 1) = 0x20000000200000LL;
  v25 = 0x40000000;
  v20 = *a6;
  if ( (a4 & 0xFEFFFFFF) == 0x2000 && (a4 & 0x1000000) == 0 )
  {
    v24 = *a6;
    v14 = sub_140362B58(&v24);
    v16 = 0;
    v22 = 0;
    if ( BYTE3(v20) )
      v21[0] = BYTE3(v20) - 1;
    else
      v21[0] = -1;
    v21[1] = BYTE1(v20);
    v21[2] = BYTE2(v20);
    if ( (v20 & 8) != 0 )
      v16 = 1;
    v17 = *a2;
    v23 = *((_QWORD *)&v20 + 1);
    v22 = v16;
    *(_QWORD *)&v24 = v17 - (((_DWORD)v17 - 1) & 0xFFFFF) + 0xFFFFF;
    v18 = sub_14023CD70(v14 + 88, (__int64)&v24, v15, v21);
    if ( !v18 )
      return 3221225626LL;
    *a2 = v24;
    *a1 = v18;
    return 0LL;
  }
  v8 = *a2;
  v9 = v8 - 1;
  if ( (a4 & 0x2000) != 0 )
  {
    v19 = *((unsigned int *)&v24 + BYTE1(v20));
    v10 = v19 - ((v19 + v9) & (unsigned int)(v19 - 1)) + v8 - 1;
  }
  else
  {
    v10 = v8 - (v9 & 0xFFF) + 4095;
  }
  *(_QWORD *)&v24 = v10;
  if ( (a4 & 0x1000) != 0 && BYTE1(v20) >= 4u )
  {
    *a2 = v10;
    if ( (a4 & 0x40000000) != 0 )
      sub_1403E0320(*a1, v10);
    return 0LL;
  }
  v11 = a4 & 0xFEFBFFFF | 0x40000;
  if ( (((unsigned __int8)v20 >> 3) & ((a4 & 0x2000) != 0)) == 0 )
    v11 = a4 & 0xFEFFFFFF;
  result = sub_140352090((_DWORD)a1, (unsigned int)&v24, 0, v11, a5, ((unsigned __int8)v20 >> 1) & 3, BYTE1(v20));
  if ( (int)result >= 0 )
  {
    v13 = v24;
    if ( (v11 & 0x1000) != 0 && BYTE1(v20) >= 2u && (v11 & 0x40000000) != 0 )
      sub_1403E0320(*a1, v24);
    *a2 = v13;
    return 0LL;
  }
  return result;
}
