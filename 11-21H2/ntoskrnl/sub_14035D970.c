/*
 * XREFs of sub_14035D970 @ 0x14035D970
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025A794 @ 0x14025A794 (sub_14025A794.c)
 *     sub_140275290 @ 0x140275290 (sub_140275290.c)
 *     sub_140275670 @ 0x140275670 (sub_140275670.c)
 *     sub_140275FC0 @ 0x140275FC0 (sub_140275FC0.c)
 *     sub_1402766A0 @ 0x1402766A0 (sub_1402766A0.c)
 *     sub_140276728 @ 0x140276728 (sub_140276728.c)
 *     sub_1402768B4 @ 0x1402768B4 (sub_1402768B4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402EF060 @ 0x1402EF060 (sub_1402EF060.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14035E3C4 @ 0x14035E3C4 (sub_14035E3C4.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_1403AE50C @ 0x1403AE50C (sub_1403AE50C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140417160 @ 0x140417160 (sub_140417160.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140538E4C @ 0x140538E4C (sub_140538E4C.c)
 *     sub_1405397A8 @ 0x1405397A8 (sub_1405397A8.c)
 *     sub_140539900 @ 0x140539900 (sub_140539900.c)
 *     sub_14053D2E4 @ 0x14053D2E4 (sub_14053D2E4.c)
 */

char __fastcall sub_14035D970(__int64 a1)
{
  _QWORD *v1; // r13
  _QWORD *v2; // r15
  __int64 v3; // r12
  __int64 v4; // rdi
  int v5; // ebx
  _QWORD *v6; // rax
  int v7; // r15d
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // cf
  signed __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 **v15; // r12
  int v16; // eax
  __int64 *v17; // r10
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 *v20; // r10
  __int64 v21; // rcx
  volatile signed __int32 *v22; // rax
  __int64 v23; // r8
  KIRQL OldIrql; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v27; // r9
  int v28; // eax
  bool v29; // zf
  __int64 v30; // rcx
  __int64 v31; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v33; // ebx
  struct _KTHREAD *v34; // rax
  volatile signed __int32 *v35; // rax
  _QWORD *v36; // rdx
  _QWORD *v37; // rcx
  KIRQL v38; // bl
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  __int64 v41; // r9
  int v42; // eax
  __int64 v43; // rbx
  KIRQL v44; // bl
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  __int64 v47; // r9
  int v48; // eax
  signed __int64 v49; // rax
  signed __int64 v50; // rax
  bool v51; // cc
  char v53; // [rsp+30h] [rbp-128h]
  char v54; // [rsp+31h] [rbp-127h]
  _QWORD *v55; // [rsp+38h] [rbp-120h]
  int v56; // [rsp+40h] [rbp-118h]
  __int64 v57; // [rsp+48h] [rbp-110h]
  __int64 v58; // [rsp+50h] [rbp-108h]
  __int64 v59; // [rsp+58h] [rbp-100h] BYREF
  _QWORD *v60; // [rsp+60h] [rbp-F8h]
  int v61; // [rsp+68h] [rbp-F0h]
  _QWORD *v62; // [rsp+70h] [rbp-E8h]
  __int64 v63; // [rsp+78h] [rbp-E0h]
  _QWORD *v64; // [rsp+80h] [rbp-D8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-B8h]
  _QWORD v67[6]; // [rsp+A8h] [rbp-B0h] BYREF
  _QWORD *v68; // [rsp+D8h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE v69; // [rsp+E0h] [rbp-78h] BYREF
  _QWORD v70[2]; // [rsp+100h] [rbp-58h] BYREF
  _QWORD v71[2]; // [rsp+110h] [rbp-48h] BYREF

  v63 = a1;
  v67[5] = a1;
  v1 = 0LL;
  v2 = 0LL;
  v54 = 0;
  v59 = 0LL;
  v64 = (_QWORD *)a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v69, 0, sizeof(v69));
  v60 = 0LL;
  v56 = *(_DWORD *)(a1 + 32);
  v61 = v56;
  if ( (unsigned int)(v56 - 1) > 1 )
    KeBugCheckEx(0x34u, 0x19CEuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v3 = *(_QWORD *)(a1 + 56);
  v57 = v3;
  v67[2] = v3;
  v4 = *(_QWORD *)(a1 + 72);
  v67[3] = v4;
  v66 = v4;
  v58 = *(_QWORD *)(a1 + 64);
  v67[4] = v58;
  while ( 1 )
  {
    v5 = 0;
    v53 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 768), &LockHandle);
    if ( v54 )
    {
      *(_BYTE *)(v4 + 196) = 0;
      v54 = 0;
      sub_14025A794(v3, v4, *(_DWORD *)(v4 + 180), *(_DWORD *)(v4 + 184));
    }
    if ( v60 == (_QWORD *)35422 )
    {
      if ( *((_BYTE *)v2 + 128) == 2 )
        *(_QWORD *)(v2[2] + 496LL) = v2;
      v6 = (_QWORD *)v1[1];
      if ( (_QWORD *)*v6 != v1 )
        goto LABEL_112;
      *v2 = v1;
      v2[1] = v6;
      *v6 = v2;
      v1[1] = v2;
      v60 = 0LL;
    }
    v7 = v56;
    if ( v56 == 2 )
      break;
    while ( 1 )
    {
      if ( (v5 & 1) != 0 || (v5 |= 1u, v1 = (_QWORD *)(v4 + 72), (_QWORD *)*v1 == v1) )
      {
        if ( (v5 & 2) != 0 || (v5 |= 2u, v1 = (_QWORD *)(v4 + 88), (_QWORD *)*v1 == v1) )
        {
LABEL_22:
          if ( (v5 & 4) != 0 )
            goto LABEL_13;
          v5 |= 4u;
          v1 = (_QWORD *)(v4 + 104);
          if ( (_QWORD *)*v1 == v1 )
            goto LABEL_13;
        }
      }
      v62 = v1;
      v10 = *(_QWORD *)(v4 + 16);
      if ( v7 != 2 || !sub_1402768B4(v3) )
      {
        v11 = v66 + 104;
        v55 = (_QWORD *)(v66 + 104);
        if ( v1 == (_QWORD *)(v66 + 104) )
          goto LABEL_33;
        if ( byte_140C54C58 == 1 )
        {
          if ( !*(_DWORD *)(v10 + 808) )
            break;
          v12 = (unsigned int)(*(_DWORD *)(v4 + 192) + 1) < *(_DWORD *)(v10 + 776);
        }
        else
        {
          if ( !*(_DWORD *)(v3 + 808) )
            break;
          v12 = (unsigned int)(*(_DWORD *)(v4 + 192) + 1) < *(_DWORD *)(v3 + 776);
        }
        if ( v12 || *(_DWORD *)(v4 + 152) )
          break;
      }
LABEL_17:
      if ( v7 == 2 )
        goto LABEL_22;
    }
    if ( v1 != (_QWORD *)v11 )
      goto LABEL_34;
