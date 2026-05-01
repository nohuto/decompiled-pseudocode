/*
 * XREFs of ?ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z @ 0x18004B224
 * Callers:
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007E430 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 * Callees:
 *     ?ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x1800031F4 (-ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18000324C (-ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180003738 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180027D5C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

void __fastcall ArManagerUpdateCsState(union _HAM_PDC_STATE_UPDATE *a1)
{
  _DWORD *v2; // rbx
  unsigned int v3; // r8d
  __int64 v4; // rcx
  int v5; // ecx
  _BYTE v6[144]; // [rsp+20h] [rbp-A8h] BYREF

  ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v6);
  v2 = ArGlobals;
  if ( ArGlobals )
  {
    ArManagerAcquireLockExclusive((struct _ACTIVITY_RESTARTER *)ArGlobals);
    v3 = *(_BYTE *)a1 & 3 | v2[18] & 0xFFFFFFFC | 4;
    v2[18] = v3;
    if ( (v3 & 0x18) == 0 )
    {
      v4 = *((_QWORD *)v2 + 8);
      if ( v4 )
      {
        v2[18] = v3 | 8;
        TpPostWork(v4);
      }
    }
    ArManagerReleaseLockExclusive((struct _ACTIVITY_RESTARTER *)v2);
  }
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v5,
      (int)&unk_1800BDE55);
  CempLockTrackerClearForThread(ArLockTrackerId);
}
