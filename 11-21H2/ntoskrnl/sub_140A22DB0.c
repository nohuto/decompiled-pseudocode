/*
 * XREFs of sub_140A22DB0 @ 0x140A22DB0
 * Callers:
 *     sub_140825E70 @ 0x140825E70 (sub_140825E70.c)
 *     sub_14082666C @ 0x14082666C (sub_14082666C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140827AA8 @ 0x140827AA8 (sub_140827AA8.c)
 *     sub_140A22A30 @ 0x140A22A30 (sub_140A22A30.c)
 *     sub_140A22B30 @ 0x140A22B30 (sub_140A22B30.c)
 */

__int64 __fastcall sub_140A22DB0(__int64 a1, const WCHAR *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r9
  int v9; // ebx
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 **v14; // rax
  UNICODE_STRING *v15; // rcx
  __int64 v17; // [rsp+28h] [rbp-30h]
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  v6 = *(_QWORD *)&qword_140D00AC0;
  v7 = a3;
  if ( a3 <= 0 )
    return (unsigned int)-1073741811;
  if ( a3 > 2 )
  {
    if ( a3 == 3 )
      goto LABEL_4;
    return (unsigned int)-1073741811;
  }
  if ( *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 16LL * a3 + 24) != *(_QWORD *)&qword_140D00AC0 + 16LL * a3 + 24 )
    return (unsigned int)-1073741298;
LABEL_4:
  if ( (int)sub_140A22B30(*(__int64 *)&qword_140D00AC0, a2, 0, (const UNICODE_STRING **)&P) < 0 )
  {
    v9 = sub_140827AA8(
           (int *)v6,
           a2,
           v7,
           v8,
           a5,
           v17,
           -1,
           *(HANDLE *)(*(_QWORD *)(v6 + 224) + 8LL),
           (UNICODE_STRING **)&P);
    if ( v9 < 0 )
    {
      v15 = (UNICODE_STRING *)P;
    }
    else
    {
      v10 = *(_QWORD **)(v6 + 16);
      if ( *v10 != v6 + 8 )
        goto LABEL_12;
      v11 = P;
      *(_QWORD *)P = v6 + 8;
      v11[1] = v10;
      *v10 = v11;
      *(_QWORD *)(v6 + 16) = v11;
      v12 = v11 + 2;
      v13 = 16 * v7 + v6 + 24;
      v14 = *(__int64 ***)(v13 + 8);
      if ( *v14 != (__int64 *)v13 )
LABEL_12:
        __fastfail(3u);
      *v12 = v13;
      v12[1] = (__int64)v14;
      *v14 = v12;
      *(_QWORD *)(v13 + 8) = v12;
      memset((void *)(v6 + 96), 0, 0x80uLL);
      v15 = 0LL;
      *(_BYTE *)(v6 + 4) = *(_QWORD *)(v6 + 56) != v6 + 56;
    }
    if ( v15 )
      sub_140A22A30(v15);
  }
  else
  {
    return (unsigned int)-1073741771;
  }
  return (unsigned int)v9;
}
