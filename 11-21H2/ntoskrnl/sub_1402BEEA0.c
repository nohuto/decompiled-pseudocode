/*
 * XREFs of sub_1402BEEA0 @ 0x1402BEEA0
 * Callers:
 *     sub_140263068 @ 0x140263068 (sub_140263068.c)
 *     sub_14026E05C @ 0x14026E05C (sub_14026E05C.c)
 *     sub_140276E5C @ 0x140276E5C (sub_140276E5C.c)
 *     sub_14028CB64 @ 0x14028CB64 (sub_14028CB64.c)
 *     sub_1402C15F0 @ 0x1402C15F0 (sub_1402C15F0.c)
 *     sub_1402C7DF0 @ 0x1402C7DF0 (sub_1402C7DF0.c)
 *     sub_1402CC0F0 @ 0x1402CC0F0 (sub_1402CC0F0.c)
 *     sub_1402CC9A0 @ 0x1402CC9A0 (sub_1402CC9A0.c)
 *     sub_1403D452C @ 0x1403D452C (sub_1403D452C.c)
 *     sub_14045CDD6 @ 0x14045CDD6 (sub_14045CDD6.c)
 *     sub_1405827E0 @ 0x1405827E0 (sub_1405827E0.c)
 *     sub_1405AEA7C @ 0x1405AEA7C (sub_1405AEA7C.c)
 *     sub_1405AF3BC @ 0x1405AF3BC (sub_1405AF3BC.c)
 *     sub_1405AF6F0 @ 0x1405AF6F0 (sub_1405AF6F0.c)
 *     sub_140AF5478 @ 0x140AF5478 (sub_140AF5478.c)
 * Callees:
 *     sub_140267A5C @ 0x140267A5C (sub_140267A5C.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402C6AA0 @ 0x1402C6AA0 (sub_1402C6AA0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_1403C3E64 @ 0x1403C3E64 (sub_1403C3E64.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_1405A6950 @ 0x1405A6950 (sub_1405A6950.c)
 *     sub_1405AD468 @ 0x1405AD468 (sub_1405AD468.c)
 *     sub_1405AEA2C @ 0x1405AEA2C (sub_1405AEA2C.c)
 *     sub_1405B05A0 @ 0x1405B05A0 (sub_1405B05A0.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 */

