/*
 * XREFs of USBParseSelectorUnit @ 0x1C0036100
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C0030CA0 (BusApiBuildFunctionUnit.c)
 *     USBParseBuildSourceIdArray @ 0x1C003399C (USBParseBuildSourceIdArray.c)
 *     USBParseGetUnitString @ 0x1C003559C (USBParseGetUnitString.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C003E648 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C003E770 (USBParseGetChannelConfigForUnit.c)
 */

__int64 __fastcall USBParseSelectorUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // r8
  __int64 v5; // rbp
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  const WCHAR *SourceString; // r14
  int UnitString; // edi
  int *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // edx
  const WCHAR *v17; // [rsp+80h] [rbp+8h] BYREF
  int v18; // [rsp+88h] [rbp+10h] BYREF
  __int64 v19; // [rsp+90h] [rbp+18h] BYREF

  v3 = *a2;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( (unsigned __int8)v3 >= 5u )
  {
    v6 = *(_QWORD *)(v5 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v5 + 40) + 2LL);
    if ( (unsigned __int64)&a2[v3] <= v6 )
    {
      v7 = a2[4];
      if ( (unsigned __int64)&a2[v7 + 5] <= v6 )
      {
        SourceString = 0LL;
        UnitString = 0;
        v17 = 0LL;
        if ( (_BYTE)v7 )
        {
          if ( (_DWORD)v3 - 6 == (_DWORD)v7 )
          {
            UnitString = USBParseGetUnitString(a1, a2, &v17);
            if ( UnitString < 0 )
              return (unsigned int)-1073741670;
            SourceString = v17;
          }
          else if ( (_DWORD)v3 - 6 + 1 != (_DWORD)v7 )
          {
            return (unsigned int)-1073741670;
          }
          v11 = (int *)USBParseBuildSourceIdArray(a2[4], a2 + 5);
          if ( v11 )
          {
            v12 = a2[3];
            v13 = *(_QWORD *)(v5 + 48);
            v14 = *(_QWORD *)(v5 + 40);
            v18 = 0;
            LODWORD(v17) = 0;
            UnitString = USBParseCountOutputChannelsForUnit(v14, v13, v12, &v18);
            if ( UnitString >= 0 )
            {
              UnitString = USBParseGetChannelConfigForUnit(*(_QWORD *)(v5 + 40), *(_QWORD *)(v5 + 48), a2[3], &v17);
              if ( UnitString >= 0 )
              {
                v15 = a2[4];
                v16 = a2[3];
                v19 = 0LL;
                UnitString = BusApiBuildFunctionUnit(a1, v16, 3, v18, (int)v17, v15, v11, SourceString, 0, &v19);
              }
            }
            ExFreePool(v11);
          }
          return (unsigned int)UnitString;
        }
        return (unsigned int)-1073741670;
      }
    }
  }
  return 3221225473LL;
}
