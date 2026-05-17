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

__int64 __fastcall RtlpWnfWalkUserSubscriptionList(
        _DWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v4; // r12d
  unsigned __int64 v7; // rcx
  volatile signed __int32 *v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 *v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r13
  void *v16; // r12
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r12
  void (__fastcall *v22)(_QWORD, _QWORD, _QWORD); // r15
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int64 v27; // rbx
  int v28; // eax
  unsigned int v29; // [rsp+28h] [rbp-B0h]
  int v30; // [rsp+40h] [rbp-98h]
  int v31; // [rsp+50h] [rbp-88h]
  int v32; // [rsp+54h] [rbp-84h]
  void (__fastcall *v33)(_QWORD, _QWORD, _QWORD); // [rsp+60h] [rbp-78h]
  __int64 v34; // [rsp+68h] [rbp-70h]
  void (__fastcall *v35)(__int64); // [rsp+70h] [rbp-68h] BYREF
  __int64 v36; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v37; // [rsp+80h] [rbp-58h]
  char *v38; // [rsp+88h] [rbp-50h]
  void *v39; // [rsp+90h] [rbp-48h]
  volatile signed __int64 *v40; // [rsp+98h] [rbp-40h]
  BOOL v41; // [rsp+E0h] [rbp+8h]
  int v43; // [rsp+F0h] [rbp+18h]
  unsigned int v44; // [rsp+F8h] [rbp+20h]

  v43 = a3;
  v4 = a3;
  v35 = 0LL;
  v36 = 0LL;
  v31 = 0;
  v38 = (char *)a1 + (unsigned int)a1[11];
  v40 = (volatile signed __int64 *)(a2 + 64);
  RtlAcquireSRWLockExclusive(a2 + 64, a2, a3, a4);
  v7 = a2 + 72;
  v37 = a2 + 72;
  v8 = *(volatile signed __int32 **)(a2 + 72);
  while ( v8 != (volatile signed __int32 *)v7 )
  {
    v9 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
    _InterlockedIncrement(v8 + 18);
    v10 = a1[6] & v8[14];
    if ( *((_DWORD *)v8 + 22)
      || !v10
      || ((v10 & 1) == 0 || *((_DWORD *)v8 + 12) && a1[4] - *((_DWORD *)v8 + 12) <= 0)
      && ((v10 & 0xFFFFFFFE) == 0 || *((_DWORD *)v8 + 38))
      && (v10 & 0x10) == 0
      || *((_DWORD *)v8 + 28) && v9 < *((_QWORD *)v8 + 15) && *((_DWORD *)v8 + 35) >= a1[4]
      || v4 && !*((_DWORD *)v8 + 34) )
    {
      v11 = (__int64 *)(v8 - 2);
      goto LABEL_11;
    }
    v30 = 0;
    v32 = 0;
    v33 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))*((_QWORD *)v8 + 3);
    v13 = *((_QWORD *)v8 + 2);
    v14 = *(_QWORD *)(v13 + 16);
    v34 = *(_QWORD *)(v13 + 56);
    v15 = *((_QWORD *)v8 + 4);
    v16 = (void *)*((_QWORD *)v8 + 5);
    *((_QWORD *)v8 + 18) = NtCurrentTeb()->ClientId.UniqueThread;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 64));
    v19 = 0LL;
    v44 = 0;
    v41 = 0;
    v20 = *((_QWORD *)v8 + 8);
    if ( v20 )
    {
      v41 = !_interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0LL);
      if ( !v41 )
      {
        if ( v43 != 1 )
        {
          v28 = 1;
          v27 = a2 + 64;
          v11 = (__int64 *)(v8 - 2);
          goto LABEL_49;
        }
        RtlAcquireSRWLockExclusive(*((_QWORD *)v8 + 8) + 24LL, 0LL, v17, v18);
        v41 = 1;
      }
    }
    if ( *((_DWORD *)v8 + 22) )
    {
      v11 = (__int64 *)(v8 - 2);
    }
    else
    {
      v32 = 1;
      v39 = RtlSetThreadSubProcessTag(v16, v19, v17, v18);
      if ( (v10 & 1) != 0 )
      {
        v21 = v34;
        v22 = v33;
        v30 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, char *, _DWORD))v33)(
                v14,
                (unsigned int)a1[4],
                v34,
                v15,
                v38,
                a1[5]);
      }
      else
      {
        v22 = v33;
        v21 = v34;
      }
      if ( (v10 & 0x10) != 0 && !*((_DWORD *)v8 + 22) && (v30 >= 0 || (v8[13] & 4) == 0) )
      {
        ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, _QWORD, _DWORD))v22)(v14, 0LL, v21, v15, 0LL, 0);
        v30 = 0;
      }
      if ( (v10 & 0xFFFFFFEE) != 0 )
      {
        v30 = 0;
        v22(v14, v15, v10);
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v26 = (__int64)NtCurrentPeb()->SharedData + 564;
      else
        v26 = 2147353486LL;
      if ( *(_BYTE *)v26 )
      {
        v29 = v10;
        v11 = (__int64 *)(v8 - 2);
        RtlpWnfETWEventCallback(v14, a1[4], (_DWORD)v8 - 8, a2, (__int64)v22, v29, v30);
      }
      else
      {
        v11 = (__int64 *)(v8 - 2);
      }
      RtlSetThreadSubProcessTag(v39, v23, v24, v25);
    }
    if ( v41 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*((_QWORD *)v8 + 8) + 24LL));
    v27 = a2 + 64;
    if ( !v32 )
      goto LABEL_63;
    RtlAcquireSRWLockExclusive(a2 + 64, v19, v17, v18);
    v19 = 1LL;
    v44 = 1;
    if ( v30 != -1073741801 && v30 != -1073741267 )
    {
      if ( !*((_DWORD *)v8 + 12) || a1[4] - *((_DWORD *)v8 + 12) > 0 )
        *((_DWORD *)v8 + 12) = a1[4];
      if ( (v8[13] & 4) != 0 && *((_DWORD *)v8 + 32) )
      {
        *((_DWORD *)v8 + 28) = 0;
        *((_QWORD *)v8 + 16) = 0LL;
        *((_QWORD *)v8 + 15) = 0LL;
        *((_DWORD *)v8 + 35) = 0;
      }
      goto LABEL_48;
    }
    if ( (v8[13] & 4) != 0 )
    {
      v31 = 1;
      RtlpWnfMarkFailure(v11, (unsigned int)v30, (unsigned int)a1[4]);
LABEL_63:
      v19 = v44;
    }
LABEL_48:
    v28 = 0;
LABEL_49:
    *((_DWORD *)v8 + 34) = v28;
    if ( !(_DWORD)v19 )
      RtlAcquireSRWLockExclusive(v27, v19, v17, v18);
    *((_QWORD *)v8 + 18) = 0LL;
    v4 = v43;
LABEL_11:
    v8 = *(volatile signed __int32 **)v8;
    RtlpDecRefWnfUserSubscription(v11, &v35, &v36);
    v7 = v37;
    if ( v35 )
    {
      v35(v36);
      v7 = v37;
    }
  }
  RtlReleaseSRWLockExclusive(v40);
  return v31 != 0 ? 0xC000022D : 0;
}
