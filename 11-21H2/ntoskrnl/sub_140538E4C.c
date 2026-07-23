/*
 * XREFs of sub_140538E4C @ 0x140538E4C
 * Callers:
 *     sub_14035D970 @ 0x14035D970 (sub_14035D970.c)
 *     sub_14053D730 @ 0x14053D730 (sub_14053D730.c)
 * Callees:
 *     sub_1402390A4 @ 0x1402390A4 (sub_1402390A4.c)
 *     sub_1402492E0 @ 0x1402492E0 (sub_1402492E0.c)
 *     sub_14024D09C @ 0x14024D09C (sub_14024D09C.c)
 *     sub_140258774 @ 0x140258774 (sub_140258774.c)
 *     sub_140275E40 @ 0x140275E40 (sub_140275E40.c)
 *     sub_140275F94 @ 0x140275F94 (sub_140275F94.c)
 *     sub_1402768E4 @ 0x1402768E4 (sub_1402768E4.c)
 *     sub_1402769F8 @ 0x1402769F8 (sub_1402769F8.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140376BFC @ 0x140376BFC (sub_140376BFC.c)
 *     sub_1403B4380 @ 0x1403B4380 (sub_1403B4380.c)
 *     sub_1403B4798 @ 0x1403B4798 (sub_1403B4798.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140538E2C @ 0x140538E2C (sub_140538E2C.c)
 *     sub_14053A100 @ 0x14053A100 (sub_14053A100.c)
 *     sub_14053BC90 @ 0x14053BC90 (sub_14053BC90.c)
 *     sub_14053BD24 @ 0x14053BD24 (sub_14053BD24.c)
 *     sub_14053D2BC @ 0x14053D2BC (sub_14053D2BC.c)
 *     sub_14053D99C @ 0x14053D99C (sub_14053D99C.c)
 */

