/*
 * XREFs of sub_1403CA20C @ 0x1403CA20C
 * Callers:
 *     sub_1403CAF18 @ 0x1403CAF18 (sub_1403CAF18.c)
 *     sub_14064ED40 @ 0x14064ED40 (sub_14064ED40.c)
 * Callees:
 *     sub_1403A8ACC @ 0x1403A8ACC (sub_1403A8ACC.c)
 *     sub_1403A8C98 @ 0x1403A8C98 (sub_1403A8C98.c)
 *     sub_1403AA258 @ 0x1403AA258 (sub_1403AA258.c)
 *     sub_1403AA764 @ 0x1403AA764 (sub_1403AA764.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140AAE4B0 @ 0x140AAE4B0 (sub_140AAE4B0.c)
 */

__int64 __fastcall sub_1403CA20C(unsigned __int16 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5, __int64 *a6)
{
  _QWORD *v9; // r14
  int v10; // esi
  __int64 v11; // rdi
  int v12; // ecx
  __int64 v13; // r15
  int v14; // r8d
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE *v17; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // ecx
  _BYTE *v22; // [rsp+58h] [rbp-59h] BYREF
  __int128 v23; // [rsp+60h] [rbp-51h] BYREF
  __int64 v24; // [rsp+70h] [rbp-41h]
  _BYTE v25[128]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v27; // [rsp+118h] [rbp+67h] BYREF
  int v28; // [rsp+120h] [rbp+6Fh] BYREF
  int v29; // [rsp+124h] [rbp+73h]

  v29 = HIDWORD(a4);
  memset(v25, 0, 0x46uLL);
  v9 = a6;
  v10 = 0;
  v22 = 0LL;
  v11 = 0LL;
  v28 = 0;
  v12 = 0;
  v27 = 0LL;
  v13 = *a6;
  a5 = 0;
  v24 = 0LL;
  v23 = 0LL;
  if ( a1 < 0x20u )
  {
LABEL_4:
    *a3 = v12;
    if ( !v13 && v10 >= 0 )
      return (unsigned int)v10;
    goto LABEL_13;
  }
  v14 = *(_DWORD *)(a2 + 16);
  a6 = *(__int64 **)(a2 + 8);
  sub_1403AA764((__int64 **)&qword_140C0DE60, a1, v14, *((_DWORD *)a6 + 10), (__int64)a6, &v22);
  v17 = v22;
  if ( v22 )
  {
LABEL_3:
    v12 = *((_DWORD *)v17 + 11);
    v9[2] = *(_QWORD *)(v17 + 62);
    goto LABEL_4;
  }
  v10 = sub_1403A8ACC(a2, a1, v15, v16, 0, &v27, &a5, (__int64)&v28, (__int64)v9);
  if ( v10 < 0 )
  {
    v11 = v27;
    v12 = a5;
    goto LABEL_4;
  }
  if ( v13 )
  {
    v17 = v25;
LABEL_10:
    v19 = v9[2];
    v20 = (__int64)a6;
    v21 = *((_DWORD *)a6 + 10);
    *((_DWORD *)v17 + 10) = *(_DWORD *)(a2 + 16);
    *((_DWORD *)v17 + 11) = a5;
    *((_DWORD *)v17 + 12) = v28;
    *((_WORD *)v17 + 30) = a1;
    v11 = v27;
    *((_DWORD *)v17 + 13) = 4;
    *((_DWORD *)v17 + 14) = 4;
    *((_DWORD *)v17 + 9) = v21;
    *((_QWORD *)v17 + 3) = v20;
    *((_QWORD *)v17 + 2) = v11;
    *(_QWORD *)(v17 + 62) = v19;
    if ( !v13 )
      sub_140AAE4B0(&qword_140C0DE60, v17);
    goto LABEL_3;
  }
  v17 = (_BYTE *)sub_1403AA258(0x46uLL, (__int64 *)&v23);
  if ( v17 )
    goto LABEL_10;
  v10 = -1073741801;
  v11 = v27;
  *a3 = a5;
LABEL_13:
  if ( v11 )
    sub_1403A8C98(v11, v9);
  return (unsigned int)v10;
}
