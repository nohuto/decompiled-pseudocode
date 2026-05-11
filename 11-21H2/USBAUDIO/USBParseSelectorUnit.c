/*
 * XREFs of USBParseSelectorUnit @ 0x1C00386F0
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C0031CBC (BusApiBuildFunctionUnit.c)
 *     USBParseBuildSourceIdArray @ 0x1C0035DD8 (USBParseBuildSourceIdArray.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C00364FC (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C0036F38 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C0037D04 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseSelectorUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  const WCHAR *SourceString; // rbp
  int v5; // edx
  __int64 v7; // r13
  int UnitString; // ebx
  int v9; // eax
  int *v10; // r15
  unsigned int v11; // edi
  int ChannelConfigForUnit; // ebx
  int v13; // eax
  int v14; // edx
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  SourceString = 0LL;
  v16 = 0LL;
  v5 = a2[4];
  v7 = *(_QWORD *)(v2 + 72);
  if ( !(_BYTE)v5 )
    return (unsigned int)-1073741438;
  v9 = *a2 - 6;
  if ( v9 == v5 )
  {
    UnitString = USBParseGetUnitString(a1, a2, &v16);
    if ( UnitString < 0 )
      return (unsigned int)UnitString;
    SourceString = (const WCHAR *)v16;
  }
  else if ( v9 + 1 != v5 )
  {
    return (unsigned int)-1073741438;
  }
  v10 = (int *)USBParseBuildSourceIdArray(a2[4], a2 + 5);
  if ( v10 )
  {
    v11 = a2[4];
    ChannelConfigForUnit = USBParseGetChannelConfigForUnit(*(_QWORD *)(v7 + 40), *(_QWORD *)(v7 + 48));
    v13 = USBParseCountOutputChannelsForUnit(*(_QWORD *)(v7 + 40), *(_QWORD *)(v7 + 48));
    v14 = a2[3];
    v16 = 0LL;
    UnitString = BusApiBuildFunctionUnit(a1, v14, 3, v13, ChannelConfigForUnit, v11, v10, SourceString, 0, &v16);
    ExFreePool(v10);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)UnitString;
}
