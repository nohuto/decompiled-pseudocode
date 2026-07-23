/*
 * XREFs of PpmCheckInitProcessors @ 0x14082E5C4
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x14082C9C0 (PpmReapplyPerfPolicy.c)
 *     PopNewProcessorCallback @ 0x140980620 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140255230 (KeIsEmptyAffinityEx.c)
 *     PpmConvertTime @ 0x1402555D0 (PpmConvertTime.c)
 *     KeEnumerateNextProcessor @ 0x140257370 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1402573F0 (KeGetPrcb.c)
 *     PopExecuteOnTargetProcessors @ 0x1402BFDAC (PopExecuteOnTargetProcessors.c)
 *     KiOrAffinityEx @ 0x1402C2D40 (KiOrAffinityEx.c)
 *     PpmReleaseLock @ 0x14032C510 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C560 (PpmAcquireLock.c)
 *     KiSubtractAffinityEx @ 0x14033DACC (KiSubtractAffinityEx.c)
 *     PpmParkRegisterParking @ 0x140391AA0 (PpmParkRegisterParking.c)
 *     PpmCheckApplyParkConstraints @ 0x14039323C (PpmCheckApplyParkConstraints.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x140393950 (KeQueryActiveProcessorAffinity2.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HvlIsRootPowerSchedulerQosPresent @ 0x14053FFB0 (HvlIsRootPowerSchedulerQosPresent.c)
 *     PpmUpdateProcessorPolicy @ 0x14082CAB0 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckReInit @ 0x14082CDEC (PpmCheckReInit.c)
 *     PpmAllocatePerfCheck @ 0x14082F314 (PpmAllocatePerfCheck.c)
 *     PpmReinitializeHeteroEngine @ 0x14082F4A8 (PpmReinitializeHeteroEngine.c)
 */

void __fastcall PpmCheckInitProcessors(int a1, int a2)
{
  __int64 Prcb; // rax
  __int64 v5; // rax
  unsigned int v6; // edx
  unsigned __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rcx
  unsigned int v10; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v11; // [rsp+24h] [rbp-DCh] BYREF
  unsigned __int16 *v12[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v13; // [rsp+38h] [rbp-C8h]
  int v14; // [rsp+3Ah] [rbp-C6h]
  __int16 v15; // [rsp+3Eh] [rbp-C2h]
  unsigned __int16 *v16[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v17; // [rsp+50h] [rbp-B0h]
  int v18; // [rsp+52h] [rbp-AEh]
  __int16 v19; // [rsp+56h] [rbp-AAh]
  _QWORD v20[34]; // [rsp+60h] [rbp-A0h] BYREF

  v14 = 0;
  v15 = 0;
  v11 = 0;
  v10 = 0;
  LODWORD(v20[0]) = 2097153;
  memset((char *)v20 + 4, 0, 0x104uLL);
  if ( a1
    || (PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock),
        KeQueryActiveProcessorAffinity2((__int64)v20),
        (unsigned __int8)KiSubtractAffinityEx((unsigned __int16 *)v20, (char *)&PpmCheckRegistered, v20, WORD1(v20[0]))) )
  {
    KiOrAffinityEx((char *)&PpmCheckRegistered, v20, &PpmCheckRegistered, word_140C0BE72);
    if ( !(unsigned int)KeIsEmptyAffinityEx(v20) )
    {
      v12[1] = (unsigned __int16 *)v20[1];
      v12[0] = (unsigned __int16 *)v20;
      v13 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v11, v12) )
      {
        Prcb = KeGetPrcb(v11);
        PpmAllocatePerfCheck(Prcb + 33968);
      }
      PopExecuteOnTargetProcessors((__int64)v20, (__int64)PpmCheckProcessorInit, 0LL, 0LL);
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(v20) || a2 )
      PpmParkRegisterParking();
    if ( _bittest64((const signed __int64 *)&KeGetCurrentPrcb()->FeatureBits, 0x27u) )
    {
      PpmAllowedActions |= 0x400u;
      v10 |= 0x400u;
      PpmUpdateProcessorPolicy(&v10, 0LL);
    }
    PpmCheckReInit();
    PpmCheckApplyParkConstraints();
    v18 = 0;
    v19 = 0;
    v10 = 0;
    if ( KeGetCurrentPrcb()->PowerState.Hypervisor == ProcHypervisorPresent
      && HvlIsRootPowerSchedulerQosPresent()
      && !PpmPerfVmQosSupported )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      v16[1] = (unsigned __int16 *)qword_140C0BE78[0];
      v17 = 0;
      v16[0] = (unsigned __int16 *)&PpmCheckRegistered;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v10, v16) )
      {
        v5 = KeGetPrcb(v10);
        v6 = PpmPerfQosTransitionHysteresisOverride;
        if ( PpmPerfQosTransitionHysteresisOverride == -1 )
          v6 = PpmPerfQosTransitionHysteresis;
        v7 = PpmConvertTime(v6, 0xF4240uLL, 1000000LL * *(unsigned int *)(v5 + 68));
        *(_QWORD *)(v8 + 34104) = v7;
      }
      PpmPerfQosManageIdleProcessors = 0;
      LOBYTE(v9) = 1;
      PpmPerfVmQosSupported = 1;
      PpmReinitializeHeteroEngine(v9, 0LL);
    }
  }
  else
  {
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
}
