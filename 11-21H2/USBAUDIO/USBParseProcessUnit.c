/*
 * XREFs of USBParseProcessUnit @ 0x1C00384A0
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C0031CBC (BusApiBuildFunctionUnit.c)
 *     USBParseBuildSourceIdArray @ 0x1C0035DD8 (USBParseBuildSourceIdArray.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C00364FC (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C0036F38 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetUnitString @ 0x1C0037D04 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseProcessUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // r13d
  __int64 v5; // r14
  int v6; // r13d
  __int64 v7; // r12
  int UnitString; // ebx
  int v9; // ebp
  char *v10; // rsi
  __int64 v11; // rcx
  unsigned __int8 *v12; // rdx
  int v13; // eax
  __int64 v14; // rdi
  int *v15; // r14
  __int64 v16; // r12
  int ChannelConfigForUnit; // ebx
  int v18; // eax
  __int64 v19; // rbx
  char *Pool2; // rax
  unsigned __int16 *v21; // rdx
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v28; // [rsp+98h] [rbp+10h] BYREF
  PCWSTR SourceString; // [rsp+A0h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  SourceString = 0LL;
  v4 = *(unsigned __int16 *)(a2 + 4);
  v5 = a2 + *(unsigned __int8 *)(a2 + 6);
  v28 = *(_QWORD *)(v2 + 72);
  v6 = v4 + 1;
  v7 = *(unsigned __int8 *)(v5 + 11);
  UnitString = USBParseGetUnitString(a1, (unsigned __int8 *)a2, &SourceString);
  if ( UnitString >= 0 )
  {
    v9 = 0;
    v10 = 0LL;
    v11 = *(unsigned __int8 *)(v5 + 11) - 1LL;
    if ( v11 >= 0 )
    {
      v12 = (unsigned __int8 *)(v11 + v5 + 12);
      do
      {
        v13 = *v12--;
        v9 = v13 | (v9 << 8);
        --v11;
      }
      while ( v11 >= 0 );
    }
    if ( (unsigned int)(v6 - 2) <= 1 )
    {
      v14 = *(unsigned __int8 *)(v7 + v5 + 13);
      if ( *(_BYTE *)(v7 + v5 + 13) )
      {
        v19 = *(unsigned __int8 *)(v7 + v5 + 13);
        Pool2 = (char *)ExAllocatePool2(256LL, 4 * v14, 1096972357LL);
        v10 = Pool2;
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        if ( (_DWORD)v14 )
        {
          v21 = (unsigned __int16 *)(v7 + v5 + 14);
          do
          {
            v22 = *v21++;
            *(_DWORD *)Pool2 = v22;
            Pool2 += 4;
            --v19;
          }
          while ( v19 );
        }
      }
    }
    else
    {
      LODWORD(v14) = 0;
    }
    v15 = (int *)USBParseBuildSourceIdArray(*(unsigned __int8 *)(a2 + 6), (unsigned __int8 *)(a2 + 7));
    if ( v15 )
    {
      v16 = *(unsigned __int8 *)(a2 + 6);
      ChannelConfigForUnit = USBParseGetChannelConfigForUnit(*(_QWORD *)(v28 + 40), *(_QWORD *)(v28 + 48));
      v18 = USBParseCountOutputChannelsForUnit(*(_QWORD *)(v28 + 40), *(_QWORD *)(v28 + 48));
      v28 = 0LL;
      if ( !(_DWORD)v14 || v10 )
      {
        UnitString = BusApiBuildFunctionUnit(
                       a1,
                       *(unsigned __int8 *)(a2 + 3),
                       4,
                       v18,
                       ChannelConfigForUnit,
                       v16,
                       v15,
                       SourceString,
                       4 * (int)v14,
                       &v28);
        if ( UnitString >= 0 )
        {
          v23 = v28;
          if ( v28 )
          {
            *(_DWORD *)(v28 + 64) = v6;
            *(_DWORD *)(v23 + 76) = v9;
            *(_DWORD *)(v23 + 80) = v14;
            if ( (_DWORD)v14 )
            {
              v24 = (unsigned int)v14;
              v25 = 0LL;
              *(_QWORD *)(v23 + 88) = v23 + 12 * (v16 + 8);
              do
              {
                *(_DWORD *)(v25 + *(_QWORD *)(v23 + 88)) = *(_DWORD *)&v10[v25];
                v25 += 4LL;
                --v24;
              }
              while ( v24 );
            }
          }
        }
      }
      else
      {
        UnitString = -1073741811;
      }
      ExFreePool(v15);
    }
    else
    {
      UnitString = -1073741670;
    }
    if ( v10 )
      ExFreePool(v10);
  }
  return (unsigned int)UnitString;
}
