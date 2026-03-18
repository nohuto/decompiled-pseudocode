/*
 * XREFs of IoSqToIoCqMapping @ 0x1C000B8CC
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DB58 (NVMeControllerInitPart2.c)
 * Callees:
 *     IsIntelChatham @ 0x1C0007D58 (IsIntelChatham.c)
 *     NVMeLogTelemetry @ 0x1C0008B44 (NVMeLogTelemetry.c)
 *     NVMeCleanUpSqCqMapping @ 0x1C000C61C (NVMeCleanUpSqCqMapping.c)
 *     NVMeGetCompletionQueueForAssignment @ 0x1C000F114 (NVMeGetCompletionQueueForAssignment.c)
 *     NVMeLogHeterogeneousQueueMappingFallback @ 0x1C000FAE4 (NVMeLogHeterogeneousQueueMappingFallback.c)
 */

char __fastcall IoSqToIoCqMapping(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v3; // rax
  unsigned __int16 *v4; // r14
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 *v10; // rdx
  unsigned __int8 v11; // cl
  __int64 v12; // r8
  __int16 v13; // ax
  unsigned int v14; // ebx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned int v19; // ecx
  unsigned __int16 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // edx
  __int64 v25; // rcx
  const wchar_t *v27; // [rsp+28h] [rbp-A1h]
  int v28; // [rsp+30h] [rbp-99h]
  int v29; // [rsp+38h] [rbp-91h]
  int v30; // [rsp+40h] [rbp-89h]
  unsigned __int16 *v31; // [rsp+D8h] [rbp+Fh]
  unsigned __int16 v32; // [rsp+130h] [rbp+67h] BYREF
  int v33; // [rsp+138h] [rbp+6Fh] BYREF
  int v34; // [rsp+140h] [rbp+77h] BYREF
  int v35; // [rsp+148h] [rbp+7Fh]

  v1 = 0;
  v34 = 0;
  v32 = 1;
  v33 = 2;
  if ( *(_BYTE *)(a1 + 20) )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 872) + 50LL) = *(_WORD *)(*(_QWORD *)(a1 + 880) + 168LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 880) + 176LL) = 0;
    LOBYTE(v3) = IsIntelChatham(a1);
    if ( (_BYTE)v3 )
    {
      v3 = *(_QWORD *)(a1 + 880);
      *(_DWORD *)(v3 + 176) = 1;
    }
  }
  else
  {
    ((void (*)(void))NVMeCleanUpSqCqMapping)();
    v4 = (unsigned __int16 *)(a1 + 280);
    v5 = 0;
    v31 = (unsigned __int16 *)(a1 + 280);
    if ( *(_WORD *)(a1 + 338) )
    {
      do
      {
        v6 = *v4;
        v7 = *(_QWORD *)(a1 + 288);
        v8 = v5;
        v9 = *(_QWORD *)(a1 + 880) + 392LL * v5++;
        if ( (_WORD)v6 != 1 )
          v8 = v5 % v6;
        *(_DWORD *)(v9 + 176) = *(_DWORD *)(v7 + 24 * v8);
        *(_QWORD *)(v7 + 24 * v8 + 16) = v9;
        if ( *(_BYTE *)(v9 + 248) && (*(_DWORD *)(a1 + 4044) & 0x10) != 0 )
        {
          v10 = *(__int64 **)(v7 + 24 * v8 + 8);
          v11 = 0;
          v35 = 0;
          do
          {
            v12 = *v10;
            if ( _bittest64(&v12, v11) )
              break;
            ++v11;
          }
          while ( v11 < 0x40u );
          v13 = *((_WORD *)v10 + 4);
          BYTE2(v35) = v11;
          LOWORD(v35) = v13;
          StorPortNotification(4107LL, a1, v9 + 264);
        }
        if ( *(_BYTE *)(a1 + 24) )
        {
          v30 = 0;
          v29 = 4;
          v28 = 64;
          v27 = L"Io SQ to CQ Mapping";
          StorPortExtendedFunction(86LL, a1, 0LL);
        }
      }
      while ( v5 < *(unsigned __int16 *)(a1 + 338) );
    }
    else
    {
      v31 = (unsigned __int16 *)(a1 + 280);
    }
    if ( g_HeteroSystem && *(_WORD *)(a1 + 336) >= 2u )
    {
      if ( *(_WORD *)(a1 + 242) )
      {
        do
          StorPortExtendedFunction(116LL, a1, *(unsigned int *)(*(_QWORD *)(a1 + 272) + 72LL * v1++));
        while ( v1 < *(unsigned __int16 *)(a1 + 242) );
      }
      NVMeLogHeterogeneousQueueMappingFallback(a1, (unsigned int)L"CQ count is 0 for CE 0 or CE 1", 0, 0, 0);
      *(_DWORD *)(a1 + 4344) |= 0x10u;
      v4 = v31;
    }
    LODWORD(v3) = *(_DWORD *)(a1 + 4344);
    if ( (v3 & 0x10) != 0 )
    {
      NVMeLogTelemetry(
        a1,
        0LL,
        0LL,
        3,
        "QueueMappingFallback",
        (int)v27,
        v28,
        v29,
        v30,
        "Total SQ Count",
        *(unsigned __int16 *)(a1 + 336),
        "Total CQ Count",
        *(unsigned __int16 *)(a1 + 338),
        "CE 0 processor count",
        *(unsigned int *)(a1 + 316),
        "CE 1 processor count",
        *(unsigned int *)(a1 + 320),
        "CE 0 module count",
        *(unsigned int *)(a1 + 308),
        "CE 1 module count",
        *(unsigned int *)(a1 + 312),
        "Total message count",
        *v4,
        "Total processor count",
        *(unsigned __int16 *)(a1 + 242));
      LOBYTE(v3) = NVMeCleanUpSqCqMapping(a1);
    }
    v14 = 0;
    v34 = 0;
    if ( *(_WORD *)(a1 + 336) )
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(a1 + 872) + 136LL * v14;
        LOBYTE(v3) = NVMeGetCompletionQueueForAssignment(
                       a1,
                       (unsigned int)&v34,
                       (unsigned int)&v32,
                       (unsigned int)&v33,
                       0LL);
        if ( !(_BYTE)v3 )
          break;
        v16 = v32;
        *(_WORD *)(v15 + 50) = v32;
        v17 = *(_QWORD *)(a1 + 880);
        v18 = 392 * v16;
        if ( v33 )
        {
          if ( v33 == 1 )
          {
            *(_QWORD *)(*(_QWORD *)(v18 + v17 - 168) + 8LL * (unsigned int)(*(_DWORD *)(v18 + v17 - 176))++) = v15;
            ++*(_DWORD *)(v18 + v17 - 180);
          }
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v18 + v17 - 200) + 8LL * (unsigned int)(*(_DWORD *)(v18 + v17 - 208))++) = v15;
          ++*(_DWORD *)(v18 + v17 - 212);
        }
        LODWORD(v3) = *(unsigned __int16 *)(a1 + 336);
        if ( ++v14 >= (unsigned int)v3 )
          goto LABEL_35;
      }
      if ( *(_BYTE *)(a1 + 22) )
        LOBYTE(v3) = StorPortExtendedFunction(85LL, a1, 0LL);
    }