LABEL_33:
    if ( (unsigned int)(*(_DWORD *)(v4 + 188) + 1) > *(_DWORD *)(v3 + 1224) )
      goto LABEL_17;
LABEL_34:
    v2 = sub_140275290(v11, v4, v1);
    v67[1] = v2;
    if ( !v2 )
    {
      v7 = v56;
      goto LABEL_17;
    }
    v13 = MEMORY[0xFFFFF78000000014];
    if ( !*(_BYTE *)(v4 + 224) || MEMORY[0xFFFFF78000000014] < *(_QWORD *)(v4 + 216) + (unsigned int)dword_140C54C78 )
      goto LABEL_57;
    v14 = v55;
    if ( *(_QWORD *)(v4 + 56) == v4 + 56 && *(_DWORD *)(v3 + 912) && (_QWORD *)*v55 != v55 )
    {
      v15 = (__int64 **)(v4 + 136);
      if ( *v15 == (__int64 *)v15 )
      {
        v3 = v57;
      }
      else
      {
        v16 = sub_140539900(v57, v4);
        *(_QWORD *)(v4 + 216) = v13;
        if ( *(_DWORD *)(v4 + 152) && v16 == 3 )
          *(_BYTE *)(v4 + 225) = 1;
        if ( v16 == 2 )
        {
          v17 = *v15;
          v18 = **v15;
          if ( (__int64 **)(*v15)[1] != v15 || *(__int64 **)(v18 + 8) != v17 )
            goto LABEL_112;
          *v15 = (__int64 *)v18;
          *(_QWORD *)(v18 + 8) = v15;
          ++*(_DWORD *)(v4 + 152);
          v3 = v57;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v57 + 1232)) <= 1 )
            __fastfail(0xEu);
          if ( v58 && _InterlockedIncrement64((volatile signed __int64 *)(v58 + 8)) <= 1 )
            __fastfail(0xEu);
          *v17 = 0LL;
          sub_1402EF060((ULONG_PTR)v17, 0, *(_DWORD *)(v4 + 24), *(_QWORD *)(v57 + 8));
          v53 = 1;
        }
        else
        {
          v3 = v57;
        }
