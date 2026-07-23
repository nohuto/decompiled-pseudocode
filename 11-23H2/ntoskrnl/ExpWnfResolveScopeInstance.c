/*
 * XREFs of ExpWnfResolveScopeInstance @ 0x140713578
 * Callers:
 *     NtCreateWnfStateName @ 0x1407113B0 (NtCreateWnfStateName.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140712184 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x1407124AC (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140712AD4 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x140712E60 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x1407C9600 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x1407CD630 (NtQueryWnfStateNameInformation.c)
 *     ExpNtDeleteWnfStateData @ 0x14085C0AC (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     RtlLengthSid @ 0x140227B50 (RtlLengthSid.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402936E0 (PdcCreateWatchdogAroundClientCall.c)
 *     PsGetServerSiloGlobals @ 0x140297924 (PsGetServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x140714910 (ExpWnfGetCurrentScopeInstance.c)
 *     ExpWnfFindScopeInstance @ 0x1407149D8 (ExpWnfFindScopeInstance.c)
 *     ExpWnfFreeScopeInstance @ 0x1407CCC34 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfCreateProcessContext @ 0x1407D03F4 (ExpWnfCreateProcessContext.c)
 *     ExpWnfAllocateScopeInstance @ 0x1407E6600 (ExpWnfAllocateScopeInstance.c)
 *     ExpWnfAllocateScopeMap @ 0x14085EC00 (ExpWnfAllocateScopeMap.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpWnfResolveScopeInstance(
        struct _EX_RUNDOWN_REF **a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *Sid)
{
  int CurrentScopeInstance; // ebx
  __int64 v6; // r15
  char *CurrentServerSiloGlobals; // rax
  volatile signed __int64 *v10; // rdi
  __int64 v11; // r8
  __int64 *v12; // r13
  int v13; // eax
  ULONG v14; // edx
  PVOID *v15; // r14
  struct _EX_RUNDOWN_REF *v16; // rsi
  __int64 v18; // rax
  __int64 *v19; // r12
  volatile signed __int64 v20; // rax
  signed __int64 *v21; // rdi
  signed __int64 v22; // r12
  unsigned __int64 v23; // rbx
  struct _EX_RUNDOWN_REF *ScopeInstance; // rax
  int v25; // ebx
  void *Pool2; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  struct _EX_RUNDOWN_REF *v29; // rax
  char *v30; // rbx
  __int64 v31; // rax
  _QWORD *v32; // rbx
  int v33; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-3Ch] BYREF
  PVOID v35; // [rsp+38h] [rbp-38h] BYREF
  PVOID v36; // [rsp+40h] [rbp-30h] BYREF
  __int64 v37; // [rsp+48h] [rbp-28h] BYREF
  __int64 v38; // [rsp+50h] [rbp-20h] BYREF
  PVOID P; // [rsp+58h] [rbp-18h]
  int v41; // [rsp+B8h] [rbp+48h]
  int v42; // [rsp+C0h] [rbp+50h]

  v42 = a3;
  v41 = a2;
  CurrentScopeInstance = 0;
  v6 = a4;
  v38 = 0LL;
  v36 = 0LL;
  P = 0LL;
  if ( KeGetCurrentThread()->PreviousMode && (unsigned int)(a4 - 4) > 1 )
  {
    CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  }
  else
  {
    v18 = PdcCreateWatchdogAroundClientCall();
    CurrentServerSiloGlobals = (char *)PsGetServerSiloGlobals(v18);
  }
  v10 = (volatile signed __int64 *)(CurrentServerSiloGlobals + 912);
  if ( !*((_QWORD *)CurrentServerSiloGlobals + 114) )
  {
    CurrentScopeInstance = ExpWnfAllocateScopeMap(&v36);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    if ( _InterlockedCompareExchange64(v10, (signed __int64)v36, 0LL) )
      ExFreePoolWithTag(v36, 0x20666E57u);
    CurrentScopeInstance = 0;
  }
  v37 = *(_QWORD *)(a2 + 2152);
  v11 = v37;
  if ( !v37 )
  {
    CurrentScopeInstance = ExpWnfCreateProcessContext(a2, &v37);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    v11 = v37;
    CurrentScopeInstance = 0;
  }
  v12 = Sid;
  if ( Sid || (v13 = 1, a3) )
    v13 = 0;
  v33 = v13;
  v14 = 8;
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == 4 )
    {
      v15 = (PVOID *)(*v10 + 16);
    }
    else
    {
      if ( (_DWORD)v6 != 5 )
      {
        v15 = (PVOID *)(v11 + 8 * ((unsigned int)(v6 - 1) + 4LL));
        goto LABEL_12;
      }
      v15 = (PVOID *)(*v10 + 24);
    }
  }
  else
  {
    v15 = (PVOID *)(*v10 + 8);
  }
  v33 = 1;
LABEL_12:
  v16 = (struct _EX_RUNDOWN_REF *)*v15;
  v35 = *v15;
  if ( v33 && v16 )
  {
LABEL_14:
    if ( ExAcquireRundownProtection_0(v16 + 1) )
    {
LABEL_15:
      *a1 = v16;
      goto LABEL_16;
    }
    goto LABEL_74;
  }
  if ( Sid )
  {
    if ( (_DWORD)v6 )
    {
      switch ( (_DWORD)v6 )
      {
        case 1:
          v14 = 4;
          goto LABEL_48;
        case 2:
          v14 = RtlLengthSid(Sid);
          goto LABEL_48;
        case 3:
LABEL_48:
          v34 = v14;
          v33 = 0;
          goto LABEL_28;
      }
    }
    v14 = 0;
    goto LABEL_48;
  }
  v34 = 8;
  v19 = &v38;
  CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(v41, v42, v6, (unsigned int)&v38, (__int64)&v34, (__int64)&v33);
  if ( CurrentScopeInstance == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v34, 543583831LL);
    P = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v19 = (__int64 *)Pool2;
    CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(v41, v42, v6, (_DWORD)Pool2, (__int64)&v34, (__int64)&v33);
  }
  if ( CurrentScopeInstance < 0 )
    goto LABEL_16;
  CurrentScopeInstance = 0;
  if ( v34 )
    v12 = v19;
LABEL_28:
  if ( v33 && v16 )
    goto LABEL_14;
  v20 = *v10;
  v21 = (signed __int64 *)(*v10 + 8 * (3 * v6 + 4));
  v22 = v20 + 8 * (3 * v6 + 5);
  v23 = KeAbPreAcquire((__int64)v21, 0LL);
  if ( _InterlockedCompareExchange64(v21, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v21, 0LL, v23, (__int64)v21);
  if ( v23 )
    *(_BYTE *)(v23 + 18) = 1;
  ScopeInstance = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v22, v12, v34);
  v16 = ScopeInstance;
  if ( ScopeInstance )
  {
    v25 = ExAcquireRundownProtection_0(ScopeInstance + 1);
    if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v21);
    KeAbPostRelease((ULONG_PTR)v21);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v21);
    KeAbPostRelease((ULONG_PTR)v21);
    CurrentScopeInstance = ExpWnfAllocateScopeInstance(&v35, (unsigned int)v6, v12, v34);
    if ( CurrentScopeInstance < 0 )
      goto LABEL_16;
    v27 = KeAbPreAcquire((__int64)v21, 0LL);
    v28 = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v21, v27, (__int64)v21);
    if ( v28 )
      *(_BYTE *)(v28 + 18) = 1;
    v29 = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v22, v12, v34);
    v16 = v29;
    if ( !v29 )
    {
      v30 = (char *)v35;
      ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v35 + 1);
      v31 = *(_QWORD *)v22;
      v32 = v30 + 32;
      if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22 )
        __fastfail(3u);
      *v32 = v31;
      v32[1] = v22;
      *(_QWORD *)(v31 + 8) = v32;
      *(_QWORD *)v22 = v32;
      if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v21);
      KeAbPostRelease((ULONG_PTR)v21);
      CurrentScopeInstance = 0;
      if ( v33 )
        _InterlockedCompareExchange64((volatile signed __int64 *)v15, (signed __int64)v35, 0LL);
      v16 = (struct _EX_RUNDOWN_REF *)v35;
      goto LABEL_15;
    }
    v25 = ExAcquireRundownProtection_0(v29 + 1);
    if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v21);
    KeAbPostRelease((ULONG_PTR)v21);
    ExpWnfFreeScopeInstance(v35);
  }
  if ( v25 )
  {
    CurrentScopeInstance = 0;
    goto LABEL_15;
  }
LABEL_74:
  CurrentScopeInstance = -1073741772;
LABEL_16:
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)CurrentScopeInstance;
}
