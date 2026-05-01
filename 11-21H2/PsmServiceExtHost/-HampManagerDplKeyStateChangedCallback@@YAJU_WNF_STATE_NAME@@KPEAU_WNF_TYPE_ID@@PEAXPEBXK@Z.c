/*
 * XREFs of ?HampManagerDplKeyStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180072BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180006418 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DATA@@@Z @ 0x180072D80 (-HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DAT.c)
 */

__int64 __fastcall HampManagerDplKeyStateChangedCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        struct _HOST_ACTIVITY_MANAGER *a4,
        struct _EDP_DPL_WNF_KEYS_STATE_DATA *a5)
{
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  int v11; // [rsp+40h] [rbp-D8h] BYREF
  int v12; // [rsp+44h] [rbp-D4h] BYREF
  int v13; // [rsp+48h] [rbp-D0h] BYREF
  _BYTE v14[144]; // [rsp+50h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+E0h] [rbp-38h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BFDEE,
      0LL,
      0LL,
      2u,
      &v15);
  v6 = HampManagerOnDplKeyStateChanged(a4, a5);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v9 = *((_DWORD *)a5 + 2);
    v12 = *((_DWORD *)a5 + 3);
    v11 = v9;
    v13 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1800DC218,
      (int)&unk_1800BFCBC,
      v7,
      v8,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11);
  }
  return 0LL;
}
