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

char __fastcall TppPrepareDirectParams(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, char *a6)
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
  _QWORD *v16; // rax
  bool v17; // r14
  bool v18; // r12
  signed __int64 v19; // rax
  char v20; // di
  char v21; // bl
  __int64 v22; // r9
  char v23; // r10
  signed __int64 v24; // rdx
  signed __int64 v25; // rtt
  char result; // al
  _QWORD *v27; // rbx
  _QWORD *v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // rbx
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  __int64 ***v33; // rax
  __int64 **v34; // rcx
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
  __int64 **v45; // rax
  unsigned int j; // edi
  __int64 v47; // rbx
  unsigned int v48; // edi
  unsigned int v49; // ebx
  unsigned int v50; // ebx
  int v51; // [rsp+20h] [rbp-30h]
  __int64 v52; // [rsp+28h] [rbp-28h]
  _QWORD *v53; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v54; // [rsp+38h] [rbp-18h]
  __int64 *v55; // [rsp+40h] [rbp-10h] BYREF
  __int64 **v56; // [rsp+48h] [rbp-8h]
  char v57; // [rsp+90h] [rbp+40h]
  signed __int64 v58; // [rsp+90h] [rbp+40h]
  char v59; // [rsp+98h] [rbp+48h]
  int v60; // [rsp+A0h] [rbp+50h]

  v60 = a3;
  v6 = a1 + 312;
  v8 = a4;
  v9 = 0;
  v10 = 0;
  LODWORD(v52) = 0;
  v11 = 0;
  v57 = 0;
  v12 = 0LL;
  v51 = 0;
  v59 = 0;
  if ( a2 == a1 + 312 )
  {
    v18 = *(_QWORD *)v6 != 0LL;
    v17 = *(_QWORD *)v6 == 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 0LL;
    v56 = &v55;
    v13 = a3;
    v14 = a2 + 56 * v8;
    v55 = (__int64 *)&v55;
    *(_DWORD *)(v14 + 8) += a3 - 1;
    do
    {
      v15 = (_OWORD *)(a2 + 32LL * --v13);
      v16 = *(_QWORD **)v15;
      v53 = v16;
      if ( v16 )
      {
        if ( v10 )
        {
          v27 = (_QWORD *)(a2 + 56LL * v13);
          v54 = v16 + 4;
          memmove(v27, v15, 0x20uLL);
          v28 = v54;
          v27[6] = v14;
          RtlAcquireSRWLockExclusive(v28);
          v29 = v53;
          v30 = v27 + 4;
          v31 = v53 + 5;
          v54 = (_QWORD *)v53[5];
          v32 = (_QWORD *)v53[6];
          if ( (_QWORD *)*v32 != v53 + 5 )
            goto LABEL_65;
          *v30 = v31;
          v30[1] = v32;
          *v32 = v30;
          v31[1] = v30;
          RtlReleaseSRWLockExclusive(v29 + 4);
          v9 = v52 + 1;
          LODWORD(v52) = v52 + 1;
          if ( v54 == v53 + 5 )
          {
            v33 = (__int64 ***)(v53 + 2);
            v34 = v56;
            if ( *v56 != (__int64 *)&v55 )
LABEL_65:
              __fastfail(3u);
            *v33 = &v55;
            v11 = v51 + 1;
            v33[1] = v34;
            *v34 = (__int64 *)v33;
            v56 = (__int64 **)v33;
            ++v51;
          }
          else
          {
            v11 = v51;
          }
          v10 = v57;
        }
        else
        {
          v10 = 1;
          v57 = 1;
          *(_OWORD *)v6 = *v15;
          *(_OWORD *)(v6 + 16) = v15[1];
        }
      }
      else
      {
        v59 = 1;
      }
    }
    while ( v13 );
    if ( v9 != v60 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 3145728), *(_QWORD *)v14);
      v11 = v51;
    }
    if ( v11 )
    {
      v35 = (__int64)(v55 - 2);
      v36 = 4294967294LL;
      while ( (_QWORD **)v35 != &v53 )
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
      v52 = v12;
      if ( (_DWORD)v12 )
      {
        v38 = v12;
        do
        {
          _BitScanForward((unsigned int *)&v39, v38);
          RtlAcquireSRWLockExclusive(*(_QWORD *)(a5 + 24) + 8 * (v39 + 2 * (v39 + 1)));
          v38 &= ~(1 << v39);
        }
        while ( v38 );
      }
      for ( i = HIDWORD(v52); i; i &= ~(1 << v49) )
      {
        _BitScanForward(&v49, i);
        RtlAcquireSRWLockExclusive(*(_QWORD *)(a5 + 24) + 8 * (v49 + 32 + 2 * (v49 + 32 + 1LL)));
      }
      while ( 1 )
      {
        v41 = v55;
        if ( v55 == (__int64 *)&v55 )
          break;
        v42 = (__int64 *)*v55;
        if ( *(__int64 **)(*v55 + 8) != v55 )
          goto LABEL_65;
        v43 = (__int64 **)v55[1];
        if ( *v43 != v55 )
          goto LABEL_65;
        *v43 = v42;
        v42[1] = (__int64)v43;
        v44 = v41;
        a3 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v41 - 2);
        v45 = *(__int64 ***)(a3 + 8);
        if ( *v45 != (__int64 *)a3 )
          goto LABEL_65;
        *v44 = a3;
        v44[1] = (__int64)v45;
        *v45 = v44;
        *(_QWORD *)(a3 + 8) = v44;
      }
      v52 = v12;
      if ( HIDWORD(v12) )
      {
        v48 = HIDWORD(v52);
        do
        {
          _BitScanReverse(&v50, v48);
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a5 + 24)
                                                               + 8 * (v50 + 32 + 2 * (v50 + 32 + 1LL))));
          v48 &= ~(1 << v50);
        }
        while ( v48 );
      }
      for ( j = v52; j; j &= ~(1 << v47) )
      {
        _BitScanReverse((unsigned int *)&v47, j);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a5 + 24) + 8 * (v47 + 2 * (v47 + 1))));
      }
      v11 = v51;
    }
    v17 = v59;
    v18 = v57;
  }
  _m_prefetchw((const void *)(a5 + 8));
  v19 = *(_QWORD *)(a5 + 8);
  LODWORD(v58) = v19;
  do
  {
    v20 = *(_BYTE *)(a5 + 376);
    v21 = 0;
    v22 = (unsigned int)(v11 + HIDWORD(v19));
    v23 = 0;
    HIDWORD(v58) = v11 + HIDWORD(v19);
    if ( !v20 )
    {
      a3 = (unsigned int)v58 ^ (unsigned __int16)(v58 ^ (v58 - 1));
      LODWORD(v58) = v58 ^ (unsigned __int16)(v58 ^ (v58 - 1));
      if ( v17 )
      {
        a3 = (unsigned __int16)a3 | ((WORD1(a3) - 1) << 16);
        LODWORD(v58) = a3;
      }
      if ( !v18 )
      {
        if ( (_DWORD)v22 )
        {
          v22 = (unsigned int)(v22 - 1);
          HIDWORD(v58) = v22;
        }
        else
        {
          v21 = 1;
          a3 = (unsigned __int16)(a3 ^ (a3 + 1)) ^ (unsigned int)a3;
          LODWORD(v58) = a3;
        }
      }
      if ( (v11 || v17) && (_DWORD)v22 && (a3 & 0xFFFF0000) == 0 )
      {
        a3 = (unsigned int)(a3 + 0x10000);
        v23 = 1;
        LODWORD(v58) = a3;
      }
    }
    v24 = v58;
    v25 = v19;
    v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(a5 + 8), v58, v19);
    LODWORD(v58) = v19;
  }
  while ( v25 != v19 );
  if ( v23 )
    NtReleaseWorkerFactoryWorker(*(_QWORD *)(a5 + 56), v24, a3, v22);
  result = v20;
  *a6 = v21;
  return result;
}