LABEL_35:
    v19 = *(unsigned __int16 *)(a1 + 336);
    v20 = 1;
    if ( v14 < v19 )
    {
      do
      {
        LOWORD(v3) = v19;
        v21 = *(_QWORD *)(a1 + 872) + 136LL * v14;
        if ( v20 > *(_WORD *)(a1 + 338) )
          goto LABEL_38;
        v22 = *(_QWORD *)(a1 + 880);
        ++v14;
        *(_WORD *)(v21 + 50) = v20;
        v3 = v20++;
        v23 = 392 * v3;
        *(_QWORD *)(*(_QWORD *)(392 * v3 + v22 - 200) + 8LL * *(unsigned int *)(392 * v3 + v22 - 208)) = v21;
        ++*(_DWORD *)(v23 + v22 - 208);
        ++*(_DWORD *)(v23 + v22 - 212);
        LOWORD(v3) = *(_WORD *)(a1 + 336);
        if ( v20 > *(_WORD *)(a1 + 338) )
LABEL_38:
          v20 = 1;
        LOWORD(v19) = v3;
      }
      while ( v14 < (unsigned __int16)v3 );
    }
    v24 = 0;
    if ( *(_WORD *)(a1 + 338) )
    {
      do
      {
        v3 = v24++;
        v25 = *(_QWORD *)(a1 + 880) + 392 * v3;
        *(_DWORD *)(v25 + 184) = 0;
        *(_DWORD *)(v25 + 216) = 0;
        LODWORD(v3) = *(unsigned __int16 *)(a1 + 338);
      }
      while ( v24 < (unsigned int)v3 );
    }
  }
  return v3;
}
