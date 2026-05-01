/*
 * XREFs of ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x1800503AC
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D214 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005380 (-RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180014A10 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800294D4 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002D998 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002DACC (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800374BC (-HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003A9E8 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003CFE4 (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@544@Z @ 0x18003DE2C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U2@U2@@-$_tlgWrit.c)
 *     CempLockSleepConditionVariableExclusive @ 0x18003E5B0 (CempLockSleepConditionVariableExclusive.c)
 *     ?RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z @ 0x18003E610 (-RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z.c)
 *     ?HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003E9A8 (-HampHostIsQuiesceInterrupted@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003E9C0 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@K@Z @ 0x18003EA24 (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REAS.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800430C8 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??0?$_tlgWrapSz@G@@QEAA@PEBG@Z @ 0x180051522 (--0-$_tlgWrapSz@G@@QEAA@PEBG@Z.c)
 *     ??0?$_tlgWrapperByVal@$07@@QEAA@PEBX@Z @ 0x180051530 (--0-$_tlgWrapperByVal@$07@@QEAA@PEBX@Z.c)
 *     ?RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800517C8 (-RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800517D4 (-RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??0?$_tlgWrapperByVal@$00@@QEAA@PEBX@Z @ 0x18006D1C4 (--0-$_tlgWrapperByVal@$00@@QEAA@PEBX@Z.c)
 *     ?HampHostTryWaitForGenerationRevision@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K1@Z @ 0x18007AD84 (-HampHostTryWaitForGenerationRevision@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800867AC (-RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
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
  const unsigned __int16 *PsmKey; // rax
  char v10; // [rsp+50h] [rbp-A8h] BYREF
  char v11; // [rsp+51h] [rbp-A7h] BYREF
  char v12; // [rsp+52h] [rbp-A6h] BYREF
  _BYTE v13[5]; // [rsp+53h] [rbp-A5h] BYREF
  struct _RM_ACTIVITY_HOST *v14; // [rsp+58h] [rbp-A0h]
  int v15; // [rsp+60h] [rbp-98h]
  int v16; // [rsp+64h] [rbp-94h]
  unsigned int v17; // [rsp+68h] [rbp-90h]
  int v18; // [rsp+6Ch] [rbp-8Ch]
  unsigned int IsSuspendWaiter; // [rsp+70h] [rbp-88h]
  int v20; // [rsp+74h] [rbp-84h]
  int v21[2]; // [rsp+78h] [rbp-80h]
  unsigned __int64 v22; // [rsp+80h] [rbp-78h]
  __int64 v23; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v24[8]; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v25[8]; // [rsp+98h] [rbp-60h] BYREF
  unsigned __int64 Id; // [rsp+A0h] [rbp-58h] BYREF
  _BYTE v27[8]; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-48h]
  __int64 v29; // [rsp+B8h] [rbp-40h]
  __int64 v30; // [rsp+C0h] [rbp-38h]
  __int64 v31; // [rsp+C8h] [rbp-30h]
  __int64 v32; // [rsp+D0h] [rbp-28h]
  __int64 v33; // [rsp+D8h] [rbp-20h]
  _BYTE v34[24]; // [rsp+E0h] [rbp-18h] BYREF

  v14 = RmHostFromHamHost((struct _RM_HAM_ACTIVITY_HOST *)a1);
  RmAcquireEnforcementLocks(v14);
  while ( 1 )
  {
    HampHostUpdateQuiesceState((struct _RM_HAM_ACTIVITY_HOST *)a1, a2, a3);
    if ( (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 664)) >> 5 == 5LL )
      break;
    if ( (unsigned int)HampHostIsQuiesceInterrupted((struct _RM_HAM_ACTIVITY_HOST *)a1) )
    {
      RmReleaseEnforcementLocks(v14);
      RmpSystemResourceTimerReset((struct _RM_HAM_ACTIVITY_HOST *)a1, *(void **)(a1 + 808), 0);
      RmAcquireEnforcementLocks(v14);
      v18 = 1;
      goto LABEL_19;
    }
    if ( (unsigned int)HampHostCheckUpdateEnforcementSettings((struct _RM_HAM_ACTIVITY_HOST *)a1) )
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
          goto LABEL_11;
        if ( v15 != 2 )
        {
          if ( v15 != 3 )
            goto LABEL_14;
LABEL_11:
          CempLockSleepConditionVariableExclusive(a1, a1 + 696, 0LL);
          goto LABEL_14;
        }
        v22 = *a2 - *a3;
        HampHostTryWaitForGenerationRevision((struct _RM_HAM_ACTIVITY_HOST *)a1, a4, v22);
      }
      else
      {
        *(_QWORD *)(a1 + 664) |= 0x400000000000uLL;
      }
LABEL_14:
      HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)a1, v5);
      RtlWakeAllConditionVariable(a1 + 696);
      RmAcquireEnforcementLocks(v14);
    }
  }
  *(_DWORD *)(a1 + 684) = 0;
  IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  *((_DWORD *)v14 + 315) |= 0x80u;
  *((_DWORD *)v14 + 316) &= ~0x80u;
  HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)a1, IsSuspendWaiter, v6, v7);
  RmReleaseEnforcementLocks(v14);
  RmpSystemSetApplicationQuiesceCompleteEvents(v14);
  RmpSystemResourceTimerReset((struct _RM_HAM_ACTIVITY_HOST *)a1, *(void **)(a1 + 808), 0);
  v18 = 0;
  RmAcquireEnforcementLocks(v14);
  if ( HampHostIsTerminateQueued((struct _RM_HAM_ACTIVITY_HOST *)a1) )
  {
    v17 = 5;
    v16 = 10;
  }
  else
  {
    v17 = 3;
    v16 = 8;
  }
  v20 = 1;
  HampHostRevokeQuiesceExtension(a1, v17, 1 << v16);
LABEL_19:
  *(_QWORD *)v21 = HamTlgProvider;
  if ( *HamTlgProvider > 4u && tlgKeywordOn(*(__int64 *)v21, 0x400000000008LL) )
  {
    v23 = 0x1000000LL;
    _tlgWrapperByVal<8>::_tlgWrapperByVal<8>(v24, &v23);
    v28 = (__int64)v24;
    _tlgWrapperByVal<8>::_tlgWrapperByVal<8>(v25, a3);
    v29 = (__int64)v25;
    v10 = v18;
    _tlgWrapperByVal<1>::_tlgWrapperByVal<1>(&v11, &v10);
    v30 = (__int64)&v11;
    v12 = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 664)) >> 5;
    _tlgWrapperByVal<1>::_tlgWrapperByVal<1>(v13, &v12);
    v31 = (__int64)v13;
    Id = RmHamHostGetId((struct _RM_HAM_ACTIVITY_HOST *)a1);
    _tlgWrapperByVal<8>::_tlgWrapperByVal<8>(v27, &Id);
    v32 = (__int64)v27;
    PsmKey = RmHamHostGetPsmKey((struct _RM_HAM_ACTIVITY_HOST *)a1);
    v33 = _tlgWrapSz<unsigned short>::_tlgWrapSz<unsigned short>(v34, PsmKey);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      *(__int64 *)v21,
      (unsigned __int8 *)&unk_1800C3148,
      0LL,
      0LL,
      (const unsigned __int16 **)v33,
      v32,
      v31,
      v30,
      v29,
      v28);
  }
  return 0LL;
}
