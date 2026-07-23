/*
 * XREFs of sub_1402853B0 @ 0x1402853B0
 * Callers:
 *     sub_140276BF8 @ 0x140276BF8 (sub_140276BF8.c)
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 *     CcUnmapFileOffsetFromSystemCache @ 0x140282730 (CcUnmapFileOffsetFromSystemCache.c)
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     sub_140328180 @ 0x140328180 (sub_140328180.c)
 * Callees:
 *     sub_140247800 @ 0x140247800 (sub_140247800.c)
 *     sub_140247840 @ 0x140247840 (sub_140247840.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402856A8 @ 0x1402856A8 (sub_1402856A8.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     sub_14028D58C @ 0x14028D58C (sub_14028D58C.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406FAEA0 @ 0x1406FAEA0 (sub_1406FAEA0.c)
 */

__int64 __fastcall sub_1402853B0(__int64 a1, __int64 *a2, unsigned int a3, char a4, char a5, char a6)
{
  __int64 v6; // rax
  int v7; // r12d
  unsigned __int8 v8; // r13
  __int64 v11; // rax
  signed __int64 v12; // rbx
  signed __int64 v13; // rdi
  __int64 v14; // r9
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r11
  int v19; // ecx
  int v20; // r10d
  __int64 v21; // r14
  __int64 v22; // rax
  unsigned int v23; // ebp
  KIRQL v24; // al
  __int64 v25; // r8
  bool v26; // zf
  unsigned __int64 v27; // rbp
  void *v29; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v32; // eax
  signed __int32 v33[8]; // [rsp+0h] [rbp-78h] BYREF
  int v34; // [rsp+30h] [rbp-48h]
  signed __int64 v35; // [rsp+38h] [rbp-40h]
  __int64 v36; // [rsp+40h] [rbp-38h]
  char v37; // [rsp+80h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 528);
  v7 = 0;
  v35 = 0LL;
  v8 = 1;
  v34 = 0;
  v37 = 1;
  v36 = v6;
  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( a2 )
    {
      v11 = *a2;
      v12 = *a2 & 0xFFFFFFFFFFFC0000uLL;
      v35 = v12;
      if ( a3 )
        v13 = v11 + a3;
      else
        v13 = *(_QWORD *)(a1 + 368);
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 32);
      v12 = v35;
    }
    if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    {
      v7 = 1;
      ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
    }
    ExAcquirePushLockExclusiveEx(a1 + 104, 0LL);
    if ( a4 )
    {
      v15 = 1;
      *(_QWORD *)(a1 + 336) = v13;
      v34 = 1;
    }
    else
    {
      v15 = v34;
    }
    if ( v12 < v13 )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(a1 + 32);
        if ( v12 >= v16 )
          goto LABEL_18;
        v17 = *(_QWORD *)(a1 + 88);
        if ( v16 <= 0x2000000 )
        {
          v21 = *(_QWORD *)(v17 + 8 * ((unsigned __int64)(unsigned int)v35 >> 18));
        }
        else
        {
          v18 = v12;
          LODWORD(v14) = 0;
          v19 = 25;
          do
          {
            v20 = v19;
            v19 += 7;
            v14 = (unsigned int)(v14 + 1);
          }
          while ( v16 > 1LL << v19 );
          v21 = *(_QWORD *)(v17 + 8 * (v12 >> v20));
          if ( !v21 )
            goto LABEL_18;
          do
          {
            if ( !(_DWORD)v14 )
              break;
            v22 = 1LL << v20;
            v20 -= 7;
            v18 &= v22 - 1;
            v14 = (unsigned int)(v14 - 1);
            v21 = *(_QWORD *)(v21 + 8 * (v18 >> v20));
          }
          while ( v21 );
        }
        if ( !v21 )
          goto LABEL_18;
        if ( !*(_WORD *)(v21 + 16) )
          break;
        if ( a6 )
        {
          v12 += 0x40000LL;
          v35 = v12;
          if ( a5 )
            KeBugCheckEx(0x34u, 0xC41uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        }
        else
        {
          if ( !a5 )
          {
            v8 = 0;
            goto LABEL_33;
          }
          v29 = *(void **)(a1 + 184);
          if ( v29 )
          {
            if ( v37 )
            {
              KeResetEvent(*(PRKEVENT *)(a1 + 184));
              _InterlockedOr(v33, 0);
              v37 = 0;
            }
            else
            {
              sub_140247800(v7, (struct _FAST_MUTEX *)a1);
              KeWaitForSingleObject(v29, Executive, 0, 0, 0LL);
              v37 = 1;
              sub_140247840(v7, (struct _FAST_MUTEX *)a1);
            }
          }
          else
          {
            v37 = 0;
            *(_WORD *)(a1 + 344) = 0;
            *(_QWORD *)(a1 + 360) = a1 + 352;
            *(_QWORD *)(a1 + 352) = a1 + 352;
            *(_BYTE *)(a1 + 346) = 6;
            *(_DWORD *)(a1 + 348) = 0;
            _InterlockedExchange64((volatile __int64 *)(a1 + 184), a1 + 344);
          }
        }
LABEL_19:
        if ( v12 >= v13 )
          goto LABEL_33;
        v15 = v34;
      }
      v37 = 1;
      if ( v16 > 0x2000000 )
        sub_14028D58C(a1, v12, 0LL, 0LL);
      else
        *(_QWORD *)(v17 + 8 * ((unsigned __int64)(unsigned int)v35 >> 18)) = 0LL;
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 540));
      if ( *(_DWORD *)(v36 + 1184) < (unsigned int)dword_140C49AC8 )
        v23 = v15 | 2;
      else
        v23 = v15 & 0xFFFFFFFD;
      v34 = v23;
      sub_1406FAEA0(v21, a1, v23, v14);
      v24 = KeAcquireQueuedSpinLock(4uLL);
      v26 = (v34 & 2) == 0;
      v27 = v24;
      *(_QWORD *)(v21 + 8) = 0LL;
      if ( v26 )
        LOBYTE(v25) = 0;
      else
        v25 = 1LL;
      sub_1402856A8(v36, v21, v25);
      KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer
                                                                     + 64));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v27 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v14 = *((_QWORD *)CurrentPrcb + 4375);
            v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
            v26 = (v32 & *(_DWORD *)(v14 + 20)) == 0;
            *(_DWORD *)(v14 + 20) &= v32;
            if ( v26 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v27);
LABEL_18:
      v12 += 0x40000LL;
      v35 = v12;
      goto LABEL_19;
    }
LABEL_33:
    ExReleasePushLockEx(a1 + 104, 0LL);
    if ( v7 )
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  }
  return v8;
}