unsigned __int64 __fastcall sub_1402BEEA0(__int64 a1)
{
  int v1; // r13d
  ULONG_PTR v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // r12
  int v7; // ecx
  unsigned __int64 v8; // r15
  __int64 v9; // rbx
  unsigned int v10; // r9d
  unsigned __int64 v11; // r8
  __int64 v12; // r11
  ULONG_PTR v13; // r8
  unsigned __int64 v14; // r10
  __int64 v15; // r10
  unsigned __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 *v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  volatile signed __int64 *v21; // rcx
  __int64 v22; // r8
  int v23; // r10d
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rbx
  int v26; // r15d
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r8
  __int64 v30; // rbx
  int v31; // r15d
  unsigned int v32; // edi
  unsigned __int64 v33; // rbx
  unsigned __int64 v35; // r15
  int v36; // eax
  unsigned __int64 v37; // rbx
  __int64 v38; // rcx
  _DWORD *v39; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  ULONG_PTR v44; // rdi
  ULONG_PTR v45; // r8
  volatile signed __int32 *v46; // r9
  unsigned int v47; // eax
  __int64 v48; // r13
  unsigned __int64 OldIrql; // r13
  signed int v50; // eax
  struct _KEVENT *v51; // r14
  int v52; // edi
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rdi
  __int64 v55; // rax
  struct _KEVENT *v56; // rbx
  unsigned __int64 v57; // rdi
  int v58; // eax
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  __int64 v61; // r9
  int v62; // eax
  bool v63; // zf
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r9
  __int64 v66; // r8
  int v67; // eax
  unsigned __int8 CurrentIrql; // al
  __int64 v69; // r8
  int v70; // eax
  int v71; // [rsp+40h] [rbp-A8h]
  __int64 v72; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v73; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v74; // [rsp+58h] [rbp-90h]
  unsigned __int64 v75; // [rsp+60h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE v76; // [rsp+68h] [rbp-80h] BYREF
  __int64 v77; // [rsp+80h] [rbp-68h]
  __int64 v78; // [rsp+88h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-58h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]
  unsigned int v82; // [rsp+F8h] [rbp+10h]
  int v83; // [rsp+100h] [rbp+18h]
  unsigned int v84; // [rsp+108h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 8);
  v2 = *(_QWORD *)a1;
  v73 = 0LL;
  v3 = a1;
  v78 = 1LL;
  if ( v1 == 5 )
    v1 = 1;
  v71 = *(_DWORD *)(a1 + 12);
  v4 = 48 * v2 - 0x220000000000LL;
  v83 = 0;
  v5 = *(_QWORD *)(v4 + 40);
  v84 = *(unsigned __int8 *)(v4 + 34) >> 6;
  v6 = *(_QWORD *)(qword_140C51F48 + 8 * ((v5 >> 43) & 0x3FF));
  if ( (v5 & 0x10000000000LL) != 0 )
  {
    v7 = 3 - (*(_BYTE *)(v4 + 36) & 3);
    if ( v7 == 3 )
      v7 = -1;
  }
  else
  {
    v7 = -1;
  }
  v82 = v7;
  v8 = qword_14001C780[v7];
  v75 = v8;
  *(_QWORD *)(v4 + 40) = v5 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v1 != 1 && (dword_140D06880 & 0x80u) != 0 && (++dword_140C52AE0 & dword_140D05040) == 0 )
    sub_1405AD468(v2);
  v9 = *(unsigned int *)(sub_1402C1550(v2) + 8);
  if ( qword_140C50710 )
    v74 = *(unsigned __int16 *)(sub_1405A6950(v2) + 12);
  else
    v74 = 0LL;
  v10 = v82;
  v11 = qword_14001C780[v82];
  v72 = *(_QWORD *)(v6 + 16) + 24512 * v9;
  v12 = v72 + 1072LL * v82;
  v77 = v12;
  if ( v11 == 16 )
    v13 = v2 >> 4;
  else
    v13 = v2 / v11;
  v14 = (unsigned int)dword_140C507C0[v82];
  if ( v14 == 16 )
    LODWORD(v13) = v13 & 0xF;
  else
    v13 %= v14;
  v15 = v1;
  v16 = v84 + 4 * (v74 + 4 * (v1 + (unsigned __int64)(v2 < 0x100000 ? 2 : 0)));
  v74 = v16;
  v17 = *(_QWORD *)(v12 + 8 * v16 + 560) + 24LL * (unsigned int)v13;
  if ( (v71 & 2) == 0 )
  {
    LOBYTE(v16) = -1;
    v38 = v72 + 22848;
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      sub_140461A66(v38, v16);
    else
      sub_14030F870(v38, v16);
    v12 = v77;
    v10 = v82;
    v15 = v1;
  }
  if ( *(_QWORD *)(v72 + 22904) && (unsigned int)sub_1405AEA2C(v2, v10) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v72 + 22848));
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v32 = v82;
    sub_1402C6AA0(v4, v82, 1, v1, 0LL, (__int64)&v73, v3 + 24);
    if ( (v71 & 4) != 0 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v72 + 22848));
      v30 = *(_QWORD *)(v72 + 22792);
      --*(_DWORD *)(v72 + 22788);
      *(_QWORD *)(v72 + 22792) = 0LL;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v72 + 22848));
    }
    else
    {
      v30 = 0LL;
    }
    v23 = 0;
    v29 = v72;
    v31 = v71 & 2;
    v78 = 0LL;
    goto LABEL_41;
  }
  *(_BYTE *)(v4 + 34) ^= (*(_BYTE *)(v4 + 34) ^ v1) & 7;
  v18 = *(__int64 **)(v17 + 8);
  if ( *v18 != v17 )
    __fastfail(3u);
  *(_QWORD *)(v4 + 8) = v18;
  *(_QWORD *)v4 = v17;
  *v18 = v4;
  v19 = v74;
  *(_QWORD *)(v17 + 8) = v4;
  ++*(_QWORD *)(v17 + 16);
  ++*(_QWORD *)(v12 + 8 * v19 + 48);
  v20 = 2LL;
  ++*(_QWORD *)(v12 + 8 * v15);
  if ( v2 < 0x100000 )
    v20 = 4LL;
  ++*(_QWORD *)(v12 + 8 * (v15 + v20));
  if ( v1 )
    v21 = (volatile signed __int64 *)(v6 + 2624);
  else
    v21 = (volatile signed __int64 *)(v6 + 2496);
  _InterlockedExchangeAdd64(v21, v8);
  v22 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
  if ( !*(_BYTE *)(v22 + 15590) )
    goto LABEL_87;
  if ( v10 == 2 )
  {
    v23 = 1;
    if ( _InterlockedExchangeAdd8((volatile signed __int8 *)((v2 >> 9) + *(_QWORD *)(v22 + 15856)), 1u) != 31 )
    {
LABEL_24:
      v83 = 0;
      goto LABEL_25;
    }
    v42 = *(_QWORD *)(v22 + 15872);
    LOBYTE(v43) = 1;
    v44 = v2 >> 18;
    v45 = v44 & 0x1F;
    v46 = (volatile signed __int32 *)(v42 + 4 * (v44 >> 5));
    if ( v45 + 1 > 0x20 )
    {
      if ( (v44 & 0x1F) != 0 )
      {
        v52 = v44 & 0x1F;
        _InterlockedOr(v46++, ((1 << (32 - v52)) - 1) << v45);
        v43 = 1LL - (unsigned int)(32 - v52);
        if ( v43 >= 0x20 )
        {
          v53 = v43 >> 5;
          v43 += -32LL * (v43 >> 5);
          do
          {
            *v46++ = -1;
            --v53;
          }
          while ( v53 );
        }
        if ( !v43 )
          goto LABEL_84;
      }
      v47 = (1 << v43) - 1;
    }
    else
    {
      v47 = 1 << v45;
    }
    _InterlockedOr(v46, v47);
LABEL_84:
    v83 = 1;
    goto LABEL_25;
  }
  if ( v10 != 1 )
  {
LABEL_87:
    v23 = 1;
    goto LABEL_24;
  }
  v23 = 1;
  if ( _InterlockedIncrement16((volatile signed __int16 *)(*(_QWORD *)(v22 + 15880) + 2 * (v2 >> 18))) != 512
    || !_bittest64(&qword_140D068D8, 0x25u) )
  {
    goto LABEL_24;
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 15888), 1, 0);
  v83 = 1;
