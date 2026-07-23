/*
 * XREFs of CmpSetValueDataNew @ 0x14070967C
 * Callers:
 *     CmpAddValueKeyNew @ 0x14070A148 (CmpAddValueKeyNew.c)
 *     CmpSetValueKeyExisting @ 0x14070B914 (CmpSetValueKeyExisting.c)
 *     CmpCopyValue @ 0x1408ABBD4 (CmpCopyValue.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvAllocateCell @ 0x14070A5D8 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpSetValueDataNew(ULONG_PTR BugCheckParameter2, char *Src, size_t Size, int a4, _DWORD *a5)
{
  size_t v6; // rsi
  bool v8; // cf
  __int64 result; // rax
  unsigned int *v11; // rdx
  bool v12; // zf
  _DWORD *v13; // r12
  _DWORD *v14; // r14
  unsigned int *v15; // r8
  int v16; // r12d
  size_t v17; // r8
  unsigned int *v18; // rcx
  _BYTE *v19; // rsi
  unsigned __int16 i; // ax
  ULONG_PTR v21; // rdx
  ULONG_PTR v22; // rdx
  int Cell; // [rsp+30h] [rbp-40h]
  unsigned int v24[2]; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v25[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v26[2]; // [rsp+48h] [rbp-28h] BYREF
  void *v27; // [rsp+50h] [rbp-20h] BYREF
  void *v28; // [rsp+58h] [rbp-18h] BYREF
  unsigned int *v29; // [rsp+60h] [rbp-10h]
  _DWORD *v30; // [rsp+A0h] [rbp+30h] BYREF

  v6 = (unsigned int)Size;
  v28 = 0LL;
  v24[0] = -1;
  v8 = *(_DWORD *)(BugCheckParameter2 + 220) < 4u;
  v24[1] = 0;
  if ( v8 || (unsigned int)(Size - 16345) > 0x7FFFC026 )
  {
    result = HvAllocateCell(BugCheckParameter2, Size, a4, (_DWORD)a5, (__int64)&v28, (__int64)v24);
    if ( (int)result < 0 )
      return result;
    memmove(v28, Src, v6);
    v11 = v24;
    v12 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
    goto LABEL_5;
  }
  v13 = a5;
  v26[1] = 0;
  v25[1] = 0;
  v26[0] = -1;
  v25[0] = -1;
  v30 = 0LL;
  v27 = 0LL;
  result = HvAllocateCell(BugCheckParameter2, 8, a4, (_DWORD)a5, (__int64)&v30, (__int64)v26);
  if ( (int)result < 0 )
    return result;
  v14 = v30;
  v15 = v30 + 1;
  *v30 = 25188;
  *v15 = -1;
  v29 = v15;
  LODWORD(v30) = (unsigned __int16)(((int)v6 + 16343) / 0x3FD8u);
  Cell = HvAllocateCell(BugCheckParameter2, 4 * (int)v30, a4, (_DWORD)v15, (__int64)&v27, (__int64)v25);
  if ( Cell >= 0 )
  {
    if ( !(_DWORD)v30 )
    {
LABEL_19:
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, v25);
      else
        HvpReleaseCellPaged(BugCheckParameter2, v25);
      v12 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
      v11 = v26;
LABEL_5:
      if ( v12 )
        HvpReleaseCellPaged(BugCheckParameter2, v11);
      else
        HvpReleaseCellFlat(BugCheckParameter2, v11);
      return 0LL;
    }
    memset(v27, -1, 4LL * (unsigned int)v30);
    v16 = 0;
    while ( 1 )
    {
      Cell = HvAllocateCell(
               BugCheckParameter2,
               16344,
               a4,
               (unsigned int)v27 + 4 * *((unsigned __int16 *)v14 + 1),
               (__int64)&v28,
               (__int64)v24);
      if ( Cell < 0 )
        break;
      v17 = (unsigned int)v6;
      if ( (unsigned int)v6 > 0x3FD8 )
        v17 = 16344LL;
      memmove(v28, Src, v17);
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, v24);
      else
        HvpReleaseCellPaged(BugCheckParameter2, v24);
      ++*((_WORD *)v14 + 1);
      v28 = 0LL;
      Src += 16344;
      LODWORD(v6) = v6 - 16344;
      if ( ++v16 >= (unsigned int)v30 )
        goto LABEL_19;
    }
    v13 = a5;
  }
  v18 = (unsigned int *)v27;
  v19 = (_BYTE *)(BugCheckParameter2 + 140);
  if ( v27 )
  {
    for ( i = *((_WORD *)v14 + 1); i; *((_WORD *)v14 + 1) = i )
    {
      v21 = v18[i];
      if ( (_DWORD)v21 != -1 )
      {
        HvFreeCell(BugCheckParameter2, v21);
        v18 = (unsigned int *)v27;
      }
      i = *((_WORD *)v14 + 1) - 1;
    }
    v19 = (_BYTE *)(BugCheckParameter2 + 140);
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, v25);
    else
      HvpReleaseCellPaged(BugCheckParameter2, v25);
  }
  v22 = *v29;
  if ( (_DWORD)v22 != -1 )
  {
    HvFreeCell(BugCheckParameter2, v22);
    v19 = (_BYTE *)(BugCheckParameter2 + 140);
  }
  if ( (*v19 & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, v26);
  else
    HvpReleaseCellPaged(BugCheckParameter2, v26);
  HvFreeCell(BugCheckParameter2, (unsigned int)*v13);
  result = (unsigned int)Cell;
  *v13 = -1;
  return result;
}
