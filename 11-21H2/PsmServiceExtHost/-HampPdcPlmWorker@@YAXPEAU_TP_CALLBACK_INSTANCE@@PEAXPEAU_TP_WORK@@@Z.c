/*
 * XREFs of ?HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007FA50
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005DD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180007AA0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180007B28 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072B08 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072E24 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x18007F848 (-HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 *     ?HampPdcSetCurrentThreadWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007FC98 (-HampPdcSetCurrentThreadWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180082914 (-HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     ?HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z @ 0x180092FB0 (-HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z.c)
 */

void __fastcall HampPdcPlmWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // esi
  __int64 v8; // rdx
  struct _HOST_ACTIVITY_MANAGER *v9; // rcx
  char v10; // r8
  unsigned int v11; // edx
  unsigned int v12; // edx
  int v13; // edx
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _HOST_ACTIVITY_MANAGER *v17; // rcx
  __int64 v18; // rcx
  _QWORD v19[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  char v22[144]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+E0h] [rbp-20h] BYREF

  v4 = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v22);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_1800C1AC4, 0LL, 0LL, 2u, &v23);
  HampPdcSetCurrentThreadWorker((struct _HAM_PDC_CONTEXT *)a2);
  v7 = 0;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_QWORD *)a2 + 7) = 0LL;
  *((_DWORD *)a2 + 16) |= 1u;
  while ( 1 )
  {
    HampManagerAcquireLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v6);
    if ( !*((_DWORD *)a2 + 27) )
      break;
    RtlQueryUnbiasedInterruptTime(v19);
    v9 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
    v20 = *((_QWORD *)a2 + 15);
    v4 = v19[0] / 0x2710uLL - *((_DWORD *)a2 + 27);
    HampManagerReleaseLockShared(v9, (v19[0] * (unsigned __int128)0x346DC5D63886594BuLL) >> 64);
    if ( v7 || v4 <= 0x3A980 )
    {
      v10 = 0;
    }
    else
    {
      v7 = 1;
      v10 = 1;
    }
    if ( !(unsigned int)HampPdcPlmUpdateState((struct _HAM_PDC_CONTEXT *)a2, v4, v10) )
      goto LABEL_17;
    v11 = *((_DWORD *)a2 + 25);
    if ( v4 >= v11 && (v11 = *((_DWORD *)a2 + 26), v4 >= v11) )
      v12 = 0;
    else
      v12 = v11 - v4;
    v19[1] = -10000LL * v12;
    RtlWaitOnAddress(a2 + 120, &v20, 8LL);
  }
  HampManagerReleaseLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v8);
LABEL_17:
  HampSlsEndScenarioInstance((struct _HAM_SLEEP_STUDY_CONTEXT *)(a2 + 32));
  HampSystemNotificationClientAcknowledge(*((void **)a2 + 1), v13);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 0x400000000008LL) )
  {
    v21 = 0x1000000LL;
    LODWORD(v19[0]) = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v14,
      (int)&unk_1800C18E5,
      v15,
      v16,
      (__int64)v19,
      (__int64)&v21);
  }
  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a2);
  v17 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  *((_DWORD *)a2 + 24) = 0;
  HampManagerReleaseLockExclusive(v17);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
    tlgWriteTransfer_EventWriteTransfer(v18, (unsigned __int8 *)dword_1800C197D, 0LL, 0LL, 2u, &v23);
}
