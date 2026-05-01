/*
 * XREFs of ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180004A34
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180017F20 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z @ 0x1800021EC (-RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180004B14 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180004B48 (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180004C2C (-RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005DD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 */

__int64 __fastcall RmpPowerBoostStartTimedBoost(struct _RM_SERVICE_GLOBALS *a1, unsigned int a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rbx
  __int64 v3; // rsi
  char *v4; // rdi
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  unsigned __int64 v8; // rax
  bool v9; // zf
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v14 = (unsigned __int64)a1;
  v2 = RmSvcGlobals;
  v3 = a2;
  v4 = (char *)RmSvcGlobals + 104;
  RmpPowerBoostAcquireLockExclusive((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 104));
  if ( (*((_BYTE *)v2 + 3224) & 1) != 0 )
  {
    v7 = -1073741585;
    goto LABEL_10;
  }
  if ( (v4[64] & 4) == 0 )
  {
    v7 = RmpSystemApplyAppLaunchPowerBoost(1);
    if ( v7 < 0 )
      goto LABEL_10;
    *((_DWORD *)v4 + 16) |= 4u;
  }
  RtlQueryUnbiasedInterruptTime(&v14);
  v8 = *((_QWORD *)v4 + 6);
  v5 = v14 / 0x2710;
  if ( v8 <= v14 / 0x2710 + v3 )
    v8 = v14 / 0x2710 + v3;
  v9 = (v4[64] & 8) == 0;
  *((_QWORD *)v4 + 6) = v8;
  if ( v9 )
    RmpPowerBoostArmTimedBoostTimer(v5, (struct _RM_POWERBOOST_CONTEXT *)v4);
  v7 = 0;
LABEL_10:
  if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 64LL, v5, v6) )
  {
    v15 = *((_QWORD *)v4 + 6);
    LODWORD(v14) = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v11,
      (unsigned int)&unk_1800C3247,
      v12,
      v13,
      (__int64)&v14,
      (__int64)&v15);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)v4);
  return (unsigned int)v7;
}
