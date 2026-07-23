/*
 * XREFs of EtwpFlushActiveBuffers @ 0x1406BDE48
 * Callers:
 *     EtwpLogger @ 0x1407732F0 (EtwpLogger.c)
 * Callees:
 *     EtwpLockUnlockBufferList @ 0x1402279D4 (EtwpLockUnlockBufferList.c)
 *     EtwpRequestFlushTimer @ 0x140227BD0 (EtwpRequestFlushTimer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140227C98 (EtwpPrepareDirtyBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1402280B8 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x140228234 (EtwpQueryUsedProcessorCount.c)
 *     KeGetPrcb @ 0x1402573F0 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1406BD94C (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFlushBuffer @ 0x1406BD980 (EtwpFlushBuffer.c)
 *     EtwpAdjustFreeBuffers @ 0x1406BDDDC (EtwpAdjustFreeBuffers.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1407F77A0 (EtwpRealtimeSendEmptyMarker.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(unsigned int *a1, int a2)
{
  __int64 *v5; // r15
  int v6; // esi
  __int64 v7; // rax
  signed int v8; // ebp
  unsigned __int64 *v9; // r14
  __int64 v10; // r12
  _QWORD *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int32 v15; // eax
  signed __int64 i; // rcx
  signed __int64 v17; // rax
  LARGE_INTEGER *QuadPart; // rax
  LARGE_INTEGER v19; // rcx
  unsigned __int64 v20; // rax
  _QWORD **v21; // r14
  __int64 v22; // rbx
  __int64 *v23; // rsi
  __int64 v24; // r10
  __int64 v25; // r9
  __int64 v26; // r11
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // eax
  unsigned __int16 v34; // r15
  unsigned int v35; // ebp
  _QWORD *v36; // rbx
  unsigned __int16 v37; // ax
  unsigned int *v38; // rsi
  _QWORD *v39; // r13
  _QWORD *v40; // r14
  unsigned int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // r12d
  char v44; // [rsp+20h] [rbp-158h]
  unsigned __int16 v45; // [rsp+28h] [rbp-150h]
  _BYTE v47[256]; // [rsp+40h] [rbp-138h] BYREF

  memset(v47, 0, sizeof(v47));
  if ( !*((_QWORD *)a1 + 100) && !*((_QWORD *)a1 + 45) )
  {
    if ( a1[52] )
      EtwpRequestFlushTimer((__int64)a1, 0);
    return 259LL;
  }
  v5 = (__int64 *)v47;
  v44 = 0;
  v6 = 0;
  if ( *((_QWORD *)a1 + 132) )
    v5 = (__int64 *)*((_QWORD *)a1 + 132);
  if ( (a1[3] & 0x40000) != 0 )
  {
    v7 = _InterlockedExchange64((volatile __int64 *)a1 + 16, 0LL);
    if ( v7 )
    {
      *v5 = v7;
      v6 = 1;
    }
    goto LABEL_39;
  }
  v8 = EtwpQueryUsedProcessorCount((__int64)a1) - 1;
  if ( v8 >= 0 )
  {
    v9 = (unsigned __int64 *)v5;
    v10 = (__int64)v8 << 6;
    while ( 1 )
    {
      if ( (a1[3] & 0x10000000) != 0 )
      {
        v11 = a1 + 32;
      }
      else
      {
        v12 = *((_QWORD *)a1 + 137);
        if ( v12 == EtwpHostSiloState )
          v13 = *(_QWORD *)(*(_QWORD *)(KeGetPrcb(v8) + 34472) + 320LL);
        else
          v13 = *(_QWORD *)(*(_QWORD *)(v12 + 4144) + v10);
        v11 = (_QWORD *)(v13 + 8LL * *a1);
      }
      v14 = *v11 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( !v14 )
        goto LABEL_37;
      if ( a2 )
        break;
      v20 = *(_QWORD *)((*v11 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
      if ( v20 )
      {
        *v9 = v20;
        *(_QWORD *)(v14 + 32) = 0LL;
LABEL_36:
        ++v6;
        ++v9;
      }
LABEL_37:
      v10 -= 64LL;
      if ( --v8 < 0 )
        goto LABEL_38;
    }
    v15 = _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), a1[1]);
    if ( v15 <= a1[1] )
      *(_DWORD *)(v14 + 4) = v15;
    _m_prefetchw(v11);
    for ( i = *v11; (v14 ^ i) <= 0xF; i = v17 )
    {
      v17 = _InterlockedCompareExchange64(v11, 0LL, i);
      if ( i == v17 )
        break;
    }
    QuadPart = (LARGE_INTEGER *)(i & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v14 )
    {
      _InterlockedExchangeAdd(&QuadPart[1].HighPart, -(i & 0xF));
      EtwpPrepareDirtyBuffer((__int64)a1, QuadPart);
    }
    else
    {
      if ( QuadPart )
      {
        do
        {
          v19 = QuadPart[4];
          if ( v19.QuadPart == v14 )
            break;
          QuadPart = (LARGE_INTEGER *)QuadPart[4].QuadPart;
        }
        while ( v19.QuadPart );
      }
      QuadPart[4].QuadPart = 0LL;
      v44 = 1;
    }
    *v9 = v14;
    goto LABEL_36;
  }
LABEL_38:
  EtwpLockUnlockBufferList((__int64)a1);
LABEL_39:
  v21 = 0LL;
  if ( v6 > 0 )
  {
    v22 = v6;
    v23 = &v5[v6 - 1];
    do
    {
      v24 = 1LL;
      v25 = 0LL;
      if ( (unsigned __int64)v22 > 1 )
      {
        v26 = 0LL;
        do
        {
          v27 = 8 * v24;
          v28 = *(_QWORD *)(v5[v24] + 16);
          v29 = *(_QWORD *)(*(__int64 *)((char *)v5 + v26) + 16);
          v30 = v24;
          if ( v28 <= v29 )
            v30 = v25;
          ++v24;
          v25 = v30;
          if ( v28 <= v29 )
            v27 = v26;
          v26 = v27;
        }
        while ( v24 < v22 );
      }
      v31 = v5[v25];
      v32 = *(_QWORD *)(v31 + 32);
      v5[v25] = v32;
      if ( !v32 )
      {
        --v22;
        v5[v25] = *v23--;
      }
      if ( *(int *)(v31 + 12) <= 0
        && (v33 = *(_DWORD *)(v31 + 4), v33 <= 0x48)
        && (v33 || *(_DWORD *)(v31 + 8) <= 0x48u) )
      {
        *(_WORD *)(v31 + 52) = 0;
        EtwpEnqueueAvailableBuffer((__int64)a1, (unsigned int *)v31, 0);
      }
      else
      {
        *(_QWORD *)(v31 + 32) = v21;
        v21 = (_QWORD **)(v31 + 32);
      }
    }
    while ( v22 > 0 );
  }
  v34 = 0;
  v35 = 0;
  if ( v21 )
  {
    v36 = *v21;
    v37 = a2 != 0;
    v45 = v37;
    do
    {
      v38 = (unsigned int *)(v21 - 4);
      if ( !v36 )
        v34 = v37;
      EtwpAdjustFreeBuffers((__int64)a1);
      EtwpWaitForBufferReferenceCount((__int64)(v21 - 4));
      *v21 = 0LL;
      v39 = 0LL;
      if ( (a1[3] & 0x40000) != 0 )
      {
        v39 = (_QWORD *)*((_QWORD *)v38 + 7);
        v40 = (_QWORD *)*((_QWORD *)v38 + 8);
        *((_QWORD *)v38 + 7) = 0LL;
        *((_QWORD *)v38 + 8) = 0LL;
      }
      else
      {
        v40 = 0LL;
      }
      v41 = EtwpFlushBuffer((__int64)a1, v38, v34);
      v42 = a1[3];
      v43 = v41;
      *((_WORD *)v38 + 26) = 0;
      if ( (v42 & 0x40000) != 0 )
        ((void (__fastcall *)(_QWORD, unsigned int *, _QWORD *))v39)(v41, v38, v40);
      else
        EtwpEnqueueAvailableBuffer((__int64)a1, v38, 0);
      v21 = (_QWORD **)v36;
      if ( v36 )
        v36 = (_QWORD *)*v36;
      v37 = v45;
      if ( v43 )
        v35 = v43;
    }
    while ( v21 );
    if ( a1[52] && a2 && ((a1[3] & 0x10000000) == 0 || v44) )
      EtwpRequestFlushTimer((__int64)a1, 0);
  }
  else if ( a2 && (a1[204] & 8) != 0 )
  {
    EtwpRealtimeSendEmptyMarker(a1);
  }
  return v35;
}
