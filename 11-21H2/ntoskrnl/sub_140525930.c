/*
 * XREFs of sub_140525930 @ 0x140525930
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140525930(__int64 *a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // r12
  int v12; // edi
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  KIRQL v15; // bp
  struct _KPRCB *v16; // r9
  __int64 v17; // r8
  int v18; // eax
  bool v19; // zf
  void *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 *v24; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  void *v34; // rax
  int v35; // eax
  __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v42; // r9
  KSPIN_LOCK *v43; // r14
  KSPIN_LOCK *v44; // r15
  _QWORD *v45; // rax
  _QWORD *v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  _QWORD *v49; // r9
  __int64 v50; // rcx
  __int64 *v51; // rax
  __int64 v52; // rcx
  __int64 *v53; // rbp
  __int64 v54; // rax
  __int64 v55; // rdx
  _QWORD *v56; // rax
  unsigned __int8 v57; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v59; // r9
  int v60; // eax
  __int64 v61; // rdx
  KIRQL v63; // [rsp+60h] [rbp+8h]
  __int64 v64; // [rsp+68h] [rbp+10h]

  v2 = a1[1];
  v4 = *a1;
  v5 = 0LL;
  v6 = *(_QWORD *)(a2 + 24);
  v64 = v2;
  v7 = 0LL;
  v63 = KeAcquireSpinLockRaiseToDpc(&qword_140C4A130);
  v9 = (_QWORD *)sub_1403B1F04(v8, 40LL);
  v11 = v9;
  if ( !v9 )
    goto LABEL_2;
  v9[2] = *(_QWORD *)(a2 + 24);
  v9[4] = v9 + 3;
  v9[3] = v9 + 3;
  v20 = (void *)sub_1403B1F04(v10, 16456LL);
  v5 = (__int64)v20;
  if ( !v20 )
    goto LABEL_2;
  memset(v20, 0, 0x4048uLL);
  if ( byte_140C4BCBC )
  {
    v22 = v6 + 24;
    v23 = sub_1403B1F04(v21, (unsigned int)(*(_DWORD *)(v6 + 44) << 9));
    *(_QWORD *)(v5 + 16448) = v23;
    if ( !v23 )
      goto LABEL_2;
  }
  else
  {
    v22 = v6 + 400;
  }
  *(_QWORD *)(v5 + 40) = a2;
  *(_BYTE *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 48) = v2;
  v19 = byte_140C4BCBC == 0;
  *(_DWORD *)(v5 + 60) = *(_DWORD *)(v22 + 16);
  if ( !v19 )
  {
    v12 = sub_14042A5E0(*(_QWORD *)(a2 + 40), *(unsigned int *)(v2 + 16));
    if ( v12 < 0 )
      goto LABEL_3;
    goto LABEL_43;
  }
  v24 = (__int64 *)(v6 + 384);
  v25 = *(_QWORD *)(v6 + 384);
  if ( v25 != v6 + 384 )
  {
    v21 = *(unsigned int *)(v4 + 16);
    do
    {
      v7 = v25;
      if ( *(_DWORD *)(v25 + 16) == (_DWORD)v21 )
        break;
      v25 = *(_QWORD *)v25;
    }
    while ( (__int64 *)v25 != v24 );
  }
  v26 = *(_QWORD *)(a2 + 88);
  if ( v26 && v26 != v7 )
  {
    v12 = -1073741823;
LABEL_22:
    v7 = 0LL;
    goto LABEL_3;
  }
  if ( v7 && *(_DWORD *)(v7 + 16) == *(_DWORD *)(v4 + 16) )
  {
    v2 = v64;
    v12 = sub_14042A5E0(*(_QWORD *)(v6 + 16), v7);
    if ( v12 < 0 )
      goto LABEL_22;
    v28 = *(_QWORD *)(v7 + 56);
    if ( v28 )
    {
      v29 = *(_QWORD **)(v7 + 24);
      if ( v29 != (_QWORD *)(v7 + 24) )
      {
        do
        {
          sub_14042A5E0(*(_QWORD *)(v6 + 16), *(v29 - 7));
          v29 = (_QWORD *)*v29;
        }
        while ( v29 != (_QWORD *)(v7 + 24) );
        v28 = *(_QWORD *)(v7 + 56);
      }
      *(_QWORD *)(v7 + 56) = 0LL;
      if ( *(_QWORD *)(v6 + 360) )
        sub_14042A5E0(*(_QWORD *)(v6 + 16), v7);
      else
        sub_1403B1B5C(v27, v28);
      v2 = v64;
    }
    if ( !*(_QWORD *)(a2 + 88) )
    {
      v30 = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 88) = v7;
      sub_14042A5E0(*(_QWORD *)(v6 + 16), v30);
      v31 = v7 + 24;
      v32 = (_QWORD *)(a2 + 96);
      v33 = *(_QWORD *)v31;
      if ( *(_QWORD *)(*(_QWORD *)v31 + 8LL) != v31 )
        goto LABEL_64;
      *v32 = v33;
      *(_QWORD *)(a2 + 104) = v31;
      *(_QWORD *)(v33 + 8) = v32;
      *(_QWORD *)v31 = v32;
    }
    goto LABEL_43;
  }
  v34 = (void *)sub_1403B1F04(v21, 64LL);
  v7 = (__int64)v34;
  if ( !v34 )
  {
LABEL_2:
    v12 = -1073741670;
    goto LABEL_3;
  }
  memset(v34, 0, 0x40uLL);
  v35 = *(_DWORD *)(v4 + 16);
  v36 = v7 + 24;
  *(_DWORD *)(v7 + 16) = v35;
  *(_QWORD *)(v7 + 32) = v7 + 24;
  *(_QWORD *)(v7 + 24) = v7 + 24;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 56) = 0LL;
  v12 = sub_14042A5E0(*(_QWORD *)(v6 + 16), v7);
  if ( v12 < 0 )
    goto LABEL_3;
  v37 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 88) = v7;
  sub_14042A5E0(*(_QWORD *)(v6 + 16), v37);
  v38 = *(_QWORD *)v36;
  v39 = (_QWORD *)(a2 + 96);
  if ( *(_QWORD *)(*(_QWORD *)v36 + 8LL) != v36 )
    goto LABEL_64;
  *v39 = v38;
  *(_QWORD *)(a2 + 104) = v36;
  *(_QWORD *)(v38 + 8) = v39;
  *(_QWORD *)v36 = v39;
  v40 = *v24;
  if ( *(__int64 **)(*v24 + 8) != v24 )
    goto LABEL_64;
  *(_QWORD *)(v7 + 8) = v24;
  *(_QWORD *)v7 = v40;
  *(_QWORD *)(v40 + 8) = v7;
  *v24 = v7;
  v2 = v64;
LABEL_43:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v42 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v42 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v43 = (KSPIN_LOCK *)(v2 + 24);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 24));
  v44 = (KSPIN_LOCK *)(a2 + 16);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a2 + 16));
  ++*(_DWORD *)(a2 + 32);
  v45 = (_QWORD *)(v64 + 40);
  v46 = *(_QWORD **)(v64 + 40);
  if ( v46 == (_QWORD *)(v64 + 40) )
    goto LABEL_52;
  v47 = *(_QWORD *)(a2 + 24);
  do
  {
    v48 = v46[2];
    v49 = v46;
    if ( v48 == v47 )
      goto LABEL_54;
    v46 = (_QWORD *)*v46;
  }
  while ( v46 != v45 );
  if ( v48 != v47 )
  {
LABEL_52:
    v50 = *v45;
    if ( *(_QWORD **)(*v45 + 8LL) != v45 )
      goto LABEL_64;
    *v11 = v50;
    v49 = v11;
    v11[1] = v45;
    *(_QWORD *)(v50 + 8) = v11;
    *v45 = v11;
    v11 = 0LL;
  }
LABEL_54:
  v51 = v49 + 3;
  v52 = v49[3];
  if ( *(_QWORD **)(v52 + 8) != v49 + 3 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 8) = v51;
  v53 = (__int64 *)(a2 + 112);
  *(_QWORD *)v5 = v52;
  *(_QWORD *)(v52 + 8) = v5;
  *v51 = v5;
  v54 = v5;
  v55 = *v53;
  v5 = 0LL;
  v56 = (_QWORD *)(v54 + 16);
  if ( *(__int64 **)(*v53 + 8) != v53 )
LABEL_64:
    __fastfail(3u);
  *v56 = v55;
  v56[1] = v53;
  *(_QWORD *)(v55 + 8) = v56;
  *v53 = (__int64)v56;
  KeReleaseSpinLockFromDpcLevel(v44);
  KeReleaseSpinLockFromDpcLevel(v43);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v57 = KeGetCurrentIrql();
      if ( v57 <= 0xFu && CurrentIrql <= 0xFu && v57 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v59 = *((_QWORD *)CurrentPrcb + 4375);
        v60 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v60 & *(_DWORD *)(v59 + 20)) == 0;
        *(_DWORD *)(v59 + 20) &= v60;
        if ( v19 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  v7 = 0LL;
LABEL_3:
  KeReleaseSpinLockFromDpcLevel(&qword_140C4A130);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v14 = KeGetCurrentIrql(), v14 <= 0xFu) )
  {
    v15 = v63;
    if ( v63 <= 0xFu && v14 >= 2u )
    {
      v16 = KeGetCurrentPrcb();
      v13 = (unsigned int)v63 + 1;
      v17 = *((_QWORD *)v16 + 4375);
      v18 = ~(unsigned __int16)(-1LL << (v63 + 1));
      v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
      *(_DWORD *)(v17 + 20) &= v18;
      if ( v19 )
        sub_140418E4C((__int64)v16);
    }
  }
  else
  {
    v15 = v63;
  }
  __writecr8(v15);
  if ( v11 )
    sub_1403B1B5C(v13, (__int64)v11);
  if ( v5 )
  {
    v61 = *(_QWORD *)(v5 + 16448);
    if ( v61 )
      sub_1403B1B5C(v13, v61);
    sub_1403B1B5C(v13, v5);
  }
  if ( v7 )
    sub_1403B1B5C(v13, v7);
  return (unsigned int)v12;
}
