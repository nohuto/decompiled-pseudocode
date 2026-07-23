/*
 * XREFs of sub_14065AED8 @ 0x14065AED8
 * Callers:
 *     sub_1402260D0 @ 0x1402260D0 (sub_1402260D0.c)
 *     sub_14065AAAC @ 0x14065AAAC (sub_14065AAAC.c)
 *     sub_1407F6698 @ 0x1407F6698 (sub_1407F6698.c)
 * Callees:
 *     sub_14065B030 @ 0x14065B030 (sub_14065B030.c)
 *     sub_14069F434 @ 0x14069F434 (sub_14069F434.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406C01F4 @ 0x1406C01F4 (sub_1406C01F4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065AED8(__int64 a1)
{
  __int16 v2; // cx
  unsigned int v3; // r9d
  _QWORD *v4; // r14
  ULONG_PTR v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edi
  unsigned int v12; // eax
  __int16 v14; // ax
  char v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = 0LL;
  v15 = 0;
  sub_1407C97FC(&v16);
  if ( *(_BYTE *)(a1 + 4) )
  {
    if ( *(_DWORD *)a1 == -1 )
      return (unsigned int)-2147483622;
    v2 = *(_WORD *)(a1 + 6);
    ++*(_DWORD *)(a1 + 8);
  }
  else
  {
    v2 = *(_WORD *)(a1 + 12);
    *(_BYTE *)(a1 + 4) = 1;
    *(_WORD *)(a1 + 6) = v2;
    *(_DWORD *)(a1 + 8) = 0;
  }
  *(_DWORD *)a1 = -1;
  if ( v2 < 0 )
    return (unsigned int)-2147483622;
  while ( 1 )
  {
    v4 = (_QWORD *)sub_14069F434(a1, (unsigned __int16)v2);
    if ( v3 < *((_DWORD *)v4 + 6) )
      break;
LABEL_15:
    v14 = *(_WORD *)(a1 + 6) - 1;
    *(_DWORD *)(a1 + 8) = 0;
    v2 = v14;
    *(_WORD *)(a1 + 6) = v14;
    if ( v14 < 0 )
      return (unsigned int)-2147483622;
  }
  while ( 1 )
  {
    v5 = *v4;
    if ( (*(_BYTE *)(*v4 + 140LL) & 1) != 0 )
      v6 = sub_1406BF400(v5, *(unsigned int *)(v4[1] + 4LL * v3));
    else
      v6 = sub_1407C9820(v5);
    if ( (unsigned __int8)sub_1406C01F4(*v4, v6) )
    {
      if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
        sub_1406BF450(v8, &v16);
      else
        sub_1407C97C0(v8, &v16);
      v3 = ++*(_DWORD *)(a1 + 8);
      goto LABEL_25;
    }
    v9 = sub_14065B030(a1, *(unsigned __int16 *)(a1 + 6), v7, &v15);
    v10 = *v4;
    v11 = v9;
    if ( (*(_BYTE *)(*v4 + 140LL) & 1) != 0 )
      sub_1406BF450(v10, &v16);
    else
      sub_1407C97C0(v10, &v16);
    if ( v11 < 0 )
      return (unsigned int)v11;
    v12 = *(_DWORD *)(a1 + 8);
    if ( !v15 )
      break;
    v3 = v12 + 1;
    *(_DWORD *)(a1 + 8) = v12 + 1;
LABEL_25:
    if ( v3 >= *((_DWORD *)v4 + 6) )
      goto LABEL_15;
  }
  v11 = 0;
  *(_DWORD *)a1 = *(_DWORD *)(v4[1] + 4LL * v12);
  return (unsigned int)v11;
}
