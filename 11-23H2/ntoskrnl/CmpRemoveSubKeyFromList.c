/*
 * XREFs of CmpRemoveSubKeyFromList @ 0x14070BF30
 * Callers:
 *     CmpRemoveSubKey @ 0x14070BE80 (CmpRemoveSubKey.c)
 *     CmRenameKey @ 0x140A1465C (CmRenameKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A29258 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A29650 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     CmpFindSubKeyInRoot @ 0x1406D7EBC (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1406D9510 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextMove @ 0x14070AC18 (HvpGetCellContextMove.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

char __fastcall CmpRemoveSubKeyFromList(ULONG_PTR BugCheckParameter2, unsigned int *a2, unsigned int a3)
{
  int v3; // esi
  _WORD *v6; // r13
  _WORD *CellFlat; // rax
  __int16 v9; // r12
  bool v10; // zf
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  _WORD *CellPaged; // rax
  _WORD *v14; // rdi
  UNICODE_STRING *v15; // r9
  UNICODE_STRING *v16; // r8
  unsigned int v17; // ecx
  unsigned __int16 v18; // ax
  unsigned int v19; // edx
  __int64 v20; // r9
  size_t v21; // r8
  _WORD *v22; // rdx
  _WORD *v23; // rcx
  char v24; // si
  UNICODE_STRING *p_DestinationString; // r8
  __int64 v27; // rax
  unsigned __int16 v28; // ax
  int SubKeyInRoot; // [rsp+30h] [rbp-30h]
  unsigned int v30[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v31[2]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v32[2]; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp+40h] BYREF
  _DWORD *v35; // [rsp+A8h] [rbp+48h]
  int v36; // [rsp+B8h] [rbp+58h] BYREF

  v35 = a2;
  v3 = -1;
  v32[0] = -1;
  v32[1] = 0;
  v30[0] = -1;
  v30[1] = 0;
  v31[0] = -1;
  v31[1] = 0;
  LODWORD(BugCheckParameter4) = 0;
  v6 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter2, a3);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter2, a3, v32);
  if ( !CellFlat )
    return 0;
  v9 = CellFlat[1] & 0x20;
  v10 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
  DestinationString.Length = CellFlat[36];
  DestinationString.MaximumLength = DestinationString.Length;
  DestinationString.Buffer = CellFlat + 38;
  if ( v10 )
    HvpReleaseCellPaged(BugCheckParameter2, v32);
  else
    HvpReleaseCellFlat(BugCheckParameter2, v32);
  v11 = *a2;
  v12 = *a2;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter2, v11);
  else
    CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter2, v11, v30);
  v14 = CellPaged;
  if ( !CellPaged )
    return 0;
  SubKeyInRoot = 0x80000000;
  if ( *CellPaged != 26994 )
    goto LABEL_10;
  p_DestinationString = &DestinationString;
  if ( v9 )
    p_DestinationString = 0LL;
  SubKeyInRoot = CmpFindSubKeyInRoot(
                   BugCheckParameter2,
                   (__int64)CellPaged,
                   (__int64)p_DestinationString,
                   (unsigned __int64)&DestinationString & -(__int64)(v9 != 0),
                   (unsigned int *)&BugCheckParameter4);
  if ( SubKeyInRoot < 0 )
  {
    v24 = 0;
LABEL_20:
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, v30);
    else
      HvpReleaseCellPaged(BugCheckParameter2, v30);
LABEL_22:
    if ( !v6 )
      return v24;
    goto LABEL_35;
  }
  v6 = v14;
  HvpGetCellContextMove((__int64)v31, (__int64)v30);
  v12 = BugCheckParameter4;
  v27 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter2, (unsigned int)BugCheckParameter4)
      : HvpGetCellPaged(BugCheckParameter2, BugCheckParameter4, v30);
  v14 = (_WORD *)v27;
  if ( v27 )
  {
LABEL_10:
    v36 = 0;
    if ( v9 )
    {
      v15 = &DestinationString;
      LODWORD(v16) = 0;
    }
    else
    {
      LODWORD(v15) = 0;
      v16 = &DestinationString;
    }
    CmpFindSubKeyInLeafWithStatus(
      BugCheckParameter2,
      (__int64)v14,
      (int)v16,
      (int)v15,
      &BugCheckParameter4,
      (unsigned int *)&v36);
    v17 = v36;
    if ( v36 < 0 )
    {
      v24 = 0;
LABEL_19:
      if ( !v14 )
        goto LABEL_22;
      goto LABEL_20;
    }
    v18 = v14[1] - 1;
    v14[1] = v18;
    if ( v18 )
    {
      v3 = v11;
      if ( v17 < v18 )
      {
        v19 = v18 - v17;
        v20 = v17 + 1;
        if ( *v14 == 26988 )
        {
          v21 = 4LL * v19;
          v22 = &v14[2 * v20 + 2];
          v23 = &v14[2 * v17 + 2];
        }
        else
        {
          v21 = 8LL * v19;
          v22 = &v14[4 * v20 + 2];
          v23 = &v14[4 * v17 + 2];
        }
        goto LABEL_17;
      }
    }
    else
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, v30);
      else
        HvpReleaseCellPaged(BugCheckParameter2, v30);
      v14 = 0LL;
      HvFreeCell(BugCheckParameter2, v12);
      if ( !v6 )
        goto LABEL_18;
      v28 = v6[1] - 1;
      v6[1] = v28;
      if ( !v28 )
      {
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter2, v31);
        else
          HvpReleaseCellPaged(BugCheckParameter2, v31);
        v6 = 0LL;
        HvFreeCell(BugCheckParameter2, v11);
        goto LABEL_18;
      }
      v3 = v11;
      if ( SubKeyInRoot < (unsigned int)v28 )
      {
        v21 = 4LL * ((unsigned int)v28 - SubKeyInRoot);
        v22 = &v6[2 * (SubKeyInRoot + 1) + 2];
        v23 = &v6[2 * SubKeyInRoot + 2];
LABEL_17:
        memmove(v23, v22, v21);
      }
    }
LABEL_18:
    *v35 = v3;
    v24 = 1;
    goto LABEL_19;
  }
  v24 = 0;
LABEL_35:
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, v31);
  else
    HvpReleaseCellPaged(BugCheckParameter2, v31);
  return v24;
}
