/*
 * XREFs of CmpReferenceSecurityNode @ 0x14067F3E0
 * Callers:
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 * Callees:
 *     CmpKeySecurityIncrementReferenceCount @ 0x1404192F0 (CmpKeySecurityIncrementReferenceCount.c)
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
 *     HvpGetBinContextInitialize @ 0x140AF6200 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall CmpReferenceSecurityNode(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // edi
  __int64 CellFlat; // rax
  __int64 v5; // rsi
  int v6; // edi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  v3 = BugCheckParameter4;
  HvpGetBinContextInitialize((char *)&v8 + 4);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v3);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v5 = CellFlat;
  v6 = CmpKeySecurityIncrementReferenceCount(CellFlat, BugCheckParameter3, v3, 0);
  if ( v6 < 0 )
  {
    if ( v5 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v8);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v8);
    }
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v8);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v8);
    return 0;
  }
  return (unsigned int)v6;
}