LABEL_57:
        v14 = v55;
      }
    }
    if ( v1 == v14 )
      *(_QWORD *)(v4 + 208) = v13;
    if ( !sub_1402768B4(v3)
      && v13 >= *(_QWORD *)(v4 + 208) + (unsigned int)dword_140C54C78
      && *(_QWORD *)(v4 + 56) == v4 + 56
      && (_QWORD *)*v55 != v55 )
    {
      v19 = (_QWORD *)(v4 + 136);
      v20 = *(__int64 **)(v4 + 136);
      if ( v20 != (__int64 *)(v4 + 136) && !*(_DWORD *)(v4 + 152) )
      {
        v21 = *v20;
        if ( (_QWORD *)v20[1] != v19 || *(__int64 **)(v21 + 8) != v20 )
          goto LABEL_112;
        *v19 = v21;
        *(_QWORD *)(v21 + 8) = v19;
        ++*(_DWORD *)(v4 + 152);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 1232)) <= 1 )
          __fastfail(0xEu);
        if ( v58 && _InterlockedIncrement64((volatile signed __int64 *)(v58 + 8)) <= 1 )
          __fastfail(0xEu);
        *v20 = 0LL;
        sub_1402EF060((ULONG_PTR)v20, 0, *(_DWORD *)(v4 + 24), *(_QWORD *)(v3 + 8));
        *(_QWORD *)(v4 + 208) = v13;
        v53 = 1;
      }
    }
    if ( v1 == v55 || (v22 = (volatile signed __int32 *)(v4 + 192), v1 == (_QWORD *)(v4 + 120)) )
      v22 = (volatile signed __int32 *)(v4 + 188);
    _InterlockedAdd(v22, 1u);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v27 = *((_QWORD *)CurrentPrcb + 4375);
          v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
          v23 = (unsigned int)v28 & *(_DWORD *)(v27 + 20);
          *(_DWORD *)(v27 + 20) = v23;
          if ( v29 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (xmmword_140D06910 & 0x20000) != 0 )
    {
      if ( v53 )
        sub_1405397A8(v3, v4, 2LL);
      if ( (xmmword_140D06910 & 0x20000) != 0 )
      {
        v67[0] = v2;
        v70[0] = v67;
        v70[1] = 8LL;
        sub_14035EDE4((unsigned int)v70, 1, -2147352576, 5633, 4200706);
      }
    }
    switch ( *((_BYTE *)v2 + 128) )
    {
      case 1:
        sub_14035E3C4(v2, v2[2]);
        break;
      case 2:
        CurrentThread = KeGetCurrentThread();
        *((_DWORD *)CurrentThread + 345) |= 2u;
        v33 = 0;
        do
        {
          v60 = v2;
          sub_140275FC0(v2[2], (__int64)&v59, v4);
          if ( v33 >= 0xA )
            break;
          ++v33;
        }
        while ( v60 == (_QWORD *)35422 );
        v34 = KeGetCurrentThread();
        *((_DWORD *)v34 + 345) &= ~2u;
        break;
      case 3:
        v30 = *(_QWORD *)(v63 + 64);
        v31 = *((unsigned int *)v2 + 4);
        if ( v30 )
          sub_140538E4C(v30, v4, v2, v31);
        else
          sub_140275670(v3, v4, (int)v2, v31);
        break;
      case 4:
        KeSetEvent((PRKEVENT)v2[2], 0, 0);
        v54 = 1;
        break;
    }
    if ( v1 == (_QWORD *)(v4 + 104) || (v35 = (volatile signed __int32 *)(v4 + 192), v1 == (_QWORD *)(v4 + 120)) )
      v35 = (volatile signed __int32 *)(v4 + 188);
    _InterlockedDecrement(v35);
    if ( v60 == (_QWORD *)35422 )
    {
      if ( (xmmword_140D06910 & 0x20000) != 0 )
      {
        LOBYTE(v23) = 1;
        sub_1403AE50C(v1, v2, v23, 0LL);
      }
    }
    else
    {
      if ( (xmmword_140D06910 & 0x20000) != 0 )
      {
        v68 = v2;
        v71[0] = &v68;
        v71[1] = 8LL;
        sub_14035EDE4((unsigned int)v71, 1, -2147352576, 5634, 4200706);
      }
      sub_1402766A0((PSLIST_ENTRY)v2);
    }
  }
  if ( !*(_BYTE *)(v4 + 225) )
    goto LABEL_17;
  *(_BYTE *)(v4 + 225) = 0;
