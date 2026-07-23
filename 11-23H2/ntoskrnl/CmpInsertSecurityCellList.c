/*
 * XREFs of CmpInsertSecurityCellList @ 0x1407DE3F0
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     CmpAddSecurityCellToCache @ 0x14070D8E8 (CmpAddSecurityCellToCache.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpInsertSecurityCellList(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        unsigned int a3,
        char a4)
{
  unsigned int v5; // r14d
  bool v6; // zf
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 CellPaged; // rax
  __int64 v12; // r9
  __int64 v13; // rdi
  int v14; // r14d
  __int64 v15; // rcx
  __int64 CellFlat; // rax
  __int16 v18; // ax
  ULONG_PTR v19; // rdx
  __int64 v20; // rax
  ULONG_PTR v21; // rdx
  __int64 v22; // rax
  ULONG_PTR v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // [rsp+20h] [rbp-30h] BYREF
  __int64 v27; // [rsp+28h] [rbp-28h] BYREF
  __int64 v28; // [rsp+30h] [rbp-20h] BYREF
  __int64 v29; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v31; // [rsp+90h] [rbp+40h]
  char v32; // [rsp+A0h] [rbp+50h]

  v5 = BugCheckParameter4;
  v26 = 0xFFFFFFFFLL;
  v27 = 0xFFFFFFFFLL;
  v6 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v31 = 0LL;
  v8 = 0LL;
  v30[0] = 0xFFFFFFFFLL;
  v9 = 0LL;
  v29 = 0xFFFFFFFFLL;
  v10 = 0LL;
  v28 = 0xFFFFFFFFLL;
  v32 = 0;
  if ( v6 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a3, (unsigned int *)v30);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a3);
  v13 = CellPaged;
  if ( (a3 & 0x80000000) != 0 )
    goto LABEL_4;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v5);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v5, (unsigned int *)&v29);
  v9 = CellFlat;
  v18 = *(_WORD *)(CellFlat + 2) & 4;
  if ( a4 )
  {
    v10 = v9;
  }
  else
  {
    if ( v18 )
    {
LABEL_4:
      *(_DWORD *)(v13 + 8) = a3;
      *(_DWORD *)(v13 + 4) = a3;
      goto LABEL_5;
    }
    v19 = *(unsigned int *)(v9 + 16);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v20 = HvpGetCellFlat(BugCheckParameter3, v19);
    else
      v20 = HvpGetCellPaged(BugCheckParameter3, v19, (unsigned int *)&v28);
    v10 = v20;
  }
  v21 = *(unsigned int *)(v10 + 44);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v22 = HvpGetCellFlat(BugCheckParameter3, v21);
  else
    v22 = HvpGetCellPaged(BugCheckParameter3, v21, (unsigned int *)&v27);
  v23 = *(unsigned int *)(v22 + 4);
  v8 = v22;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v24 = HvpGetCellFlat(BugCheckParameter3, v23);
  else
    v24 = HvpGetCellPaged(BugCheckParameter3, v23, (unsigned int *)&v26);
  v31 = v24;
  v14 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v10 + 44), 0);
  if ( v14 < 0 )
    goto LABEL_7;
  v25 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v8 + 4), 0);
  v15 = v31;
  v14 = v25;
  if ( v25 < 0 )
    goto LABEL_8;
  *(_DWORD *)(v13 + 4) = *(_DWORD *)(v8 + 4);
  *(_DWORD *)(v13 + 8) = *(_DWORD *)(v31 + 8);
  *(_DWORD *)(v8 + 4) = a3;
  *(_DWORD *)(v31 + 8) = a3;
  v32 = 1;
LABEL_5:
  v14 = CmpAddSecurityCellToCache(BugCheckParameter3, a3, 0, v12);
  if ( v14 >= 0 )
  {
    v14 = 0;
LABEL_7:
    v15 = v31;
    goto LABEL_8;
  }
  v15 = v31;
  if ( v32 )
  {
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(v13 + 4);
    *(_DWORD *)(v31 + 8) = *(_DWORD *)(v13 + 8);
  }
LABEL_8:
  if ( v15 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v26);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v26);
  }
  if ( v8 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v27);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v27);
  }
  if ( v10 && v10 != v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v28);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v28);
  }
  if ( v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v29);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
  }
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v30);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v30);
  }
  return (unsigned int)v14;
}
