/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x18006B800
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppBarrierAdjust @ 0x18006BAEC (TppBarrierAdjust.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 */

void __fastcall TpReleaseCleanupGroupMembers(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _PEB_LDR_DATA *Ldr)
{
  unsigned int v5; // r15d
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  _QWORD *i; // rax
  volatile signed __int32 *v11; // rdx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  signed __int32 *v14; // rdx
  __int64 v15; // r8
  signed __int32 **v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // r8
  signed __int32 **v20; // rax
  signed __int32 v21; // r9d
  signed __int32 v22; // r8d
  bool v23; // zf
  signed __int32 v24; // eax
  signed __int32 **v25; // rcx
  _QWORD **v26; // r14
  _QWORD *v27; // rsi
  _QWORD *j; // rax
  volatile signed __int32 *v29; // rdi
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  void (__fastcall *v32)(_QWORD, unsigned __int64); // rax
  _QWORD *v33; // rdi
  void (__fastcall *v34)(_QWORD *, _QWORD); // rax
  void (__fastcall *v35)(_QWORD *); // rax
  signed __int32 *v36; // [rsp+28h] [rbp-40h]
  volatile signed __int32 *v37; // [rsp+28h] [rbp-40h]
  _QWORD *v38; // [rsp+30h] [rbp-38h]
  _QWORD *v39; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v5 = a2;
  if ( !a1 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    if ( !a1 )
      TppRaiseInvalidParameter(0LL, a2, a3, Ldr);
  }
  else
  {
    RtlAcquireSRWLockExclusive(a1 + 56, a2, a3, (unsigned __int64)Ldr);
    RtlAcquireSRWLockExclusive(a1 + 8, v7, v8, v9);
    for ( i = *(_QWORD **)(a1 + 16); i != (_QWORD *)(a1 + 16); i = v38 )
    {
      v11 = (volatile signed __int32 *)(i - 5);
      v36 = (signed __int32 *)(i - 5);
      v38 = (_QWORD *)*i;
      _m_prefetchw(i + 16);
      v12 = *((_DWORD *)i + 32);
      do
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange(v11 + 42, v12 | 0x20000, v12);
      }
      while ( v13 != v12 );
      v14 = v36 + 10;
      if ( (v12 & 0x30000) != 0 )
      {
        v19 = *(_QWORD *)v14;
        v20 = (signed __int32 **)*((_QWORD *)v36 + 6);
        if ( *(signed __int32 **)(*(_QWORD *)v14 + 8LL) != v14 || *v20 != v14 )
LABEL_23:
          __fastfail(3u);
        *v20 = (signed __int32 *)v19;
        *(_QWORD *)(v19 + 8) = v20;
        _m_prefetchw(v36);
        v21 = *v36;
        while ( v21 )
        {
          v22 = v21;
          v24 = _InterlockedCompareExchange(v36, v21 + 1, v21);
          v23 = v21 == v24;
          v21 = v24;
          if ( v23 )
            goto LABEL_18;
        }
        v22 = 0;
LABEL_18:
        if ( v22 )
        {
          v25 = *(signed __int32 ***)(a1 + 72);
          if ( *v25 != (signed __int32 *)(a1 + 64) )
            goto LABEL_23;
          *(_QWORD *)v14 = a1 + 64;
          *((_QWORD *)v36 + 6) = v25;
          *v25 = v14;
          *(_QWORD *)(a1 + 72) = v14;
        }
        else
        {
          *((_QWORD *)v36 + 6) = v36 + 10;
          *(_QWORD *)v14 = v14;
        }
      }
      else
      {
        *((_QWORD *)v36 + 23) = retaddr;
        v15 = *(_QWORD *)v14;
        v16 = (signed __int32 **)*((_QWORD *)v36 + 6);
        if ( *(signed __int32 **)(*(_QWORD *)v14 + 8LL) != v14 )
          goto LABEL_23;
        if ( *v16 != v14 )
          goto LABEL_23;
        *v16 = (signed __int32 *)v15;
        *(_QWORD *)(v15 + 8) = v16;
        v17 = v36 + 10;
        v18 = *(_QWORD **)(a1 + 72);
        if ( *v18 != a1 + 64 )
          goto LABEL_23;
        *v17 = a1 + 64;
        *((_QWORD *)v36 + 6) = v18;
        *v18 = v17;
        *(_QWORD *)(a1 + 72) = v17;
      }
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
    v26 = (_QWORD **)(a1 + 64);
    v27 = *(_QWORD **)(a1 + 64);
    while ( v27 != v26 )
    {
      v33 = v27 - 5;
      v27 = (_QWORD *)*v27;
      v34 = *(void (__fastcall **)(_QWORD *, _QWORD))(v33[1] + 16LL);
      if ( v34 )
        v34(v33, v5);
      if ( v5 )
      {
        v35 = *(void (__fastcall **)(_QWORD *))(v33[1] + 24LL);
        if ( v35 )
          v35(v33);
      }
    }
    for ( j = *v26; j != v26; j = v39 )
    {
      v29 = (volatile signed __int32 *)(j - 5);
      v37 = (volatile signed __int32 *)(j - 5);
      v39 = (_QWORD *)*j;
      v30 = (_QWORD *)*j;
      v31 = (_QWORD *)j[1];
      if ( *(_QWORD **)(*j + 8LL) != j || (_QWORD *)*v31 != j )
        __fastfail(3u);
      *v31 = v30;
      v30[1] = v31;
      j[1] = j;
      *j = j;
      TppBarrierAdjust(v29 + 14, 0LL);
      if ( *((_QWORD *)v29 + 3) )
      {
        if ( (v29[42] & 0x10000) != 0 )
        {
          v29 = v37;
        }
        else
        {
          v32 = (void (__fastcall *)(_QWORD, unsigned __int64))*((_QWORD *)v29 + 3);
          v29 = v37;
          v32(*((_QWORD *)v37 + 11), a3);
        }
      }
      if ( _InterlockedExchangeAdd(v29, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(volatile signed __int32 *))v37 + 1))(v37);
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    TppBarrierAdjust(a1 + 32, 0LL);
  }
}
