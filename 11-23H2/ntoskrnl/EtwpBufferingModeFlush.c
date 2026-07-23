/*
 * XREFs of EtwpBufferingModeFlush @ 0x1408A7C78
 * Callers:
 *     EtwpFlushTrace @ 0x1407F5CC8 (EtwpFlushTrace.c)
 * Callees:
 *     EtwpLockUnlockBufferList @ 0x1402279D4 (EtwpLockUnlockBufferList.c)
 *     EtwpPrepareDirtyBuffer @ 0x140227C98 (EtwpPrepareDirtyBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x140228234 (EtwpQueryUsedProcessorCount.c)
 *     EtwpGetEnableInfoIndex @ 0x140228758 (EtwpGetEnableInfoIndex.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeGetPrcb @ 0x1402573F0 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140602648 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpFlushBufferToLogfile @ 0x1406BB400 (EtwpFlushBufferToLogfile.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1406BD94C (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFlushBuffer @ 0x1406BD980 (EtwpFlushBuffer.c)
 *     EtwpPrepareHeader @ 0x1406BDA6C (EtwpPrepareHeader.c)
 *     EtwpFindGuidEntryByGuid @ 0x1406BF850 (EtwpFindGuidEntryByGuid.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     EtwpSendDataBlock @ 0x1407811E0 (EtwpSendDataBlock.c)
 *     EtwpFinalizeHeader @ 0x1407F6108 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1407F69A0 (EtwpCreateLogFile.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x1408A82F4 (EtwpFindAndLockBufferForFlushing.c)
 */

