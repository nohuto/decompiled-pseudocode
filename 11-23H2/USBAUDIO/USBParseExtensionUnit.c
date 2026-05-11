/*
 * XREFs of USBParseExtensionUnit @ 0x1C0034370
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildExtensionFunctionUnit @ 0x1C0030B70 (BusApiBuildExtensionFunctionUnit.c)
 *     USBParseBuildSourceIdArray @ 0x1C003399C (USBParseBuildSourceIdArray.c)
 *     USBParseGetUnitString @ 0x1C003559C (USBParseGetUnitString.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C003E648 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C003E770 (USBParseGetChannelConfigForUnit.c)
 */

__int64 __fastcall USBParseExtensionUnit(__int64 a1, unsigned __int8 *a2)
{
  unsigned int v3; // edx
  __int64 v5; // r14
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 *v9; // r8
  int v10; // esi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int8 *v13; // rdx
  int v14; // eax
  int UnitString; // edi
  void *v16; // rbp
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v21; // [rsp+80h] [rbp+8h] BYREF
  int v22; // [rsp+88h] [rbp+10h] BYREF
  const WCHAR *v23; // [rsp+90h] [rbp+18h] BYREF

  v3 = *a2;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( (unsigned __int8)v3 < 7u )
    return 3221225473LL;
  v6 = v3;
  v7 = *(_QWORD *)(v5 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v5 + 40) + 2LL);
  if ( (unsigned __int64)&a2[v6] > v7 )
    return 3221225473LL;
  v8 = a2[6];
  if ( (unsigned __int64)&a2[v8 + 12] > v7 )
    return 3221225473LL;
  v23 = 0LL;
  v9 = &a2[v8 + 7];
  v10 = 0;
  v11 = v9[4];
  v12 = (unsigned __int64)&v9[v11 + 5];
  if ( v12 >= v7 || v12 <= (unsigned __int64)a2 || v6 < (__int64)&v9[v9[4] - (_QWORD)a2 + 6] )
    return 3221225473LL;
  if ( v9[4] )
  {
    v13 = &v9[v11 + 5];
    do
    {
      v14 = *v13--;
      v10 = v14 | (v10 << 8);
      LODWORD(v11) = v11 - 1;
    }
    while ( (_DWORD)v11 );
  }
  UnitString = USBParseGetUnitString(a1, a2, &v23);
  if ( UnitString >= 0 )
  {
    v16 = (void *)USBParseBuildSourceIdArray(a2[6], a2 + 7);
    if ( v16 )
    {
      v17 = a2[3];
      v18 = *(_QWORD *)(v5 + 48);
      v19 = *(_QWORD *)(v5 + 40);
      v22 = 0;
      v21 = 0;
      UnitString = USBParseCountOutputChannelsForUnit(v19, v18, v17, &v22);
      if ( UnitString >= 0 )
      {
        UnitString = USBParseGetChannelConfigForUnit(*(_QWORD *)(v5 + 40), *(_QWORD *)(v5 + 48), a2[3], &v21);
        if ( UnitString >= 0 )
          UnitString = BusApiBuildExtensionFunctionUnit(
                         a1,
                         a2[3],
                         v22,
                         v21,
                         a2[6],
                         (__int64)v16,
                         v23,
                         *((unsigned __int16 *)a2 + 2),
                         v10);
      }
      ExFreePool(v16);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)UnitString;
}
