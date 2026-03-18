/*
 * XREFs of CmpLoadManufacturingProfileNode @ 0x140B4E3D8
 * Callers:
 *     CmpLoadManufacturingProfileServicesNode @ 0x140B4E4C8 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByName @ 0x14082F108 (CmpFindSubKeyByName.c)
 *     CmpLoadManufacturingModeNode @ 0x140B4E2B0 (CmpLoadManufacturingModeNode.c)
 */

bool __fastcall CmpLoadManufacturingProfileNode(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        const WCHAR *a3,
        __int64 *a4,
        unsigned int *a5)
{
  unsigned int SubKeyByName; // edi
  __int64 v10; // rax
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
  v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, SubKeyByName, a5)
      : HvpGetCellPaged(BugCheckParameter3, SubKeyByName, a5);
  *a4 = v10;
  return v10 != 0;
}
