/*
 * XREFs of HalpTimerMeasureFrequencies @ 0x1403BBEC4
 * Callers:
 *     HalpTimerSelectRoles @ 0x1403BC388 (HalpTimerSelectRoles.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x1403A572C (HalpTimerScaleCounter.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403BC1C4 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403BC2A0 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerInitialize @ 0x1403BC620 (HalpTimerInitialize.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403BC8C4 (HalpTimerStallExecutionProcessor.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __fastcall HalpTimerMeasureFrequencies(__int64 a1)
{
  ULONG_PTR *v1; // rbx
  int v2; // r15d
  char v3; // dl
  ULONG_PTR *v5; // rcx
  ULONG_PTR *v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  ULONG_PTR *v9; // rbx
  ULONG_PTR *v10; // rdi
  ULONG_PTR *v11; // r10
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rcx
  ULONG_PTR *v15; // rbx
  ULONG_PTR *v16; // rdi
  ULONG_PTR *v17; // r10
  ULONG_PTR *v18; // rbx
  __int64 v19; // r11
  int v20; // edi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  unsigned int v25; // edi
  __int64 v26; // rax
  void (__fastcall *v27)(__int64); // rdx
  __int64 InternalData; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r10
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r10

  v1 = (ULONG_PTR *)HalpRegisteredTimers;
  v2 = *(_DWORD *)(a1 + 224) & 2;
  v3 = 0;
  if ( (ULONG_PTR *)HalpRegisteredTimers != &HalpRegisteredTimers )
  {
    do
    {
      v5 = v1;
      v1 = (ULONG_PTR *)*v1;
      if ( (!v5[24] || (v5[23] & 8) != 0) && (v5[28] & 2) != 0 )
      {
        HalpTimerInitialize(v5);
        v3 = 1;
      }
    }
    while ( v1 != &HalpRegisteredTimers );
    if ( v3 )
    {
      KeStallExecutionProcessor(0x5DCu);
      v6 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v6 != &HalpRegisteredTimers )
      {
        v7 = (__int64)v6;
        v6 = (ULONG_PTR *)*v6;
        if ( (!*(_QWORD *)(v7 + 192) || (*(_DWORD *)(v7 + 184) & 8) != 0)
          && (*(_DWORD *)(v7 + 224) & 2) != 0
          && (*(_DWORD *)(v7 + 184) & 2) != 0 )
        {
          if ( v2 )
          {
            *(_DWORD *)(v7 + 48) = HalpTimerDetermineValidTimerPairReadLatency(v7, a1);
          }
          else
          {
            InternalData = HalpTimerGetInternalData(v7);
            *(_QWORD *)(v7 + 16) = (*(__int64 (__fastcall **)(__int64))(v7 + 112))(InternalData);
          }
        }
      }
      v8 = __readcr2();
      __writecr2(v8);
      if ( (*(_DWORD *)(a1 + 224) & 2) == 0 )
      {
        v29 = HalpTimerGetInternalData(a1);
        (*(void (__fastcall **)(__int64, _QWORD))(a1 + 176))(v29, 0LL);
      }
      v9 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v9 != &HalpRegisteredTimers )
      {
        v10 = v9;
        v11 = v9;
        v9 = (ULONG_PTR *)*v9;
        if ( (!v10[24] || (v10[23] & 8) != 0) && (v11[28] & 2) != 0 && (v11[23] & 2) != 0 )
        {
          if ( v2 )
          {
            HalpTimerReadTimerPairWithLatencyLimit(
              *((_DWORD *)v11 + 12),
              (_DWORD)v11,
              a1,
              (_DWORD)v10 + 16,
              (__int64)(v11 + 3));
          }
          else
          {
            v30 = HalpTimerGetInternalData((__int64)v11);
            v10[2] = (*(__int64 (__fastcall **)(__int64))(v31 + 112))(v30);
          }
        }
      }
      v12 = __readcr2();
      __writecr2(v12);
      if ( (*(_DWORD *)(a1 + 224) & 2) != 0 )
      {
        v13 = 1250000LL;
        HalpTimerStallExecutionProcessor(a1, 1250000LL, 0LL);
      }
      else
      {
        v32 = HalpTimerGetInternalData(a1);
        v13 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 176))(v32, 1250000LL);
      }
      v14 = __readcr2();
      __writecr2(v14);
      v15 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v15 != &HalpRegisteredTimers )
      {
        v16 = v15;
        v17 = v15;
        v15 = (ULONG_PTR *)*v15;
        if ( (!v16[24] || (v16[23] & 8) != 0) && (v17[28] & 2) != 0 && (v17[23] & 2) != 0 )
        {
          if ( v2 )
          {
            HalpTimerReadTimerPairWithLatencyLimit(
              *((_DWORD *)v17 + 12),
              (_DWORD)v17,
              a1,
              (_DWORD)v16 + 32,
              (__int64)(v17 + 5));
          }
          else
          {
            v33 = HalpTimerGetInternalData((__int64)v17);
            v16[4] = (*(__int64 (__fastcall **)(__int64))(v34 + 112))(v33);
          }
        }
      }
      v18 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v18 != &HalpRegisteredTimers )
      {
        v19 = (__int64)v18;
        v18 = (ULONG_PTR *)*v18;
        if ( (!*(_QWORD *)(v19 + 192) || (*(_DWORD *)(v19 + 184) & 8) != 0) && (*(_DWORD *)(v19 + 224) & 2) != 0 )
        {
          v20 = *(_DWORD *)(v19 + 184);
          if ( (v20 & 2) != 0 )
          {
            v21 = *(_QWORD *)(v19 + 16);
            v22 = *(_QWORD *)(v19 + 32) - v21;
            v23 = *(_QWORD *)(v19 + 24);
            v24 = *(_QWORD *)(v19 + 40) - v23;
            if ( *(_QWORD *)(v19 + 32) < v21 )
              v22 += 1LL << *(_DWORD *)(v19 + 220);
            if ( *(_QWORD *)(v19 + 40) < v23 )
              v24 += 1LL << *(_DWORD *)(a1 + 220);
            if ( v2 )
              v13 = HalpTimerScaleCounter(v24, *(_QWORD *)(a1 + 192), 10000000LL);
            v25 = v20 & 0xFFFFFFF7;
            *(_DWORD *)(v19 + 184) = v25;
            *(_QWORD *)(v19 + 192) = 10000000 * v22 / v13;
            if ( v19 != a1 && (v25 & 4) == 0 && *(_QWORD *)(v19 + 136) )
            {
              v26 = HalpTimerGetInternalData(v19);
              v27(v26);
            }
          }
        }
      }
    }
  }
}
