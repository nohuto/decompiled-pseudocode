/*
 * XREFs of WER_CreateReport @ 0x1C003D104
 * Callers:
 *     HUBMISC_CreateWerReport @ 0x1C0031414 (HUBMISC_CreateWerReport.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C007FB68 (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00010B0 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WER_UpdateThrottlePolicy @ 0x1C003CD8C (WER_UpdateThrottlePolicy.c)
 *     WER_StoreDeviceContext @ 0x1C003CE18 (WER_StoreDeviceContext.c)
 *     TelemetryData_InsertTriageDataBlock @ 0x1C003F694 (TelemetryData_InsertTriageDataBlock.c)
 *     TelemetryData_CreateReport @ 0x1C003F810 (TelemetryData_CreateReport.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     HUBREG_QueryDeviceWerThrottleMask @ 0x1C0083280 (HUBREG_QueryDeviceWerThrottleMask.c)
 *     TelemetryData_SubmitReport @ 0x1C008A0A8 (TelemetryData_SubmitReport.c)
 */

__int64 __fastcall WER_CreateReport(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v5; // rdx
  __int64 v7; // rcx
  int v8; // r13d
  __int64 v9; // rsi
  int DeviceWerThrottleMask; // edx
  int inserted; // ebx
  int v13; // r15d
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  unsigned int v18; // r15d
  unsigned int v19; // ebx
  _QWORD **v20; // rsi
  _QWORD *i; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 Report; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  _QWORD **v33; // r12
  _QWORD *j; // rax
  _QWORD *v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rdx
  _QWORD **v38; // r12
  _QWORD *k; // rax
  _QWORD *v40; // rcx
  __int64 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned int v48; // [rsp+30h] [rbp-51h] BYREF
  int v49; // [rsp+34h] [rbp-4Dh]
  unsigned int v50; // [rsp+38h] [rbp-49h] BYREF
  __int64 v51; // [rsp+40h] [rbp-41h] BYREF
  __int64 v52; // [rsp+48h] [rbp-39h] BYREF
  __int64 v53; // [rsp+50h] [rbp-31h]
  char pszDest[16]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v55[24]; // [rsp+68h] [rbp-19h] BYREF
  __int128 v56; // [rsp+80h] [rbp-1h] BYREF

  v5 = *(_QWORD *)(a1 + 2520);
  v51 = 0LL;
  v48 = 0;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = a4;
  v52 = 0LL;
  v9 = 0LL;
  v50 = 0;
  *(_OWORD *)pszDest = 0LL;
  memset(v55, 0, sizeof(v55));
  v49 = a4;
  v56 = 0LL;
  DeviceWerThrottleMask = HUBREG_QueryDeviceWerThrottleMask(v7, v5);
  if ( _bittest(&DeviceWerThrottleMask, v8 & 0x1F) )
  {
    inserted = -1073741823;
LABEL_3:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        5u,
        0xBu,
        (__int64)&WPP_463f132cec4839ab20917f1780176f31_Traceguids,
        inserted);
    goto LABEL_5;
  }
  v13 = *(unsigned __int16 *)(a1 + 2468);
  v14 = *(unsigned __int16 *)(a1 + 2466);
  inserted = RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(unsigned __int16 *)(a1 + 2464));
  if ( inserted < 0 )
    goto LABEL_3;
  inserted = RtlStringCchPrintfA(&pszDest[5], 5uLL, "%04X", v14);
  if ( inserted < 0 )
    goto LABEL_3;
  inserted = RtlStringCchPrintfA(&pszDest[10], 5uLL, "%04X", v13);
  if ( inserted < 0 )
    goto LABEL_3;
  v15 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v55 = a1;
  *(_OWORD *)&v55[8] = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v15);
  v18 = 1;
  v19 = 1;
  if ( *(_WORD *)(a1 + 48) )
  {
    v20 = (_QWORD **)(a1 + 2360);
    do
    {
      for ( i = *v20; ; i = (_QWORD *)*i )
      {
        v17 = i - 31;
        if ( v20 == i )
          break;
        if ( *((unsigned __int16 *)v17 + 100) == v19 )
        {
          if ( i != (_QWORD *)248 )
          {
            v22 = v17[166];
            if ( v22 )
            {
              v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      v17[166]);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                WdfDriverGlobals,
                v23,
                "WER Tag",
                245LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
              _InterlockedOr((volatile signed __int32 *)(v22 + 1636), 0x80000u);
              v16 = *(_QWORD *)(v22 + 16);
              if ( v16 )
              {
                v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                  WdfDriverGlobals,
                  v24,
                  "WER Tag",
                  251LL,
                  "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
                _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v22 + 16) + 32LL), 0x8000u);
              }
            }
          }
          break;
        }
      }
      ++v19;
    }
    while ( v19 <= *(unsigned __int16 *)(a1 + 48) );
    v8 = v49;
  }
  Report = TelemetryData_CreateReport((_DWORD)v17, v16, v8, (unsigned int)pszDest, a5);
  v53 = Report;
  v9 = Report;
  if ( Report )
  {
    inserted = TelemetryData_InsertTriageDataBlock(Report, pszDest, 40LL);
    if ( inserted >= 0 )
    {
      inserted = TelemetryData_InsertTriageDataBlock(v9, a1, 2768LL);
      if ( inserted >= 0 )
      {
        inserted = TelemetryData_InsertTriageDataBlock(v9, &WPP_GLOBAL_Control, 8LL);
        if ( inserted >= 0 )
        {
          if ( !WPP_GLOBAL_Control
            || (inserted = TelemetryData_InsertTriageDataBlock(v9, WPP_GLOBAL_Control, 80LL), inserted >= 0) )
          {
            inserted = imp_WppRecorderLogDumpLiveData(WPP_GLOBAL_Control, *(_QWORD *)(a1 + 2520), &v51, &v48, &v56);
            if ( inserted >= 0 )
            {
              inserted = TelemetryData_InsertTriageDataBlock(v9, v51, v48);
              if ( inserted >= 0 )
              {
                inserted = imp_WppRecorderDumpLiveDriverData(WPP_GLOBAL_Control, &v52, &v50, &v56);
                if ( inserted >= 0 )
                {
                  inserted = TelemetryData_InsertTriageDataBlock(v9, v52, v50);
                  if ( inserted >= 0 )
                  {
                    if ( !*(_BYTE *)(a1 + 240)
                      || (v26 = *(_QWORD *)(a1 + 24)) == 0
                      || (inserted = TelemetryData_InsertTriageDataBlock(v9, v26, 336LL), inserted >= 0)
                      && ((v27 = *(_QWORD *)(a1 + 24), (v28 = *(_QWORD *)(v27 + 64)) == 0)
                       || (inserted = TelemetryData_InsertTriageDataBlock(v9, *(_QWORD *)(v27 + 64), 552LL),
                           inserted >= 0)
                       && ((v29 = *(_QWORD *)(v28 + 24)) == 0
                        || (inserted = WER_StoreDeviceContext(v9, v29), inserted >= 0))) )
                    {
                      v30 = *(_QWORD *)(a1 + 816);
                      if ( !v30
                        || (inserted = TelemetryData_InsertTriageDataBlock(v9, v30, *(unsigned __int16 *)(v30 + 2)),
                            inserted >= 0) )
                      {
                        v31 = *(_QWORD *)(a1 + 1256);
                        if ( !v31
                          || (inserted = TelemetryData_InsertTriageDataBlock(v9, v31, *(unsigned __int16 *)(v31 + 2)),
                              inserted >= 0) )
                        {
                          v32 = *(_QWORD *)(a1 + 2552);
                          if ( !v32
                            || (inserted = TelemetryData_InsertTriageDataBlock(
                                             v9,
                                             v32,
                                             *(unsigned __int16 *)(a1 + 2544)),
                                inserted >= 0) )
                          {
                            if ( *(_WORD *)(a1 + 48) )
                            {
                              v33 = (_QWORD **)(a1 + 2360);
                              while ( 2 )
                              {
                                for ( j = *v33; ; j = (_QWORD *)*j )
                                {
                                  v35 = j - 31;
                                  if ( v33 == j )
                                    break;
                                  if ( *((unsigned __int16 *)v35 + 100) == v18 )
                                  {
                                    if ( j != (_QWORD *)248 )
                                    {
                                      inserted = TelemetryData_InsertTriageDataBlock(v9, v35, 1472LL);
                                      if ( inserted < 0 )
                                        goto LABEL_66;
                                      v36 = v35[4];
                                      if ( v36 )
                                      {
                                        inserted = TelemetryData_InsertTriageDataBlock(
                                                     v9,
                                                     v36,
                                                     *(unsigned __int16 *)(v36 + 2));
                                        if ( inserted < 0 )
                                          goto LABEL_66;
                                      }
                                      inserted = imp_WppRecorderLogDumpLiveData(
                                                   WPP_GLOBAL_Control,
                                                   v35[179],
                                                   &v51,
                                                   &v48,
                                                   &v56);
                                      if ( inserted < 0 )
                                        goto LABEL_66;
                                      inserted = TelemetryData_InsertTriageDataBlock(v9, v51, v48);
                                      if ( inserted < 0 )
                                        goto LABEL_66;
                                      v37 = v35[166];
                                      if ( v37 )
                                      {
                                        inserted = WER_StoreDeviceContext(v9, v37);
                                        if ( inserted < 0 )
                                          goto LABEL_66;
                                      }
                                    }
                                    break;
                                  }
                                }
                                if ( ++v18 <= *(unsigned __int16 *)(a1 + 48) )
                                  continue;
                                break;
                              }
LABEL_66:
                              LOBYTE(v8) = v49;
                              v18 = 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    inserted = -1073741670;
  }
  if ( *(_WORD *)(a1 + 48) )
  {
    v38 = (_QWORD **)(a1 + 2360);
    do
    {
      for ( k = *v38; ; k = (_QWORD *)*k )
      {
        v40 = k - 31;
        if ( v38 == k )
          break;
        if ( *((unsigned __int16 *)v40 + 100) == v18 )
        {
          if ( k != (_QWORD *)248 )
          {
            v41 = v40[166];
            if ( v41 )
            {
              v42 = v40[166];
              if ( (*(_DWORD *)(v41 + 1636) & 0x80000) != 0 )
              {
                _InterlockedAnd((volatile signed __int32 *)(v41 + 1636), 0xFFF7FFFF);
                v43 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                        WdfDriverGlobals,
                        v42);
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                  WdfDriverGlobals,
                  v43,
                  "WER Tag",
                  234LL,
                  "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
                v44 = *(_QWORD *)(v41 + 16);
                if ( v44 && (*(_DWORD *)(v44 + 32) & 0x8000) != 0 )
                {
                  _InterlockedAnd((volatile signed __int32 *)(v44 + 32), 0xFFFF7FFF);
                  v45 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                          WdfDriverGlobals,
                          *(_QWORD *)(v41 + 16));
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                    WdfDriverGlobals,
                    v45,
                    "WER Tag",
                    240LL,
                    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
                }
              }
              else
              {
                v46 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                        WdfDriverGlobals,
                        v42);
                (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                  WdfDriverGlobals,
                  v46,
                  "WER Tag",
                  245LL,
                  "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
                _InterlockedOr((volatile signed __int32 *)(v41 + 1636), 0x80000u);
                if ( *(_QWORD *)(v41 + 16) )
                {
                  v47 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                    WdfDriverGlobals,
                    v47,
                    "WER Tag",
                    251LL,
                    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\wer.c");
                  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v41 + 16) + 32LL), 0x8000u);
                }
              }
            }
          }
          break;
        }
      }
      ++v18;
    }
    while ( v18 <= *(unsigned __int16 *)(a1 + 48) );
    v9 = v53;
    LOBYTE(v8) = v49;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 16));
  if ( inserted < 0 )
    goto LABEL_3;
  inserted = TelemetryData_SubmitReport(v9);
  if ( inserted >= 0 )
    WER_UpdateThrottlePolicy(*(_QWORD *)(a1 + 16), v8, *(_QWORD *)(a1 + 2520));
LABEL_5:
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 8) )
    {
      ExFreePoolWithTag(*(PVOID *)v9, 0x74614454u);
      *(_QWORD *)v9 = 0LL;
      *(_DWORD *)(v9 + 8) = 0;
    }
    ExFreePoolWithTag((PVOID)v9, 0x74614454u);
  }
  return (unsigned int)inserted;
}
