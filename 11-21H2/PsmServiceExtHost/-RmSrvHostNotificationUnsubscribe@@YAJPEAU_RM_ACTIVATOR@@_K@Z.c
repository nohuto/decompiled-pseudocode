/*
 * XREFs of ?RmSrvHostNotificationUnsubscribe@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x18003BF6C
 * Callers:
 *     RmCoreRpcSrvUnregisterActivityHostCallbacks @ 0x18003BF60 (RmCoreRpcSrvUnregisterActivityHostCallbacks.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x18003C0B0 (-RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18003C1EC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18003C22C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall RmSrvHostNotificationUnsubscribe(struct _RM_ACTIVATOR *a1, unsigned __int64 a2)
{
  int v4; // ebx
  int v5; // r8d
  int v6; // r9d
  int v8; // [rsp+40h] [rbp-F8h] BYREF
  int v9; // [rsp+44h] [rbp-F4h] BYREF
  unsigned int v10; // [rsp+48h] [rbp-F0h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v12[144]; // [rsp+60h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+F0h] [rbp-48h] BYREF

  RmpUtilCheckStartLockTracking(&v10, (struct _CEM_LOCK_TRACKER *)v12);
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC1E0,
      (unsigned __int8 *)dword_1800C2829,
      0LL,
      0LL,
      2u,
      &v13);
  RmpAcquireGlobalLock();
  v4 = RmpActivatorUnsubscribeFromNotifications(a1, a2);
  if ( v4 >= 0 )
    v4 = 0;
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 9LL) )
  {
    v8 = *((_DWORD *)a1 + 14);
    v11 = a2;
    v9 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800DC1E0,
      (unsigned int)&unk_1800C26A2,
      v5,
      v6,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v11);
  }
  if ( v10 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v4;
}
