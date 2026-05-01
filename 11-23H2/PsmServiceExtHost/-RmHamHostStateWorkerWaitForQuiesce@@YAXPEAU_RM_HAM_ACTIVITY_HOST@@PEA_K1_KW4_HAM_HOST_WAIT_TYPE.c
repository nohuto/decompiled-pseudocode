/*
 * XREFs of ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x1800535D0
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180019AE0 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011DF4 (-RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012EA0 (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@544@Z @ 0x1800133B4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U2@U2@@-$_tlgWrit.c)
 *     ?RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z @ 0x180013A8C (-RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x180013B3C (CempLockSleepConditionVariableExclusive.c)
 *     ?HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013E94 (-HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013F78 (-HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001409C (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@K@Z @ 0x180014144 (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REAS.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800184AC (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001852C (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001C8C0 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x180021270 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002DC78 (-RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002DF80 (-RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180034F80 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800409F0 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??0?$_tlgWrapSz@G@@QEAA@PEBG@Z @ 0x180054F06 (--0-$_tlgWrapSz@G@@QEAA@PEBG@Z.c)
 *     ??0?$_tlgWrapperByVal@$07@@QEAA@PEBX@Z @ 0x180054F14 (--0-$_tlgWrapperByVal@$07@@QEAA@PEBX@Z.c)
 *     ??0?$_tlgWrapperByVal@$00@@QEAA@PEBX@Z @ 0x180055036 (--0-$_tlgWrapperByVal@$00@@QEAA@PEBX@Z.c)
 *     ?RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005562E (-RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTryWaitForGenerationRevision@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K1@Z @ 0x180070414 (-HampHostTryWaitForGenerationRevision@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K1@Z.c)
 */

