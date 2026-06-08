/*
 * XREFs of ProcLibTraceControlCallback @ 0x1C002EE50
 * Callers:
 *     <none>
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0001E64 (InitializeEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00033D8 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003474 (ResetEnumerationContext.c)
 *     ProcLibTraceRegisterGroupEvents @ 0x1C00034F8 (ProcLibTraceRegisterGroupEvents.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceEnergyEsuRundown @ 0x1C0025008 (ProcLibTraceEnergyEsuRundown.c)
 *     ProcLibTraceSummary2 @ 0x1C002716C (ProcLibTraceSummary2.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C002F130 (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C00347C8 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C0034A10 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C0034CBC (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1C0034F50 (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C0035004 (ProcLibTraceCoordinatedIdleStates.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C00353C4 (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C00355F0 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C0035814 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0035AA0 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C0035B20 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibTracePccErrata @ 0x1C0035BD4 (ProcLibTracePccErrata.c)
 *     ProcLibTracePccSummary @ 0x1C0035C00 (ProcLibTracePccSummary.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C0035CF0 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePepPerfDomain @ 0x1C0036008 (ProcLibTracePepPerfDomain.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0036230 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C003625C (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C00363D8 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceProcessorIds @ 0x1C0036654 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C0036768 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceProcessorRundown @ 0x1C00369FC (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C0036C3C (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceSummary @ 0x1C0036DA8 (ProcLibTraceSummary.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C00370A4 (ProcLibTraceThrottleStatesErrata.c)
 */

void __fastcall ProcLibTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rcx
  __int64 *i; // rbx
  __int64 j; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int *v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  bool v18; // zf
  void (__fastcall *v19)(PWDF_DRIVER_GLOBALS, __int64); // rax
  char **v20; // rsi
  __int64 v21; // rbp
  char *v22; // rdi
  char *k; // rbx
  __int64 v24; // [rsp+20h] [rbp-38h] BYREF
  __int64 v25[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( ControlCode == 2 )
  {
    memset(v25, 0, 32);
    v24 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, ULONGLONG))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001F018,
      0LL,
      MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_1C001F088; i != &qword_1C001F088; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown(i);
    for ( j = qword_1C001F068; (__int64 *)j != &qword_1C001F068; j = *(_QWORD *)j )
    {
      ProcLibTracePStateDomainRundown(j);
      if ( *(_BYTE *)(j + 48) )
      {
        LOBYTE(v7) = 1;
        ProcLibTracePepPerfDomain(j, v7);
      }
    }
    if ( (dword_1C001F594 & 0x7F077) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTraceIdleStatesErrata(v4);
    }
    if ( (dword_1C001F594 & 0x70000000) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTracePerfStatesErrata(v4);
    }
    if ( (dword_1C001F594 & 0x3300000) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTraceThrottleStatesErrata(v4);
    }
    if ( dword_1C001F594 < 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTracePccErrata(v4);
    }
    InitializeEnumerationContext((__int64)&qword_1C001F058, 32, (__int64)v25);
    LOBYTE(v8) = 1;
    ProcLibTraceGetPlatformIdleStates(v8);
    LOBYTE(v9) = 1;
    ProcLibTracePlatformIdleStates(v9);
    LOBYTE(v10) = 1;
    ProcLibTraceCoordinatedIdleStates(v10);
    v11 = (unsigned int *)qword_1C001F6B8;
    if ( qword_1C001F6B8 )
    {
      v12 = 0;
      if ( *(_DWORD *)qword_1C001F6B8 )
      {
        do
        {
          ProcLibTraceCoordinatedLpiRundown(&v11[8 * v12 + 2 + 2 * v12]);
          ++v12;
        }
        while ( v12 < *v11 );
      }
    }
    if ( _bittest64(Globals, 0x25u) )
      ProcLibTraceEnergyEsuRundown();
    ResetEnumerationContext(v25);
    while ( 1 )
    {
      v18 = (unsigned int)EnumerateNextDevice(v25, &v24) == 0;
      v19 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512);
      if ( !v18 )
        break;
      v19(WdfDriverGlobals, qword_1C001F018);
      v13 = v24;
      ProcLibTraceProcessorRundown(v24);
      ProcLibTraceSummary(v13);
      ProcLibTraceSummary2(v13, 1);
      ProcLibTracePerfStatesRundown(v13);
      ProcLibTraceBiosPStatesRundown(v13);
      ProcLibTraceBiosCStatesRundown(v13);
      ProcLibTraceBiosTStatesRundown(v13);
      ProcLibTraceProcessorLpiRundown(v13);
      LOBYTE(v14) = 1;
      ProcLibTraceQueryCapabilities(v13, v14);
      LOBYTE(v15) = 1;
      ProcLibTraceGetProcessorIdleStates(v13, v15);
      LOBYTE(v16) = 1;
      ProcLibTraceGetProcessorIdleStatesV2(v13, v16);
      LOBYTE(v17) = 1;
      ProcLibTracePepPerfCapabilities(v13, v17);
      ProcLibTraceProcessorIds(v13);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C001F018,
        0LL);
    }
    v19(WdfDriverGlobals, qword_1C001F018);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001F030,
      0LL);
    v20 = (char **)&unk_1C001F038;
    v21 = 2LL;
    v22 = (char *)&unk_1C001F038;
    do
    {
      for ( k = *v20; k != v22; k = *(char **)k )
        ProcLibTraceRegisterGroupEvents((__int64)k, 2u);
      v22 += 16;
      v20 += 2;
      --v21;
    }
    while ( v21 );
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001F030);
  }
}
