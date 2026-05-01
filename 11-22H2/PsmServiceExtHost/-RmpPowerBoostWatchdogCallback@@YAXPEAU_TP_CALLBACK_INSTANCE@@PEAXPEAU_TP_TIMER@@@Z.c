/*
 * XREFs of ?RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180085870
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800129A8 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800129DC (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpSystemApplyInswapPowerBoost@@YAJK@Z @ 0x18003DA10 (-RmpSystemApplyInswapPowerBoost@@YAJK@Z.c)
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18003DB38 (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18007DBB4 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall RmpPowerBoostWatchdogCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  int v4; // edi
  int v5; // esi
  int v6; // edx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE v11[8]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v13[144]; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+D0h] [rbp-38h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  LOBYTE(v4) = 0;
  v5 = 0;
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C47C9,
      0LL,
      0LL,
      2u,
      &v14);
  RmpPowerBoostAcquireLockExclusive((struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
  v6 = *((_DWORD *)a2 + 42);
  if ( (a2[3528] & 1) == 0 && (v6 & 2) != 0 )
  {
    RmpPowerBoostArmWatchdog((struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
    v7 = *((_DWORD *)a2 + 42);
    if ( (v7 & 1) == 0 )
    {
      *((_DWORD *)a2 + 42) = v7 & 0xFFFFFFFD;
      RmpSystemApplyInswapPowerBoost(0);
    }
    v4 = *((_DWORD *)a2 + 42) & 1;
    RtlQueryUnbiasedInterruptTime(&v12);
    v5 = v12 / 0x2710 - *((_DWORD *)a2 + 26);
  }
  else
  {
    *((_DWORD *)a2 + 42) = v6 & 0xFFFFFFFE;
  }
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    LODWORD(v12) = v5;
    v11[0] = v4 ^ 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v8,
      byte_1800C46EE,
      v9,
      v10,
      (__int64)v11,
      (__int64)&v12);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)(a2 + 104));
  CempLockTrackerClearForThread(HampLockTrackerId);
}
