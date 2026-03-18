/*
 * XREFs of VidSchiUpdatePresentParameters @ 0x1C00035D0
 * Callers:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0003B04 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 * Callees:
 *     VidSchiTryEnterIndependentFlip @ 0x1C001A22C (VidSchiTryEnterIndependentFlip.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001E78A (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

char __fastcall VidSchiUpdatePresentParameters(struct _VIDSCH_GLOBAL *a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v5; // r12
  int v6; // eax
  bool v7; // r14
  char v8; // di
  __int128 v9; // xmm1
  bool v10; // si
  __int64 v11; // rcx
  unsigned int v12; // r15d
  unsigned int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // edx
  bool v17; // zf
  int v18; // eax
  unsigned int v19; // esi
  unsigned int v20; // r12d
  __int64 v21; // rax
  int v22; // edi
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // r8d
  unsigned int v32; // r8d
  unsigned int v33; // edx
  __int64 v34; // r9
  __int64 v35; // rax
  char v36; // cl
  int v38; // [rsp+30h] [rbp-A9h]
  _QWORD v39[2]; // [rsp+38h] [rbp-A1h] BYREF
  char v40; // [rsp+48h] [rbp-91h]
  unsigned int v41; // [rsp+50h] [rbp-89h]
  __int64 v42; // [rsp+58h] [rbp-81h]
  _QWORD *v43; // [rsp+60h] [rbp-79h]
  __int64 v44; // [rsp+68h] [rbp-71h]
  char *v45; // [rsp+70h] [rbp-69h]
  struct _KLOCK_QUEUE_HANDLE v46; // [rsp+78h] [rbp-61h] BYREF
  __int16 v47; // [rsp+90h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-41h] BYREF
  __int128 v49; // [rsp+B0h] [rbp-29h]
  __int128 v50; // [rsp+C0h] [rbp-19h]
  __int128 Source2; // [rsp+D0h] [rbp-9h] BYREF
  __int128 v52; // [rsp+E0h] [rbp+7h] BYREF

  v41 = *(_DWORD *)(a2 + 116);
  v3 = v41;
  v5 = *((_QWORD *)a1 + v41 + 400);
  v43 = (_QWORD *)((char *)a1 + 8 * v41 + 3200);
  v6 = *(_DWORD *)a2;
  v7 = (*(_DWORD *)a2 & 0x800000) != 0;
  v42 = v5;
  v8 = v6 < 0;
  v9 = *(_OWORD *)(a2 + 452);
  Source2 = *(_OWORD *)(a2 + 436);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v52 = v9;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &LockHandle);
  v10 = v8 != *(_BYTE *)(v5 + 2952);
  *(_BYTE *)(v5 + 2952) = v8;
  if ( !v8
    || RtlCompareMemory((const void *)(v5 + 2956), &Source2, 0x10uLL) == 16
    && RtlCompareMemory((const void *)(v5 + 2972), &v52, 0x10uLL) == 16 )
  {
    if ( !v10 )
      goto LABEL_3;
  }
  else
  {
    *(_OWORD *)(v5 + 2956) = Source2;
    *(_OWORD *)(v5 + 2972) = v52;
  }
  v32 = *((_DWORD *)a1 + 38);
  v33 = 0;
  if ( v32 )
  {
    v34 = *((_QWORD *)a1 + v3 + 400);
    do
    {
      v35 = *(int *)(280LL * v33 + v34 + 180);
      if ( (int)v35 > -1 && *(_DWORD *)(160 * v35 + *((_QWORD *)a1 + 416) + 112) == 2 )
      {
        WdLogSingleEntry5(0LL, 281LL, 0x100000LL, 0LL, v3, a1);
        __debugbreak();
      }
      ++v33;
    }
    while ( v33 < v32 );
  }
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v11 = a2 + 600;
  v12 = 0;
  v13 = *(_DWORD *)(a2 + 600);
  v14 = v13 & 0x3FF;
  v15 = (v13 >> 10) & 0x3FF;
  v44 = v11;
  if ( *((_BYTE *)a1 + 156) )
    v12 = v15;
  v16 = 0;
  v17 = !_BitScanForward((unsigned int *)&v18, v14);
  v38 = 0;
  if ( v17 )
    LOBYTE(v18) = -1;
  v19 = (char)v18;
  v17 = !_BitScanForward((unsigned int *)&v18, v12);
  if ( v17 )
    LOBYTE(v18) = -1;
  v20 = (char)v18;
  while ( v14 || v12 )
  {
    if ( v19 < v20 )
    {
      v21 = v16 * ((8 * *(_DWORD *)(v11 + 8) + 231) & 0xFFFFFFF8);
      v22 = *(_DWORD *)(v21 + v11 + 192);
      v49 = *(_OWORD *)(v21 + v11 + 160);
      v23 = *(_OWORD *)(v21 + v11 + 176);
      v47 = 0;
      v45 = (char *)a1 + 1728;
      v50 = v23;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &v46);
      LOBYTE(v47) = 1;
      v24 = v50;
      v39[1] = v39;
      v39[0] = v39;
      v40 = 0;
      v25 = 280LL * v19;
      v26 = v42;
      *(_OWORD *)(v25 + v42 + 144) = v49;
      *(_OWORD *)(v25 + v26 + 160) = v24;
      *(_DWORD *)(v25 + v26 + 176) = v22;
      v27 = *(int *)(v25 + *v43 + 180);
      if ( (int)v27 > -1 )
      {
        v30 = *((_QWORD *)a1 + 416) + 160 * v27;
        if ( v30 )
        {
          if ( *(_DWORD *)(v30 + 112) == 1 )
          {
            v31 = v41;
            *(_BYTE *)(v30 + 96) = 1;
            *(_BYTE *)(v30 + 108) = v7;
            VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)v39, a1, v31, v19);
          }
        }
      }
      if ( !v40 )
      {
        while ( 1 )
        {
          v28 = (_QWORD *)v39[0];
          if ( *(_QWORD **)(v39[0] + 8LL) != v39
            || (v29 = *(_QWORD *)v39[0], *(_QWORD *)(*(_QWORD *)v39[0] + 8LL) != v39[0]) )
          {
            __fastfail(3u);
          }
          v39[0] = *(_QWORD *)v39[0];
          *(_QWORD *)(v29 + 8) = v39;
          if ( v28 == v39 )
            break;
          *v28 = 0LL;
          v28[1] = 0LL;
          HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v39, (struct VIDSCH_HW_QUEUE *)(v28 - 22));
        }
        v40 = 1;
      }
      if ( (_BYTE)v47 )
      {
        if ( HIBYTE(v47) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v46);
        else
          KeReleaseInStackQueuedSpinLock(&v46);
      }
      v16 = v38;
    }
    if ( v19 >= v20 )
    {
      v36 = -1;
      v12 &= ~(1 << v20);
      v17 = !_BitScanForward((unsigned int *)&v18, v12);
      if ( !v17 )
        v36 = v18;
      v20 = v36;
    }
    else
    {
      v14 &= ~(1 << v19);
      v17 = !_BitScanForward((unsigned int *)&v18, v14);
      if ( v17 )
        LOBYTE(v18) = -1;
      v19 = (char)v18;
    }
    v11 = v44;
    v38 = ++v16;
  }
  return v18;
}
