/*
 * XREFs of sub_14021538C @ 0x14021538C
 * Callers:
 *     sub_140214244 @ 0x140214244 (sub_140214244.c)
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 * Callees:
 *     sub_140215598 @ 0x140215598 (sub_140215598.c)
 *     sub_1402155C8 @ 0x1402155C8 (sub_1402155C8.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_140308F00 @ 0x140308F00 (sub_140308F00.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_1403C6E24 @ 0x1403C6E24 (sub_1403C6E24.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405B6C18 @ 0x1405B6C18 (sub_1405B6C18.c)
 */

__int64 __fastcall sub_14021538C(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // esi
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  ULONG_PTR v9; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // r10
  unsigned __int64 v12; // r14
  int v13; // r15d
  __int64 v14; // rdi
  __int64 v15; // rdi
  unsigned int v16; // r14d
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ebx
  __int64 v21; // [rsp+30h] [rbp-61h] BYREF
  ULONG_PTR v22; // [rsp+38h] [rbp-59h]
  unsigned __int64 v23; // [rsp+40h] [rbp-51h]
  __int64 v24; // [rsp+48h] [rbp-49h]
  unsigned __int64 v25; // [rsp+50h] [rbp-41h]
  __int64 v26; // [rsp+58h] [rbp-39h]
  _QWORD v27[5]; // [rsp+60h] [rbp-31h] BYREF
  int v28; // [rsp+88h] [rbp-9h]
  int v29; // [rsp+8Ch] [rbp-5h]
  unsigned __int64 v30; // [rsp+90h] [rbp-1h]

  v5 = a4;
  v26 = a3;
  if ( a4 == -1 || a4 == 24 || (a4 & 5) == 5 || (a4 & 0xFFFFFFF8) == 0x10 || a2 + a1 <= a1 && a2 + a1 )
    return 0LL;
  v7 = a1 & 0xFFF;
  v24 = v7;
  v23 = (unsigned __int64)(v7 + a2 + 4095) >> 12;
  v8 = (unsigned __int64)(v7 + a3 + 4095) >> 12;
  v25 = a1 >> 12;
  v9 = sub_140215598(a1 >> 12, a2, a3, a2);
  v22 = v9;
  if ( (v5 & 2) != 0 && (dword_140D06880 & 0x8000) != 0 )
    v5 &= ~2u;
  LODWORD(v21) = 0;
  if ( (a1 & 0x1FFFFF) == 0 && v10 >= 0x200000 )
  {
    v13 = a5 & 1;
    if ( (a5 & 1) == 0 && v8 == v11 )
    {
      v15 = sub_1403C6E24(v9, (__int64)&v21);
      if ( v15 )
        goto LABEL_16;
    }
  }
  v12 = v8 + 1;
  v13 = a5 & 1;
  if ( (a5 & 1) == 0 )
    v12 = v8;
  if ( v12 > 0xFFFFFFFF )
    return 0LL;
  v14 = sub_1403095B0(&qword_140C534C0, (unsigned int)v12);
  if ( !v14 )
    return 0LL;
  if ( (int)sub_140308F00(v14, v23, v22, v5, (a5 >> 1) & 1, (__int64)&v21) < 0 )
  {
    sub_1402BB6D0(&qword_140C534C0, v14, (unsigned int)v12);
    return 0LL;
  }
  v15 = v24 + (v14 << 25 >> 16);
LABEL_16:
  v16 = v21 & 1;
  if ( (v21 & 1) != 0 )
    sub_1402155C8(v15);
  if ( (dword_140D051BC & 1) != 0 )
  {
    v27[0] = 0LL;
    v27[1] = 0LL;
    v18 = v16 | 2;
    v28 = 0;
    v19 = 1LL;
    v30 = v25;
    v27[3] = v15;
    v27[4] = a1 & 0xFFFFFFFFFFFFF000uLL;
    v20 = a1 & 0xFFF;
    v27[2] = v26;
    if ( !v13 )
      v18 = v16;
    v29 = v20;
    if ( v5 >> 3 == 1 )
    {
      v19 = 0LL;
    }
    else if ( v5 >> 3 == 3 && (v5 & 7) != 0 )
    {
      v19 = 2LL;
    }
    sub_1405B6C18(v27, 1LL, v18, v19);
  }
  return v15;
}