LABEL_25:
  memset(&v76, 0, sizeof(v76));
  if ( v8 != 1 )
  {
    v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 16896), v8);
    v25 = v8 + v24;
    v26 = 0;
    if ( v25 < 0xA0 )
    {
      if ( v25 < 0x22 )
      {
LABEL_33:
        v27 = *(_QWORD *)(v6 + 15952);
        if ( v24 <= v27 && v25 > v27 || (v28 = *(_QWORD *)(v6 + 15944), v24 <= v28) && v25 > v28 )
          sub_1403C3E64(v6);
        v8 = v75;
        goto LABEL_36;
      }
    }
    else if ( v24 < 0xA0 )
    {
      v26 = 2;
    }
    if ( v24 < 0x22 )
      v26 |= 1u;
    if ( v24 < 0x420 && v25 >= 0x420 )
      v26 |= 4u;
    if ( v26 )
    {
      v76.LockQueue.Next = 0LL;
      v76.LockQueue.Lock = (volatile PKSPIN_LOCK)(v6 + 15680);
      sub_1403119F0(&v76);
      v50 = 0;
      v51 = (struct _KEVENT *)(v6 + 15712);
      LODWORD(v73) = 0;
      do
      {
        if ( _bittest(&v26, v50) )
        {
          KeSetEvent(v51 - 1, 0, 0);
          ++v51->Header.LockNV;
          v50 = v73;
        }
        ++v50;
        v51 = (struct _KEVENT *)((char *)v51 + 32);
        LODWORD(v73) = v50;
      }
      while ( v50 < 3 );
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v76);
      v3 = a1;
    }
    goto LABEL_33;
  }
  v54 = _InterlockedIncrement64((volatile signed __int64 *)(v6 + 16896));
  if ( v54 <= 0x420 )
  {
    switch ( v54 )
    {
      case 0xA0uLL:
        v55 = 15720LL;
LABEL_128:
        v76.LockQueue.Next = 0LL;
        v76.LockQueue.Lock = (volatile PKSPIN_LOCK)(v6 + 15680);
        v56 = (struct _KEVENT *)(v6 + v55);
        sub_1403119F0(&v76);
        KeSetEvent(v56, 0, 0);
        ++v56[1].Header.LockNV;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v76);
        v23 = 1;
        break;
      case 0x420uLL:
        v55 = 15752LL;
        goto LABEL_128;
      case 0x22uLL:
        v55 = 15688LL;
        goto LABEL_128;
    }
  }
  v57 = v54 - 1;
  if ( v57 == *(_QWORD *)(v6 + 15944) || v57 == *(_QWORD *)(v6 + 15952) )
  {
    sub_1403C3E64(v6);
LABEL_36:
    v23 = 1;
  }
  v29 = v72;
  v73 = v8;
  if ( (v71 & 4) != 0 )
  {
    v30 = *(_QWORD *)(v72 + 22792);
    --*(_DWORD *)(v72 + 22788);
    *(_QWORD *)(v72 + 22792) = 0LL;
  }
  else
  {
    v30 = 0LL;
  }
  v31 = v71 & 2;
  if ( (v71 & 2) == 0 )
  {
    v39 = (_DWORD *)(v72 + 22848);
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    {
      sub_14063D8B0(v39, retaddr);
      v29 = v72;
      v23 = 1;
    }
    else
    {
      *v39 = 0;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v41 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v41 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v58 = *(_DWORD *)(v41 + 24) - 1;
        *(_DWORD *)(v41 + 24) = v58;
        if ( !v58 )
        {
          sub_140418E4C(CurrentPrcb);
          v29 = v72;
          v23 = 1;
        }
      }
    }
  }
  v32 = v82;
