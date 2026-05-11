/*
 * XREFs of USBParseProcessUnit @ 0x1C0035E60
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildProcessFunctionUnit @ 0x1C0030F04 (BusApiBuildProcessFunctionUnit.c)
 *     USBParseBuildSourceIdArray @ 0x1C003399C (USBParseBuildSourceIdArray.c)
 *     USBParseGetUnitString @ 0x1C003559C (USBParseGetUnitString.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C003E648 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C003E770 (USBParseGetChannelConfigForUnit.c)
 */

__int64 __fastcall USBParseProcessUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rdx
  __int64 v5; // r13
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int8 *v8; // r14
  unsigned __int8 *v9; // r15
  int UnitString; // ebx
  int v11; // r12d
  void *Pool2; // rbp
  __int64 v13; // rcx
  unsigned __int8 *v14; // rdx
  int v15; // eax
  __int64 v16; // r14
  int *v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rdx
  unsigned __int8 *v24; // rax
  _DWORD *v25; // rcx
  unsigned __int16 *v26; // rdx
  int v27; // eax
  __int64 v29; // [rsp+50h] [rbp-78h]
  PCWSTR v30[11]; // [rsp+70h] [rbp-58h] BYREF
  int v32; // [rsp+D8h] [rbp+10h] BYREF
  int v33; // [rsp+E0h] [rbp+18h] BYREF
  int v34; // [rsp+E8h] [rbp+20h]

  v3 = *a2;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( (unsigned __int8)v3 < 7u )
    return 3221225473LL;
  v6 = *(_QWORD *)(v5 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v5 + 40) + 2LL);
  if ( (unsigned __int64)&a2[v3] > v6 )
    return 3221225473LL;
  v7 = a2[6];
  if ( (unsigned __int64)&a2[v7 + 12] > v6 )
    return 3221225473LL;
  v30[0] = 0LL;
  v8 = &a2[v7];
  v9 = &a2[v7 + 13 + a2[v7 + 11]];
  v34 = *((unsigned __int16 *)a2 + 2) + 1;
  UnitString = USBParseGetUnitString(a1, a2, v30);
  if ( UnitString >= 0 )
  {
    v11 = 0;
    Pool2 = 0LL;
    if ( (unsigned __int64)v9 >= v6 )
      return 3221225473LL;
    v13 = v8[11] - 1LL;
    if ( v13 >= 0 )
    {
      v14 = &v8[v13 + 12];
      do
      {
        v15 = *v14--;
        v11 = v15 | (v11 << 8);
        --v13;
      }
      while ( v13 >= 0 );
    }
    if ( (unsigned int)(v34 - 2) > 1 )
    {
      LODWORD(v16) = 0;
LABEL_11:
      v17 = (int *)USBParseBuildSourceIdArray(a2[6], a2 + 7);
      if ( v17 )
      {
        v18 = a2[3];
        v19 = *(_QWORD *)(v5 + 48);
        v20 = *(_QWORD *)(v5 + 40);
        v33 = 0;
        v32 = 0;
        UnitString = USBParseCountOutputChannelsForUnit(v20, v19, v18, &v33);
        if ( UnitString >= 0 )
        {
          UnitString = USBParseGetChannelConfigForUnit(*(_QWORD *)(v5 + 40), *(_QWORD *)(v5 + 48), a2[3], &v32);
          if ( UnitString >= 0 )
            UnitString = BusApiBuildProcessFunctionUnit(
                           a1,
                           a2[3],
                           v21,
                           v34,
                           v33,
                           v32,
                           a2[6],
                           v17,
                           v30[0],
                           v11,
                           v29,
                           v16,
                           (__int64)Pool2);
        }
        ExFreePool(v17);
      }
      else
      {
        UnitString = -1073741670;
      }
      if ( Pool2 )
        ExFreePool(Pool2);
      return (unsigned int)UnitString;
    }
    v16 = *v9;
    if ( !*v9 )
      goto LABEL_11;
    v22 = *v9;
    Pool2 = (void *)ExAllocatePool2(256LL, 4 * v16, 1096972357LL);
    if ( Pool2 )
    {
      v23 = 2LL * (unsigned int)(v16 - 1);
      v24 = &v9[v23 + 1];
      if ( (unsigned __int64)v24 < v6 && v24 > a2 && *a2 >= (__int64)&v9[v23 - (_QWORD)a2 + 2] )
      {
        if ( (_DWORD)v16 )
        {
          v25 = Pool2;
          v26 = (unsigned __int16 *)(v9 + 1);
          do
          {
            v27 = *v26++;
            *v25++ = v27;
            --v22;
          }
          while ( v22 );
        }
        goto LABEL_11;
      }
      ExFreePool(Pool2);
      return 3221225473LL;
    }
    return (unsigned int)-1073741670;
  }
  return (unsigned int)UnitString;
}
