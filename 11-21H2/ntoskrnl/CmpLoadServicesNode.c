/*
 * XREFs of CmpLoadServicesNode @ 0x140B133D8
 * Callers:
 *     CmpFindDrivers @ 0x140B141E0 (CmpFindDrivers.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByName @ 0x14082F108 (CmpFindSubKeyByName.c)
 */

char __fastcall CmpLoadServicesNode(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 *a3, unsigned int *a4)
{
  __int64 CellFlat; // rax
  unsigned int SubKeyByName; // edi
  __int64 CellPaged; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v11);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v11);
  if ( !CellFlat )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v11);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v11);
  if ( SubKeyByName != -1
    && ((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? (CellPaged = HvpGetCellFlat(BugCheckParameter3, SubKeyByName, a4))
      : (CellPaged = HvpGetCellPaged(BugCheckParameter3, SubKeyByName, a4)),
        (*a3 = CellPaged) != 0) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
