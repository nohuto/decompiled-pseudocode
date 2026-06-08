/*
 * XREFs of ProcLibTraceControlCallback @ 0x1C002DCD0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0001BA0 (InitializeEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C000248C (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002528 (ResetEnumerationContext.c)
 *     ProcLibTraceRegisterGroupEvents @ 0x1C00027FC (ProcLibTraceRegisterGroupEvents.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C00246C8 (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceSummary2 @ 0x1C00299AC (ProcLibTraceSummary2.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C0033658 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C00338A0 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C0033B4C (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1C0033DE4 (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C0033E98 (ProcLibTraceCoordinatedIdleStates.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C0034244 (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C0034470 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C0034694 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0034920 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C00349A0 (ProcLibTracePStateDomainRundown.c)
 *     ProcLibTracePccErrata @ 0x1C0034A54 (ProcLibTracePccErrata.c)
 *     ProcLibTracePccSummary @ 0x1C0034A80 (ProcLibTracePccSummary.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C0034B70 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePepPerfDomain @ 0x1C0034E74 (ProcLibTracePepPerfDomain.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C003509C (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C00350C8 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C0035244 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceProcessorIds @ 0x1C00354B4 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C00355C8 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceProcessorRundown @ 0x1C003585C (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C0035A9C (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceSummary @ 0x1C0035C08 (ProcLibTraceSummary.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0035F04 (ProcLibTraceThrottleStatesErrata.c)
 */

void __fastcall ProcLibTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  void (__fastcall *v4)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, ULONGLONG); // rax
  __int64 v5; // rcx
  __int64 *i; // rbx
  __int64 j; // rbx
  __int64 v8; // rdx
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
  _OWORD v25[3]; // [rsp+28h] [rbp-30h] BYREF

  if ( ControlCode == 2 )
  {
    memset(v25, 0, 32);
    v4 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, ULONGLONG))(WdfFunctions_01015 + 2504);
    v24 = 0LL;
    v4(WdfDriverGlobals, qword_1C001DCF8, 0LL, MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_1C001DD68; i != &qword_1C001DD68; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown(i);
    for ( j = qword_1C001DD48; (__int64 *)j != &qword_1C001DD48; j = *(_QWORD *)j )
    {
      ProcLibTracePStateDomainRundown(j);
      if ( *(_BYTE *)(j + 48) )
      {
        LOBYTE(v8) = 1;
        ProcLibTracePepPerfDomain(j, v8);
      }
    }
    if ( (dword_1C001E244 & 0x7F077) != 0 )
    {
      LOBYTE(v5) = 1;
      ProcLibTraceIdleStatesErrata(v5);
    }
    if ( (dword_1C001E244 & 0x70000000) != 0 )
    {
      LOBYTE(v5) = 1;
      ProcLibTracePerfStatesErrata(v5);
    }
    if ( (dword_1C001E244 & 0x3300000) != 0 )
    {
      LOBYTE(v5) = 1;
      ProcLibTraceThrottleStatesErrata(v5);
    }
    if ( dword_1C001E244 < 0 )
    {
      LOBYTE(v5) = 1;
      ProcLibTracePccErrata(v5);
    }
    InitializeEnumerationContext((__int64)&qword_1C001DD38, 32, (__int64)v25);
    ProcLibTraceGetPlatformIdleStates(1);
    LOBYTE(v9) = 1;
    ProcLibTracePlatformIdleStates(v9);
    LOBYTE(v10) = 1;
    ProcLibTraceCoordinatedIdleStates(v10);
    v11 = (unsigned int *)qword_1C001E368;
    if ( qword_1C001E368 )
    {
      v12 = 0;
      if ( *(_DWORD *)qword_1C001E368 )
      {
        do
        {
          ProcLibTraceCoordinatedLpiRundown(&v11[8 * v12 + 2 + 2 * v12]);
          ++v12;
        }
        while ( v12 < *v11 );
      }
    }
    ResetEnumerationContext((__int64 *)v25);
    while ( 1 )
    {
      v18 = (unsigned int)EnumerateNextDevice((__int64 *)v25, &v24) == 0;
      v19 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512);
      if ( !v18 )
        break;
      v19(WdfDriverGlobals, qword_1C001DCF8);
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
        qword_1C001DCF8,
        0LL);
    }
    v19(WdfDriverGlobals, qword_1C001DCF8);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001DD10,
      0LL);
    v20 = (char **)&unk_1C001DD18;
    v21 = 2LL;
    v22 = (char *)&unk_1C001DD18;
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
      qword_1C001DD10);
  }
}
