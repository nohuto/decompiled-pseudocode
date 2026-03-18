/*
 * XREFs of ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C001A8AC
 * Callers:
 *     VidSchFlushQueuePackets @ 0x1C001A890 (VidSchFlushQueuePackets.c)
 *     VidSchFlushPresentReferencesAndDisableOverlays @ 0x1C00AB9A0 (VidSchFlushPresentReferencesAndDisableOverlays.c)
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1C000317C (VidSchiSetFlipDevice.c)
 *     VidSchiAcceptsIncomingWork @ 0x1C0007330 (VidSchiAcceptsIncomingWork.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009AD0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiDecrementDeviceReference @ 0x1C0013948 (VidSchiDecrementDeviceReference.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiClearFlipDevice @ 0x1C00147A8 (VidSchiClearFlipDevice.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiAbortMmIoFlipPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_DEVICE@@I@Z @ 0x1C0034428 (-VidSchiAbortMmIoFlipPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiFlushQueuePacket @ 0x1C00389B0 (VidSchiFlushQueuePacket.c)
 */

void __fastcall VidSchFlushQueuePacketsInternal(KSPIN_LOCK *a1, unsigned int a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned int v5; // r12d
  unsigned int v6; // r13d
  int v8; // edx
  __int64 v9; // rcx
  KSPIN_LOCK *v10; // r15
  _QWORD *v11; // rsi
  int v12; // ebx
  _QWORD *i; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  _QWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // rdi
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  _DWORD *v21; // rdx
  _QWORD *j; // r10
  _QWORD *v23; // rbx
  _QWORD *k; // r11
  _QWORD *v25; // rbx
  _QWORD *m; // r11
  _QWORD *v27; // r10
  _QWORD **v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rdi
  _QWORD *jj; // rbx
  _QWORD *kk; // r14
  _QWORD *mm; // r14
  _QWORD *v34; // r12
  _QWORD *v35; // rbx
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // r11
  _QWORD *v40; // r11
  unsigned int v41; // r8d
  _QWORD *v42; // r15
  _QWORD *n; // r11
  _QWORD *v44; // r12
  _QWORD *ii; // rbx
  _QWORD *v46; // rcx
  _QWORD *v47; // rcx
  _QWORD *v48; // r13
  _QWORD *v49; // r14
  _QWORD *v50; // r15
  _QWORD *v51; // [rsp+40h] [rbp-71h] BYREF
  _QWORD **v52; // [rsp+48h] [rbp-69h]
  int v53; // [rsp+50h] [rbp-61h]
  _QWORD v54[2]; // [rsp+58h] [rbp-59h] BYREF
  char v55; // [rsp+68h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-41h] BYREF
  _QWORD *v57; // [rsp+88h] [rbp-29h]
  _QWORD v58[4]; // [rsp+90h] [rbp-21h] BYREF
  __int16 v59; // [rsp+B0h] [rbp-1h]
  int v60; // [rsp+110h] [rbp+5Fh]
  unsigned int v62; // [rsp+120h] [rbp+6Fh]
  char v63; // [rsp+128h] [rbp+77h]

  v5 = -1;
  v6 = a2;
  if ( a3 < *((_DWORD *)a1 + 10) )
    v5 = a3;
  v62 = v5;
  if ( VidSchiAcceptsIncomingWork((__int64)a1) )
  {
    v10 = (KSPIN_LOCK *)(v9 + 1728);
    v11 = (_QWORD *)(v9 + 296);
    if ( v8 == 1 )
    {
      v52 = &v51;
      v12 = 0;
      v51 = &v51;
      v53 = 0;
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 1728), &LockHandle);
      for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
      {
        _m_prefetchw(i - 10);
        v14 = *(i - 10);
        while ( v14 )
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange64(i - 10, v14 + 1, v14);
          if ( v15 == v14 )
          {
            v53 = ++v12;
            goto LABEL_10;
          }
        }
        v36 = (_QWORD *)*i;
        if ( *(_QWORD **)(*i + 8LL) != i
          || (v37 = (_QWORD *)i[1], (_QWORD *)*v37 != i)
          || (*v37 = v36, v36[1] = v37, v38 = v52, *v52 != &v51) )
        {
LABEL_72:
          __fastfail(3u);
        }
        i[1] = v52;
        *i = &v51;
        *v38 = i;
        v52 = (_QWORD **)i;
LABEL_10:
        ;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v16 = (_QWORD *)*v11;
      v17 = 0;
      if ( (_QWORD *)*v11 != v11 )
      {
        do
        {
          v18 = (__int64)(v16 - 13);
          v63 = 0;
          v57 = (_QWORD *)*v16;
          v60 = v17 + 1;
          KeAcquireInStackQueuedSpinLock(v10, &LockHandle);
          v19 = *((_DWORD *)a1 + 10);
          v20 = 0;
          if ( v19 )
          {
            v21 = a1 + 400;
            while ( v5 != v20 && v5 != -1 || *(_QWORD *)(*(_QWORD *)v21 + 16LL) != v18 )
            {
              ++v20;
              v21 += 2;
              if ( v20 >= v19 )
                goto LABEL_18;
            }
            v63 = 1;
          }
LABEL_18:
          for ( j = *(_QWORD **)(v18 + 72); j != (_QWORD *)(v18 + 72); j = (_QWORD *)*j )
          {
            v23 = j + 80;
            for ( k = (_QWORD *)j[80]; k != v23; k = (_QWORD *)*v39 )
              VidSchiAbortMmIoFlipPacket((struct _VIDSCH_QUEUE_PACKET *)(k - 4), (struct _VIDSCH_DEVICE *)v18, v5);
            v25 = j + 82;
            for ( m = (_QWORD *)j[82]; m != v25; m = (_QWORD *)*v40 )
              VidSchiAbortMmIoFlipPacket((struct _VIDSCH_QUEUE_PACKET *)(m - 4), (struct _VIDSCH_DEVICE *)v18, v5);
          }
          v27 = *(_QWORD **)(v18 + 88);
          if ( v27 != (_QWORD *)(v18 + 88) )
          {
            v41 = v62;
            do
            {
              v42 = v27 + 4;
              for ( n = (_QWORD *)v27[4]; n != v42; n = (_QWORD *)*n )
              {
                v44 = n + 19;
                for ( ii = (_QWORD *)n[19]; ii != v44; ii = (_QWORD *)*ii )
                  VidSchiAbortMmIoFlipPacket((struct _VIDSCH_QUEUE_PACKET *)(ii - 4), (struct _VIDSCH_DEVICE *)v18, v41);
              }
              v27 = (_QWORD *)*v27;
            }
            while ( v27 != (_QWORD *)(v18 + 88) );
            v5 = v41;
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( v63 )
          {
            if ( v5 == -1 )
              VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)a1, v18, 6u, 0xFFFFFFFD, 0);
            else
              VidSchiSetFlipDevice((struct _VIDSCH_GLOBAL *)a1, v5, v18, 0, 6u, 0, a5);
          }
          VidSchiDecrementDeviceReference((char *)v18, 0);
          v16 = v57;
          v10 = a1 + 216;
          v17 = v60;
        }
        while ( v57 != v11 );
        v12 = v53;
        v10 = a1 + 216;
      }
      if ( v17 != v12 )
      {
        v28 = (_QWORD **)WdLogSingleEntry5(0LL, 281LL, 2304LL, v12, v17, a1);
        __debugbreak();
        goto LABEL_68;
      }
      KeAcquireInStackQueuedSpinLock(v10, &LockHandle);
      while ( 1 )
      {
        v28 = (_QWORD **)v51;
        if ( v51 == &v51 )
          break;
LABEL_68:
        if ( v28[1] != &v51 )
          goto LABEL_72;
        v46 = *v28;
        if ( (_QWORD **)(*v28)[1] != v28 )
          goto LABEL_72;
        v51 = *v28;
        v46[1] = &v51;
        v47 = (_QWORD *)v11[1];
        if ( (_QWORD *)*v47 != v11 )
          goto LABEL_72;
        *v28 = v11;
        v28[1] = v47;
        *v47 = v28;
        v11[1] = v28;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      v58[0] = v9 + 1728;
      v59 = 0;
      AcquireSpinLock::Acquire((Acquire *)v58);
      v55 = 0;
      v30 = (_QWORD *)*v11;
      v54[1] = v54;
      v54[0] = v54;
      if ( v30 == v11 )
        goto LABEL_47;
      do
      {
        for ( jj = (_QWORD *)*(v30 - 4); jj != v30 - 4; jj = (_QWORD *)*jj )
        {
          for ( kk = (_QWORD *)jj[80]; kk != jj + 80; kk = (_QWORD *)*kk )
            VidSchiFlushQueuePacket(v54, v29, kk - 4, v6);
          for ( mm = (_QWORD *)jj[82]; mm != jj + 82; mm = (_QWORD *)*mm )
            VidSchiFlushQueuePacket(v54, v29, mm - 4, v6);
        }
        v34 = v30 - 2;
        v35 = (_QWORD *)*(v30 - 2);
        if ( v35 != v30 - 2 )
        {
          do
          {
            v48 = v35 + 4;
            v49 = (_QWORD *)v35[4];
            if ( v49 != v35 + 4 )
            {
              do
              {
                v50 = (_QWORD *)v49[19];
                if ( v50 != v49 + 19 )
                {
                  do
                  {
                    VidSchiFlushQueuePacket(v54, v29, v50 - 4, a2);
                    v50 = (_QWORD *)*v50;
                  }
                  while ( v50 != v49 + 19 );
                  v48 = v35 + 4;
                }
                v49 = (_QWORD *)*v49;
              }
              while ( v49 != v48 );
              v34 = v30 - 2;
            }
            v35 = (_QWORD *)*v35;
          }
          while ( v35 != v34 );
          v6 = a2;
        }
        v30 = (_QWORD *)*v30;
      }
      while ( v30 != v11 );
      if ( !v55 )
LABEL_47:
        HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v54);
      AcquireSpinLock::Release((AcquireSpinLock *)v58);
    }
  }
}