LABEL_41:
  if ( v30 )
  {
    sub_1405B05A0(v30);
    v29 = v72;
    v23 = v78;
  }
  if ( !v23 )
  {
    v33 = *(unsigned __int8 *)(v3 + 16);
    if ( (_BYTE)v33 == 17 )
      return v73;
    if ( !dword_140D06B08 )
      goto LABEL_70;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_70;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 0xFu )
      goto LABEL_70;
    if ( (unsigned __int8)v33 > 0xFu )
      goto LABEL_70;
    if ( CurrentIrql < 2u )
      goto LABEL_70;
    v65 = KeGetCurrentPrcb();
    v69 = *((_QWORD *)v65 + 4375);
    v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
    v63 = (v70 & *(_DWORD *)(v69 + 20)) == 0;
    *(_DWORD *)(v69 + 20) &= v70;
    if ( !v63 )
      goto LABEL_70;
LABEL_159:
    sub_140418E4C(v65);
LABEL_70:
    __writecr8(v33);
    return v73;
  }
  if ( v1 == 1 && (*(_DWORD *)(v6 + 4) & 0x40) == 0 )
  {
    v35 = v29 + 24512;
    v36 = *(_DWORD *)(v6 + 16100);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( !v36 && v29 < v35 )
    {
      v37 = v29 + 2152;
      do
      {
        if ( *(_BYTE *)(v37 + 20813) )
        {
          if ( !*(_BYTE *)(v37 + 20812)
            && (unsigned __int64)(16LL * *(_QWORD *)v37
                                + (*(_QWORD *)(v37 - 1072) << 9)
                                + (*(_QWORD *)(v37 - 2144) << 18)) >= 0x400
            && (unsigned __int64)(16LL * *(_QWORD *)(v37 - 8)
                                + (*(_QWORD *)(v37 - 1080) << 9)
                                + (*(_QWORD *)(v37 - 2152) << 18)) < 0x100000 )
          {
            v48 = *(_QWORD *)(v37 + 20792);
            if ( v48 )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v48 + 24), &LockHandle);
              if ( !*(_BYTE *)(v37 + 20812) )
              {
                *(_BYTE *)(v37 + 20812) = 1;
                sub_140267A5C(v48, 2);
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              OldIrql = LockHandle.OldIrql;
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  v59 = KeGetCurrentIrql();
                  if ( v59 <= 0xFu && LockHandle.OldIrql <= 0xFu && v59 >= 2u )
                  {
                    v60 = KeGetCurrentPrcb();
                    v61 = *((_QWORD *)v60 + 4375);
                    v62 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                    v63 = (v62 & *(_DWORD *)(v61 + 20)) == 0;
                    *(_DWORD *)(v61 + 20) &= v62;
                    if ( v63 )
                      sub_140418E4C(v60);
                  }
                }
              }
              __writecr8(OldIrql);
            }
          }
        }
        v37 += 24512LL;
      }
      while ( v37 - 2152 < v35 );
      v3 = a1;
    }
    v31 = v71 & 2;
  }
  if ( v83 && (v71 & 1) == 0 && (dword_140D06880 & 0x30) != 0 && (v32 != 1 || _bittest64(&qword_140D068D8, 0x25u)) )
    KeSetEvent((PRKEVENT)(v6 + 15920), 0, 0);
  v33 = *(unsigned __int8 *)(v3 + 16);
  if ( (_BYTE)v33 != 17 )
  {
    if ( *(_BYTE *)(v3 + 17) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return v73;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v31 )
    {
      if ( !dword_140D06B08 )
        goto LABEL_70;
      if ( (dword_140D06B08 & 1) == 0 )
        goto LABEL_70;
      v64 = KeGetCurrentIrql();
      if ( v64 > 0xFu )
        goto LABEL_70;
      if ( (unsigned __int8)v33 > 0xFu )
        goto LABEL_70;
      if ( v64 < 2u )
        goto LABEL_70;
      v65 = KeGetCurrentPrcb();
      v66 = *((_QWORD *)v65 + 4375);
      v67 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
      v63 = (v67 & *(_DWORD *)(v66 + 20)) == 0;
      *(_DWORD *)(v66 + 20) &= v67;
      if ( !v63 )
        goto LABEL_70;
      goto LABEL_159;
    }
  }
  return v73;
}
