/*
 * XREFs of ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18003D7F8
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800188E0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800129A8 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800129DC (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpSystemApplyInswapPowerBoost@@YAJK@Z @ 0x18003D990 (-RmpSystemApplyInswapPowerBoost@@YAJK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U3@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@5544@Z @ 0x18003D9EC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U3@U3@U2@U2@.c)
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18003DAB8 (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 */

__int64 __fastcall RmpPowerBoostEnableDisable(struct _RM_SERVICE_GLOBALS *a1, unsigned int a2)
{
  char *v2; // rbx
  __int64 v5; // rax
  struct _TP_TIMER *v6; // rcx
  int v7; // edi
  int v8; // r8d
  int v9; // r9d
  int v10; // ecx
  char v11; // al
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 v15; // [rsp+60h] [rbp+17h] BYREF
  __int64 v16; // [rsp+68h] [rbp+1Fh] BYREF
  _QWORD v17[6]; // [rsp+70h] [rbp+27h] BYREF
  unsigned __int64 v18; // [rsp+B0h] [rbp+67h] BYREF
  bool v19; // [rsp+B8h] [rbp+6Fh] BYREF
  bool v20; // [rsp+C0h] [rbp+77h] BYREF
  int v21; // [rsp+C8h] [rbp+7Fh] BYREF

  v2 = (char *)a1 + 104;
  RmpPowerBoostAcquireLockExclusive((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 104));
  if ( a2 )
  {
    if ( (*((_BYTE *)a1 + 3528) & 1) != 0 )
    {
      v7 = -1073741585;
      goto LABEL_6;
    }
    if ( (v2[64] & 1) != 0 )
    {
      RtlQueryUnbiasedInterruptTime(&v18);
      v14 = v18 / 0x2710;
      ++*((_QWORD *)v2 + 2);
      *((_QWORD *)v2 + 1) = v14;
    }
    else
    {
      RtlQueryUnbiasedInterruptTime(&v18);
      v13 = v18 / 0x2710;
      *(_QWORD *)v2 = v18 / 0x2710;
      *((_QWORD *)v2 + 1) = v13;
      v7 = RmpSystemApplyInswapPowerBoost(a2);
      if ( v7 < 0 )
        goto LABEL_6;
      *((_DWORD *)v2 + 16) |= 2u;
      *((_QWORD *)v2 + 2) = 1LL;
      RmpPowerBoostArmWatchdog((struct _RM_POWERBOOST_CONTEXT *)v2);
    }
  }
  else
  {
    v5 = *((_QWORD *)v2 + 2);
    if ( v5 == 1 && (v2[64] & 2) != 0 )
    {
      RmpSystemApplyInswapPowerBoost(0);
      v6 = (struct _TP_TIMER *)*((_QWORD *)v2 + 3);
      *((_DWORD *)v2 + 16) &= ~2u;
      *((_QWORD *)v2 + 2) = 0LL;
      SetThreadpoolTimer(v6, 0LL, 0, 0);
      *((_DWORD *)v2 + 16) &= ~1u;
    }
    else
    {
      *((_QWORD *)v2 + 2) = v5 - 1;
    }
  }
  v7 = 0;
LABEL_6:
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
  {
    v10 = *((_DWORD *)v2 + 16);
    v11 = v10;
    v21 = v7;
    LOBYTE(v10) = v10 & 1;
    LOBYTE(v18) = v10;
    v19 = (v11 & 2) != 0;
    v15 = *((_QWORD *)v2 + 2);
    v20 = a2 != 0;
    v16 = *((_QWORD *)v2 + 1);
    v17[0] = *(_QWORD *)v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v10,
      (unsigned int)&unk_1800C4742,
      v8,
      v9,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v18,
      (__int64)&v19);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)v2);
  return (unsigned int)v7;
}
