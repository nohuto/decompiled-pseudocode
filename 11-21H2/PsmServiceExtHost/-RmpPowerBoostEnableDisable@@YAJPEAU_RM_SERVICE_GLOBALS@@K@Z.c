/*
 * XREFs of ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18000491C
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800076D0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800019C4 (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180004B14 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180004B48 (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpSystemApplyInswapPowerBoost@@YAJK@Z @ 0x180004BD0 (-RmpSystemApplyInswapPowerBoost@@YAJK@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U3@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@5544@Z @ 0x1800867B8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U3@U3@U2@U2@.c)
 */

__int64 __fastcall RmpPowerBoostEnableDisable(struct _RM_SERVICE_GLOBALS *a1, unsigned int a2)
{
  char *v2; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  struct _TP_TIMER *v8; // rcx
  int v9; // edi
  unsigned __int64 v11; // rdx
  int v12; // r8d
  int v13; // r9d
  unsigned __int64 v14; // rdx
  int v15; // ecx
  char v16; // al
  __int64 v17; // [rsp+60h] [rbp+17h] BYREF
  __int64 v18; // [rsp+68h] [rbp+1Fh] BYREF
  _QWORD v19[6]; // [rsp+70h] [rbp+27h] BYREF
  unsigned __int64 v20; // [rsp+B0h] [rbp+67h] BYREF
  bool v21; // [rsp+B8h] [rbp+6Fh] BYREF
  bool v22; // [rsp+C0h] [rbp+77h] BYREF
  int v23; // [rsp+C8h] [rbp+7Fh] BYREF

  v2 = (char *)a1 + 104;
  RmpPowerBoostAcquireLockExclusive((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 104));
  if ( a2 )
  {
    if ( (*((_BYTE *)a1 + 3224) & 1) != 0 )
    {
      v9 = -1073741585;
      goto LABEL_6;
    }
    if ( (v2[64] & 1) != 0 )
    {
      RtlQueryUnbiasedInterruptTime(&v20);
      v14 = v20 / 0x2710;
      ++*((_QWORD *)v2 + 2);
      *((_QWORD *)v2 + 1) = v14;
    }
    else
    {
      RtlQueryUnbiasedInterruptTime(&v20);
      v11 = v20 / 0x2710;
      *(_QWORD *)v2 = v20 / 0x2710;
      *((_QWORD *)v2 + 1) = v11;
      v9 = RmpSystemApplyInswapPowerBoost(a2);
      if ( v9 < 0 )
        goto LABEL_6;
      *((_DWORD *)v2 + 16) |= 2u;
      *((_QWORD *)v2 + 2) = 1LL;
      RmpPowerBoostArmWatchdog((struct _RM_POWERBOOST_CONTEXT *)v2);
    }
  }
  else
  {
    v7 = *((_QWORD *)v2 + 2);
    if ( v7 == 1 && (v2[64] & 2) != 0 )
    {
      RmpSystemApplyInswapPowerBoost(0);
      v8 = (struct _TP_TIMER *)*((_QWORD *)v2 + 3);
      *((_DWORD *)v2 + 16) &= ~2u;
      *((_QWORD *)v2 + 2) = 0LL;
      SetThreadpoolTimer(v8, 0LL, 0, 0);
      *((_DWORD *)v2 + 16) &= ~1u;
    }
    else
    {
      *((_QWORD *)v2 + 2) = v7 - 1;
    }
  }
  v9 = 0;
LABEL_6:
  if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 64LL, v5, v6) )
  {
    v15 = *((_DWORD *)v2 + 16);
    v16 = v15;
    v23 = v9;
    LOBYTE(v15) = v15 & 1;
    LOBYTE(v20) = v15;
    v21 = (v16 & 2) != 0;
    v17 = *((_QWORD *)v2 + 2);
    v22 = a2 != 0;
    v18 = *((_QWORD *)v2 + 1);
    v19[0] = *(_QWORD *)v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v15,
      (unsigned int)&unk_1800C32FB,
      v12,
      v13,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v20,
      (__int64)&v21);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)v2);
  return (unsigned int)v9;
}
