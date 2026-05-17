/*
 * XREFs of TppJobpRundownJob @ 0x180085A30
 * Callers:
 *     TpWaitForJobNotification @ 0x180085980 (TpWaitForJobNotification.c)
 *     TpReleaseJobNotification @ 0x1800859C0 (TpReleaseJobNotification.c)
 *     TppJobpStopCallbackGeneration @ 0x180123BA0 (TppJobpStopCallbackGeneration.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     NtQueryInformationJobObject @ 0x1800A6A80 (NtQueryInformationJobObject.c)
 *     ZwSetInformationJobObject @ 0x1800A74A0 (ZwSetInformationJobObject.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     TppRaiseHandleStatus @ 0x1801242E0 (TppRaiseHandleStatus.c)
 */

void __fastcall TppJobpRundownJob(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  volatile signed __int64 *v5; // rsi
  __int64 v6; // rcx
  int v7; // eax
  unsigned __int64 v8; // rax
  signed __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 272) )
  {
    v5 = (volatile signed __int64 *)(a1 + 288);
    RtlAcquireSRWLockExclusive(a1 + 288, a2, a3, a4);
    v6 = *(_QWORD *)(a1 + 272);
    if ( v6 )
    {
      v11 = 0LL;
      v7 = ZwSetInformationJobObject(v6, 7LL, &v11);
      if ( v7 < 0 || (v7 = NtQueryInformationJobObject(*(_QWORD *)(a1 + 272), 17LL, &v12), v7 < 0) )
      {
        TppRaiseHandleStatus((unsigned int)v7, *(_QWORD *)(a1 + 272), 0LL);
      }
      else
      {
        v8 = (-2LL * v12) | 1;
        v12 = v8;
        v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 280), v8);
        *(_QWORD *)(a1 + 272) = 0LL;
        v10 = v8 + v9;
        RtlReleaseSRWLockExclusive(v5);
        if ( v10 == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF) == 1 )
          (**(void (***)(void))(a1 + 80))();
      }
    }
    else
    {
      RtlReleaseSRWLockExclusive(v5);
    }
  }
}
