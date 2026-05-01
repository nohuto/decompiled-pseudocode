/*
 * XREFs of ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x1800126CC
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180024B30 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800129A8 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800129DC (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180012A24 (-RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z @ 0x180012A80 (-RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18002ACD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall RmpPowerBoostStartTimedBoost(struct _RM_SERVICE_GLOBALS *a1, unsigned int a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rbx
  __int64 v3; // rsi
  char *v4; // rdi
  int v5; // ebx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  bool v8; // zf
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = (unsigned __int64)a1;
  v2 = RmSvcGlobals;
  v3 = a2;
  v4 = (char *)RmSvcGlobals + 104;
  RmpPowerBoostAcquireLockExclusive((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 104));
  if ( (*((_BYTE *)v2 + 3528) & 1) != 0 )
  {
    v5 = -1073741585;
    goto LABEL_10;
  }
  if ( (v4[64] & 4) == 0 )
  {
    v5 = RmpSystemApplyAppLaunchPowerBoost(1u);
    if ( v5 < 0 )
      goto LABEL_10;
    *((_DWORD *)v4 + 16) |= 4u;
  }
  RtlQueryUnbiasedInterruptTime(&v13);
  v6 = *((_QWORD *)v4 + 6);
  v7 = v13 / 0x2710;
  if ( v6 <= v13 / 0x2710 + v3 )
    v6 = v13 / 0x2710 + v3;
  v8 = (v4[64] & 8) == 0;
  *((_QWORD *)v4 + 6) = v6;
  if ( v8 )
    RmpPowerBoostArmTimedBoostTimer(v7, (struct _RM_POWERBOOST_CONTEXT *)v4);
  v5 = 0;
LABEL_10:
  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
  {
    v14 = *((_QWORD *)v4 + 6);
    LODWORD(v13) = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v9,
      (unsigned int)&unk_1800C468E,
      v10,
      v11,
      (__int64)&v13,
      (__int64)&v14);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)v4);
  return (unsigned int)v5;
}
