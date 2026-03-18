/*
 * XREFs of VidSchiCreateContextInternal @ 0x1C0003E8C
 * Callers:
 *     VidSchCreateContext @ 0x1C0090040 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C00C2114 (VidSchCreateSystemDevices.c)
 * Callees:
 *     VidSchiFreeQueuePacket @ 0x1C00044A4 (VidSchiFreeQueuePacket.c)
 *     VidSchiIncrementContextReference @ 0x1C0004A20 (VidSchiIncrementContextReference.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C00071C0 (VidSchiInterlockedInsertTailList.c)
 *     __security_check_cookie @ 0x1C0019900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC00 (memset.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C003DD9C (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     VidSchTerminateContext @ 0x1C00897F0 (VidSchTerminateContext.c)
 *     VidSchSetPriorityContext @ 0x1C0090960 (VidSchSetPriorityContext.c)
 */

__int64 __fastcall VidSchiCreateContextInternal(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 Pool2; // rax
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // rcx
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // r12
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // r15d
  unsigned int v25; // eax
  int v26; // r15d
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // r15d
  unsigned int v34; // r10d
  __int64 v35; // rax
  unsigned int v36; // r9d
  __int64 v37; // rax
  unsigned int v38; // r9d
  __int64 v39; // r12
  unsigned int v40; // r14d
  int v41; // esi
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rax
  bool v47; // cf
  __int64 v48; // r9
  __int64 v49; // rdx
  __int128 v50; // xmm1
  __int64 v51; // rax
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int64 v54; // r9
  int v55; // r8d
  __int64 v56; // [rsp+80h] [rbp-80h]
  __int64 v57; // [rsp+88h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-70h] BYREF
  __int128 v59; // [rsp+A8h] [rbp-58h]
  __int128 v60; // [rsp+B8h] [rbp-48h]
  _OWORD v61[5]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  if ( (*a2 & 4) != 0 || a3 )
  {
    Pool2 = ExAllocatePool2(64LL, 1000LL, 878799190LL);
    v8 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 878799190;
      *(_QWORD *)(Pool2 + 56) = a3;
      *(_QWORD *)(Pool2 + 104) = a1;
      CurrentThread = KeGetCurrentThread();
      v10 = *(__int64 **)(v4 + 632);
      v11 = *((_QWORD *)a2 + 2);
      *(_OWORD *)(v8 + 112) = *(_OWORD *)a2;
      *(_QWORD *)(v8 + 80) = CurrentThread;
      LODWORD(CurrentThread) = a2[6];
      *(_QWORD *)(v8 + 128) = v11;
      *(_DWORD *)(v8 + 136) = (_DWORD)CurrentThread;
      v12 = (unsigned int)a2[1];
      *(_DWORD *)(v8 + 88) = v12;
      if ( (unsigned int)v12 < *(_DWORD *)(v4 + 704) )
        v10 += v12;
      v13 = *v10;
      v56 = *v10;
      *(_QWORD *)(v8 + 96) = *v10;
      v14 = ((__int64 (*)(void))DxgCoreInterface[6])();
      *(_QWORD *)(v8 + 144) = 1LL;
      *(_BYTE *)(v8 + 909) = BYTE1(*(_DWORD *)(v14 + 424)) & 1;
      *(_OWORD *)(v8 + 320) = 0LL;
      *(_OWORD *)(v8 + 336) = 0LL;
      *(_OWORD *)(v8 + 352) = 0LL;
      *(_QWORD *)(v8 + 368) = 0LL;
      KeInitializeEvent((PRKEVENT)(v8 + 320), SynchronizationEvent, 0);
      v15 = (*a2 & 0x100) == 0;
      *(_QWORD *)(v8 + 384) = v8 + 376;
      *(_QWORD *)(v8 + 376) = v8 + 376;
      *(_QWORD *)(v8 + 672) = v8 + 664;
      *(_QWORD *)(v8 + 664) = v8 + 664;
      *(_QWORD *)(v8 + 688) = v8 + 680;
      *(_QWORD *)(v8 + 680) = v8 + 680;
      *(_QWORD *)(v8 + 704) = v8 + 696;
      *(_QWORD *)(v8 + 696) = v8 + 696;
      *(_QWORD *)(v8 + 720) = v8 + 712;
      *(_QWORD *)(v8 + 712) = v8 + 712;
      if ( !v15 )
      {
        *(_QWORD *)(v8 + 744) = v8 + 736;
        *(_QWORD *)(v8 + 736) = v8 + 736;
      }
      v16 = v8 + 760;
      *(_QWORD *)(v8 + 768) = v8 + 760;
      *(_QWORD *)(v8 + 760) = v8 + 760;
      *(_BYTE *)(v8 + 908) = 1;
      VidSchiIncrementContextReference(v8);
      *(_BYTE *)(v8 + 908) = 0;
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1728), &LockHandle);
      if ( *(_BYTE *)(a1 + 1392) || *(_BYTE *)(a1 + 1393) )
      {
        v17 = v13 + 2616;
        *(_DWORD *)(v8 + 184) |= 0x100u;
      }
      else
      {
        v17 = v13 + 2584;
      }
      v18 = *(_QWORD **)(v17 + 8);
      v19 = (_QWORD *)(v8 + 8);
      if ( *v18 != v17
        || (*v19 = v17,
            *(_QWORD *)(v8 + 16) = v18,
            *v18 = v19,
            *(_QWORD *)(v17 + 8) = v19,
            v20 = *(_QWORD **)(a1 + 80),
            v21 = (_QWORD *)(v8 + 24),
            *v20 != a1 + 72) )
      {
        __fastfail(3u);
      }
      *v21 = a1 + 72;
      *(_QWORD *)(v8 + 32) = v20;
      *v20 = v21;
      *(_QWORD *)(a1 + 80) = v21;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v22 = *(_QWORD *)(v4 + 2632);
      v23 = *(_QWORD *)(v4 + 2680);
      *(_QWORD *)(v8 + 472) = v22;
      *(_QWORD *)(v8 + 440) = v22;
      *(_QWORD *)(v8 + 480) = v23;
      KeInitializeTimer((PKTIMER)(v8 + 512));
      KeInitializeDpc((PRKDPC)(v8 + 576), (PKDEFERRED_ROUTINE)VidSchiDelayReadyRoutine, (PVOID)v8);
      v24 = *a2;
      if ( (*a2 & 0x604) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          memset(v61, 0, 0x48uLL);
          v44 = *(unsigned int *)(v8 + 88);
          v45 = *(_QWORD *)(v4 + 632);
          v46 = v45 + 8 * v44;
          v47 = (unsigned int)v44 < *(_DWORD *)(v4 + 704);
          if ( (unsigned int)v44 >= *(_DWORD *)(v4 + 704) )
            v46 = *(_QWORD *)(v4 + 632);
          DWORD2(v61[0]) = *(unsigned __int16 *)(*(_QWORD *)v46 + 8LL);
          if ( v47 )
            v45 += 8 * v44;
          v48 = *(_QWORD *)(v4 + 8);
          HIDWORD(v61[0]) = 1 << *(_BYTE *)(*(_QWORD *)v45 + 6LL);
          v49 = *(_QWORD *)(a1 + 16);
          LODWORD(v61[1]) = v61[1] & 0xFFFFFFE2 | ((v24 & 4 | ((v24 & 0x200 | (v24 >> 1) & 0x400) >> 4)) >> 2) | (4 * (*(_BYTE *)(344LL * *(unsigned __int16 *)(v56 + 6) + *(_QWORD *)(*(_QWORD *)(v48 + 16) + 2808LL) + 48) & 1));
          if ( ((int (__fastcall *)(__int64, __int64, _OWORD *))DxgCoreInterface[18])(v48, v49, v61) < 0 )
          {
LABEL_51:
            VidSchTerminateContext((struct _VIDSCH_CONTEXT *)v8);
            return 0LL;
          }
          v15 = bTracingEnabled == 0;
          v50 = v61[1];
          v51 = *(_QWORD *)&v61[0];
          *(_OWORD *)(v8 + 912) = v61[0];
          *(_QWORD *)(v8 + 64) = v51;
          v52 = v61[2];
          *(_OWORD *)(v8 + 928) = v50;
          v53 = v61[3];
          *(_OWORD *)(v8 + 944) = v52;
          *(_QWORD *)&v52 = *(_QWORD *)&v61[4];
          *(_OWORD *)(v8 + 960) = v53;
          *(_QWORD *)(v8 + 976) = v52;
          if ( !v15 )
          {
            v54 = *(_QWORD *)(a1 + 8);
            if ( !v54 )
              LODWORD(v54) = a1;
            if ( (byte_1C0076981 & 4) != 0 )
            {
              v55 = (2 * ((*(_DWORD *)(*(_QWORD *)(v8 + 104) + 48LL) >> 4) & 1)) | 1;
              McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
                v61[3],
                (unsigned int)&EventCreateContext,
                v55,
                v54,
                SBYTE8(v61[0]),
                SBYTE12(v61[0]),
                SBYTE4(v61[2]),
                SBYTE8(v61[2]),
                SBYTE12(v61[2]),
                v61[3],
                SBYTE4(v61[3]),
                v55,
                v8);
            }
          }
        }
        else if ( bTracingEnabled )
        {
          v31 = *(unsigned int *)(v8 + 88);
          if ( (unsigned int)v31 < *(_DWORD *)(v4 + 80) )
          {
            v32 = *(_QWORD *)(v4 + 632);
            v33 = *a2 & 0x40;
            v34 = *(_DWORD *)(v4 + 704);
            v59 = 0LL;
            v35 = *(_QWORD *)(v8 + 104);
            v60 = 0LL;
            v36 = *(_DWORD *)(v35 + 48);
            v37 = v32 + 8 * v31;
            v38 = v36 >> 4;
            if ( (unsigned int)v31 < v34 )
              v32 += 8 * v31;
            else
              v37 = v32;
            v39 = *(_QWORD *)(a1 + 8);
            if ( !v39 )
              LODWORD(v39) = a1;
            if ( (byte_1C0076981 & 4) != 0 )
              McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
                DWORD1(v59),
                (unsigned int)&EventCreateContext,
                v59,
                v39,
                *(_WORD *)(*(_QWORD *)v32 + 8LL),
                1 << *(_BYTE *)(*(_QWORD *)v37 + 6LL),
                v59,
                SBYTE4(v59),
                SBYTE8(v59),
                SBYTE12(v59),
                v60,
                (2 * (v38 & 1 | (v33 != 0 ? 2 : 0))) | 1,
                v8);
            v16 = v8 + 760;
          }
        }
      }
      else
      {
        *(_QWORD *)(v8 + 64) = *(_QWORD *)(a3 + 184);
      }
      if ( (int)VidSchSetPriorityContext((struct _VIDSCH_CONTEXT *)v8) >= 0 )
      {
        v25 = *(_DWORD *)(v4 + 152) * ((*(_DWORD *)(v4 + 76) << 6) + ((8 * *(_DWORD *)(v4 + 76) + 231) & 0xFFFFFFF8))
            + 8 * (*(_DWORD *)(v4 + 76) + 111);
        if ( v25 <= 0x460 )
          v25 = 1120;
        v26 = 0;
        v27 = v25;
        do
        {
          v28 = ExAllocatePool2(64LL, v27, 895576406LL);
          v29 = v28;
          if ( !v28 )
          {
            WdLogSingleEntry0(3LL);
            goto LABEL_51;
          }
          v57 = v4 + 1736;
          VidSchiInterlockedInsertTailList(v4 + 1736, v16, v28 + 8, v8 + 776);
          VidSchiFreeQueuePacket(v8, v29);
          ++v26;
        }
        while ( v26 < 5 );
        if ( (*a2 & 0x100) == 0 )
          return v8;
        v40 = a2[6];
        if ( v40 )
        {
          v41 = 0;
          while ( 1 )
          {
            v42 = ExAllocatePool2(64LL, v27, 895576406LL);
            v43 = v42;
            if ( !v42 )
              break;
            *(_DWORD *)(v42 + 64) |= 0x40u;
            VidSchiInterlockedInsertTailList(v57, v16, v42 + 8, v8 + 776);
            VidSchiFreeQueuePacket(v8, v43);
            if ( ++v41 >= v40 )
              return v8;
          }
        }
      }
      goto LABEL_51;
    }
  }
  WdLogSingleEntry0(3LL);
  return 0LL;
}
