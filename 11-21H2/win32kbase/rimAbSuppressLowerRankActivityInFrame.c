/*
 * XREFs of rimAbSuppressLowerRankActivityInFrame @ 0x1C0187C10
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0188460 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMCmActiveContactsEnd @ 0x1C00E756C (RIMCmActiveContactsEnd.c)
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C0186C6C (rimAbIsContactSuppressedByDeviceDeadzones.c)
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C0186EA0 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0186F84 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C0187540 (rimAbShouldButtonContactBeSuppressed.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDD @ 0x1C0189090 (WPP_RECORDER_AND_TRACE_SF_dDD.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0195A10 (RIMUpdatePrimaryDevice.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C01AD8CC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1C01ADE28 (RIMResetPointerDevicePrimaryContact.c)
 *     RIMSetContactEndState @ 0x1C01ADE8C (RIMSetContactEndState.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01B609C (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C01B6120 (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01B61C4 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmGetButtonContact @ 0x1C01B6870 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1C01B68C8 (RIMCmIsContactDeliveringAnyData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbSuppressLowerRankActivityInFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  int v5; // r14d
  unsigned __int64 v7; // r12
  __int64 active; // rax
  __int64 v9; // r8
  __int64 v10; // xmm1_8
  int v11; // eax
  __int64 v12; // rdi
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  PDEVICE_OBJECT v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 result; // rax
  __int64 ButtonContact; // rax
  int v23; // edi
  __int64 v24; // rcx
  int v25; // edx
  int v26; // r8d
  int v27; // [rsp+30h] [rbp-31h]
  __int128 v28; // [rsp+68h] [rbp+7h] BYREF
  __int64 v29; // [rsp+78h] [rbp+17h]
  __int64 v30; // [rsp+80h] [rbp+1Fh] BYREF
  int v31; // [rsp+88h] [rbp+27h]
  __int64 v32; // [rsp+90h] [rbp+2Fh]
  int v33; // [rsp+D0h] [rbp+6Fh]

  v4 = *(_QWORD *)(a2 + 864);
  v33 = *(_DWORD *)(a2 + 836);
  v5 = 0;
  v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFF78000000004uLL, a2, a3);
  active = RIMCmActiveContactsBeginNoButton(&v30, a2);
  v10 = *(_QWORD *)(active + 16);
  v28 = *(_OWORD *)active;
  v29 = v10;
  while ( 1 )
  {
    RIMCmActiveContactsEnd((__int64)&v30, a2, v9);
    if ( (_QWORD)v28 == v30 && DWORD2(v28) == v31 && v29 == v32 )
      break;
    v11 = *(_DWORD *)(v29 + 16);
    v12 = v29 - 16;
    if ( (v11 & 2) == 0 )
      __int2c();
    if ( (v11 & 4) != 0 )
      __int2c();
    if ( (*(_DWORD *)(v12 + 2340) & 1) != 0 && (*(_DWORD *)(v12 + 2420) & 2) != 0 )
    {
      if ( gDeviceArbitrationType != 3
        || (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
        || (v13 = *(_DWORD *)(v12 + 52), (unsigned int)v7 <= v13 + 500)
        || !v13 )
      {
        if ( (unsigned int)rimAbIsPointerSuppressedByGlobalPenDeadzone(a1, a2, v12 + 2408)
          || (unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, a2, v12 + 2408)
          || (unsigned int)rimAbIsContactSuppressedByDeviceDeadzones(a2, (struct tagHPD_CONTACT *)v12, v14) )
        {
          RIMCmAddContactSuppressionReasons(a2, v12);
          if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v12) )
          {
            LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_dDD(
                WPP_GLOBAL_Control->AttachedDevice,
                v15,
                v16,
                25,
                4,
                v27,
                25,
                (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids,
                *(_DWORD *)v12,
                *(_DWORD *)(v12 + 8),
                *(_DWORD *)(v12 + 2660));
            }
            RIMSetContactEndState(a2, v12, v4, v33, 1);
          }
          else
          {
            v17 = WPP_GLOBAL_Control;
            LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_dDD(
                WPP_GLOBAL_Control->AttachedDevice,
                v15,
                v16,
                26,
                4,
                v27,
                26,
                (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids,
                *(_DWORD *)v12,
                *(_DWORD *)(v12 + 8),
                *(_DWORD *)(v12 + 2660));
            *(_DWORD *)(v12 + 2340) &= ~1u;
            if ( (*(_DWORD *)(v12 + 32) & 8) != 0 )
            {
              if ( *(_QWORD *)(a2 + 1016) != v12 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v15, v16);
              RIMResetPointerDevicePrimaryContact(a2, v15, v16);
              if ( (*(_DWORD *)(a2 + 360) & 1) != 0 )
              {
                if ( *(_QWORD *)(a1 + 504) != a2 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
                RIMUpdatePrimaryDevice(a1, 0LL);
              }
            }
          }
          v5 = 1;
        }
      }
    }
    RIMCmActiveContactsNext(a2, &v28);
  }
  result = rimAbShouldButtonContactBeSuppressed(a1, a2, v5);
  if ( (_DWORD)result )
  {
    ButtonContact = RIMCmGetButtonContact(a2);
    v23 = ButtonContact;
    RIMCmAddContactSuppressionReasons(v24, ButtonContact);
    LOBYTE(v25) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v25,
        v26,
        (_DWORD)gRimLog,
        4,
        1,
        27,
        (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids);
    }
    return RIMInsertSimulatedContactEndStateInFrame(a1, *(_QWORD *)(a2 + 16), v23, v4, v33, 1);
  }
  return result;
}
