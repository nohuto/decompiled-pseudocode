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

__int64 __fastcall RtlpWnfWalkUserSubscriptionList(unsigned int *a1, __int64 a2, int a3)
{
  int v3; // r12d
  volatile signed __int64 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  volatile signed __int32 *v8; // r9
  volatile signed __int32 *v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r13
  __int64 v17; // r12
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // r12
  void (__fastcall *v21)(_QWORD, _QWORD, _QWORD); // r14
  __int64 v22; // rcx
  int v23; // eax
  int v24; // [rsp+40h] [rbp-98h]
  int v25; // [rsp+44h] [rbp-94h]
  int v26; // [rsp+48h] [rbp-90h]
  volatile signed __int64 *v27; // [rsp+50h] [rbp-88h]
  volatile signed __int32 *v28; // [rsp+58h] [rbp-80h]
  unsigned __int64 v29; // [rsp+60h] [rbp-78h]
  __int64 v30; // [rsp+60h] [rbp-78h]
  void (__fastcall *v31)(_QWORD, _QWORD, _QWORD); // [rsp+68h] [rbp-70h]
  __int64 v32; // [rsp+70h] [rbp-68h]
  void (__fastcall *v33)(__int64, __int64, __int64, volatile signed __int32 *); // [rsp+78h] [rbp-60h] BYREF
  __int64 v34; // [rsp+80h] [rbp-58h] BYREF
  volatile signed __int32 *v35; // [rsp+88h] [rbp-50h]
  char *v36; // [rsp+90h] [rbp-48h]
  BOOL v37; // [rsp+E0h] [rbp+8h]
  int v38; // [rsp+E8h] [rbp+10h]
  int v40; // [rsp+F8h] [rbp+20h]

  v38 = a2;
  v3 = a3;
  v33 = 0LL;
  v34 = 0LL;
  v25 = 0;
  v36 = (char *)a1 + a1[11];
  v6 = (volatile signed __int64 *)(a2 + 64);
  v27 = (volatile signed __int64 *)(a2 + 64);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 64));
  v7 = (volatile signed __int32 *)(a2 + 72);
  v35 = (volatile signed __int32 *)(a2 + 72);
  v8 = *(volatile signed __int32 **)(a2 + 72);
  v28 = v8;
  while ( v8 != v7 )
  {
    v9 = v8 - 2;
    v29 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
    _InterlockedIncrement(v8 + 18);
    v10 = a1[6] & v8[14];
    if ( !*((_DWORD *)v8 + 22)
      && v10
      && ((v10 & 1) != 0 && (!*((_DWORD *)v9 + 14) || (int)(a1[4] - *((_DWORD *)v9 + 14)) > 0)
       || (v10 & 0xFFFFFFFE) != 0 && !*((_DWORD *)v9 + 40)
       || (v10 & 0x10) != 0)
      && (!*((_DWORD *)v9 + 30) || v29 >= *((_QWORD *)v9 + 16) || *((_DWORD *)v9 + 37) < a1[4])
      && (!v3 || *((_DWORD *)v9 + 36)) )
    {
      v24 = 0;
      v26 = 0;
      v31 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))*((_QWORD *)v9 + 4);
      v14 = *((_QWORD *)v9 + 3);
      v15 = *(_QWORD *)(v14 + 16);
      v32 = *(_QWORD *)(v14 + 56);
      v16 = *((_QWORD *)v9 + 5);
      v17 = *((_QWORD *)v9 + 6);
      *((_QWORD *)v9 + 19) = NtCurrentTeb()->ClientId.UniqueThread;
      RtlReleaseSRWLockExclusive(v27);
      v18 = 0;
      v40 = 0;
      v37 = 0;
      v19 = *((_QWORD *)v9 + 9);
      if ( v19 )
      {
        v37 = !_interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0LL);
        if ( !v37 )
        {
          if ( a3 != 1 )
          {
            v23 = 1;
            goto LABEL_47;
          }
          RtlAcquireSRWLockExclusive((volatile signed __int64 *)(*((_QWORD *)v9 + 9) + 24LL));
          v37 = 1;
        }
      }
      if ( !*((_DWORD *)v9 + 24) )
      {
        v26 = 1;
        v30 = RtlSetThreadSubProcessTag(v17);
        if ( (v10 & 1) != 0 )
        {
          v20 = v32;
          v21 = v31;
          v24 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, char *, unsigned int))v31)(
                  v15,
                  a1[4],
                  v32,
                  v16,
                  v36,
                  a1[5]);
        }
        else
        {
          v21 = v31;
          v20 = v32;
        }
        if ( (v10 & 0x10) != 0 && !*((_DWORD *)v9 + 24) && (v24 >= 0 || (v9[15] & 4) == 0) )
        {
          ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, _QWORD, _DWORD))v21)(v15, 0LL, v20, v16, 0LL, 0);
          v24 = 0;
        }
        if ( (v10 & 0xFFFFFFEE) != 0 )
        {
          v24 = 0;
          v21(v15, v16, v10);
        }
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v22 = (__int64)NtCurrentPeb()->SharedData + 564;
        else
          v22 = 2147353486LL;
        if ( *(_BYTE *)v22 )
          RtlpWnfETWEventCallback(v15, a1[4], (_DWORD)v9, v38, (__int64)v21, v10, v24);
        RtlSetThreadSubProcessTag(v30);
      }
      if ( v37 )
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*((_QWORD *)v9 + 9) + 24LL));
      if ( v26 )
      {
        RtlAcquireSRWLockExclusive(v27);
        v18 = 1;
        v40 = 1;
        if ( v24 != -1073741267 && v24 != -1073741801 )
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
          goto LABEL_46;
        }
        if ( (v9[15] & 4) != 0 )
        {
          v25 = 1;
          RtlpWnfMarkFailure(v9, (unsigned int)v24, a1[4]);
          goto LABEL_57;
        }
      }
      else
      {
LABEL_57:
        v18 = v40;
      }
LABEL_46:
      v23 = 0;
LABEL_47:
      *((_DWORD *)v9 + 36) = v23;
      v6 = v27;
      if ( !v18 )
        RtlAcquireSRWLockExclusive(v27);
      *((_QWORD *)v9 + 19) = 0LL;
      v8 = v28;
      v3 = a3;
    }
    v28 = *(volatile signed __int32 **)v8;
    RtlpDecRefWnfUserSubscription(v9, &v33, &v34);
    v8 = v28;
    v7 = v35;
    if ( v33 )
    {
      v33(v34, v11, v12, v28);
      v8 = v28;
      v7 = v35;
    }
  }
  RtlReleaseSRWLockExclusive(v6);
  return v25 != 0 ? 0xC000022D : 0;
}
