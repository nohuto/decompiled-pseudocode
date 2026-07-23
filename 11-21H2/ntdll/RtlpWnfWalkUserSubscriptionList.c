/*
 * XREFs of RtlpWnfWalkUserSubscriptionList @ 0x18005A9B4
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x18005A7BC (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlSetThreadSubProcessTag @ 0x180022550 (RtlSetThreadSubProcessTag.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpDecRefWnfUserSubscription @ 0x18005AEA4 (RtlpDecRefWnfUserSubscription.c)
 *     RtlpWnfMarkFailure @ 0x180093088 (RtlpWnfMarkFailure.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpWnfETWEventCallback @ 0x1800E9E78 (RtlpWnfETWEventCallback.c)
 */

__int64 __fastcall RtlpWnfWalkUserSubscriptionList(_DWORD *a1, _RTL_SRWLOCK *a2, int a3)
{
  int v3; // r12d
  _RTL_SRWLOCK *v6; // rcx
  unsigned __int64 Value; // rdi
  unsigned __int64 v8; // rcx
  unsigned int v9; // esi
  void *v10; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r13
  void *v15; // r12
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // r12
  void (__fastcall *v19)(_QWORD, _QWORD, _QWORD); // r15
  __int64 v20; // rcx
  _RTL_SRWLOCK *v21; // rbx
  int v22; // eax
  unsigned int v23; // [rsp+28h] [rbp-B0h]
  int v24; // [rsp+40h] [rbp-98h]
  int v25; // [rsp+50h] [rbp-88h]
  int v26; // [rsp+54h] [rbp-84h]
  void (__fastcall *v27)(_QWORD, _QWORD, _QWORD); // [rsp+60h] [rbp-78h]
  __int64 v28; // [rsp+68h] [rbp-70h]
  _RTL_SRWLOCK *v29; // [rsp+80h] [rbp-58h]
  char *v30; // [rsp+88h] [rbp-50h]
  PVOID SubProcessTag; // [rsp+90h] [rbp-48h]
  _RTL_SRWLOCK *SRWLock; // [rsp+98h] [rbp-40h]
  BOOL v33; // [rsp+E0h] [rbp+8h]
  int v36; // [rsp+F8h] [rbp+20h]

  v3 = a3;
  v25 = 0;
  v30 = (char *)a1 + (unsigned int)a1[11];
  SRWLock = a2 + 8;
  RtlAcquireSRWLockExclusive(a2 + 8);
  v6 = a2 + 9;
  v29 = a2 + 9;
  Value = a2[9].Value;
  while ( (_RTL_SRWLOCK *)Value != v6 )
  {
    v8 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
    _InterlockedIncrement((volatile signed __int32 *)(Value + 72));
    v9 = a1[6] & *(_DWORD *)(Value + 56);
    if ( *(_DWORD *)(Value + 88)
      || !v9
      || ((v9 & 1) == 0 || *(_DWORD *)(Value + 48) && a1[4] - *(_DWORD *)(Value + 48) <= 0)
      && ((v9 & 0xFFFFFFFE) == 0 || *(_DWORD *)(Value + 152))
      && (v9 & 0x10) == 0
      || *(_DWORD *)(Value + 112) && v8 < *(_QWORD *)(Value + 120) && *(_DWORD *)(Value + 140) >= a1[4]
      || v3 && !*(_DWORD *)(Value + 136) )
    {
      v10 = (void *)(Value - 8);
      goto LABEL_11;
    }
    v24 = 0;
    v26 = 0;
    v27 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(Value + 24);
    v12 = *(_QWORD *)(Value + 16);
    v13 = *(_QWORD *)(v12 + 16);
    v28 = *(_QWORD *)(v12 + 56);
    v14 = *(_QWORD *)(Value + 32);
    v15 = *(void **)(Value + 40);
    *(_QWORD *)(Value + 144) = NtCurrentTeb()->ClientId.UniqueThread;
    RtlReleaseSRWLockExclusive(a2 + 8);
    v16 = 0;
    v36 = 0;
    v33 = 0;
    v17 = *(_QWORD *)(Value + 64);
    if ( v17 )
    {
      v33 = !_interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0LL);
      if ( !v33 )
      {
        if ( a3 != 1 )
        {
          v22 = 1;
          v21 = a2 + 8;
          v10 = (void *)(Value - 8);
          goto LABEL_48;
        }
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(Value + 64) + 24LL));
        v33 = 1;
      }
    }
    if ( *(_DWORD *)(Value + 88) )
    {
      v10 = (void *)(Value - 8);
    }
    else
    {
      v26 = 1;
      SubProcessTag = RtlSetThreadSubProcessTag(v15);
      if ( (v9 & 1) != 0 )
      {
        v18 = v28;
        v19 = v27;
        v24 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, char *, _DWORD))v27)(
                v13,
                (unsigned int)a1[4],
                v28,
                v14,
                v30,
                a1[5]);
      }
      else
      {
        v19 = v27;
        v18 = v28;
      }
      if ( (v9 & 0x10) != 0 && !*(_DWORD *)(Value + 88) && (v24 >= 0 || (*(_BYTE *)(Value + 52) & 4) == 0) )
      {
        ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, _QWORD, _DWORD))v19)(v13, 0LL, v18, v14, 0LL, 0);
        v24 = 0;
      }
      if ( (v9 & 0xFFFFFFEE) != 0 )
      {
        v24 = 0;
        v19(v13, v14, v9);
      }
      if ( RtlGetCurrentServiceSessionId() )
        v20 = (__int64)NtCurrentPeb()->SharedData + 564;
      else
        v20 = 2147353486LL;
      if ( *(_BYTE *)v20 )
      {
        v23 = v9;
        v10 = (void *)(Value - 8);
        RtlpWnfETWEventCallback(v13, a1[4], Value - 8, (_DWORD)a2, (__int64)v19, v23, v24);
      }
      else
      {
        v10 = (void *)(Value - 8);
      }
      RtlSetThreadSubProcessTag(SubProcessTag);
    }
    if ( v33 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(Value + 64) + 24LL));
    v21 = a2 + 8;
    if ( !v26 )
      goto LABEL_62;
    RtlAcquireSRWLockExclusive(a2 + 8);
    v16 = 1;
    v36 = 1;
    if ( v24 != -1073741801 && v24 != -1073741267 )
    {
      if ( !*(_DWORD *)(Value + 48) || a1[4] - *(_DWORD *)(Value + 48) > 0 )
        *(_DWORD *)(Value + 48) = a1[4];
      if ( (*(_BYTE *)(Value + 52) & 4) != 0 && *(_DWORD *)(Value + 128) )
      {
        *(_DWORD *)(Value + 112) = 0;
        *(_QWORD *)(Value + 128) = 0LL;
        *(_QWORD *)(Value + 120) = 0LL;
        *(_DWORD *)(Value + 140) = 0;
      }
      goto LABEL_47;
    }
    if ( (*(_BYTE *)(Value + 52) & 4) != 0 )
    {
      v25 = 1;
      RtlpWnfMarkFailure(v10, (unsigned int)v24, (unsigned int)a1[4]);
LABEL_62:
      v16 = v36;
    }
LABEL_47:
    v22 = 0;
LABEL_48:
    *(_DWORD *)(Value + 136) = v22;
    if ( !v16 )
      RtlAcquireSRWLockExclusive(v21);
    *(_QWORD *)(Value + 144) = 0LL;
    v3 = a3;
LABEL_11:
    Value = *(_QWORD *)Value;
    RtlpDecRefWnfUserSubscription(v10);
    v6 = v29;
  }
  RtlReleaseSRWLockExclusive(SRWLock);
  return v25 != 0 ? 0xC000022D : 0;
}
