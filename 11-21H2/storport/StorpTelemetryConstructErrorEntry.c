/*
 * XREFs of StorpTelemetryConstructErrorEntry @ 0x1C0005F78
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x1C0005CD8 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     RaidGetIoStartingLbaAndLength @ 0x1C005DE20 (RaidGetIoStartingLbaAndLength.c)
 */

__int64 __fastcall StorpTelemetryConstructErrorEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        union _LARGE_INTEGER PerformanceFrequency)
{
  char v7; // cl
  __int64 v8; // rdi
  _BYTE *v9; // r10
  char v10; // r11
  _BYTE *v11; // rsi
  int v12; // r15d
  union _LARGE_INTEGER v13; // rbx
  char v14; // al
  unsigned __int8 v15; // r14
  int v16; // edi
  union _LARGE_INTEGER v17; // r8
  bool v18; // zf
  ULONGLONG QuadPart; // rax
  ULONGLONG v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 result; // rax
  char v26; // al
  char v27; // r14
  unsigned int v28; // ebp
  unsigned int v29; // edi
  __int64 v30; // rcx
  unsigned __int64 v31; // r8
  __int64 v32; // rdx
  int v33; // ecx
  _BYTE *v34; // rax
  unsigned __int8 v35; // r8
  bool v36; // zf
  int v37; // ecx
  _BYTE *v38; // rax
  __int64 v39; // rax
  unsigned __int8 v40; // [rsp+60h] [rbp+8h]
  char v42; // [rsp+78h] [rbp+20h]

  v7 = *(_BYTE *)(a4 + 3);
  v8 = a3;
  v42 = v7;
  v9 = 0LL;
  v40 = 0;
  v10 = 0;
  v11 = 0LL;
  if ( *(_BYTE *)(a4 + 2) == 40 )
    v12 = *(_DWORD *)(a4 + 20);
  else
    v12 = *(unsigned __int8 *)(a4 + 2);
  v13 = PerformanceFrequency;
  *(_OWORD *)PerformanceFrequency.QuadPart = 0LL;
  *(_OWORD *)(v13.QuadPart + 16) = 0LL;
  *(_QWORD *)(v13.QuadPart + 32) = 0LL;
  v14 = *(_BYTE *)(a4 + 2);
  if ( v14 != 40 )
  {
    if ( v14 )
    {
      v15 = 0;
    }
    else
    {
      v9 = (_BYTE *)(a4 + 72);
      v10 = *(_BYTE *)(a4 + 4);
      v11 = *(_BYTE **)(a4 + 32);
      if ( !*(_BYTE *)(a4 + 10) )
        v9 = 0LL;
      v15 = *(_BYTE *)(a4 + 11);
    }
    goto LABEL_6;
  }
  v27 = 0;
  if ( *(_DWORD *)(a4 + 20) )
  {
    v40 = 0;
    goto LABEL_54;
  }
  v28 = *(_DWORD *)(a4 + 56);
  v29 = 0;
  if ( !v28 )
    goto LABEL_53;
  while ( 1 )
  {
    v30 = *(unsigned int *)(a4 + 4LL * v29 + 120);
    if ( (unsigned int)v30 >= 0x80 )
    {
      v31 = *(unsigned int *)(a4 + 16);
      if ( (unsigned int)v30 < (unsigned int)v31 )
        break;
    }
LABEL_73:
    if ( ++v29 >= v28 )
      goto LABEL_52;
  }
  v32 = (unsigned int)v30;
  v33 = *(_DWORD *)(v30 + a4) - 64;
  if ( !v33 )
  {
    if ( v32 + 40 <= v31 )
    {
      v10 = *(_BYTE *)(v32 + a4 + 8);
      v34 = (_BYTE *)(v32 + a4 + 24);
      v11 = *(_BYTE **)(v32 + a4 + 16);
      v35 = *(_BYTE *)(v32 + a4 + 9);
      v36 = *(_BYTE *)(v32 + a4 + 10) == 0;
      goto LABEL_48;
    }
    goto LABEL_51;
  }
  v37 = v33 - 1;
  if ( !v37 )
  {
    if ( v32 + 56 <= v31 )
    {
      v27 = 1;
      v10 = *(_BYTE *)(v32 + a4 + 8);
      v11 = *(_BYTE **)(v32 + a4 + 16);
      v40 = *(_BYTE *)(v32 + a4 + 9);
      v38 = (_BYTE *)(v32 + a4 + 24);
      if ( !*(_BYTE *)(v32 + a4 + 10) )
        v38 = v9;
      v9 = v38;
    }
LABEL_51:
    if ( v27 )
      goto LABEL_52;
    goto LABEL_73;
  }
  if ( v37 != 1 || v32 + 40 > v31 )
    goto LABEL_51;
  v10 = *(_BYTE *)(v32 + a4 + 8);
  v34 = (_BYTE *)(v32 + a4 + 32);
  v11 = *(_BYTE **)(v32 + a4 + 24);
  v35 = *(_BYTE *)(v32 + a4 + 9);
  v36 = *(_DWORD *)(v32 + a4 + 12) == 0;
LABEL_48:
  if ( v36 )
    v34 = v9;
  v40 = v35;
  v9 = v34;
LABEL_52:
  v7 = v42;
LABEL_53:
  v8 = a3;
LABEL_54:
  v15 = v40;
LABEL_6:
  *(_BYTE *)(v13.QuadPart + 1) = v10;
  *(_BYTE *)v13.QuadPart = v7 & 0x3F;
  *(_BYTE *)(v13.QuadPart + 5) = -1;
  if ( v9 )
  {
    v26 = *v9;
    *(_BYTE *)(v13.QuadPart + 5) = *v9;
    if ( !v12 && ((v26 - 8) & 0x5D) == 0 )
    {
      RaidGetIoStartingLbaAndLength(v9, v13.QuadPart + 24);
      if ( a2 )
      {
        v39 = *(_QWORD *)(a2 + 8);
        if ( v39 )
          *(_DWORD *)(v13.QuadPart + 8) = *(_DWORD *)(v39 + 40);
      }
    }
  }
  if ( !v8 )
  {
    if ( *(_BYTE *)(a1 + 3232) == 1 && *(_BYTE *)v13.QuadPart == 9 )
      *(_DWORD *)(v13.QuadPart + 16) = 5000000 * *(_DWORD *)(a1 + 3256) / 0x2710u;
    goto LABEL_30;
  }
  v16 = -1;
  if ( *(_DWORD *)(a1 + 2244) != 1 )
  {
    v21 = a3;
    goto LABEL_25;
  }
  v17.QuadPart = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    v18 = UseQPCTime == 0;
    goto LABEL_11;
  }
  if ( g_StorpTraceLoggingPerformanceEnabled )
  {
    if ( !UseQPCTime )
      goto LABEL_12;
    v18 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_11:
    if ( !v18 )
      QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
    else
LABEL_12:
      QuadPart = KeQueryUnbiasedInterruptTime();
    v17 = PerformanceFrequency;
    v20 = QuadPart;
  }
  else
  {
    v20 = 0LL;
  }
  v21 = a3;
  v22 = v20 - *(_QWORD *)(a3 + 696);
  if ( !StorEtwLoggingEnabled )
  {
LABEL_17:
    if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
    {
      if ( !v17.QuadPart )
        goto LABEL_25;
      v22 = 10000000 * v22 / v17.QuadPart;
    }
    goto LABEL_21;
  }
  if ( !UseQPCTime )
  {
LABEL_21:
    v23 = v22 / 10000;
    if ( (unsigned __int64)(v22 / 10000) > 0xFFFFFFFF )
    {
      *(_DWORD *)(v13.QuadPart + 12) = -1;
    }
    else if ( v23 || !v22 )
    {
      *(_DWORD *)(v13.QuadPart + 12) = v23;
    }
    else
    {
      *(_DWORD *)(v13.QuadPart + 12) = 1;
    }
    goto LABEL_25;
  }
  if ( g_StorpTraceLoggingPerformanceHighResolutionTimer )
    goto LABEL_17;
  if ( v17.QuadPart )
  {
    v22 = 10000000 * v22 / v17.QuadPart;
    goto LABEL_17;
  }
LABEL_25:
  v24 = *(_QWORD *)(v21 + 688);
  if ( v24 / 0x2710 <= 0xFFFFFFFF )
  {
    if ( v24 / 0x2710 || (v16 = 1, !v24) )
      v16 = v24 / 0x2710;
  }
  *(_DWORD *)(v13.QuadPart + 16) = v16;
LABEL_30:
  *(_DWORD *)(v13.QuadPart + 20) = *(_DWORD *)(a1 + 672);
  if ( v42 < 0 && v11 && v15 >= 8u && (unsigned __int8)((*v11 & 0x7F) - 112) <= 1u )
  {
    *(_BYTE *)(v13.QuadPart + 2) = v11[2] & 0xF;
    *(_BYTE *)(v13.QuadPart + 3) = v11[12];
    *(_BYTE *)(v13.QuadPart + 4) = v11[13];
  }
  result = *(unsigned int *)(a1 + 2344);
  *(_DWORD *)(v13.QuadPart + 32) = result;
  return result;
}