LABEL_13:
  if ( v7 != 2 )
  {
    v36 = *(_QWORD **)(v4 + 64);
    if ( *v36 == v4 + 56 )
    {
      v37 = v64;
      *v64 = v4 + 56;
      v37[1] = v36;
      *v36 = v37;
      *(_QWORD *)(v4 + 64) = v37;
      --*(_DWORD *)(v4 + 48);
      goto LABEL_114;
    }
LABEL_112:
    __fastfail(3u);
  }
  v8 = *(_QWORD **)(v4 + 144);
  if ( *v8 != v4 + 136 )
    goto LABEL_112;
  v9 = v64;
  *v64 = v4 + 136;
  v9[1] = v8;
  *v8 = v9;
  *(_QWORD *)(v4 + 144) = v9;
  --*(_DWORD *)(v4 + 152);
LABEL_114:
  if ( *(_BYTE *)(v4 + 224) && !*(_DWORD *)(v4 + 152) && *(_DWORD *)(v4 + 48) <= 1u )
  {
    *(_BYTE *)(v4 + 224) = 0;
    memset(*(void **)(v3 + 1072), 0, 8LL * (unsigned int)(*(_DWORD *)(v3 + 800) + 1));
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v38 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v39 = KeGetCurrentIrql();
      if ( v39 <= 0xFu && LockHandle.OldIrql <= 0xFu && v39 >= 2u )
      {
        v40 = KeGetCurrentPrcb();
        v41 = *((_QWORD *)v40 + 4375);
        v42 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v29 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
        *(_DWORD *)(v41 + 20) &= v42;
        if ( v29 )
          sub_140418E4C(v40);
      }
    }
  }
  __writecr8(v38);
  v43 = v58;
  if ( v58
    && v7 != 2
    && *(_DWORD *)(v4 + 48) <= 1u
    && *(_QWORD *)(v58 + 992) >= (unsigned __int64)*(unsigned int *)(v58 + 1040)
    && MEMORY[0xFFFFF78000000014] >= *(_QWORD *)(v58 + 1584) + 5000000LL )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 704), &v69);
    sub_14053D2E4(v58, 32LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v69);
    v44 = v69.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v45 = KeGetCurrentIrql();
        if ( v45 <= 0xFu && v69.OldIrql <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = *((_QWORD *)v46 + 4375);
          v48 = ~(unsigned __int16)(-1LL << (v69.OldIrql + 1));
          v29 = (v48 & *(_DWORD *)(v47 + 20)) == 0;
          *(_DWORD *)(v47 + 20) &= v48;
          if ( v29 )
            sub_140418E4C(v46);
        }
      }
    }
    __writecr8(v44);
    v43 = v58;
  }
  if ( (xmmword_140D06910 & 0x20000) != 0 && v7 == 2 )
    sub_1405397A8(v3, v4, 3LL);
  LOBYTE(v49) = sub_140276728(v3);
  if ( v43 )
  {
    v50 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + 8), 0xFFFFFFFFFFFFFFFFuLL);
    v51 = v50 <= 1;
    v49 = v50 - 1;
    if ( v51 )
    {
      if ( v49 )
        __fastfail(0xEu);
      LOBYTE(v49) = KeSetEvent((PRKEVENT)(v43 + 1200), 0, 0);
    }
  }
  return v49;
}
