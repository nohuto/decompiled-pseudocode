/*
 * XREFs of sub_140310AD0 @ 0x140310AD0
 * Callers:
 *     sub_14028B330 @ 0x14028B330 (sub_14028B330.c)
 * Callees:
 *     sub_140275F94 @ 0x140275F94 (sub_140275F94.c)
 *     sub_140276758 @ 0x140276758 (sub_140276758.c)
 *     sub_1402768E4 @ 0x1402768E4 (sub_1402768E4.c)
 *     sub_1402769F8 @ 0x1402769F8 (sub_1402769F8.c)
 *     sub_140282AF4 @ 0x140282AF4 (sub_140282AF4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402844A0 @ 0x1402844A0 (sub_1402844A0.c)
 *     sub_140289260 @ 0x140289260 (sub_140289260.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B0DF0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140310AD0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r13
  char v8; // r8
  _BYTE *v9; // r15
  unsigned __int64 OldIrql; // r14
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int i; // r14d
  __int64 v15; // r8
  unsigned int v16; // r12d
  unsigned int v17; // r15d
  unsigned __int64 v18; // rbx
  int v20; // eax
  unsigned __int64 v21; // r14
  __int64 v22; // r15
  int v23; // eax
  KSPIN_LOCK *v24; // rcx
  __int64 v25; // r14
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  unsigned __int64 v29; // r14
  unsigned int v30; // ecx
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v35; // r9
  int v36; // eax
  bool v37; // zf
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  __int64 v40; // r9
  int v41; // eax
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  __int64 v44; // r9
  int v45; // eax
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  __int64 v48; // r9
  int v49; // eax
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  __int64 v52; // r9
  int v53; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r9
  __int64 v56; // r8
  int v57; // eax
  struct _KPRCB *v58; // rcx
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  __int64 v61; // r9
  int v62; // edx
  __int64 v63; // [rsp+50h] [rbp-29h] BYREF
  __int64 v64; // [rsp+58h] [rbp-21h] BYREF
  __int64 v65; // [rsp+60h] [rbp-19h]
  __int64 v66; // [rsp+68h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE v67; // [rsp+70h] [rbp-9h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp+Fh] BYREF
  unsigned int v69; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v70; // [rsp+F0h] [rbp+77h]
  __int64 v71; // [rsp+F8h] [rbp+7Fh] BYREF

  v70 = a3;
  v63 = 0LL;
  v71 = 0LL;
  v66 = 0LL;
  v5 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v67, 0, sizeof(v67));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 && (*(_DWORD *)(v6 + 152) & 0x100) == 0 )
  {
    v5 = *(_QWORD *)(v6 + 528);
    if ( byte_140C54C58 == 1 )
      v7 = *(_QWORD *)(v6 + 592);
    else
      v7 = 0LL;
    v65 = sub_1402769F8(v6);
    if ( v8 == 1 )
      v9 = (_BYTE *)(v7 + 1172);
    else
      v9 = (_BYTE *)(v5 + 1228);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 704), &v67);
    ++*(_DWORD *)(v6 + 4);
    ++*(_DWORD *)(v6 + 536);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v67);
    OldIrql = v67.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v67.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v35 = *((_QWORD *)CurrentPrcb + 4375);
          v36 = ~(unsigned __int16)(-1LL << (v67.OldIrql + 1));
          v37 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
          *(_DWORD *)(v35 + 20) &= v36;
          if ( v37 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v11 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v38 = KeGetCurrentIrql();
        if ( v38 <= 0xFu && LockHandle.OldIrql <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = *((_QWORD *)v39 + 4375);
          v41 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v37 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
          *(_DWORD *)(v40 + 20) &= v41;
          if ( v37 )
            sub_140418E4C(v39);
        }
      }
    }
    __writecr8(v11);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 704), &v67);
    sub_140282AF4(v6, v12, v13);
    if ( (*(_DWORD *)(v6 + 152) & 0x20) != 0 || *(_DWORD *)(v6 + 516) )
      goto LABEL_29;
    if ( *(_DWORD *)(v6 + 112) )
    {
      if ( (*(_DWORD *)((*(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x50) & 0x8000) == 0 )
      {
        i = 0;
        if ( sub_1402844A0(v5, v7, *(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL, 0x1000000u, 0, 8, 0LL) )
        {
          if ( *v9 )
          {
            LOBYTE(v15) = 1;
            sub_140276758((_BYTE *)v5, v7, v15, 0);
          }
          goto LABEL_16;
        }
      }
      v32 = *(_QWORD *)(v6 + 40);
      if ( a2 > v32 && *(_QWORD *)(v6 + 48) > v32 )
      {
        v20 = *(_DWORD *)(v6 + 112);
        *(_DWORD *)(v6 + 192) = v20;
        *(_DWORD *)(v5 + 912) += v20;
        *(_DWORD *)(v5 + 1008) += *(_DWORD *)(v6 + 192);
        *(_DWORD *)(v6 + 152) |= 0x20u;
        ++*(_DWORD *)(v6 + 112);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v67);
        v21 = v67.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v42 = KeGetCurrentIrql();
            if ( v42 <= 0xFu && v67.OldIrql <= 0xFu && v42 >= 2u )
            {
              v43 = KeGetCurrentPrcb();
              v44 = *((_QWORD *)v43 + 4375);
              v45 = ~(unsigned __int16)(-1LL << (v67.OldIrql + 1));
              v37 = (v45 & *(_DWORD *)(v44 + 20)) == 0;
              *(_DWORD *)(v44 + 20) &= v45;
              if ( v37 )
                sub_140418E4C(v43);
            }
          }
        }
        __writecr8(v21);
        v22 = v65;
        v23 = sub_1402768E4(v5, v7, v65, &v63);
        v24 = (KSPIN_LOCK *)(v5 + 704);
        if ( v23 >= 0 )
        {
          v25 = v63;
          *(_BYTE *)(v63 + 128) = 2;
          *(_QWORD *)(v25 + 16) = v6;
          KeAcquireInStackQueuedSpinLock(v24, &v67);
          --*(_DWORD *)(v6 + 112);
          if ( (*(_DWORD *)(v6 + 152) & 0x10000) != 0 )
          {
            v28 = v22 + 72;
            *(_QWORD *)(v6 + 496) = v25 | 1;
          }
          else
          {
            *(_QWORD *)(v6 + 496) = v25;
            v28 = v22 + 104;
          }
          sub_140275F94((_QWORD *)v25, v28, v26, v27);
LABEL_29:
          i = 0;
          goto LABEL_16;
        }
        KeAcquireInStackQueuedSpinLock(v24, &v67);
        *(_DWORD *)(v6 + 152) &= ~0x20u;
        --*(_DWORD *)(v6 + 112);
      }
    }
    i = 2;
    goto LABEL_16;
  }
  i = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v31 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v46 = KeGetCurrentIrql();
      if ( v46 <= 0xFu && LockHandle.OldIrql <= 0xFu && v46 >= 2u )
      {
        v47 = KeGetCurrentPrcb();
        v48 = *((_QWORD *)v47 + 4375);
        v49 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v37 = (v49 & *(_DWORD *)(v48 + 20)) == 0;
        *(_DWORD *)(v48 + 20) &= v49;
        if ( v37 )
          sub_140418E4C(v47);
      }
    }
  }
  __writecr8(v31);
LABEL_16:
  v16 = v70;
  v17 = i;
  if ( !v70 && i == 2 )
  {
    i = 1;
  }
  else if ( i > 1 )
  {
    *(_DWORD *)(v6 + 152) |= 0x400400u;
    ++*(_DWORD *)(v6 + 4);
    ++*(_DWORD *)(v6 + 536);
    ++*(_DWORD *)(v6 + 516);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v67);
    v29 = v67.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v50 = KeGetCurrentIrql();
        if ( v50 <= 0xFu && v67.OldIrql <= 0xFu && v50 >= 2u )
        {
          v51 = KeGetCurrentPrcb();
          v52 = *((_QWORD *)v51 + 4375);
          v53 = ~(unsigned __int16)(-1LL << (v67.OldIrql + 1));
          v37 = (v53 & *(_DWORD *)(v52 + 20)) == 0;
          *(_DWORD *)(v52 + 20) &= v53;
          if ( v37 )
            sub_140418E4C(v51);
        }
      }
    }
    __writecr8(v29);
    v64 = a2;
    v30 = v16;
    v69 = v16;
    for ( i = v17; v30; v69 = v30 )
    {
      if ( !*(_QWORD *)(v6 + 8) && (*(_DWORD *)(v6 + 152) & 4) == 0 )
        break;
      if ( !sub_140289260(v6, &v64, v30, 0LL, &v71, &v69, &v66, 0, 0LL) )
        break;
      v71 += v69;
      v30 = v16 + a2 - v71;
      v64 = v71;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 704), &v67);
    if ( !*(_DWORD *)(v6 + 4) )
      KeBugCheckEx(0x34u, 0x1470uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v6 + 152) &= ~0x400000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v67);
    v18 = v67.OldIrql;
    if ( !dword_140D06B08 )
      goto LABEL_21;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_21;
    v54 = KeGetCurrentIrql();
    if ( v54 > 0xFu )
      goto LABEL_21;
    if ( v67.OldIrql > 0xFu )
      goto LABEL_21;
    if ( v54 < 2u )
      goto LABEL_21;
    v55 = KeGetCurrentPrcb();
    v56 = *((_QWORD *)v55 + 4375);
    v57 = ~(unsigned __int16)(-1LL << (v67.OldIrql + 1));
    v37 = (v57 & *(_DWORD *)(v56 + 20)) == 0;
    *(_DWORD *)(v56 + 20) &= v57;
    if ( !v37 )
      goto LABEL_21;
    v58 = v55;
    goto LABEL_93;
  }
  if ( v5 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v67);
    v18 = v67.OldIrql;
    if ( !dword_140D06B08 )
      goto LABEL_21;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_21;
    v59 = KeGetCurrentIrql();
    if ( v59 > 0xFu )
      goto LABEL_21;
    if ( v67.OldIrql > 0xFu )
      goto LABEL_21;
    if ( v59 < 2u )
      goto LABEL_21;
    v60 = KeGetCurrentPrcb();
    v61 = *((_QWORD *)v60 + 4375);
    v62 = ~(unsigned __int16)(-1LL << (v67.OldIrql + 1));
    v37 = (v62 & *(_DWORD *)(v61 + 20)) == 0;
    *(_DWORD *)(v61 + 20) &= v62;
    if ( !v37 )
      goto LABEL_21;
    v58 = v60;
LABEL_93:
    sub_140418E4C(v58);
LABEL_21:
    __writecr8(v18);
  }
  return i;
}
