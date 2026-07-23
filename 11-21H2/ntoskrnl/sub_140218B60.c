/*
 * XREFs of sub_140218B60 @ 0x140218B60
 * Callers:
 *     sub_1402F9680 @ 0x1402F9680 (sub_1402F9680.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     sub_1402FB0E0 @ 0x1402FB0E0 (sub_1402FB0E0.c)
 *     sub_1402FBC90 @ 0x1402FBC90 (sub_1402FBC90.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 *     sub_140384600 @ 0x140384600 (sub_140384600.c)
 *     sub_14038473C @ 0x14038473C (sub_14038473C.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     SeExamineSacl @ 0x1409CAE50 (SeExamineSacl.c)
 *     sub_1409CB770 @ 0x1409CB770 (sub_1409CB770.c)
 * Callees:
 *     sub_140204870 @ 0x140204870 (sub_140204870.c)
 *     sub_1402199B0 @ 0x1402199B0 (sub_1402199B0.c)
 *     sub_14028AB90 @ 0x14028AB90 (sub_14028AB90.c)
 *     sub_1403005E0 @ 0x1403005E0 (sub_1403005E0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140649D44 @ 0x140649D44 (sub_140649D44.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140218B60(__int64 a1, __int64 *a2)
{
  int v3; // ebx
  _BYTE *v4; // rdi
  _DWORD *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r14
  _QWORD *v8; // rax
  unsigned int v9; // r12d
  int v11; // eax
  int v12; // r15d
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v19; // [rsp+50h] [rbp-B0h]
  _BYTE P[256]; // [rsp+60h] [rbp-A0h] BYREF

  v19 = a2;
  v17 = 2;
  v16 = 0;
  v15 = 256;
  v3 = 0;
  v18 = 0LL;
  v4 = P;
  v5 = (_DWORD *)sub_1402199B0(48LL, a2, 1950442835LL);
  v6 = (__int64)v5;
  if ( !v5 )
    return (unsigned int)-1073741801;
  *v5 = 0;
  v7 = a1 + 8;
  v8 = v5 + 2;
  *(_DWORD *)(v6 + 24) = 0;
  v9 = 0;
  v8[1] = v8;
  *v8 = v8;
  *(_QWORD *)(v6 + 40) = v6 + 32;
  *(_QWORD *)(v6 + 32) = v6 + 32;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_12;
  do
  {
    if ( v4 && v4 != P )
      ExFreePoolWithTag(v4, 0);
    v15 = 256;
    v4 = P;
    if ( *(_BYTE *)v7 != 18 || (*(_BYTE *)(v7 + 1) & 8) != 0 )
      goto LABEL_7;
    v11 = 4 * *(unsigned __int8 *)(v7 + 9);
    v12 = *(unsigned __int16 *)(v7 + 2) - v11;
    v3 = sub_140649D44(v7 + 8 + (unsigned int)(v11 + 8), (unsigned int)(v12 - 16), P, &v15);
    if ( v3 == -1073741789 )
    {
      v4 = (_BYTE *)sub_1402199B0(v15, v13, 1950442835LL);
      if ( !v4 )
      {
        v3 = -1073741801;
LABEL_29:
        sub_14028AB90(v6);
        ExFreePoolWithTag((PVOID)v6, 0);
        return (unsigned int)v3;
      }
      v3 = sub_140649D44(v7 + 4 * (*(unsigned __int8 *)(v7 + 9) + 4LL), (unsigned int)(v12 - 16), v4, &v15);
    }
    if ( v3 < 0 )
      break;
    *((_QWORD *)&v18 + 1) = v4;
    LOWORD(v18) = 1;
    DWORD1(v18) = 1;
    v14 = sub_1403005E0(v6, v4, 1LL, 0LL, 0, &v16);
    v3 = v14;
    if ( v14 == -1073741789 || v14 == -1073741275 )
    {
      v3 = 0;
    }
    else if ( v14 < 0 )
    {
      break;
    }
    if ( v16 <= 0x10 )
    {
      v3 = sub_140204870(v6, &v17, (__int64)&v18);
      if ( v3 < 0 )
        break;
    }
LABEL_7:
    ++v9;
    v7 += *(unsigned __int16 *)(v7 + 2);
  }
  while ( v9 < *(unsigned __int16 *)(a1 + 4) );
  if ( v4 && v4 != P )
    ExFreePoolWithTag(v4, 0);
  if ( v3 < 0 )
    goto LABEL_29;
LABEL_12:
  *v19 = v6;
  return (unsigned int)v3;
}
