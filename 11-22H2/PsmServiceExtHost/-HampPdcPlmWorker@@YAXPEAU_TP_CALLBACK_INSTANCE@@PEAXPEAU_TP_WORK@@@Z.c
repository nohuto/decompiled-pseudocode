/*
 * XREFs of ?HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007ECD0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017AE0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017B68 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001C548 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001C580 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18002ACD4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x18007EA88 (-HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 *     ?HampPdcSetCurrentThreadWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007EF18 (-HampPdcSetCurrentThreadWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x18008192C (-HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     ?HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z @ 0x18008EA4C (-HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z.c)
 */

void __fastcall HampPdcPlmWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rdx
  struct _HOST_ACTIVITY_MANAGER *v8; // rcx
  char v9; // r8
  unsigned int v10; // edx
  unsigned int v11; // edx
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _HOST_ACTIVITY_MANAGER *v16; // rcx
  __int64 v17; // rcx
  _QWORD v18[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  char v21[144]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+E0h] [rbp-20h] BYREF

  v4 = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_1800C25A6, 0LL, 0LL, 2u, &v22);
  HampPdcSetCurrentThreadWorker((struct _HAM_PDC_CONTEXT *)a2);
  v6 = 0;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_QWORD *)a2 + 7) = 0LL;
  *((_DWORD *)a2 + 16) |= 1u;
  while ( 1 )
  {
    HampManagerAcquireLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2);
    if ( !*((_DWORD *)a2 + 27) )
      break;
    RtlQueryUnbiasedInterruptTime(v18);
    v8 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
    v19 = *((_QWORD *)a2 + 15);
    v4 = v18[0] / 0x2710uLL - *((_DWORD *)a2 + 27);
    HampManagerReleaseLockShared(v8, (v18[0] * (unsigned __int128)0x346DC5D63886594BuLL) >> 64);
    if ( v6 || v4 <= 0x3A980 )
    {
      v9 = 0;
    }
    else
    {
      v6 = 1;
      v9 = 1;
    }
    if ( !(unsigned int)HampPdcPlmUpdateState((struct _HAM_PDC_CONTEXT *)a2, v4, v9) )
      goto LABEL_17;
    v10 = *((_DWORD *)a2 + 25);
    if ( v4 >= v10 && (v10 = *((_DWORD *)a2 + 26), v4 >= v10) )
      v11 = 0;
    else
      v11 = v10 - v4;
    v18[1] = -10000LL * v11;
    RtlWaitOnAddress(a2 + 120, &v19, 8LL);
  }
  HampManagerReleaseLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v7);
LABEL_17:
  HampSlsEndScenarioInstance((struct _HAM_SLEEP_STUDY_CONTEXT *)(a2 + 32));
  HampSystemNotificationClientAcknowledge(*((void **)a2 + 1), v12);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 0x400000000008LL) )
  {
    v20 = 0x1000000LL;
    LODWORD(v18[0]) = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v13,
      byte_1800C23C7,
      v14,
      v15,
      (__int64)v18,
      (__int64)&v20);
  }
  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a2);
  v16 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  *((_DWORD *)a2 + 24) = 0;
  HampManagerReleaseLockExclusive(v16);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
    tlgWriteTransfer_EventWriteTransfer(v17, (unsigned __int8 *)dword_1800C245F, 0LL, 0LL, 2u, &v22);
}
