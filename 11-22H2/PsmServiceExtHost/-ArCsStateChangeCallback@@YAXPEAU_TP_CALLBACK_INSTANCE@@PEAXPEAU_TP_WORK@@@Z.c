/*
 * XREFs of ?ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18004AFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x1800031F4 (-ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18000324C (-ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180003738 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180027D5C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@W4_AR_STATE_CHANGE_EVENT@@@Z @ 0x18004B230 (-ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@W4_AR_STATE_CHANGE_EVENT@@@Z.c)
 */

void __fastcall ArCsStateChangeCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _ACTIVITY_RESTARTER *a2,
        struct _TP_WORK *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v6; // ebx
  _BYTE v7[144]; // [rsp+20h] [rbp-A8h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)&dword_1800DB218,
      (int)&unk_1800BDF8A);
  ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v7);
  while ( 1 )
  {
    ArManagerAcquireLockExclusive(a2);
    v6 = *((_DWORD *)a2 + 18);
    if ( (v6 & 4) == 0 )
      break;
    v4 = v6 & 0xFFFFFFFB;
    *((_DWORD *)a2 + 18) = v4;
    ArManagerReleaseLockExclusive(a2);
    if ( (v4 & 2) == 0 )
    {
      LOBYTE(v5) = 1;
      ArManagerRestartActivitiesForPhase(a2, v5);
    }
    if ( (v4 & 1) == 0 )
      ArManagerRestartActivitiesForPhase(a2, 0LL);
  }
  *((_DWORD *)a2 + 18) = v6 & 0xFFFFFFF7;
  ArManagerReleaseLockExclusive(a2);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)&dword_1800DB218,
      (int)&unk_1800BDE75);
  CempLockTrackerClearForThread(ArLockTrackerId);
}
