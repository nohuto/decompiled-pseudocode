/*
 * XREFs of rimProcessPointerDeviceButtonContact @ 0x1C01B1EB4
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01AE834 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01AEB68 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMAddToActiveDevices @ 0x1C018F660 (RIMAddToActiveDevices.c)
 *     RIMGetPointerInputType @ 0x1C019369C (RIMGetPointerInputType.c)
 *     rimExtractButtonPageButtonUsages @ 0x1C01AF578 (rimExtractButtonPageButtonUsages.c)
 *     RIMCmActivateButtonContact @ 0x1C01B5EB8 (RIMCmActivateButtonContact.c)
 *     RIMCmGetButtonContact @ 0x1C01B6870 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01B6928 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C01B6958 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C01B6984 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **__fastcall rimProcessPointerDeviceButtonContact(__int64 a1, __int64 a2, char *a3, unsigned int a4, int a5)
{
  __int64 v6; // rdi
  struct _HIDP_PREPARSED_DATA *v10; // r12
  __int64 ButtonContact; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbx
  _UNKNOWN **v15; // rcx
  int v16; // edx
  int v17; // r8d
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rax
  _UNKNOWN **result; // rax
  int v22; // [rsp+78h] [rbp+10h] BYREF

  v6 = *(_QWORD *)(a2 + 472);
  v10 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 456) + 16LL);
  ButtonContact = RIMCmGetButtonContact(v6);
  v22 = 0;
  v14 = ButtonContact;
  LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v15 = &WPP_RECORDER_INITIALIZED;
  LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v13,
      (_DWORD)gRimLog,
      4,
      1,
      32,
      (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
  if ( *(_DWORD *)(v6 + 24) != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v12, v13);
  if ( !v14 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v12, v13);
  if ( rimExtractButtonPageButtonUsages(v6, v10, a3, a4, &v22) >= 0 )
  {
    v18 = *(_DWORD *)(v14 + 32);
    if ( (v22 & 4) != 0 )
    {
      if ( !__CFSHR__(*(_DWORD *)(v14 + 32), 2) )
      {
        RIMCmActivateButtonContact(v6);
        if ( *(_DWORD *)(v6 + 1008) == 1 )
          RIMAddToActiveDevices(a1, v6);
      }
      v18 = *(_DWORD *)(v14 + 32);
    }
    else if ( __CFSHR__(*(_DWORD *)(v14 + 32), 2) )
    {
      *(_DWORD *)(v14 + 2340) |= 4u;
LABEL_20:
      if ( !(unsigned int)RIMCmIsContactSuppressed(v14)
        || (unsigned int)RIMCmIsContactDeliveringPointerData(v14)
        || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v14) )
      {
        v19 = a5;
        *(_DWORD *)(v14 + 44) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(v14 + 2392) = v19;
        *(_DWORD *)(v14 + 2408) = RIMGetPointerInputType(v6);
        *(_DWORD *)(v14 + 2420) = v22;
        *(_DWORD *)(v14 + 2472) = *(_DWORD *)(v6 + 836);
        *(_QWORD *)(v14 + 2488) = *(_QWORD *)(v6 + 864);
        if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
          v20 = *(_QWORD *)(a2 + 24);
        else
          v20 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)(v14 + 2340) |= 1u;
        *(_QWORD *)(v14 + 2424) = v20;
      }
      goto LABEL_29;
    }
    if ( (v18 & 2) == 0 )
      goto LABEL_29;
    goto LABEL_20;
  }
LABEL_29:
  LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v16,
                          v17,
                          (_DWORD)gRimLog,
                          4,
                          1,
                          33,
                          (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
  }
  return result;
}
