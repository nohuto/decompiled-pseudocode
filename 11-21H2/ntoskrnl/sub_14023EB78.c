/*
 * XREFs of sub_14023EB78 @ 0x14023EB78
 * Callers:
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 * Callees:
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_14023ECD8 @ 0x14023ECD8 (sub_14023ECD8.c)
 *     sub_14027449C @ 0x14027449C (sub_14027449C.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_14027FEF8 @ 0x14027FEF8 (sub_14027FEF8.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 */

__int64 __fastcall sub_14023EB78(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  int v8; // ebp
  __int64 v9; // rax
  _DWORD *v10; // rbx
  __int64 result; // rax
  int v12; // r9d
  __int64 v13; // rdx
  unsigned int v14; // ebx
  char v15; // al
  unsigned __int64 v16; // rax
  int v17; // [rsp+50h] [rbp+8h] BYREF

  v8 = a1;
  if ( (*((_BYTE *)KeGetCurrentThread() + 1384) & 4) != 0 )
  {
    v14 = -1073741663;
LABEL_22:
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
    {
      LOBYTE(a2) = 17;
      sub_140334790(a3, a2);
    }
    *a6 = 0;
    return v14;
  }
  v9 = *(_QWORD *)(a1 + 16);
  if ( (v9 & 1) != 0 )
  {
    v16 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v16 == 5 && (*(_DWORD *)(v16 + 56) & 4) != 0 )
    {
      v14 = -1073741801;
      goto LABEL_22;
    }
  }
  if ( (*(_BYTE *)(a1 + 69) & 8) != 0 )
  {
    v14 = -1073740748;
    goto LABEL_22;
  }
  v10 = a6;
  result = sub_14023ECD8(a1, a2, a3, (unsigned int)*(_QWORD *)a4 - 32, a4, a5, (__int64)a6);
  if ( *v10 == 1 )
    return result;
  if ( *(__int64 *)(a4 + 40) < 0 )
    sub_14027449C(a3, 1LL);
  v17 = 0;
  LOBYTE(v12) = 2;
  v14 = sub_14027FEF8(v8, a4, a3, v12, (__int64)&v17);
  if ( !v17 )
  {
    if ( a3 )
    {
      sub_140239060(a3);
      sub_140336AD8(a3);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( !v14 )
    {
      sub_140274508(a4, 3LL);
      v15 = *(_BYTE *)(a4 + 34);
      *(_QWORD *)(a4 + 24) ^= (*(_QWORD *)(a4 + 24) ^ (*(_QWORD *)(a4 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_BYTE *)(a4 + 34) = v15 & 0xF8 | 6;
      sub_140336AD8(a4);
      return 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
    {
      LOBYTE(v13) = 17;
      sub_140334790(a3, v13);
    }
  }
  return v14;
}