__int64 __fastcall sub_140538E4C(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r13
  int v9; // r14d
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rtt
  unsigned __int64 v13; // r11
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v23; // r8
  bool v24; // zf
  unsigned __int64 v25; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v27; // r9
  __int64 v28; // r8
  int v29; // eax
  _QWORD **v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  _QWORD *v33; // rdx
  unsigned int v34; // ebx
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // r12
  __int64 v38; // r8
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // rax
  unsigned __int8 v43; // cf
  __int64 v44; // rcx
  __int64 v45; // rdx
  int v46; // eax
  unsigned int v47; // edx
  __int64 v48; // r9
  unsigned int v49; // r8d
  unsigned int v50; // eax
  unsigned int v51; // eax
  __int64 v52; // rcx
  _QWORD *v53; // rax
  _QWORD *v54; // rcx
  __int64 *v55; // rax
  unsigned __int64 v56; // r14
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r10
  __int64 v59; // r9
  int v60; // eax
  int v61; // eax
  KSPIN_LOCK *v62; // rcx
  __int64 v63; // r14
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rdx
  int v68; // ecx
  unsigned __int64 v69; // r14
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r10
  __int64 v72; // r9
  int v73; // eax
  __int64 *v74; // rdx
  __int64 v75; // rcx
  _QWORD *v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rcx
  char v79; // bl
  _QWORD *v80; // rax
  unsigned __int64 v81; // rbx
  unsigned __int8 v82; // al
  struct _KPRCB *v83; // r9
  __int64 v84; // r8
  int v85; // eax
  char v86; // [rsp+60h] [rbp-39h]
  char v87; // [rsp+61h] [rbp-38h]
  char v88; // [rsp+62h] [rbp-37h]
  unsigned int v89; // [rsp+64h] [rbp-35h] BYREF
  _QWORD *v90; // [rsp+68h] [rbp-31h] BYREF
  _QWORD **v91; // [rsp+70h] [rbp-29h]
  __int64 v92; // [rsp+78h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-19h] BYREF
  __int64 v94; // [rsp+98h] [rbp-1h]
  __int64 v95; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v96; // [rsp+A8h] [rbp+Fh] BYREF
  _QWORD *v97; // [rsp+B0h] [rbp+17h]
  __int64 v98[7]; // [rsp+B8h] [rbp+1Fh] BYREF
  char v99; // [rsp+100h] [rbp+67h]

  v4 = *(_QWORD *)(a1 + 32);
  v86 = 0;
  v99 = 0;
  v98[0] = 0x7FFFFFFFFFFFFFFFLL;
  v89 = 0;
  v88 = 0;
  v9 = 0;
  v87 = 0;
  v95 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v4 == *((_QWORD *)qword_140D06C40 + 1) )
    sub_1402390A4(v4, &v89, a4, v98);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 704), &LockHandle);
  sub_14024D09C((_BYTE *)(a1 + 920), a4, 0);
  v10 = *(unsigned int *)(a1 + 1064);
  v11 = *(_QWORD *)(a1 + 1048) / v10;
  *(_QWORD *)(a1 + 1080) = v11;
  v12 = *(_QWORD *)(a1 + 1056);
  *(_QWORD *)(a1 + 1088) = v12 / v10;
  v13 = v12 / v10;
  v14 = *(__int64 **)(v4 + 8);
  if ( (unsigned int)v10 <= 1 )
  {
    v17 = *(_QWORD *)(*v14 + 16896);
    v16 = *(_QWORD *)(a1 + 992);
    v18 = v16;
  }
  else
  {
    v15 = *v14;
    v16 = *(_QWORD *)(a1 + 992);
    v17 = *(_QWORD *)(v15 + 16896) + v11 * (unsigned int)(v10 - 1);
    v18 = v16 + v13 * (unsigned int)(v10 - 1);
  }
  *(_QWORD *)(a1 + 1048) = v17;
  *(_QWORD *)(a1 + 1056) = v18;
  if ( !v16 && (unsigned __int8)sub_14053D2BC(a1) && !*(_BYTE *)(a1 + 986) )
  {
    if ( *(_QWORD *)(a1 + 1104) == a1 + 1104 )
    {
      *(_BYTE *)(a1 + 985) = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = (unsigned int)dword_140D06B08;
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v23 = *((_QWORD *)CurrentPrcb + 4375);
            result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v24 = ((unsigned int)result & *(_DWORD *)(v23 + 20)) == 0;
            *(_DWORD *)(v23 + 20) &= result;
            if ( v24 )
              result = sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      return result;
    }
    sub_14053D99C(v19, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v25 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = *((_QWORD *)v27 + 4375);
          v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v24 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
          *(_DWORD *)(v28 + 20) &= v29;
          if ( v24 )
            sub_140418E4C((__int64)v27);
        }
      }
    }
    __writecr8(v25);
    return sub_14053A100(v4, a1);
  }
  v30 = (_QWORD **)(a1 + 784);
  *(_QWORD *)(a1 + 1584) = MEMORY[0xFFFFF78000000014];
  v91 = &v90;
  v90 = &v90;
  while ( 1 )
  {
    v31 = *v30;
    if ( *v30 == v30 )
      break;
    v32 = (_QWORD *)*v31;
    if ( (_QWORD **)v31[1] != v30 || (_QWORD *)v32[1] != v31 || (*v30 = v32, v32[1] = v30, v33 = v91, *v91 != &v90) )
LABEL_107:
      __fastfail(3u);
    v31[1] = v91;
    *v31 = &v90;
    *v33 = v31;
    v91 = (_QWORD **)v31;
  }
  *(_BYTE *)(a1 + 986) = 0;
  v89 = sub_14053BD24(a1, a4);
  v34 = v89;
  sub_14053BC90(a1);
  v36 = *(_QWORD *)(a1 + 1072);
  *(_QWORD *)(a1 + 1000) = *(_QWORD *)(a1 + 992);
  *(_DWORD *)(a1 + 1008) = v34;
  *(_DWORD *)(a1 + 912) = v34;
  *(_DWORD *)(v36 + 8LL * *(unsigned int *)(a2 + 152)) = v34;
  *(_QWORD *)(a2 + 216) = MEMORY[0xFFFFF78000000014];
  if ( (xmmword_140D06910 & 0x20000) != 0 )
    sub_1403B4798(
      a3,
      a4,
      *(_DWORD *)(a1 + 912),
      *(_QWORD *)(a1 + 992),
      *(_QWORD *)(**(_QWORD **)(v4 + 8) + 16896LL),
      *(_QWORD *)(a1 + 1016),
      (unsigned int)dword_140C4E880,
      *(_QWORD *)(a1 + 1024),
      *(_QWORD *)(a1 + 1032),
      *(_QWORD *)(a1 + 1080),
      *(_QWORD *)(a1 + 1088),
      *(unsigned int *)(a1 + 704));
  v37 = a1 + 664;
  v38 = 0LL;
  v39 = *(_QWORD *)(a1 + 664) - 560LL;
  if ( *(_QWORD *)(a1 + 664) != 560LL )
  {
    do
    {
      v97 = (_QWORD *)(v39 + 560);
      v40 = v38;
      if ( v39 + 560 == v37 )
        break;
      v41 = v39;
      if ( v40 )
        v41 = v40;
      v92 = v41;
      if ( !sub_140538E2C(a1, v39) )
      {
        if ( sub_140275E40(v39, 0LL, a1, v89, *(_QWORD *)(v39 + 96) & 0xFFFFFFFFFFFFFFF0uLL, a4) )
        {
          v96 = 0LL;
          v42 = sub_1402769F8(v39);
          v43 = _bittest((const signed __int32 *)(v39 + 152), 0x18u);
          v94 = v42;
          if ( v43 )
          {
            v88 = 1;
            *(_DWORD *)(*(_QWORD *)(v39 + 240) + 144LL) |= 1u;
            v44 = *(_QWORD *)(v39 + 240);
            v45 = *(_QWORD *)(v39 + 256);
            if ( v45 > *(_QWORD *)(v44 + 112) )
            {
              *(_QWORD *)(v44 + 112) = v45;
              if ( (xmmword_140D06910 & 0x20000) != 0 )
                *(_QWORD *)(*(_QWORD *)(v39 + 240) + 128LL) = *(_QWORD *)((*(_QWORD *)(v39 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                        + 0x18);
            }
          }
          v46 = *(_DWORD *)(v39 + 152);
          v47 = *(_DWORD *)(v39 + 112);
          *(_DWORD *)(v39 + 192) = v47;
          if ( (v46 & 0x200) != 0 && v47 >= 0x40 )
          {
            if ( (v46 & 0x1000000) != 0 && (v48 = *(_QWORD *)(v39 + 240), (v49 = *(_DWORD *)(v48 + 104)) != 0) )
            {
              v50 = 0;
              if ( v47 <= v49 )
                v50 = v49 - v47;
              *(_DWORD *)(v48 + 104) = v50;
              ++dword_140C4E858;
            }
            else
            {
              *(_DWORD *)(v39 + 192) = v47 >> 3;
            }
          }
          if ( !v86 )
          {
            v51 = *(_DWORD *)(v39 + 192);
            if ( v51 < v89 )
            {
              v89 -= v51;
            }
            else
            {
              if ( (*(_DWORD *)(v39 + 152) & 0x200) != 0 || v92 == v39 && (*(_DWORD *)(v39 + 268) & 0xF) == 0 )
              {
                v99 = 1;
              }
              else
              {
                v52 = *(_QWORD *)v37;
                v53 = *(_QWORD **)(a1 + 672);
                if ( *(_QWORD *)(*(_QWORD *)v37 + 8LL) != v37 )
                  goto LABEL_107;
                if ( *v53 != v37 )
                  goto LABEL_107;
                *v53 = v52;
                *(_QWORD *)(v52 + 8) = v53;
                v54 = v97;
                v55 = (__int64 *)v97[1];
                if ( (_QWORD *)*v55 != v97 )
                  goto LABEL_107;
                *(_QWORD *)v37 = v97;
                *(_QWORD *)(a1 + 672) = v55;
                *v55 = v37;
                v54[1] = v37;
              }
              v89 = 0;
              v86 = 1;
            }
          }
          *(_DWORD *)(v39 + 152) |= 0x20u;
          ++*(_DWORD *)(v39 + 112);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v56 = LockHandle.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v57 = KeGetCurrentIrql();
              if ( v57 <= 0xFu && LockHandle.OldIrql <= 0xFu && v57 >= 2u )
              {
                v58 = KeGetCurrentPrcb();
                v59 = *((_QWORD *)v58 + 4375);
                v60 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v24 = (v60 & *(_DWORD *)(v59 + 20)) == 0;
                *(_DWORD *)(v59 + 20) &= v60;
                if ( v24 )
                  sub_140418E4C((__int64)v58);
              }
            }
          }
          __writecr8(v56);
          v61 = sub_1402768E4(v4, a1, v94, &v96);
          v62 = (KSPIN_LOCK *)(v4 + 704);
          if ( v61 < 0 )
          {
            KeAcquireInStackQueuedSpinLock(v62, &LockHandle);
            *(_DWORD *)(v39 + 152) &= ~0x20u;
            --*(_DWORD *)(v39 + 112);
            break;
          }
          v63 = v96;
          *(_BYTE *)(v96 + 128) = 2;
          *(_QWORD *)(v63 + 16) = v39;
          KeAcquireInStackQueuedSpinLock(v62, &LockHandle);
          --*(_DWORD *)(v39 + 112);
          if ( (*(_DWORD *)(v39 + 152) & 0x10000) != 0 )
          {
            v66 = v94;
            *(_QWORD *)(v39 + 496) = v63 | 1;
            v67 = v66 + 72;
          }
          else
          {
            if ( *(_DWORD *)(v39 + 4) || *(_DWORD *)(v39 + 112) )
              v67 = v94 + 104;
            else
              v67 = v94 + 120;
            *(_QWORD *)(v39 + 496) = v63;
          }
          sub_140275F94((_QWORD *)v63, v67, v64, v65);
          v9 = 0;
          v87 = 1;
        }
        else
        {
          v68 = *(_DWORD *)(v39 + 152);
          v35 = 65568LL;
          if ( (v68 & 0x10020) == 0x10020 )
          {
            sub_140376BFC(v39);
          }
          else if ( (unsigned int)++v9 >= 0x14 && (v68 & 0x20) == 0 )
          {
            ++*(_DWORD *)(v39 + 112);
            *(_DWORD *)(v39 + 152) = v68 | 0x20;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v69 = LockHandle.OldIrql;
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v70 = KeGetCurrentIrql();
                if ( v70 <= 0xFu && LockHandle.OldIrql <= 0xFu && v70 >= 2u )
                {
                  v71 = KeGetCurrentPrcb();
                  v72 = *((_QWORD *)v71 + 4375);
                  v73 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v24 = (v73 & *(_DWORD *)(v72 + 20)) == 0;
                  *(_DWORD *)(v72 + 20) &= v73;
                  if ( v24 )
                    sub_140418E4C((__int64)v71);
                }
              }
            }
            __writecr8(v69);
            v9 = 0;
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 704), &LockHandle);
            *(_DWORD *)(v39 + 152) &= ~0x20u;
            --*(_DWORD *)(v39 + 112);
          }
        }
        v38 = v92;
      }
      v74 = v97;
      v39 = *v97 - 560LL;
      if ( v99 )
      {
        v75 = *(_QWORD *)v37;
        v76 = *(_QWORD **)(a1 + 672);
        if ( *(_QWORD *)(*(_QWORD *)v37 + 8LL) != v37 )
          goto LABEL_107;
        if ( *v76 != v37 )
          goto LABEL_107;
        *v76 = v75;
        *(_QWORD *)(v75 + 8) = v76;
        v77 = *v74;
        if ( *(__int64 **)(*v74 + 8) != v74 )
          goto LABEL_107;
        *(_QWORD *)v37 = v77;
        *(_QWORD *)(a1 + 672) = v74;
        *(_QWORD *)(v77 + 8) = v37;
        v99 = 0;
        *v74 = v37;
      }
    }
    while ( v39 != v38 );
  }
  v78 = v90;
  v79 = v87;
  if ( v90 != &v90 )
    v79 = 1;
  while ( v78 != &v90 )
  {
    v80 = (_QWORD *)*v78;
    if ( (_QWORD **)v78[1] != &v90 || (_QWORD *)v80[1] != v78 )
      goto LABEL_107;
    v90 = (_QWORD *)*v78;
    v80[1] = &v90;
    sub_140275F94(v78, v78[19] + 104LL, v38, v35);
    v78 = v90;
  }
  if ( (_BYTE)dword_140D051DC
    || v79
    || *(_QWORD *)(a1 + 1104) != a1 + 1104
    || (sub_140258774(v4, a1, v98, &v95), v95 != 0x7FFFFFFFFFFFFFFFLL) )
  {
    sub_14053D99C(a1, &v95);
    if ( *(_BYTE *)(a1 + 708) )
      *(_BYTE *)(a1 + 708) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 708) = 1;
    *(_BYTE *)(v4 + 985) = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v81 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v82 = KeGetCurrentIrql();
      if ( v82 <= 0xFu && LockHandle.OldIrql <= 0xFu && v82 >= 2u )
      {
        v83 = KeGetCurrentPrcb();
        v84 = *((_QWORD *)v83 + 4375);
        v85 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v24 = (v85 & *(_DWORD *)(v84 + 20)) == 0;
        *(_DWORD *)(v84 + 20) &= v85;
        if ( v24 )
          sub_140418E4C((__int64)v83);
      }
    }
  }
  __writecr8(v81);
  if ( v88 )
    sub_1402492E0(v4);
  if ( (xmmword_140D06910 & 0x20000) != 0 )
    sub_1403B4380(a4, *(_DWORD *)(v4 + 912));
  result = a1 + 1104;
  if ( *(_QWORD *)result != result )
    return sub_14053A100(v4, a1);
  return result;
}
