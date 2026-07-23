/*
 * XREFs of TppPrepareDirectParams @ 0x1800366DC
 * Callers:
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     TppUpdatePoolNodeStatus @ 0x1800859F4 (TppUpdatePoolNodeStatus.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1800A3E20 (NtReleaseWorkerFactoryWorker.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

char __fastcall TppPrepareDirectParams(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, char *a6)
{
  __int64 v6; // r15
  __int64 v8; // rax
  int v9; // r9d
  char v10; // r10
  int v11; // r11d
  __int64 v12; // rdi
  unsigned int v13; // r12d
  __int64 v14; // r14
  _OWORD *v15; // rdx
  _RTL_SRWLOCK *v16; // rax
  bool v17; // r14
  bool v18; // r12
  signed __int64 v19; // rax
  char v20; // di
  char v21; // bl
  int v22; // r9d
  char v23; // r10
  unsigned int v24; // r8d
  signed __int64 v25; // rtt
  char result; // al
  _RTL_SRWLOCK **v27; // rbx
  _RTL_SRWLOCK *v28; // rcx
  _RTL_SRWLOCK *v29; // rcx
  _RTL_SRWLOCK **v30; // rbx
  _RTL_SRWLOCK *v31; // rax
  _RTL_SRWLOCK **Value; // rdx
  unsigned __int64 *v33; // rax
  unsigned __int64 **v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned int v37; // r8d
  unsigned int v38; // r14d
  __int64 v39; // rbx
  unsigned int i; // r14d
  __int64 *v41; // rax
  __int64 *v42; // rdx
  __int64 **v43; // rcx
  __int64 *v44; // rdx
  __int64 v45; // r8
  __int64 **v46; // rax
  unsigned int j; // edi
  __int64 v48; // rbx
  unsigned int v49; // edi
  unsigned int v50; // ebx
  unsigned int v51; // ebx
  int v52; // [rsp+20h] [rbp-30h]
  __int64 v53; // [rsp+28h] [rbp-28h]
  _RTL_SRWLOCK *v54; // [rsp+30h] [rbp-20h] BYREF
  PRTL_SRWLOCK SRWLock; // [rsp+38h] [rbp-18h]
  __int64 *v56; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 *v57; // [rsp+48h] [rbp-8h]
  char v58; // [rsp+90h] [rbp+40h]
  signed __int64 v59; // [rsp+90h] [rbp+40h]
  char v60; // [rsp+98h] [rbp+48h]

  v6 = a1 + 312;
  v8 = a4;
  v9 = 0;
  v10 = 0;
  LODWORD(v53) = 0;
  v11 = 0;
  v58 = 0;
  v12 = 0LL;
  v52 = 0;
  v60 = 0;
  if ( a2 == a1 + 312 )
  {
    v18 = *(_QWORD *)v6 != 0LL;
    v17 = *(_QWORD *)v6 == 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 0LL;
    v57 = (unsigned __int64 *)&v56;
    v13 = a3;
    v14 = a2 + 56 * v8;
    v56 = (__int64 *)&v56;
    *(_DWORD *)(v14 + 8) += a3 - 1;
    do
    {
      v15 = (_OWORD *)(a2 + 32LL * --v13);
      v16 = *(_RTL_SRWLOCK **)v15;
      v54 = v16;
      if ( v16 )
      {
        if ( v10 )
        {
          v27 = (_RTL_SRWLOCK **)(a2 + 56LL * v13);
          SRWLock = v16 + 4;
          memmove(v27, v15, 0x20uLL);
          v28 = SRWLock;
          v27[6] = (_RTL_SRWLOCK *)v14;
          RtlAcquireSRWLockExclusive(v28);
          v29 = v54;
          v30 = v27 + 4;
          v31 = v54 + 5;
          SRWLock = (PRTL_SRWLOCK)v54[5].Value;
          Value = (_RTL_SRWLOCK **)v54[6].Value;
          if ( *Value != &v54[5] )
            goto LABEL_65;
          *v30 = v31;
          v30[1] = (_RTL_SRWLOCK *)Value;
          *Value = (_RTL_SRWLOCK *)v30;
          v31[1].Value = (unsigned __int64)v30;
          RtlReleaseSRWLockExclusive(v29 + 4);
          v9 = v53 + 1;
          LODWORD(v53) = v53 + 1;
          if ( SRWLock == &v54[5] )
          {
            v33 = (unsigned __int64 *)&v54[2];
            v34 = (unsigned __int64 **)v57;
            if ( (__int64 **)*v57 != &v56 )
LABEL_65:
              __fastfail(3u);
            *v33 = (unsigned __int64)&v56;
            v11 = v52 + 1;
            v33[1] = (unsigned __int64)v34;
            *v34 = v33;
            v57 = v33;
            ++v52;
          }
          else
          {
            v11 = v52;
          }
          v10 = v58;
        }
        else
        {
          v10 = 1;
          v58 = 1;
          *(_OWORD *)v6 = *v15;
          *(_OWORD *)(v6 + 16) = v15[1];
        }
      }
      else
      {
        v60 = 1;
      }
    }
    while ( v13 );
    if ( v9 != a3 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(PVOID *)v14);
      v11 = v52;
    }
    if ( v11 )
    {
      v35 = (__int64)(v56 - 2);
      v36 = 4294967294LL;
      while ( (_RTL_SRWLOCK **)v35 != &v54 )
      {
        v37 = *(_DWORD *)(v35 + 8);
        v12 |= 1LL << v37;
        if ( (_DWORD)v36 != -1 )
        {
          if ( (_DWORD)v36 == -2 )
          {
            v36 = v37;
          }
          else if ( (_DWORD)v36 != v37 )
          {
            v36 = 0xFFFFFFFFLL;
          }
        }
        v35 = *(_QWORD *)(v35 + 16) - 16LL;
      }
      TppUpdatePoolNodeStatus(a5, v36);
      v53 = v12;
      if ( (_DWORD)v12 )
      {
        v38 = v12;
        do
        {
          _BitScanForward((unsigned int *)&v39, v38);
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v39 + 2 * (v39 + 1))));
          v38 &= ~(1 << v39);
        }
        while ( v38 );
      }
      for ( i = HIDWORD(v53); i; i &= ~(1 << v50) )
      {
        _BitScanForward(&v50, i);
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v50 + 32 + 2 * (v50 + 32 + 1LL))));
      }
      while ( 1 )
      {
        v41 = v56;
        if ( v56 == (__int64 *)&v56 )
          break;
        v42 = (__int64 *)*v56;
        if ( *(__int64 **)(*v56 + 8) != v56 )
          goto LABEL_65;
        v43 = (__int64 **)v56[1];
        if ( *v43 != v56 )
          goto LABEL_65;
        *v43 = v42;
        v42[1] = (__int64)v43;
        v44 = v41;
        v45 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v41 - 2);
        v46 = *(__int64 ***)(v45 + 8);
        if ( *v46 != (__int64 *)v45 )
          goto LABEL_65;
        *v44 = v45;
        v44[1] = (__int64)v46;
        *v46 = v44;
        *(_QWORD *)(v45 + 8) = v44;
      }
      v53 = v12;
      if ( HIDWORD(v12) )
      {
        v49 = HIDWORD(v53);
        do
        {
          _BitScanReverse(&v51, v49);
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v51 + 32 + 2 * (v51 + 32 + 1LL))));
          v49 &= ~(1 << v51);
        }
        while ( v49 );
      }
      for ( j = v53; j; j &= ~(1 << v48) )
      {
        _BitScanReverse((unsigned int *)&v48, j);
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v48 + 2 * (v48 + 1))));
      }
      v11 = v52;
    }
    v17 = v60;
    v18 = v58;
  }
  _m_prefetchw((const void *)(a5 + 8));
  v19 = *(_QWORD *)(a5 + 8);
  LODWORD(v59) = v19;
  do
  {
    v20 = *(_BYTE *)(a5 + 376);
    v21 = 0;
    v22 = v11 + HIDWORD(v19);
    v23 = 0;
    HIDWORD(v59) = v11 + HIDWORD(v19);
    if ( !v20 )
    {
      v24 = v59 ^ (unsigned __int16)(v59 ^ (v59 - 1));
      LODWORD(v59) = v24;
      if ( v17 )
      {
        v24 = (unsigned __int16)v24 | ((HIWORD(v24) - 1) << 16);
        LODWORD(v59) = v24;
      }
      if ( !v18 )
      {
        if ( v22 )
        {
          HIDWORD(v59) = --v22;
        }
        else
        {
          v21 = 1;
          v24 ^= (unsigned __int16)(v24 ^ (v24 + 1));
          LODWORD(v59) = v24;
        }
      }
      if ( (v11 || v17) && v22 && (v24 & 0xFFFF0000) == 0 )
      {
        v23 = 1;
        LODWORD(v59) = v24 + 0x10000;
      }
    }
    v25 = v19;
    v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(a5 + 8), v59, v19);
    LODWORD(v59) = v19;
  }
  while ( v25 != v19 );
  if ( v23 )
    NtReleaseWorkerFactoryWorker(*(HANDLE *)(a5 + 56));
  result = v20;
  *a6 = v21;
  return result;
}
