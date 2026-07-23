/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x180067D30
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     TppBarrierAdjust @ 0x180068030 (TppBarrierAdjust.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
 */

// local variable allocation has failed, the output may be wrong!
void __cdecl TpReleaseCleanupGroupMembers(
        PTP_CLEANUP_GROUP CleanupGroup,
        LOGICAL CancelPendingCallbacks,
        PVOID CleanupParameter)
{
  _TP_CLEANUP_GROUP *i; // rax
  volatile signed __int32 *v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  _TP_CLEANUP_GROUP *v10; // rdx
  _TP_CLEANUP_GROUP *v11; // rcx
  _TP_CLEANUP_GROUP **v12; // rax
  _TP_CLEANUP_GROUP *v13; // rax
  PTP_CLEANUP_GROUP *v14; // rdx
  _TP_CLEANUP_GROUP *v15; // rcx
  _TP_CLEANUP_GROUP **v16; // rax
  signed __int32 *v17; // roff
  signed __int32 v18; // r9d
  signed __int32 v19; // r8d
  bool v20; // zf
  signed __int32 v21; // eax
  PTP_CLEANUP_GROUP *v22; // rcx
  _QWORD **v23; // r14
  _QWORD *v24; // rbx
  _QWORD *j; // rax
  volatile signed __int32 *v26; // rbx
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  void (__fastcall *v29)(_QWORD, PVOID); // rax
  _QWORD *v30; // rsi
  __int64 v31; // rcx
  void (__fastcall *v32)(_QWORD *, _QWORD); // rax
  void (__fastcall *v33)(_QWORD *); // rax
  signed __int32 *v34; // [rsp+28h] [rbp-40h]
  volatile signed __int32 *v35; // [rsp+28h] [rbp-40h]
  _TP_CLEANUP_GROUP *v36; // [rsp+30h] [rbp-38h]
  _QWORD *v37; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( !CleanupGroup || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !CleanupGroup )
      TppRaiseInvalidParameter(0LL, *(_QWORD *)&CancelPendingCallbacks, CleanupParameter);
  }
  else
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 7);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 1);
    for ( i = (_TP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 2);
          i != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 16);
          i = v36 )
    {
      v7 = (volatile signed __int32 *)((char *)i - 40);
      v34 = (signed __int32 *)((char *)i - 40);
      v36 = *(_TP_CLEANUP_GROUP **)i;
      _m_prefetchw((char *)i + 128);
      v8 = *((_DWORD *)i + 32);
      do
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange(v7 + 42, v8 | 0x20000, v8);
      }
      while ( v9 != v8 );
      v10 = (_TP_CLEANUP_GROUP *)(v7 + 10);
      if ( (v8 & 0x30000) != 0 )
      {
        v15 = *(_TP_CLEANUP_GROUP **)v10;
        v16 = (_TP_CLEANUP_GROUP **)*((_QWORD *)v10 + 1);
        if ( *(_TP_CLEANUP_GROUP **)(*(_QWORD *)v10 + 8LL) != v10 || *v16 != v10 )
LABEL_23:
          __fastfail(3u);
        *v16 = v15;
        *((_QWORD *)v15 + 1) = v16;
        v17 = v34;
        _m_prefetchw(v34);
        v18 = *v17;
        while ( v18 )
        {
          v19 = v18;
          v21 = _InterlockedCompareExchange(v34, v18 + 1, v18);
          v20 = v18 == v21;
          v18 = v21;
          if ( v20 )
            goto LABEL_18;
        }
        v19 = 0;
LABEL_18:
        if ( v19 )
        {
          v22 = (PTP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 9);
          if ( *v22 != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 64) )
            goto LABEL_23;
          *(_QWORD *)v10 = (char *)CleanupGroup + 64;
          *((_QWORD *)v10 + 1) = v22;
          *v22 = v10;
          *((_QWORD *)CleanupGroup + 9) = v10;
        }
        else
        {
          *((_QWORD *)v10 + 1) = v10;
          *(_QWORD *)v10 = v10;
        }
      }
      else
      {
        *((_QWORD *)v34 + 23) = retaddr;
        v11 = *(_TP_CLEANUP_GROUP **)v10;
        v12 = (_TP_CLEANUP_GROUP **)*((_QWORD *)v10 + 1);
        if ( *(_TP_CLEANUP_GROUP **)(*(_QWORD *)v10 + 8LL) != v10 )
          goto LABEL_23;
        if ( *v12 != v10 )
          goto LABEL_23;
        *v12 = v11;
        *((_QWORD *)v11 + 1) = v12;
        v13 = (_TP_CLEANUP_GROUP *)(v34 + 10);
        v14 = (PTP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 9);
        if ( *v14 != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 64) )
          goto LABEL_23;
        *(_QWORD *)v13 = (char *)CleanupGroup + 64;
        *((_QWORD *)v34 + 6) = v14;
        *v14 = v13;
        *((_QWORD *)CleanupGroup + 9) = v13;
      }
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 1);
    v23 = (_QWORD **)((char *)CleanupGroup + 64);
    v24 = (_QWORD *)*((_QWORD *)CleanupGroup + 8);
    while ( v24 != v23 )
    {
      v30 = v24 - 5;
      v24 = (_QWORD *)*v24;
      v31 = v30[1];
      v32 = *(void (__fastcall **)(_QWORD *, _QWORD))(v31 + 16);
      if ( v32 )
      {
        v32(v30, CancelPendingCallbacks);
        v31 = v30[1];
      }
      if ( CancelPendingCallbacks )
      {
        v33 = *(void (__fastcall **)(_QWORD *))(v31 + 24);
        if ( v33 )
          v33(v30);
      }
    }
    for ( j = *v23; j != v23; j = v37 )
    {
      v26 = (volatile signed __int32 *)(j - 5);
      v35 = (volatile signed __int32 *)(j - 5);
      v37 = (_QWORD *)*j;
      v27 = (_QWORD *)*j;
      v28 = (_QWORD *)j[1];
      if ( *(_QWORD **)(*j + 8LL) != j || (_QWORD *)*v28 != j )
        __fastfail(3u);
      *v28 = v27;
      v27[1] = v28;
      j[1] = j;
      *j = j;
      TppBarrierAdjust(v26 + 14, 0LL, 1LL);
      if ( *((_QWORD *)v26 + 3) )
      {
        if ( (v26[42] & 0x10000) != 0 )
        {
          v26 = v35;
        }
        else
        {
          v29 = (void (__fastcall *)(_QWORD, PVOID))*((_QWORD *)v26 + 3);
          v26 = v35;
          v29(*((_QWORD *)v35 + 11), CleanupParameter);
        }
      }
      if ( _InterlockedExchangeAdd(v26, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(volatile signed __int32 *))v35 + 1))(v35);
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 7);
    TppBarrierAdjust((char *)CleanupGroup + 32, 0LL, 1LL);
  }
}
