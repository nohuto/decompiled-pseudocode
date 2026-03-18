/*
 * XREFs of RIMInsertSimulatedContactEndStateInFrame @ 0x1C01AD8CC
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0187718 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0187C10 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C0191610 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01958A0 (RIMSuppressAllActiveContacts.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01AF120 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01B198C (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C018F340 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C01A6D30 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1C01ACA2C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     RIMSetContactEndState @ 0x1C01ADE8C (RIMSetContactEndState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMInsertSimulatedContactEndStateInFrame(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rdi
  int v11; // eax
  int v12; // r9d
  int v13; // edx
  __int16 v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  int v17; // edx
  int v18; // r8d
  char *v19; // rdi
  __int64 v20; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+10h] BYREF
  void *v22; // [rsp+90h] [rbp+18h] BYREF

  v6 = *(_QWORD *)(a2 + 472);
  v22 = 0LL;
  v21 = 0;
  if ( !*(_QWORD *)(v6 + 784) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (*(_DWORD *)(a3 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v11 = a6;
  v12 = a5;
  *(_DWORD *)(a3 + 2340) |= 1u;
  RIMSetContactEndState(v6, a3, a4, v12, v11);
  v13 = *(_DWORD *)(v6 + 24);
  v14 = *(_WORD *)(a3 + 2400);
  v20 = 0LL;
  InputTraceLogging::RIM::PopulateContact(a2, v13, v14, (__int64)&v20, a3 + 2400, 2);
  if ( (*(_DWORD *)(a3 + 32) & 4) == 0 )
  {
    v16 = RIMAddSimulatedPointerDeviceData(v15, v6, a3, (int)a3 + 2400, (__int64 *)&v22, &v21);
    v19 = (char *)v22;
    if ( v16 < 0 )
    {
      LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v18,
          (_DWORD)gRimLog,
          4,
          1,
          48,
          (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
          v16);
      }
    }
    else
    {
      RIMStoreRawDataInPointerDeviceFrame(a1, a2, (__int64)v22, v21, (_DWORD *)(a3 + 2392));
    }
    if ( v19 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v19);
  }
}