__int64 __fastcall RmHamHostStateWorkerWaitForQuiesce(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        int a5)
{
  unsigned int v5; // edx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edx
  const unsigned __int16 *PsmKey; // rax
  char v11; // [rsp+50h] [rbp-A8h] BYREF
  char v12; // [rsp+51h] [rbp-A7h] BYREF
  char v13; // [rsp+52h] [rbp-A6h] BYREF
  char v14; // [rsp+53h] [rbp-A5h] BYREF
  int v15; // [rsp+54h] [rbp-A4h]
  struct _RM_ACTIVITY_HOST *v16; // [rsp+58h] [rbp-A0h]
  int v17; // [rsp+60h] [rbp-98h]
  unsigned int v18; // [rsp+64h] [rbp-94h]
  int v19; // [rsp+68h] [rbp-90h]
  _BYTE v20[4]; // [rsp+6Ch] [rbp-8Ch] BYREF
  unsigned int IsSuspendWaiter; // [rsp+70h] [rbp-88h]
  int v22; // [rsp+74h] [rbp-84h]
  int v23[2]; // [rsp+78h] [rbp-80h]
  unsigned __int64 v24; // [rsp+80h] [rbp-78h]
  __int64 v25; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v26[8]; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v27[8]; // [rsp+98h] [rbp-60h] BYREF
  unsigned __int64 Id; // [rsp+A0h] [rbp-58h] BYREF
  _BYTE v29[8]; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-48h]
  __int64 v31; // [rsp+B8h] [rbp-40h]
  __int64 v32; // [rsp+C0h] [rbp-38h]
  __int64 v33; // [rsp+C8h] [rbp-30h]
  __int64 v34; // [rsp+D0h] [rbp-28h]
  __int64 v35; // [rsp+D8h] [rbp-20h]
  _BYTE v36[24]; // [rsp+E0h] [rbp-18h] BYREF

  v16 = RmHostFromHamHost((struct _RM_HAM_ACTIVITY_HOST *)a1);
  memset(v20, 0, sizeof(v20));
  RmAcquireEnforcementLocks(v16);
  while ( 1 )
  {
    HampHostUpdateQuiesceState((struct _RM_HAM_ACTIVITY_HOST *)a1, a2, a3);
    if ( (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 664)) >> 5 == 5LL )
      break;
    if ( (unsigned int)HampHostIsQuiesceInterrupted((struct _RM_HAM_ACTIVITY_HOST *)a1) )
    {
      RmReleaseEnforcementLocks(v16, v5);
      RmpSystemResourceTimerReset((struct _RM_HAM_ACTIVITY_HOST *)a1, *(void **)(a1 + 808), 0);
      RmAcquireEnforcementLocks(v16);
      v19 = 1;
      goto LABEL_20;
    }
    if ( (unsigned int)HampHostCheckUpdateEnforcementSettings(
                         (struct _RM_HAM_ACTIVITY_HOST *)a1,
                         (struct _HAM_ENFORCEMENT_SETTINGS_CONTEXT *)v20) )
    {
      HampHostCheckStartPendingActivities((struct _RM_HAM_ACTIVITY_HOST *)a1);
    }
    else
    {
      RmpReleaseGlobalLock();
      v15 = a5;
      if ( a5 )
      {
        if ( v15 == 1 )
          goto LABEL_12;
        if ( v15 != 2 && v15 != 3 )
        {
          if ( v15 != 4 )
            goto LABEL_15;
LABEL_12:
          CempLockSleepConditionVariableExclusive(a1, a1 + 696, 0LL);
          goto LABEL_15;
        }
        v24 = *a2 - *a3;
        HampHostTryWaitForGenerationRevision((struct _RM_HAM_ACTIVITY_HOST *)a1, a4, v24);
      }
      else
      {
        *(_QWORD *)(a1 + 664) |= 0x400000000000uLL;
      }
LABEL_15:
      HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)a1);
      RtlWakeAllConditionVariable(a1 + 696);
      RmAcquireEnforcementLocks(v16);
    }
  }
  *(_DWORD *)(a1 + 684) = 0;
  IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  *((_DWORD *)v16 + 317) |= 0x80u;
  *((_DWORD *)v16 + 318) &= ~0x80u;
  HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)a1, IsSuspendWaiter, v6, v7);
  RmReleaseEnforcementLocks(v16, v8);
  RmpSystemSetApplicationQuiesceCompleteEvents(v16);
  RmpSystemResourceTimerReset((struct _RM_HAM_ACTIVITY_HOST *)a1, *(void **)(a1 + 808), 0);
  v19 = 0;
  RmAcquireEnforcementLocks(v16);
  if ( HampHostIsTerminateQueued((struct _RM_HAM_ACTIVITY_HOST *)a1) )
  {
    v18 = 5;
    v17 = 10;
  }
  else
  {
    v18 = 3;
    v17 = 8;
  }
  v22 = 1;
  HampHostRevokeQuiesceExtension(a1, v18, 1 << v17);
LABEL_20:
  *(_QWORD *)v23 = HamTlgProvider;
  if ( *HamTlgProvider > 4u && tlgKeywordOn(*(__int64 *)v23, 0x400000000008LL) )
  {
    v25 = 0x1000000LL;
    _tlgWrapperByVal<8>::_tlgWrapperByVal<8>(v26, &v25);
    v30 = (__int64)v26;
    _tlgWrapperByVal<8>::_tlgWrapperByVal<8>(v27, a3);
    v31 = (__int64)v27;
    v11 = v19;
    _tlgWrapperByVal<1>::_tlgWrapperByVal<1>(&v12, &v11);
    v32 = (__int64)&v12;
    v13 = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 664)) >> 5;
    _tlgWrapperByVal<1>::_tlgWrapperByVal<1>(&v14, &v13);
    v33 = (__int64)&v14;
    Id = RmHamHostGetId((struct _RM_HAM_ACTIVITY_HOST *)a1);
    _tlgWrapperByVal<8>::_tlgWrapperByVal<8>(v29, &Id);
    v34 = (__int64)v29;
    PsmKey = RmHamHostGetPsmKey((struct _RM_HAM_ACTIVITY_HOST *)a1);
    v35 = _tlgWrapSz<unsigned short>::_tlgWrapSz<unsigned short>(v36, PsmKey);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v23[0],
      (int)&unk_1800C31B6,
      0,
      0,
      (const unsigned __int16 **)v35,
      v34,
      v33,
      v32,
      v31,
      v30);
  }
  return 0LL;
}