__int64 __fastcall EtwpBufferingModeFlush(unsigned int *a1)
{
  unsigned int v1; // esi
  __int64 v3; // rbp
  unsigned int UsedProcessorCount; // edi
  __int64 v6; // r15
  _QWORD *CurrentServerSiloGlobals; // rax
  _QWORD *GuidEntryByGuid; // rax
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 *v11; // rbp
  _QWORD **v12; // rsi
  __int16 v13; // dx
  _QWORD *i; // rdi
  __int64 v15; // rbp
  __int64 v16; // rsi
  void (__fastcall *v17)(__int64, __int64, __int64); // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  _QWORD *v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int32 v23; // eax
  signed __int64 j; // rcx
  signed __int64 v25; // rax
  __int64 v26; // rsi
  _QWORD *v27; // r12
  _QWORD *v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rax
  signed __int32 v31; // ebp
  signed __int32 v32; // edi
  unsigned int *v33; // rdi
  unsigned __int64 v34; // rdx
  __int64 v35; // r8
  char *k; // rax
  unsigned int *v37; // rcx
  int v38; // ecx
  _QWORD *v39; // rbx
  volatile signed __int64 *v40; // rdi
  __int64 v41; // r8
  unsigned int v42; // r10d
  signed __int64 v43; // rsi
  unsigned int v44; // edx
  signed __int64 v45; // r9
  signed __int64 v46; // rax
  signed __int64 v47; // rtt
  __int64 v48; // rbx
  int v49; // ebp
  __int64 v50; // r8
  unsigned int *v51; // rdx
  __int64 v52; // rcx
  signed __int64 v53; // r8
  __int64 v54; // r10
  signed __int64 v55; // rax
  signed __int64 v56; // rtt
  void *v57; // rcx
  int LogFile; // [rsp+20h] [rbp-B8h]
  unsigned int v59; // [rsp+24h] [rbp-B4h] BYREF
  _DWORD v60[30]; // [rsp+28h] [rbp-B0h] BYREF

  v1 = a1[1];
  v3 = *a1;
  v59 = 0;
  UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)a1);
  if ( (unsigned __int8)EtwpBootPhase > 3u )
    _InterlockedOr((volatile signed __int32 *)a1 + 204, 4u);
  if ( !*((_QWORD *)a1 + 24) )
    return 0LL;
  LogFile = EtwpCreateLogFile((__int64)a1, 0, 0LL);
  LODWORD(v6) = LogFile;
  if ( LogFile < 0 )
    goto LABEL_104;
  if ( (a1[3] & 0x40000) != 0 )
  {
    memset(v60, 0, sizeof(v60));
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(CurrentServerSiloGlobals[108], qword_140015140, 0);
    v9 = (__int64)GuidEntryByGuid;
    if ( GuidEntryByGuid )
    {
      CurrentThread = KeGetCurrentThread();
      v11 = GuidEntryByGuid + 51;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      v12 = (_QWORD **)(v9 + 56);
      *(_QWORD *)(v9 + 416) = KeGetCurrentThread();
      if ( *v12 == v12 || !EtwpGetEnableInfoIndex(v9, *a1, &v59) )
      {
        *(_QWORD *)(v9 + 416) = 0LL;
        ExReleasePushLockEx(v11, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      else
      {
        v60[0] = 3;
        v60[28] = 2;
        v60[18] = 2;
        HIWORD(v60[19]) = v13;
        for ( i = *v12; i != v12; i = (_QWORD *)*i )
          EtwpSendDataBlock((__int64)i, (__int64)v60);
        *(_QWORD *)(v9 + 416) = 0LL;
        ExReleasePushLockEx(v11, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v15 = _InterlockedExchange64((volatile __int64 *)a1 + 16, 0LL);
        if ( v15 )
        {
          do
          {
            v16 = *(_QWORD *)(v15 + 32);
            EtwpWaitForBufferReferenceCount(v15);
            v17 = *(void (__fastcall **)(__int64, __int64, __int64))(v15 + 56);
            v18 = *(_QWORD *)(v15 + 64);
            *(_QWORD *)(v15 + 56) = 0LL;
            *(_QWORD *)(v15 + 64) = 0LL;
            v6 = (unsigned int)EtwpFlushBuffer((__int64)a1, (unsigned int *)v15, v16 == 0);
            *(_WORD *)(v15 + 52) = 0;
            v17(v6, v15, v18);
            v15 = v16;
          }
          while ( v16 );
        }
        EtwpFinalizeHeader((__int64)a1, 0);
      }
    }
    goto LABEL_104;
  }
  if ( UsedProcessorCount )
  {
    v19 = 0LL;
    do
    {
      if ( (a1[3] & 0x10000000) != 0 )
      {
        v20 = a1 + 32;
      }
      else
      {
        v21 = *((_QWORD *)a1 + 137);
        if ( v21 == EtwpHostSiloState )
          v20 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(KeGetPrcb(v59) + 34472) + 320LL) + 8 * v3);
        else
          v20 = (_QWORD *)(*(_QWORD *)((v19 << 6) + *(_QWORD *)(v21 + 4144)) + 8 * v3);
      }
      v22 = *v20 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v22 )
      {
        v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 8), v1);
        if ( v23 <= v1 )
          *(_DWORD *)(v22 + 4) = v23;
        _m_prefetchw(v20);
        for ( j = *v20; (v22 ^ j) <= 0xF; j = v25 )
        {
          v25 = _InterlockedCompareExchange64(v20, 0LL, j);
          if ( j == v25 )
            break;
        }
        if ( (j & 0xFFFFFFFFFFFFFFF0uLL) == v22 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)((j & 0xFFFFFFFFFFFFFFF0uLL) + 12), -(j & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, (LARGE_INTEGER *)v22);
        }
      }
      v19 = v59 + 1;
      v59 = v19;
    }
    while ( (unsigned int)v19 < UsedProcessorCount );
  }
  EtwpLockUnlockBufferList((__int64)a1);
  if ( (a1[3] & 0x4000000) == 0 )
  {
    v40 = (volatile signed __int64 *)(a1 + 328);
    v42 = EtwpQueryUsedProcessorCount((__int64)a1);
    v43 = 0LL;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 164, *((_QWORD *)a1 + 101), -1LL) == -1 )
    {
      if ( *((_QWORD *)a1 + 162) )
      {
        v44 = 0;
        if ( v42 )
        {
          v41 = 0LL;
          do
          {
            v45 = *(_QWORD *)(v41 + *((_QWORD *)a1 + 162));
            v46 = *(_QWORD *)(v41 + *((_QWORD *)a1 + 163));
            if ( v45 > v46 )
            {
              do
              {
                v47 = v46;
                v46 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(*((_QWORD *)a1 + 163) + 8LL * v44),
                        v45,
                        v46);
              }
              while ( v47 != v46 && v45 > v46 );
            }
            ++v44;
            v41 += 8LL;
          }
          while ( v44 < v42 );
        }
      }
      v48 = EtwpFindAndLockBufferForFlushing(a1, *v40, v41);
      if ( v48 )
      {
        v49 = LogFile;
        do
        {
          EtwpWaitForBufferReferenceCount(v48);
          if ( (unsigned int)EtwpPrepareHeader((__int64)a1, v48, 0) != -2147483614 )
          {
            v49 = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)v48);
            if ( !v43 )
              v43 = *(_QWORD *)(v48 + 16);
          }
          _InterlockedAdd64(v40, 0xFFFFFFFFFFFFFFFFuLL);
          _InterlockedExchange((volatile __int32 *)(v48 + 44), 0);
          if ( v49 < 0 )
            break;
          v48 = EtwpFindAndLockBufferForFlushing(a1, *v40, v50);
        }
        while ( v48 );
        LODWORD(v6) = v49;
      }
      v39 = a1 + 328;
      if ( *((_QWORD *)a1 + 163) )
      {
        v51 = (unsigned int *)*((_QWORD *)a1 + 10);
        if ( v51 != a1 + 20 )
        {
          while ( v51 )
          {
            v52 = *((_QWORD *)v51 + 2);
            v53 = *(_QWORD *)(v52 + 16);
            v54 = *(unsigned __int16 *)(v52 + 40);
            if ( v53 < v43 && *(_QWORD *)(v52 + 24) <= *v40 )
            {
              v55 = *(_QWORD *)(*((_QWORD *)a1 + 163) + 8 * v54);
              do
              {
                if ( v53 <= v55 )
                  break;
                v56 = v55;
                v55 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(*((_QWORD *)a1 + 163) + 8 * v54),
                        v53,
                        v55);
              }
              while ( v56 != v55 );
            }
            v51 = *(unsigned int **)v51;
            if ( v51 == a1 + 20 )
              v51 = 0LL;
          }
        }
      }
      goto LABEL_103;
    }
    return 3221225539LL;
  }
  EtwpBufferingModeCompressionFlush((__int64)a1);
  v26 = *((_QWORD *)a1 + 101) + 1LL;
  if ( v26 < 0 )
    goto LABEL_74;
  v27 = a1 + 20;
  do
  {
    v28 = (_QWORD *)*v27;
    --v26;
    v29 = 0LL;
    if ( (_QWORD *)*v27 == v27 || !v28 )
      break;
    while ( 1 )
    {
      v30 = *(_QWORD *)(v28[2] + 24LL);
      if ( v30 == v26 )
        break;
      if ( v30 < v26 && (!v29 || v30 > *(_QWORD *)(v29 + 24)) )
        v29 = v28[2];
      v28 = (_QWORD *)*v28;
      if ( v28 == v27 )
        v28 = 0LL;
      if ( !v28 )
        goto LABEL_49;
    }
    v29 = v28[2];
LABEL_49:
    if ( !v29 )
      break;
    v31 = *(_DWORD *)(v29 + 44);
    if ( (unsigned int)(v31 - 4) <= 1 )
    {
      v32 = _InterlockedCompareExchange((volatile signed __int32 *)(v29 + 44), 3, v31);
      if ( v31 == v32 )
      {
        if ( *(_QWORD *)(v29 + 24) == v26 )
        {
          EtwpWaitForBufferReferenceCount(v29);
          if ( v32 == 5 )
          {
            if ( *(_DWORD *)(v29 + 8) != 72 )
            {
              v33 = (unsigned int *)(v29 + 72);
              v34 = v29 + *(unsigned int *)(v29 + 8);
              *(_QWORD *)(v29 + 104) = 0LL;
              v35 = *(unsigned int *)(v29 + 72);
              for ( k = (char *)(v29 + 72 + v35); (unsigned __int64)k < v34; k = (char *)v33 + *v33 )
              {
                v37 = v33;
                v33 = (unsigned int *)((char *)v33 + (unsigned int)v35);
                *((_QWORD *)v33 + 4) = v37;
                LODWORD(v35) = *v33;
              }
              do
              {
                if ( (unsigned int)EtwpPrepareHeader((__int64)a1, (__int64)v33, 64) == -2147483614 )
                {
                  v38 = LogFile;
                }
                else
                {
                  v38 = EtwpFlushBufferToLogfile((__int64)a1, v33);
                  LogFile = v38;
                }
                v33 = (unsigned int *)*((_QWORD *)v33 + 4);
              }
              while ( v33 );
              _InterlockedCompareExchange((volatile signed __int32 *)(v29 + 44), v31, 5);
LABEL_65:
              if ( v38 < 0 )
                break;
              continue;
            }
            _InterlockedExchange((volatile __int32 *)(v29 + 44), 0);
          }
          else if ( v32 == 4 )
          {
            if ( (unsigned int)EtwpPrepareHeader((__int64)a1, v29, 0) == -2147483614 )
            {
              v38 = LogFile;
            }
            else
            {
              v38 = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)v29);
              LogFile = v38;
            }
            _InterlockedCompareExchange((volatile signed __int32 *)(v29 + 44), v31, 4);
            goto LABEL_65;
          }
        }
        else
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v29 + 44), v31, 3);
        }
      }
    }
  }
  while ( v26 >= 0 );
  LODWORD(v6) = LogFile;
LABEL_74:
  v39 = a1 + 328;
LABEL_103:
  EtwpFinalizeHeader((__int64)a1, 0);
  a1[62] = 0;
  *v39 = -1LL;
LABEL_104:
  v57 = (void *)*((_QWORD *)a1 + 100);
  if ( v57 )
  {
    ZwClose(v57);
    *((_QWORD *)a1 + 100) = 0LL;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 38));
  return (unsigned int)v6;
}
