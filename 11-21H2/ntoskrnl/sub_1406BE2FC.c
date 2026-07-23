/*
 * XREFs of sub_1406BE2FC @ 0x1406BE2FC
 * Callers:
 *     sub_14065B108 @ 0x14065B108 (sub_14065B108.c)
 *     sub_1407169FC @ 0x1407169FC (sub_1407169FC.c)
 *     sub_14079B758 @ 0x14079B758 (sub_14079B758.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 */

__int64 __fastcall sub_1406BE2FC(ULONG_PTR BugCheckParameter2, char *Src, size_t Size, int a4, _DWORD *a5)
{
  size_t v6; // rsi
  bool v8; // cf
  __int64 result; // rax
  _DWORD *v11; // rdx
  _DWORD *v12; // r13
  _DWORD *v13; // r14
  unsigned int *v14; // r8
  unsigned __int16 v15; // ax
  int v16; // r13d
  size_t v17; // r8
  unsigned int *v18; // rcx
  unsigned __int16 i; // ax
  ULONG_PTR v20; // rdx
  ULONG_PTR v21; // rdx
  int v22; // [rsp+30h] [rbp-40h]
  _DWORD v23[2]; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v24[2]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v25[2]; // [rsp+48h] [rbp-28h] BYREF
  void *v26; // [rsp+50h] [rbp-20h] BYREF
  void *v27; // [rsp+58h] [rbp-18h] BYREF
  unsigned int *v28; // [rsp+60h] [rbp-10h]
  _DWORD *v29; // [rsp+A0h] [rbp+30h] BYREF

  v6 = (unsigned int)Size;
  v27 = 0LL;
  v23[0] = -1;
  v8 = *(_DWORD *)(BugCheckParameter2 + 220) < 4u;
  v23[1] = 0;
  if ( v8 || (unsigned int)(Size - 16345) > 0x7FFFC026 )
  {
    result = sub_14079C8A4(BugCheckParameter2, Size, a4, (_DWORD)a5, (__int64)&v27, (__int64)v23);
    if ( (int)result < 0 )
      return result;
    memmove(v27, Src, v6);
    v11 = v23;
    goto LABEL_5;
  }
  v12 = a5;
  v25[1] = 0;
  v24[1] = 0;
  v25[0] = -1;
  v24[0] = -1;
  v29 = 0LL;
  v26 = 0LL;
  result = sub_14079C8A4(BugCheckParameter2, 8, a4, (_DWORD)a5, (__int64)&v29, (__int64)v25);
  if ( (int)result < 0 )
    return result;
  v13 = v29;
  v14 = v29 + 1;
  *v29 = 25188;
  *v14 = -1;
  v28 = v14;
  LODWORD(v29) = (unsigned __int16)(((int)v6 + 16343) / 0x3FD8u);
  v22 = sub_14079C8A4(BugCheckParameter2, 4 * (int)v29, a4, (_DWORD)v14, (__int64)&v26, (__int64)v24);
  if ( v22 >= 0 )
  {
    if ( !(_DWORD)v29 )
    {
LABEL_19:
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter2, v24);
      else
        sub_1407C97C0(BugCheckParameter2, v24);
      v11 = v25;
LABEL_5:
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter2, v11);
      else
        sub_1407C97C0(BugCheckParameter2, v11);
      return 0LL;
    }
    memset(v26, -1, 4LL * (unsigned int)v29);
    v15 = *((_WORD *)v13 + 1);
    v16 = 0;
    while ( 1 )
    {
      v22 = sub_14079C8A4(BugCheckParameter2, 16344, a4, (unsigned int)v26 + 4 * v15, (__int64)&v27, (__int64)v23);
      if ( v22 < 0 )
        break;
      v17 = (unsigned int)v6;
      if ( (unsigned int)v6 > 0x3FD8 )
        v17 = 16344LL;
      memmove(v27, Src, v17);
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter2, v23);
      else
        sub_1407C97C0(BugCheckParameter2, v23);
      ++*((_WORD *)v13 + 1);
      v27 = 0LL;
      Src += 16344;
      v15 = *((_WORD *)v13 + 1);
      LODWORD(v6) = v6 - 16344;
      if ( ++v16 >= (unsigned int)v29 )
        goto LABEL_19;
    }
    v12 = a5;
  }
  v18 = (unsigned int *)v26;
  if ( v26 )
  {
    for ( i = *((_WORD *)v13 + 1); i; *((_WORD *)v13 + 1) = i )
    {
      v20 = v18[i];
      if ( (_DWORD)v20 != -1 )
      {
        sub_14079BD98(BugCheckParameter2, v20);
        i = *((_WORD *)v13 + 1);
        v18 = (unsigned int *)v26;
      }
      --i;
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter2, v24);
    else
      sub_1407C97C0(BugCheckParameter2, v24);
  }
  v21 = *v28;
  if ( (_DWORD)v21 != -1 )
    sub_14079BD98(BugCheckParameter2, v21);
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter2, v25);
  else
    sub_1407C97C0(BugCheckParameter2, v25);
  sub_14079BD98(BugCheckParameter2, (unsigned int)*v12);
  result = (unsigned int)v22;
  *v12 = -1;
  return result;
}
