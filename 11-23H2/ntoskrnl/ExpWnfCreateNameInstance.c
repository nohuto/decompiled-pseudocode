/*
 * XREFs of ExpWnfCreateNameInstance @ 0x140711A04
 * Callers:
 *     NtCreateWnfStateName @ 0x1407113B0 (NtCreateWnfStateName.c)
 *     ExpNtUpdateWnfStateData @ 0x1407124AC (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140712AD4 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x140712E60 (NtQueryWnfStateData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     RtlAvlInsertNodeEx @ 0x140288350 (RtlAvlInsertNodeEx.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExpWnfFindStateName @ 0x14071346C (ExpWnfFindStateName.c)
 *     ExpWnfPopulateStateData @ 0x140714A4C (ExpWnfPopulateStateData.c)
 *     ObDereferenceSecurityDescriptor @ 0x140728C50 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x140728EC0 (ObLogSecurityDescriptor.c)
 *     ExpWnfGetPermanentDataStore @ 0x1407E4310 (ExpWnfGetPermanentDataStore.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpWnfCreateNameInstance(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        struct _KPROCESS *a4,
        struct _EX_RUNDOWN_REF **a5)
{
  __int64 v6; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct _EX_RUNDOWN_REF *Pool2; // rax
  struct _EX_RUNDOWN_REF *v12; // rdi
  struct _EX_RUNDOWN_REF *v13; // r12
  unsigned int v14; // esi
  volatile signed __int64 *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbp
  struct _EX_RUNDOWN_REF *StateName; // rax
  struct _EX_RUNDOWN_REF *v19; // rbp
  _QWORD *v20; // rdx
  bool v21; // r8
  _QWORD *v22; // rax
  unsigned __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // r14
  struct _EX_RUNDOWN_REF **v26; // r8
  struct _EX_RUNDOWN_REF *v27; // rdx
  void *Ptr; // rcx

  v6 = (a2 >> 4) & 3;
  if ( (_DWORD)v6 != 3 || (v9 = 257LL, PsInitialSystemProcess == a4) )
    v9 = 256LL;
  v10 = 184LL;
  if ( !*(_QWORD *)(a3 + 8) )
    v10 = 168LL;
  Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(v9, v10, 543583831LL);
  v12 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset(Pool2, 0, 0xA8uLL);
  LODWORD(v12->Count) = 11012355;
  v12[6].Count = a1;
  v12[5].Count = a2;
  LODWORD(v12[7].Count) = *(_DWORD *)a3;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v12[8].Count = (unsigned __int64)&v12[21];
    *(_OWORD *)&v12[21].Count = *(_OWORD *)*(_QWORD *)(a3 + 8);
  }
  v13 = v12 + 9;
  if ( (int)ObLogSecurityDescriptor(*(void **)(a3 + 16)) < 0 )
  {
    ExFreePoolWithTag(v12, 0x20666E57u);
    return 3221225626LL;
  }
  v12[14].Count = 0LL;
  v12[16].Count = (unsigned __int64)&v12[15];
  v12[15].Count = (unsigned __int64)&v12[15];
  v12[10].Count = 0LL;
  if ( (a2 & 0x400) != 0 && (int)ExpWnfGetPermanentDataStore(a1, (unsigned int)v6, 1LL, &v12[13]) < 0 )
  {
    v14 = -1073741670;
    goto LABEL_38;
  }
  v14 = ExpWnfPopulateStateData(v12);
  if ( v14 )
  {
LABEL_38:
    ObDereferenceSecurityDescriptor(v13->Count, 1LL);
    ExFreePoolWithTag(v12, 0x20666E57u);
    return v14;
  }
  v15 = (volatile signed __int64 *)(a1 + 48);
  v16 = KeAbPreAcquire(a1 + 48, 0LL);
  v17 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), v16, a1 + 48);
  if ( v17 )
    *(_BYTE *)(v17 + 18) = 1;
  StateName = (struct _EX_RUNDOWN_REF *)ExpWnfFindStateName(a1, a2);
  v19 = StateName;
  if ( StateName )
  {
    ExAcquireRundownProtection_0(StateName + 1);
    if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
    KeAbPostRelease(a1 + 48);
    ObDereferenceSecurityDescriptor(v13->Count, 1LL);
    Ptr = v12[11].Ptr;
    if ( Ptr )
      ExFreePoolWithTag(Ptr, 0x20666E57u);
    ExFreePoolWithTag(v12, 0x20666E57u);
    *a5 = v19;
    return 0LL;
  }
  ExAcquireRundownProtection_0(v12 + 1);
  v20 = *(_QWORD **)(a1 + 56);
  v21 = 0;
  if ( !v20 )
    goto LABEL_22;
  while ( v12[5].Count < v20[3] )
  {
    v22 = (_QWORD *)*v20;
    if ( !*v20 )
      goto LABEL_22;
LABEL_19:
    v20 = v22;
  }
  v22 = (_QWORD *)v20[1];
  if ( v22 )
    goto LABEL_19;
  v21 = 1;
LABEL_22:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 56), (unsigned __int64)v20, v21, (unsigned __int64)&v12[2]);
  if ( (_DWORD)v6 == 3 )
  {
    v12[19].Count = (unsigned __int64)a4;
    v23 = a4[1].EndPadding[0];
    v24 = KeAbPreAcquire(v23 + 56, 0LL);
    v25 = v24;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 56), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v23 + 56), v24, v23 + 56);
    if ( v25 )
      *(_BYTE *)(v25 + 18) = 1;
    v26 = *(struct _EX_RUNDOWN_REF ***)(v23 + 72);
    v27 = v12 + 17;
    if ( *v26 != (struct _EX_RUNDOWN_REF *)(v23 + 64) )
      __fastfail(3u);
    v27->Count = v23 + 64;
    v12[18].Count = (unsigned __int64)v26;
    *v26 = v27;
    *(_QWORD *)(v23 + 72) = v27;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v23 + 56));
    KeAbPostRelease(v23 + 56);
  }
  if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  *a5 = v12;
  return 0LL;
}
