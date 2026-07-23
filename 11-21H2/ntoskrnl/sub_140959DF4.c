/*
 * XREFs of sub_140959DF4 @ 0x140959DF4
 * Callers:
 *     sub_140959D3C @ 0x140959D3C (sub_140959D3C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407483B4 @ 0x1407483B4 (sub_1407483B4.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_140959B60 @ 0x140959B60 (sub_140959B60.c)
 *     sub_140959F9C @ 0x140959F9C (sub_140959F9C.c)
 */

__int64 __fastcall sub_140959DF4(ULONG_PTR BugCheckParameter2, __int64 a2, _DWORD *a3, _QWORD *a4, _DWORD *a5, char a6)
{
  int v6; // r15d
  int v7; // eax
  __int64 v10; // r13
  int v12; // eax
  _DWORD *v13; // r14
  unsigned int v14; // edi
  __int64 v15; // rbx
  _DWORD *v16; // rsi
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // ecx
  int v21; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v22; // [rsp+70h] [rbp+18h]

  v22 = a3;
  v21 = 0;
  v6 = 0;
  v7 = *(_DWORD *)(BugCheckParameter2 + 300);
  v10 = a2;
  if ( v7 != 778 )
  {
    v18 = v7 - 769;
    if ( v18 <= 0x13 )
    {
      v19 = 787487;
      if ( _bittest(&v19, v18) )
      {
LABEL_22:
        v13 = a5;
        if ( a5 )
          *a5 = 4;
        goto LABEL_24;
      }
    }
LABEL_17:
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000) == 0 )
    {
      v6 = -1073741823;
      if ( a5 )
        *a5 = 3;
      goto LABEL_20;
    }
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000) != 0 )
    goto LABEL_17;
  LOBYTE(a2) = a6;
  v12 = sub_140959F9C(BugCheckParameter2, a2);
  v13 = a5;
  v6 = v12;
  if ( v12 < 0 )
  {
    sub_140959B60(BugCheckParameter2);
    if ( v13 )
      *v13 = 1;
  }
  else
  {
    if ( v12 == 281 )
      sub_14076FB70(BugCheckParameter2, 1024);
    v14 = *a3;
    v15 = *(_QWORD *)(BugCheckParameter2 + 32);
    v16 = (_DWORD *)(v10 + ((unsigned __int64)v14 << 6));
    memset(v16, 0, 0x40uLL);
    *(_QWORD *)v16 = v15;
    v16[3] = 4;
    sub_1407483B4((unsigned __int64)v16, v10 + ((unsigned __int64)(v14 + 1) << 6), &v21);
    v17 = (unsigned __int64)(unsigned int)*v22 << 6;
    if ( *(int *)(v17 + v10 + 56) < 0 )
    {
      v6 = *(_DWORD *)(v17 + v10 + 56);
      sub_140959B60(BugCheckParameter2);
      if ( v13 )
        *v13 = 2;
    }
    else if ( (*(_DWORD *)(v17 + v10 + 8) & 0x20) == 0 )
    {
      ++*v22;
    }
  }
  if ( v6 < 0 )
  {
LABEL_20:
    if ( a4 )
      *a4 = BugCheckParameter2;
    return (unsigned int)v6;
  }
LABEL_24:
  if ( a4 )
    *a4 = 0LL;
  if ( v13 )
    *v13 = 0;
  return (unsigned int)v6;
}
