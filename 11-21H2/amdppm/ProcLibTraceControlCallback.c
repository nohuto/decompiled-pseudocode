/*
 * XREFs of ProcLibTraceControlCallback @ 0x1C0020C40
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001840 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C00027D4 (ResetEnumerationContext.c)
 *     InitializeEnumerationContext @ 0x1C00027F0 (InitializeEnumerationContext.c)
 *     ProcLibTraceRegisterGroupEvents @ 0x1C0003ED8 (ProcLibTraceRegisterGroupEvents.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorRundown @ 0x1C001E008 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceSummary @ 0x1C001E248 (ProcLibTraceSummary.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C001E544 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C001E834 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C001EB6C (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C001ECD8 (ProcLibTraceCoordinatedIdleStates.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C001F084 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C001F2F4 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C001F518 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001F730 (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTracePccSummary @ 0x1C001F7D0 (ProcLibTracePccSummary.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C0020548 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C00207F4 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1C0020A8C (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTraceCoordinatedLpiRundown @ 0x1C0020F10 (ProcLibTraceCoordinatedLpiRundown.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C002113C (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C00211BC (ProcLibTracePStateDomainRundown.c)
 *     ProcLibTracePccErrata @ 0x1C0021270 (ProcLibTracePccErrata.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C002129C (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePepPerfDomain @ 0x1C00215A0 (ProcLibTracePepPerfDomain.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C00217C8 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C00217F4 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceProcessorIds @ 0x1C0021970 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceSummary2 @ 0x1C0021A84 (ProcLibTraceSummary2.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0021EBC (ProcLibTraceThrottleStatesErrata.c)
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
  unsigned int *v8; // rdi
  unsigned int v9; // ebx
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  bool v13; // zf
  void (__fastcall *v14)(PWDF_DRIVER_GLOBALS, __int64); // rax
  char **v15; // rsi
  __int64 v16; // rbp
  char *v17; // rdi
  char *k; // rbx
  _QWORD *v19; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( ControlCode == 2 )
  {
    memset(v20, 0, 32);
    v19 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, ULONGLONG))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0011458,
      0LL,
      MatchAnyKeyword);
    ProcLibTracePccSummary();
    for ( i = (__int64 *)qword_1C00114C8; i != &qword_1C00114C8; i = (__int64 *)*i )
      ProcLibTraceCStateDomainRundown((__int64)i);
    for ( j = qword_1C00114A8; (__int64 *)j != &qword_1C00114A8; j = *(_QWORD *)j )
    {
      ProcLibTracePStateDomainRundown(j);
      if ( *(_BYTE *)(j + 48) )
      {
        LOBYTE(v7) = 1;
        ProcLibTracePepPerfDomain(j, v7);
      }
    }
    if ( (dword_1C00119A4 & 0x7F077) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTraceIdleStatesErrata(v4);
    }
    if ( (dword_1C00119A4 & 0x70000000) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTracePerfStatesErrata(v4);
    }
    if ( (dword_1C00119A4 & 0x3300000) != 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTraceThrottleStatesErrata(v4);
    }
    if ( dword_1C00119A4 < 0 )
    {
      LOBYTE(v4) = 1;
      ProcLibTracePccErrata(v4);
    }
    InitializeEnumerationContext((__int64)&qword_1C0011498, 32, (__int64)v20);
    ProcLibTraceGetPlatformIdleStates(1);
    ProcLibTracePlatformIdleStates(1);
    ProcLibTraceCoordinatedIdleStates(1);
    v8 = (unsigned int *)qword_1C0011AC8;
    if ( qword_1C0011AC8 )
    {
      v9 = 0;
      if ( *(_DWORD *)qword_1C0011AC8 )
      {
        do
        {
          ProcLibTraceCoordinatedLpiRundown(&v8[8 * v9 + 2 + 2 * v9]);
          ++v9;
        }
        while ( v9 < *v8 );
      }
    }
    ResetEnumerationContext(v20);
    while ( 1 )
    {
      v13 = (unsigned int)EnumerateNextDevice(v20, &v19) == 0;
      v14 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512);
      if ( !v13 )
        break;
      v14(WdfDriverGlobals, qword_1C0011458);
      v10 = v19;
      ProcLibTraceProcessorRundown((__int64)v19);
      ProcLibTraceSummary(v10);
      LOBYTE(v11) = 1;
      ProcLibTraceSummary2(v10, v11);
      ProcLibTracePerfStatesRundown(v10);
      ProcLibTraceBiosPStatesRundown(v10);
      ProcLibTraceBiosCStatesRundown(v10);
      ProcLibTraceBiosTStatesRundown((__int64)v10);
      ProcLibTraceProcessorLpiRundown((__int64)v10);
      ProcLibTraceQueryCapabilities((__int64)v10, 1);
      ProcLibTraceGetProcessorIdleStates((__int64)v10, 1);
      ProcLibTraceGetProcessorIdleStatesV2((__int64)v10, 1);
      LOBYTE(v12) = 1;
      ProcLibTracePepPerfCapabilities(v10, v12);
      ProcLibTraceProcessorIds(v10);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C0011458,
        0LL);
    }
    v14(WdfDriverGlobals, qword_1C0011458);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0011470,
      0LL);
    v15 = (char **)&unk_1C0011478;
    v16 = 2LL;
    v17 = (char *)&unk_1C0011478;
    do
    {
      for ( k = *v15; k != v17; k = *(char **)k )
        ProcLibTraceRegisterGroupEvents((__int64)k, 2u);
      v17 += 16;
      v15 += 2;
      --v16;
    }
    while ( v16 );
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0011470);
  }
}
