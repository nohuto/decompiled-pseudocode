/*
 * XREFs of USBParseMixerUnit @ 0x1C0035BD0
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildMixerFunctionUnit @ 0x1C0030E44 (BusApiBuildMixerFunctionUnit.c)
 *     USBParseBuildSourceIdArray @ 0x1C003399C (USBParseBuildSourceIdArray.c)
 *     USBParseGetUnitString @ 0x1C003559C (USBParseGetUnitString.c)
 *     USBHwAllocateAndBag @ 0x1C00397EC (USBHwAllocateAndBag.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C003E648 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C003E770 (USBParseGetChannelConfigForUnit.c)
 */

__int64 __fastcall USBParseMixerUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // r13
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int8 *v8; // rsi
  int UnitString; // edi
  int v10; // ecx
  unsigned int i; // edx
  int v12; // r8d
  int v13; // eax
  int v14; // edx
  int v15; // r15d
  unsigned __int64 v16; // r8
  unsigned int v17; // r12d
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  __int64 result; // rax
  unsigned int v21; // r15d
  char *v22; // r14
  __int64 v23; // rdx
  _BYTE *v24; // rcx
  signed __int64 v25; // rsi
  int *v26; // rsi
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v31; // [rsp+B8h] [rbp+50h] BYREF
  char *v32; // [rsp+C0h] [rbp+58h] BYREF
  const WCHAR *v33; // [rsp+C8h] [rbp+60h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v5 = *(_QWORD *)(v4 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v4 + 40) + 2LL);
  v6 = *a2;
  if ( (unsigned __int8)v6 < 5u )
    return 3221225473LL;
  if ( (unsigned __int64)&a2[v6] > v5 )
    return 3221225473LL;
  v7 = a2[4];
  if ( (unsigned __int64)&a2[v7 + 9] > v5 )
    return 3221225473LL;
  v8 = &a2[v7 + 5];
  v33 = 0LL;
  UnitString = USBParseGetUnitString(a1, a2, &v33);
  if ( UnitString < 0 )
    return (unsigned int)UnitString;
  if ( *(_WORD *)(v8 + 1) )
  {
    v10 = 0;
    for ( i = 0; i < 0x10; ++i )
    {
      v13 = v10 + 1;
      v12 = *(unsigned __int16 *)(v8 + 1);
      if ( !_bittest(&v12, i) )
        v13 = v10;
      v10 = v13;
    }
    if ( v13 != *v8 )
      return (unsigned int)-1073741438;
  }
  v14 = a2[4];
  v15 = 0;
  v16 = *a2;
  v31 = 0;
  v32 = 0LL;
  if ( v16 < (unsigned __int64)(unsigned int)(v14 + 1) + 9 )
    return 3221225473LL;
  v17 = v16 - v14 - 10;
  v18 = (unsigned __int64)&v8[v17 + 3];
  if ( v18 >= v5 || v18 <= (unsigned __int64)a2 || (__int64)v16 < (__int64)&v8[v17 - (_QWORD)a2 + 4] )
    return 3221225473LL;
  v19 = 0LL;
  if ( !v14 )
  {
LABEL_19:
    v21 = ((v15 * (unsigned int)*v8) >> 3) + ((((_BYTE)v15 * *v8) & 7) != 0);
    if ( v21 <= v17 )
    {
      v22 = (char *)(v8 + 4);
    }
    else
    {
      UnitString = USBHwAllocateAndBag(&v32, v21, 256LL, *(_QWORD *)(a1 + 8));
      if ( UnitString < 0 )
        return (unsigned int)-1073741670;
      v22 = v32;
      if ( v17 )
      {
        v23 = v17;
        v24 = v32;
        v25 = v8 - (unsigned __int8 *)v32;
        do
        {
          *v24 = v24[v25 + 4];
          ++v24;
          --v23;
        }
        while ( v23 );
      }
    }
    v26 = (int *)USBParseBuildSourceIdArray(a2[4], a2 + 5);
    if ( v26 )
    {
      v27 = a2[3];
      v28 = *(_QWORD *)(v4 + 48);
      v29 = *(_QWORD *)(v4 + 40);
      LODWORD(v32) = 0;
      v31 = 0;
      UnitString = USBParseCountOutputChannelsForUnit(v29, v28, v27, &v32);
      if ( UnitString >= 0 )
      {
        UnitString = USBParseGetChannelConfigForUnit(*(_QWORD *)(v4 + 40), *(_QWORD *)(v4 + 48), a2[3], &v31);
        if ( UnitString >= 0 )
          UnitString = BusApiBuildMixerFunctionUnit(a1, a2[3], (int)v32, v31, a2[4], v26, v33, v21, v22);
      }
      ExFreePool(v26);
    }
    return (unsigned int)UnitString;
  }
  while ( 1 )
  {
    result = USBParseCountOutputChannelsForUnit(*(_QWORD *)(v4 + 40), *(_QWORD *)(v4 + 48), a2[v19 + 5], &v31);
    UnitString = result;
    if ( (int)result < 0 )
      return result;
    v15 += v31;
    v19 = (unsigned int)(v19 + 1);
    if ( (unsigned int)v19 >= a2[4] )
      goto LABEL_19;
  }
}
