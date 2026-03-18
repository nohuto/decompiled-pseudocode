/*
 * XREFs of CmpLoadManufacturingProfileNode @ 0x140B9A124
 * Callers:
 *     CmpLoadManufacturingProfileServicesNode @ 0x140B9A214 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6E0 (RtlInitUnicodeStringEx.c)
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
 *     CmpFindSubKeyByName @ 0x1408264AC (CmpFindSubKeyByName.c)
 *     CmpLoadManufacturingModeNode @ 0x140B99FFC (CmpLoadManufacturingModeNode.c)
 */

bool __fastcall CmpLoadManufacturingProfileNode(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        const WCHAR *a3,
        __int64 *a4,
        unsigned int *a5)
{
  unsigned int SubKeyByName; // edi
  __int64 CellFlat; // rax
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF

  v11 = 0LL;
  v13 = 0xFFFFFFFFLL;
  DestinationString = 0LL;
  if ( !a3 || !CmpLoadManufacturingModeNode(BugCheckParameter3, a2, &v11, (unsigned int *)&v13) )
    return 0;
  if ( RtlInitUnicodeStringEx(&DestinationString, a3) < 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v13);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v13);
    return 0;
  }
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v13);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v13);
  if ( SubKeyByName == -1 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, SubKeyByName, a5);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, SubKeyByName, a5);
  *a4 = CellFlat;
  return CellFlat != 0;
}
