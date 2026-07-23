/*
 * XREFs of sub_14021D404 @ 0x14021D404
 * Callers:
 *     FsRtlProcessFileLock @ 0x14021D0B0 (FsRtlProcessFileLock.c)
 *     FsRtlFastUnlockAll @ 0x14021D3E0 (FsRtlFastUnlockAll.c)
 *     FsRtlFastUnlockAllByKey @ 0x140541A60 (FsRtlFastUnlockAllByKey.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     RtlRealSuccessor @ 0x14021D710 (RtlRealSuccessor.c)
 *     IoGetRequestorProcess @ 0x14021DC00 (IoGetRequestorProcess.c)
 *     RtlDelete @ 0x14021EBA0 (RtlDelete.c)
 *     sub_14021EF80 @ 0x14021EF80 (sub_14021EF80.c)
 *     sub_14021F280 @ 0x14021F280 (sub_14021F280.c)
 *     sub_14021F514 @ 0x14021F514 (sub_14021F514.c)
 *     sub_14021F5E4 @ 0x14021F5E4 (sub_14021F5E4.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14021D404(__int64 a1, _RTL_SPLAY_LINKS *a2, struct _KPROCESS *a3, int a4, char a5, __int64 a6)
{
  _QWORD *v6; // r13
  _RTL_SPLAY_LINKS *v7; // rdi
  KSPIN_LOCK *v8; // rsi
  KIRQL v9; // al
  __int64 v10; // r8
  _RTL_SPLAY_LINKS *v11; // r15
  KIRQL v12; // bp
  unsigned int v13; // ebx
  _RTL_SPLAY_LINKS *i; // rax
  PRTL_SPLAY_LINKS v16; // rax
  _RTL_SPLAY_LINKS *v17; // rcx
  _RTL_SPLAY_LINKS *Parent; // r14
  _RTL_SPLAY_LINKS *v19; // rbx
  PRTL_SPLAY_LINKS v20; // r13
  _RTL_SPLAY_LINKS *v21; // r10
  _RTL_SPLAY_LINKS *v22; // rdx
  PRTL_SPLAY_LINKS v23; // rbx
  _RTL_SPLAY_LINKS *k; // rax
  PRTL_SPLAY_LINKS v25; // rdi
  KSPIN_LOCK v26; // rdi
  KSPIN_LOCK *v27; // r15
  _RTL_SPLAY_LINKS *v28; // rax
  _RTL_SPLAY_LINKS *v29; // rax
  __int64 v30; // r8
  __int64 v31; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v34; // r8
  int v35; // eax
  bool v36; // zf
  __int64 v37; // r8
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  __int64 v40; // r9
  int v41; // eax
  _SLIST_ENTRY *v42; // rbx
  __int64 v43; // r8
  _RTL_SPLAY_LINKS *j; // rax
  __int64 v45; // r8
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  __int64 v48; // r9
  int v49; // eax
  KIRQL v50; // al
  _RTL_SPLAY_LINKS *m; // rax
  __int64 v52; // r14
  __int64 v53; // r13
  KIRQL v54; // dl
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r8
  __int64 v57; // r10
  int v58; // eax
  __int64 v59; // r8
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r9
  __int64 v62; // r8
  int v63; // eax
  int v64; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v65; // [rsp+38h] [rbp-80h]
  _RTL_SPLAY_LINKS *v66; // [rsp+40h] [rbp-78h]
  _RTL_SPLAY_LINKS *v67; // [rsp+48h] [rbp-70h] BYREF
  _RTL_SPLAY_LINKS *v68; // [rsp+50h] [rbp-68h] BYREF
  _SLIST_ENTRY *v69; // [rsp+58h] [rbp-60h]
  _RTL_SPLAY_LINKS *v70; // [rsp+60h] [rbp-58h]
  char v71; // [rsp+C0h] [rbp+8h]

  v6 = *(_QWORD **)(a1 + 24);
  v7 = 0LL;
  v64 = 0;
  v69 = 0LL;
  v65 = v6;
  if ( !v6 )
    return 3221225598LL;
  v8 = v6 + 3;
  a2[5].Parent = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(v6 + 3);
  v11 = (_RTL_SPLAY_LINKS *)v6[4];
  v12 = v9;
  if ( !v11 )
  {
    if ( v6[5] )
      goto LABEL_22;
    KeReleaseSpinLockFromDpcLevel(v6 + 3);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v12 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v34 = *((_QWORD *)CurrentPrcb + 4375);
          v35 = ~(unsigned __int16)(-1LL << (v12 + 1));
          v36 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
          *(_DWORD *)(v34 + 20) &= v35;
          if ( v36 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    v13 = -1073741698;
    goto LABEL_6;
  }
  for ( i = v11->LeftChild; i; i = i->LeftChild )
    v11 = i;
  v71 = 0;
  do
  {
    v16 = RtlRealSuccessor(v11);
    v17 = v11 - 1;
    v68 = 0LL;
    Parent = v11[-1].Parent;
    v19 = 0LL;
    v67 = 0LL;
    v20 = v16;
    v66 = v11 - 1;
    v21 = 0LL;
    v22 = v11 - 1;
    if ( !Parent )
    {
      v7 = 0LL;
      goto LABEL_19;
    }
    while ( 1 )
    {
      v69 = (_SLIST_ENTRY *)Parent;
      if ( Parent[1].LeftChild == a2
        && (struct _KPROCESS *)Parent[1].RightChild == a3
        && (!a5 || HIDWORD(Parent[1].Parent) == a4) )
      {
        break;
      }
      v22 = Parent;
      v66 = Parent;
LABEL_13:
      if ( !v21 )
      {
        if ( Parent[2].Parent > v19 )
          v19 = Parent[2].Parent;
        v67 = v19;
      }
      Parent = v22->Parent;
      if ( !v22->Parent )
        goto LABEL_18;
    }
    v28 = Parent[2].Parent;
    if ( !v21 )
      v21 = v22;
    v70 = v21;
    if ( v28 > v7 )
      v7 = v28;
    v29 = v17[2].Parent;
    v68 = v7;
    if ( v22->Parent == v29 )
      v17[2].Parent = v22;
    v22->Parent = Parent->Parent;
    if ( !v65[2] )
    {
      sub_140203D88((__int64)&stru_140CE2880, (_SLIST_ENTRY *)Parent, v10);
      v22 = v66;
      v17 = v11 - 1;
      v21 = v70;
      goto LABEL_13;
    }
    v71 = 1;
LABEL_18:
    v7 = 0LL;
    if ( v21 )
    {
      if ( v17->Parent )
      {
        sub_14021F514(v17, v21, &v68, &v67);
      }
      else
      {
        v8[1] = (KSPIN_LOCK)RtlDelete(v11);
        sub_140203D88((__int64)&stru_140CE2600, (_SLIST_ENTRY *)&v11[-1], v30);
      }
    }
LABEL_19:
    if ( v71 )
    {
      KeReleaseSpinLockFromDpcLevel(v8);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v38 = KeGetCurrentIrql();
          if ( v38 <= 0xFu && v12 <= 0xFu && v38 >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            v40 = *((_QWORD *)v39 + 4375);
            v41 = ~(unsigned __int16)(-1LL << (v12 + 1));
            v36 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
            v37 = (unsigned int)v41 & *(_DWORD *)(v40 + 20);
            *(_DWORD *)(v40 + 20) = v37;
            if ( v36 )
              sub_140418E4C(v39);
          }
        }
      }
      __writecr8(v12);
      v42 = v69;
      sub_14042A5E0(a6, &v69->Next + 1, v37);
      v12 = KeAcquireSpinLockRaiseToDpc(v8);
      sub_140203D88((__int64)&stru_140CE2880, v42, v43);
      v20 = (PRTL_SPLAY_LINKS)v8[1];
      v71 = 0;
      if ( v20 )
      {
        for ( j = v20->LeftChild; j; j = j->LeftChild )
          v20 = j;
      }
    }
    v11 = v20;
  }
  while ( v20 );
  v6 = v65;
LABEL_22:
  v23 = (PRTL_SPLAY_LINKS)v8[2];
  if ( v23 )
  {
    for ( k = v23->LeftChild; k; k = k->LeftChild )
      v23 = k;
    do
    {
      v25 = RtlRealSuccessor(v23);
      if ( v23[2].Parent == a2
        && (struct _KPROCESS *)v23[2].LeftChild == a3
        && (!a5 || HIDWORD(v23[1].RightChild) == a4) )
      {
        v8[2] = (KSPIN_LOCK)RtlDelete(v23);
        if ( v6[2] )
        {
          KeReleaseSpinLockFromDpcLevel(v8);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v46 = KeGetCurrentIrql();
              if ( v46 <= 0xFu && v12 <= 0xFu && v46 >= 2u )
              {
                v47 = KeGetCurrentPrcb();
                v48 = *((_QWORD *)v47 + 4375);
                v49 = ~(unsigned __int16)(-1LL << (v12 + 1));
                v36 = (v49 & *(_DWORD *)(v48 + 20)) == 0;
                v45 = (unsigned int)v49 & *(_DWORD *)(v48 + 20);
                *(_DWORD *)(v48 + 20) = v45;
                if ( v36 )
                  sub_140418E4C(v47);
              }
            }
          }
          __writecr8(v12);
          sub_14042A5E0(a6, &v23[1], v45);
          v50 = KeAcquireSpinLockRaiseToDpc(v8);
          v25 = (PRTL_SPLAY_LINKS)v8[2];
          v12 = v50;
          if ( v25 )
          {
            for ( m = v25->LeftChild; m; m = m->LeftChild )
              v25 = m;
          }
        }
        sub_140203D88((__int64)&stru_140CE2800, (_SLIST_ENTRY *)v23, v31);
      }
      v23 = v25;
    }
    while ( v25 );
  }
  v26 = v8[3];
  v27 = v8 + 3;
  if ( v26 )
  {
    do
    {
      v52 = *(_QWORD *)(v26 + 24);
      v53 = *(_QWORD *)(v52 + 184);
      if ( a2 != *(_RTL_SPLAY_LINKS **)(v53 + 48)
        || a3 != IoGetRequestorProcess(*(PIRP *)(v26 + 24))
        || a5 && a4 != *(_DWORD *)(v53 + 16) )
      {
        goto LABEL_103;
      }
      *(_BYTE *)(v52 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v52 + 104), 0LL);
      v54 = *(_BYTE *)(v52 + 69);
      if ( *(_BYTE *)(v52 + 68) )
        v52 = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v54);
      if ( v52 )
      {
        *(_QWORD *)(v52 + 56) = 0LL;
        *v27 = *(_QWORD *)v26;
        if ( v26 == v8[4] )
          v8[4] = (KSPIN_LOCK)v27;
        KeReleaseSpinLockFromDpcLevel(v8);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v55 = KeGetCurrentIrql();
            if ( v55 <= 0xFu && v12 <= 0xFu && v55 >= 2u )
            {
              v56 = KeGetCurrentPrcb();
              v57 = *((_QWORD *)v56 + 4375);
              v58 = ~(unsigned __int16)(-1LL << (v12 + 1));
              v36 = (v58 & *(_DWORD *)(v57 + 20)) == 0;
              *(_DWORD *)(v57 + 20) &= v58;
              if ( v36 )
                sub_140418E4C(v56);
            }
          }
        }
        __writecr8(v12);
        sub_14021F5E4(v65[1], *(_QWORD *)(v26 + 16), v52, 3221225598LL, &v64, 0LL);
        v12 = KeAcquireSpinLockRaiseToDpc(v8);
        v27 = v8 + 3;
        sub_140203D88((__int64)&stru_140CE2680, (_SLIST_ENTRY *)v26, v59);
      }
      else
      {
LABEL_103:
        v27 = (KSPIN_LOCK *)v26;
      }
      v26 = *v27;
    }
    while ( *v27 );
  }
  LOBYTE(v10) = v12;
  sub_14021F280(v65, v8, v10);
  sub_14021EF80(v65);
  KeReleaseSpinLockFromDpcLevel(v8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v60 = KeGetCurrentIrql();
      if ( v60 <= 0xFu && v12 <= 0xFu && v60 >= 2u )
      {
        v61 = KeGetCurrentPrcb();
        v62 = *((_QWORD *)v61 + 4375);
        v63 = ~(unsigned __int16)(-1LL << (v12 + 1));
        v36 = (v63 & *(_DWORD *)(v62 + 20)) == 0;
        *(_DWORD *)(v62 + 20) &= v63;
        if ( v36 )
          sub_140418E4C(v61);
      }
    }
  }
  v13 = 0;
LABEL_6:
  __writecr8(v12);
  return v13;
}
