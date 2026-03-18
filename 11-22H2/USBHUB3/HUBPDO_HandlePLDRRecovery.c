/*
 * XREFs of HUBPDO_HandlePLDRRecovery @ 0x1C0019F3C
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C007BF50 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0001008 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002668 (WPP_RECORDER_SF_dD.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C000C768 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     HUBPDO_GetPortPath @ 0x1C0019EE4 (HUBPDO_GetPortPath.c)
 *     __security_check_cookie @ 0x1C0044810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044B40 (_guard_dispatch_icall_nop.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x1C00807C8 (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBREG_IsPortPLDRCapable @ 0x1C0088614 (HUBREG_IsPortPLDRCapable.c)
 */

__int64 __fastcall HUBPDO_HandlePLDRRecovery(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // r10
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  PEVENT_DATA_DESCRIPTOR v13; // [rsp+28h] [rbp-B1h]
  __int64 v14; // [rsp+30h] [rbp-A9h]
  char v15; // [rsp+30h] [rbp-A9h]
  _WORD v16[2]; // [rsp+50h] [rbp-89h] BYREF
  _WORD v17[2]; // [rsp+54h] [rbp-85h] BYREF
  int v18; // [rsp+58h] [rbp-81h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+70h] [rbp-69h] BYREF
  _QWORD *v21; // [rsp+90h] [rbp-49h]
  __int64 v22; // [rsp+98h] [rbp-41h]
  int *v23; // [rsp+A0h] [rbp-39h]
  __int64 v24; // [rsp+A8h] [rbp-31h]
  _WORD *v25; // [rsp+B0h] [rbp-29h]
  __int64 v26; // [rsp+B8h] [rbp-21h]
  int *v27; // [rsp+C0h] [rbp-19h]
  __int64 v28; // [rsp+C8h] [rbp-11h]
  _WORD *v29; // [rsp+D0h] [rbp-9h]
  __int64 v30; // [rsp+D8h] [rbp-1h]
  _WORD v31[8]; // [rsp+E0h] [rbp+7h] BYREF

  HUBPDO_GetPortPath(a2, v31);
  v18 = 3;
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                       (volatile signed __int32 *)&Feature_PLDRRecovery__private_reporting,
                       0x190231Du,
                       0LL,
                       0,
                       2u)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    v15 = 0;
    g_wil_details_pfnFeatureLoggingHook(26223389LL, &Feature_PLDRRecovery_logged_traits, 0LL, 1LL, &v18, 0LL, v15, 1LL);
  }
  result = HUBREG_IsPortPLDRCapable(*(_QWORD *)a3, *(unsigned __int16 *)(*(_QWORD *)(a3 + 8) + 200LL));
  if ( (_BYTE)result )
  {
    *(_BYTE *)(*(_QWORD *)(a3 + 8) + 1472LL) = 0;
    v7 = *(_QWORD *)(a3 + 8);
    result = *(unsigned __int16 *)(v7 + 1474);
    if ( (unsigned __int16)result < 2u )
    {
      if ( !(_WORD)result )
      {
        EtwActivityIdControl(3u, (LPGUID)(v7 + 1480));
        if ( (unsigned int)dword_1C00691F8 > 4
          && (qword_1C0069208 & 0x400000000001LL) != 0
          && (qword_1C0069210 & 0x400000000001LL) == qword_1C0069210 )
        {
          v12 = *(_QWORD *)(a3 + 8);
          v21 = v19;
          LOWORD(v18) = *(_WORD *)(a3 + 1996);
          v24 = 2LL;
          v23 = &v18;
          v17[0] = *(_WORD *)(a3 + 1998);
          v25 = v17;
          v27 = (int *)v16;
          v29 = v31;
          v26 = 2LL;
          v19[0] = 16779264LL;
          v22 = 8LL;
          v16[0] = 6;
          v28 = 2LL;
          v30 = 12LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C00691F8,
            (unsigned __int8 *)dword_1C0065CD7,
            (const GUID *)(v12 + 1480),
            0LL,
            7u,
            &v20);
        }
      }
      ++*(_WORD *)(*(_QWORD *)(a3 + 8) + 1474LL);
      return HUBPDO_InvokePortPLDRRecovery(a1, a2);
    }
    else if ( !*(_BYTE *)(v7 + 1476) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v14) = *(unsigned __int16 *)(a3 + 1998);
        LODWORD(v13) = *(unsigned __int16 *)(a3 + 1996);
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(v7 + 1432),
          2u,
          5u,
          0x4Eu,
          (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
          v13,
          v14);
      }
      v8 = dword_1C00691F8;
      v9 = qword_1C0069210;
      if ( (unsigned int)dword_1C00691F8 > 2
        && (qword_1C0069208 & 0x400000000001LL) != 0
        && (qword_1C0069210 & 0x400000000001LL) == qword_1C0069210 )
      {
        v24 = 2LL;
        v10 = *(_QWORD *)(a3 + 8);
        v21 = v19;
        v19[0] = 16779264LL;
        v23 = (int *)v16;
        v22 = 8LL;
        v25 = v31;
        v16[0] = 6;
        v26 = 12LL;
        v18 = *(unsigned __int16 *)(v10 + 1474);
        v27 = &v18;
        v28 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C00691F8,
          (unsigned __int8 *)dword_1C0065C0F,
          (const GUID *)(v10 + 1480),
          0LL,
          6u,
          &v20);
        v9 = qword_1C0069210;
        v8 = dword_1C00691F8;
      }
      if ( v8 > 4 && (qword_1C0069208 & 0x400000000001LL) != 0 && (v9 & 0x400000000001LL) == v9 )
      {
        v11 = *(_QWORD *)(a3 + 8);
        v21 = v19;
        v16[0] = *(_WORD *)(a3 + 1996);
        v19[0] = 16779264LL;
        v23 = (int *)v16;
        v17[0] = *(_WORD *)(a3 + 1998);
        v25 = v17;
        v27 = &v18;
        v29 = v31;
        v22 = 8LL;
        v24 = 2LL;
        v26 = 2LL;
        LOWORD(v18) = 6;
        v28 = 2LL;
        v30 = 12LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C00691F8,
          (unsigned __int8 *)dword_1C00654A9,
          (const GUID *)(v11 + 1480),
          0LL,
          7u,
          &v20);
      }
      *(_OWORD *)(*(_QWORD *)(a3 + 8) + 1480LL) = 0LL;
      result = *(_QWORD *)(a3 + 8);
      *(_BYTE *)(result + 1476) = 1;
    }
  }
  return result;
}
