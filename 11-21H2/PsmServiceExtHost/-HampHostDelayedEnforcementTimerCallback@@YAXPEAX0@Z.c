/*
 * XREFs of ?HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z @ 0x180079EF0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180078F18 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 */

void __fastcall HampHostDelayedEnforcementTimerCallback(void *a1, char *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v7; // [rsp+48h] [rbp-E0h] BYREF
  const unsigned __int16 *v8; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v9[144]; // [rsp+60h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+F0h] [rbp-38h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v9);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800C0EBA,
      0LL,
      0LL,
      2u,
      &v10);
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2, 0);
  *((_QWORD *)a2 + 83) |= 0x40000000000000uLL;
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)a2, 0);
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v7 = *((_QWORD *)a2 - 4);
    v6 = *((_DWORD *)a2 + 140);
    v8 = (const unsigned __int16 *)(a2 + 24);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v3,
      byte_1800C0EDF,
      v4,
      v5,
      &v8,
      (__int64)&v6,
      (__int64)&v7);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
