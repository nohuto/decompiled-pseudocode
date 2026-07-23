/*
 * XREFs of RtlCompareUnicodeStrings @ 0x1406DA010
 * Callers:
 *     ApiSetpSearchForApiSet @ 0x14035F720 (ApiSetpSearchForApiSet.c)
 *     EtwpAvlCompareKeyNames @ 0x140394C10 (EtwpAvlCompareKeyNames.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x1404183C4 (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14041847C (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetpSearchForApiSetHost @ 0x140614E38 (ApiSetpSearchForApiSetHost.c)
 *     AsiSortValueList @ 0x140615830 (AsiSortValueList.c)
 *     CmpFindNameInListFromIndex @ 0x1406DFE90 (CmpFindNameInListFromIndex.c)
 *     PnpCheckDeviceIdsChanged @ 0x1407989E0 (PnpCheckDeviceIdsChanged.c)
 *     sub_14082FC80 @ 0x14082FC80 (sub_14082FC80.c)
 *     PiDevCfgResolveVariableExpression @ 0x140960350 (PiDevCfgResolveVariableExpression.c)
 *     PnpCompareMultiSz @ 0x14096C7C0 (PnpCompareMultiSz.c)
 *     PopDirectedDripsUmTestDeviceCompare @ 0x14099FCD0 (PopDirectedDripsUmTestDeviceCompare.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140A7594C (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140A75BF8 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D420 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 */

LONG __stdcall RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  int v5; // r14d
  int v6; // ebp
  __int64 v7; // rbx
  unsigned __int64 v8; // r9
  unsigned __int16 *v9; // r10
  __int64 v10; // r11
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int16 *v13; // r9
  __int64 v14; // r11
  int v15; // eax
  int v16; // ecx
  int v18; // esi
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // di

  v5 = String2Length;
  v6 = String1Length;
  v7 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 154);
  v12 = v11;
  if ( v11 > v8 )
    v12 = v8;
  v13 = &v9[v12];
  if ( v9 >= v13 )
    return v6 - v5;
  v14 = v10 - (_QWORD)v9;
  if ( CaseInSensitive )
  {
    do
    {
      v20 = *(unsigned __int16 *)((char *)v9 + v14);
      if ( *v9 != v20 )
      {
        v18 = NLS_UPCASE(v7, *v9);
        v19 = NLS_UPCASE(v7, v20);
        if ( (_WORD)v18 != v19 )
        {
          v16 = v19;
          v15 = v18;
          return v15 - v16;
        }
      }
      ++v9;
    }
    while ( v9 < v13 );
    return v6 - v5;
  }
  else
  {
    while ( 1 )
    {
      v15 = *v9;
      v16 = *(unsigned __int16 *)((char *)v9 + v14);
      if ( (_WORD)v15 != (_WORD)v16 )
        break;
      if ( ++v9 >= v13 )
        return v6 - v5;
    }
    return v15 - v16;
  }
}
