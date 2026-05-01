/*
 * XREFs of ??$Base64Encode@$0IB@@TLV@@YAXPEBE_KAEAY0IB@D@Z @ 0x1800BBA78
 * Callers:
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x1800BB9D8 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ??$CreateCvFromGuid@$0M@@TraceLoggingCorrelationVector@@AEAAXU_GUID@@@Z @ 0x1806809B8 (--$CreateCvFromGuid@$0M@@TraceLoggingCorrelationVector@@AEAAXU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TLV::Base64Encode<129>(unsigned __int8 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r11
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  unsigned int i; // ebp
  char v11; // cl
  unsigned __int8 *v12; // rsi
  unsigned int v13; // r8d
  unsigned int v14; // edx
  __int64 v15; // r9
  unsigned __int64 v16; // r11
  unsigned __int8 v17; // cl
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // r9

  v5 = a2 / 3;
  v6 = a2 % 3;
  if ( a2 % 3 )
    v7 = (v6 != 1) + 3LL;
  else
    v7 = 1LL;
  v8 = v7 + 4 * v5;
  if ( v8 <= 0x81 )
  {
    v9 = 0LL;
    for ( i = 0; i < v5; LOBYTE(v8) = i )
    {
      v11 = *a1;
      ++i;
      v8 = *a1;
      v12 = a1 + 1;
      v13 = *v12++;
      v14 = *v12;
      a1 = v12 + 1;
      *(_BYTE *)(v9 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[v8 >> 2];
      v15 = v9 + 1;
      *(_BYTE *)(v15 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[((unsigned __int64)v13 >> 4) | (unsigned __int8)(16 * (v11 & 3))];
      *(_BYTE *)(++v15 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[((unsigned __int64)v14 >> 6) | (unsigned __int8)(4 * (v13 & 0xF))];
      *(_BYTE *)(++v15 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[v14 & 0x3F];
      v9 = v15 + 1;
    }
    v16 = v6 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
        goto LABEL_9;
      v21 = a1[1];
      v22 = (unsigned __int8)(16 * (*a1 & 3));
      *(_BYTE *)(v9 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[(unsigned __int64)*a1 >> 2];
      v23 = v9 + 1;
      *(_BYTE *)(v23 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[((unsigned __int64)v21 >> 4) | v22];
      v19 = v23 + 1;
      LOBYTE(v8) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[(unsigned __int8)(4 * (v21 & 0xF))];
      *(_BYTE *)(v19 + a3) = v8;
    }
    else
    {
      v17 = 16 * (*a1 & 3);
      *(_BYTE *)(v9 + a3) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[(unsigned __int64)*a1 >> 2];
      v18 = v9 + 1;
      LOBYTE(v8) = `TLV::Base64Encode<129>'::`2'::s_lookupTable[v17];
      *(_BYTE *)(v18 + a3) = v8;
      v19 = v18 + 1;
      *(_BYTE *)(v19 + a3) = 61;
    }
    v20 = v19 + 1;
    *(_BYTE *)(v20 + a3) = 61;
    v9 = v20 + 1;
LABEL_9:
    *(_BYTE *)(v9 + a3) = 0;
  }
  return v8;
}
