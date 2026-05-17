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

void __fastcall TpReleaseCleanupGroupMembers(__int64 a1, __int64 a2, __int64 a3, _PEB_LDR_DATA *Ldr)
{
  unsigned int v5; // r15d
  _QWORD *i; // rax
  _QWORD *v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  signed __int32 *v18; // roff
  signed __int32 v19; // r9d
  signed __int32 v20; // r8d
  bool v21; // zf
  signed __int32 v22; // eax
  _QWORD *v23; // rcx
  _QWORD **v24; // r14
  _QWORD *v25; // rbx
  _QWORD *j; // rax
  volatile signed __int32 *v27; // rbx
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  void (__fastcall *v30)(_QWORD, __int64); // rax
  _QWORD *v31; // rsi
  __int64 v32; // rcx
  void (__fastcall *v33)(_QWORD *, _QWORD); // rax
  void (__fastcall *v34)(_QWORD *); // rax
  _QWORD *v35; // [rsp+28h] [rbp-40h]
  volatile signed __int32 *v36; // [rsp+28h] [rbp-40h]
  _QWORD *v37; // [rsp+30h] [rbp-38h]
  _QWORD *v38; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v5 = a2;
  if ( !a1 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    if ( !a1 )
      TppRaiseInvalidParameter(0LL, a2, a3, Ldr);
  }
  else
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
    for ( i = *(_QWORD **)(a1 + 16); i != (_QWORD *)(a1 + 16); i = v37 )
    {
      v8 = i - 5;
      v35 = i - 5;
      v37 = (_QWORD *)*i;
      _m_prefetchw(i + 16);
      v9 = *((_DWORD *)i + 32);
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)v8 + 42, v9 | 0x20000, v9);
      }
      while ( v10 != v9 );
      v11 = v8 + 5;
      if ( (v9 & 0x30000) != 0 )
      {
        v16 = *v11;
        v17 = (_QWORD *)v11[1];
        if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v17 != v11 )
LABEL_23:
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        v18 = (signed __int32 *)v35;
        _m_prefetchw(v35);
        v19 = *v18;
        while ( v19 )
        {
          v20 = v19;
          v22 = _InterlockedCompareExchange((volatile signed __int32 *)v35, v19 + 1, v19);
          v21 = v19 == v22;
          v19 = v22;
          if ( v21 )
            goto LABEL_18;
        }
        v20 = 0;
LABEL_18:
        if ( v20 )
        {
          v23 = *(_QWORD **)(a1 + 72);
          if ( *v23 != a1 + 64 )
            goto LABEL_23;
          *v11 = a1 + 64;
          v11[1] = v23;
          *v23 = v11;
          *(_QWORD *)(a1 + 72) = v11;
        }
        else
        {
          v11[1] = v11;
          *v11 = v11;
        }
      }
      else
      {
        v35[23] = retaddr;
        v12 = *v11;
        v13 = (_QWORD *)v11[1];
        if ( *(_QWORD **)(*v11 + 8LL) != v11 )
          goto LABEL_23;
        if ( (_QWORD *)*v13 != v11 )
          goto LABEL_23;
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        v14 = v35 + 5;
        v15 = *(_QWORD **)(a1 + 72);
        if ( *v15 != a1 + 64 )
          goto LABEL_23;
        *v14 = a1 + 64;
        v35[6] = v15;
        *v15 = v14;
        *(_QWORD *)(a1 + 72) = v14;
      }
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
    v24 = (_QWORD **)(a1 + 64);
    v25 = *(_QWORD **)(a1 + 64);
    while ( v25 != v24 )
    {
      v31 = v25 - 5;
      v25 = (_QWORD *)*v25;
      v32 = v31[1];
      v33 = *(void (__fastcall **)(_QWORD *, _QWORD))(v32 + 16);
      if ( v33 )
      {
        v33(v31, v5);
        v32 = v31[1];
      }
      if ( v5 )
      {
        v34 = *(void (__fastcall **)(_QWORD *))(v32 + 24);
        if ( v34 )
          v34(v31);
      }
    }
    for ( j = *v24; j != v24; j = v38 )
    {
      v27 = (volatile signed __int32 *)(j - 5);
      v36 = (volatile signed __int32 *)(j - 5);
      v38 = (_QWORD *)*j;
      v28 = (_QWORD *)*j;
      v29 = (_QWORD *)j[1];
      if ( *(_QWORD **)(*j + 8LL) != j || (_QWORD *)*v29 != j )
        __fastfail(3u);
      *v29 = v28;
      v28[1] = v29;
      j[1] = j;
      *j = j;
      TppBarrierAdjust(v27 + 14, 0LL, 1LL);
      if ( *((_QWORD *)v27 + 3) )
      {
        if ( (v27[42] & 0x10000) != 0 )
        {
          v27 = v36;
        }
        else
        {
          v30 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)v27 + 3);
          v27 = v36;
          v30(*((_QWORD *)v36 + 11), a3);
        }
      }
      if ( _InterlockedExchangeAdd(v27, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(volatile signed __int32 *))v36 + 1))(v36);
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    TppBarrierAdjust(a1 + 32, 0LL, 1LL);
  }
}
