/*
 * XREFs of RtlpWnfWalkUserSubscriptionList @ 0x18004DE08
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004DC24 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlpDecRefWnfUserSubscription @ 0x18004E28C (RtlpDecRefWnfUserSubscription.c)
 *     RtlSetThreadSubProcessTag @ 0x18004EE60 (RtlSetThreadSubProcessTag.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpWnfETWEventCallback @ 0x1800EA200 (RtlpWnfETWEventCallback.c)
 *     RtlpWnfMarkFailure @ 0x1800EA560 (RtlpWnfMarkFailure.c)
 */

__int64 __fastcall RtlpWnfWalkUserSubscriptionList(unsigned int *a1, _RTL_SRWLOCK *a2, int a3)
{
  int v3; // r12d
  _RTL_SRWLOCK *v6; // rbx
  _RTL_SRWLOCK *v7; // rcx
  volatile signed __int32 *Value; // r9
  volatile signed __int32 *v9; // rdi
  unsigned int v10; // esi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r13
  void *v15; // r12
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // r12
  void (__fastcall *v19)(_QWORD, _QWORD, _QWORD); // r14
  __int64 v20; // rcx
  int v21; // eax
  int v22; // [rsp+40h] [rbp-98h]
  int v23; // [rsp+44h] [rbp-94h]
  int v24; // [rsp+48h] [rbp-90h]
  _RTL_SRWLOCK *SRWLock; // [rsp+50h] [rbp-88h]
  volatile signed __int32 *v26; // [rsp+58h] [rbp-80h]
  PVOID SubProcessTag; // [rsp+60h] [rbp-78h]
  PVOID SubProcessTaga; // [rsp+60h] [rbp-78h]
  void (__fastcall *v29)(_QWORD, _QWORD, _QWORD); // [rsp+68h] [rbp-70h]
  __int64 v30; // [rsp+70h] [rbp-68h]
  _RTL_SRWLOCK *v31; // [rsp+88h] [rbp-50h]
  char *v32; // [rsp+90h] [rbp-48h]
  BOOL v33; // [rsp+E0h] [rbp+8h]
  int v34; // [rsp+E8h] [rbp+10h]
  int v36; // [rsp+F8h] [rbp+20h]

  v34 = (int)a2;
  v3 = a3;
  v23 = 0;
  v32 = (char *)a1 + a1[11];
  v6 = a2 + 8;
  SRWLock = a2 + 8;
  RtlAcquireSRWLockExclusive(a2 + 8);
  v7 = a2 + 9;
  v31 = a2 + 9;
  Value = (volatile signed __int32 *)a2[9].Value;
  v26 = Value;
  while ( Value != (volatile signed __int32 *)v7 )
  {
    v9 = Value - 2;
    SubProcessTag = (PVOID)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000);
    _InterlockedIncrement(Value + 18);
    v10 = a1[6] & Value[14];
    if ( !*((_DWORD *)Value + 22)
      && v10
      && ((v10 & 1) != 0 && (!*((_DWORD *)v9 + 14) || (int)(a1[4] - *((_DWORD *)v9 + 14)) > 0)
       || (v10 & 0xFFFFFFFE) != 0 && !*((_DWORD *)v9 + 40)
       || (v10 & 0x10) != 0)
      && (!*((_DWORD *)v9 + 30)
       || (unsigned __int64)SubProcessTag >= *((_QWORD *)v9 + 16)
       || *((_DWORD *)v9 + 37) < a1[4])
      && (!v3 || *((_DWORD *)v9 + 36)) )
    {
      v22 = 0;
      v24 = 0;
      v29 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))*((_QWORD *)v9 + 4);
      v12 = *((_QWORD *)v9 + 3);
      v13 = *(_QWORD *)(v12 + 16);
      v30 = *(_QWORD *)(v12 + 56);
      v14 = *((_QWORD *)v9 + 5);
      v15 = (void *)*((_QWORD *)v9 + 6);
      *((_QWORD *)v9 + 19) = NtCurrentTeb()->ClientId.UniqueThread;
      RtlReleaseSRWLockExclusive(SRWLock);
      v16 = 0;
      v36 = 0;
      v33 = 0;
      v17 = *((_QWORD *)v9 + 9);
      if ( v17 )
      {
        v33 = !_interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0LL);
        if ( !v33 )
        {
          if ( a3 != 1 )
          {
            v21 = 1;
            goto LABEL_46;
          }
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)v9 + 9) + 24LL));
          v33 = 1;
        }
      }
      if ( !*((_DWORD *)v9 + 24) )
      {
        v24 = 1;
        SubProcessTaga = RtlSetThreadSubProcessTag(v15);
        if ( (v10 & 1) != 0 )
        {
          v18 = v30;
          v19 = v29;
          v22 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, char *, unsigned int))v29)(
                  v13,
                  a1[4],
                  v30,
                  v14,
                  v32,
                  a1[5]);
        }
        else
        {
          v19 = v29;
          v18 = v30;
        }
        if ( (v10 & 0x10) != 0 && !*((_DWORD *)v9 + 24) && (v22 >= 0 || (v9[15] & 4) == 0) )
        {
          ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, _QWORD, _DWORD))v19)(v13, 0LL, v18, v14, 0LL, 0);
          v22 = 0;
        }
        if ( (v10 & 0xFFFFFFEE) != 0 )
        {
          v22 = 0;
          v19(v13, v14, v10);
        }
        if ( RtlGetCurrentServiceSessionId() )
          v20 = (__int64)NtCurrentPeb()->SharedData + 564;
        else
          v20 = 2147353486LL;
        if ( *(_BYTE *)v20 )
          RtlpWnfETWEventCallback(v13, a1[4], (_DWORD)v9, v34, (__int64)v19, v10, v22);
        RtlSetThreadSubProcessTag(SubProcessTaga);
      }
      if ( v33 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)v9 + 9) + 24LL));
      if ( v24 )
      {
        RtlAcquireSRWLockExclusive(SRWLock);
        v16 = 1;
        v36 = 1;
        if ( v22 != -1073741267 && v22 != -1073741801 )
        {
          if ( !*((_DWORD *)v9 + 14) || (int)(a1[4] - *((_DWORD *)v9 + 14)) > 0 )
            *((_DWORD *)v9 + 14) = a1[4];
          if ( (v9[15] & 4) != 0 && *((_DWORD *)v9 + 34) )
          {
            *((_DWORD *)v9 + 30) = 0;
            *((_QWORD *)v9 + 17) = 0LL;
            *((_QWORD *)v9 + 16) = 0LL;
            *((_DWORD *)v9 + 37) = 0;
          }
          goto LABEL_45;
        }
        if ( (v9[15] & 4) != 0 )
        {
          v23 = 1;
          RtlpWnfMarkFailure(v9, (unsigned int)v22, a1[4]);
          goto LABEL_56;
        }
      }
      else
      {
LABEL_56:
        v16 = v36;
      }
LABEL_45:
      v21 = 0;
LABEL_46:
      *((_DWORD *)v9 + 36) = v21;
      v6 = SRWLock;
      if ( !v16 )
        RtlAcquireSRWLockExclusive(SRWLock);
      *((_QWORD *)v9 + 19) = 0LL;
      Value = v26;
      v3 = a3;
    }
    v26 = *(volatile signed __int32 **)Value;
    RtlpDecRefWnfUserSubscription((PVOID)v9);
    Value = v26;
    v7 = v31;
  }
  RtlReleaseSRWLockExclusive(v6);
  return v23 != 0 ? 0xC000022D : 0;
}
