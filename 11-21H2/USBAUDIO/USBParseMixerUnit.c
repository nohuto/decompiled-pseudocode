/*
 * XREFs of USBParseMixerUnit @ 0x1C0038240
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C0031CBC (BusApiBuildFunctionUnit.c)
 *     USBHwAllocateAndBag @ 0x1C0033484 (USBHwAllocateAndBag.c)
 *     USBParseBuildSourceIdArray @ 0x1C0035DD8 (USBParseBuildSourceIdArray.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C00364FC (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C0036F38 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C0037D04 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseMixerUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int8 *v8; // r15
  int UnitString; // ebx
  int v10; // ecx
  unsigned int i; // edx
  int v12; // r8d
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // r14d
  unsigned int v16; // ebp
  unsigned int v17; // r12d
  unsigned int v18; // r12d
  __int64 v19; // r13
  int v20; // eax
  unsigned int v21; // ebp
  char *v22; // r14
  char *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r15
  int *v26; // r15
  __int64 v27; // r12
  int ChannelConfigForUnit; // ebx
  int v29; // eax
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // r8
  char v33; // al
  __int64 v35; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+10h]
  char *v37; // [rsp+B0h] [rbp+18h] BYREF
  PCWSTR SourceString; // [rsp+B8h] [rbp+20h] BYREF

  v35 = a1;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = a1;
  v4 = 0LL;
  SourceString = 0LL;
  v6 = *(_QWORD *)(v2 + 72);
  v7 = a2[4];
  v36 = v6;
  v8 = &a2[v7 + 5];
  UnitString = USBParseGetUnitString(v3, a2, &SourceString);
  if ( UnitString >= 0 )
  {
    if ( !*(_WORD *)(v8 + 1) )
      goto LABEL_9;
    v10 = 0;
    for ( i = 0; i < 0x10; ++i )
    {
      v13 = v10 + 1;
      v12 = *(unsigned __int16 *)(v8 + 1);
      if ( !_bittest(&v12, i) )
        v13 = v10;
      v10 = v13;
    }
    if ( v13 == *v8 )
    {
LABEL_9:
      v14 = a2[4];
      v15 = 0;
      v16 = 0;
      v17 = *a2 - v14;
      v37 = 0LL;
      v18 = v17 - 10;
      if ( v14 )
      {
        v19 = v36;
        do
        {
          v20 = USBParseCountOutputChannelsForUnit(*(_QWORD *)(v19 + 40), *(_QWORD *)(v19 + 48));
          v14 = a2[4];
          v15 += v20;
          ++v16;
        }
        while ( v16 < v14 );
        v3 = v35;
      }
      v21 = ((v15 * (unsigned int)*v8) >> 3) + ((((_BYTE)v15 * *v8) & 7) != 0);
      if ( v21 <= v18 )
      {
        v22 = (char *)(v8 + 4);
      }
      else
      {
        UnitString = USBHwAllocateAndBag((PVOID *)&v37, v21, 256LL, *(void **)(v3 + 8));
        if ( UnitString < 0 )
          return (unsigned int)-1073741670;
        v22 = v37;
        if ( v18 )
        {
          v23 = v37;
          v24 = v18;
          v25 = v8 - (unsigned __int8 *)v37;
          do
          {
            *v23 = v23[v25 + 4];
            ++v23;
            --v24;
          }
          while ( v24 );
        }
        LOBYTE(v14) = a2[4];
      }
      v26 = (int *)USBParseBuildSourceIdArray((unsigned __int8)v14, a2 + 5);
      if ( v26 )
      {
        v27 = a2[4];
        ChannelConfigForUnit = USBParseGetChannelConfigForUnit(*(_QWORD *)(v36 + 40), *(_QWORD *)(v36 + 48));
        v29 = USBParseCountOutputChannelsForUnit(*(_QWORD *)(v36 + 40), *(_QWORD *)(v36 + 48));
        v30 = a2[3];
        v35 = 0LL;
        UnitString = BusApiBuildFunctionUnit(v3, v30, 5, v29, ChannelConfigForUnit, v27, v26, SourceString, v21, &v35);
        if ( UnitString >= 0 )
        {
          v31 = v35;
          if ( v35 )
          {
            *(_DWORD *)(v35 + 68) = v21;
            *(_QWORD *)(v31 + 72) = v31 + 12 * (v27 + 8);
            if ( v21 )
            {
              v32 = v21;
              do
              {
                v33 = *v22++;
                *(_BYTE *)(v4 + *(_QWORD *)(v31 + 72)) = v33;
                ++v4;
                --v32;
              }
              while ( v32 );
            }
          }
        }
        ExFreePool(v26);
      }
    }
    else
    {
      return (unsigned int)-1073741438;
    }
  }
  return (unsigned int)UnitString;
}
