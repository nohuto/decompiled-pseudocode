/*
 * XREFs of sub_1402E33D0 @ 0x1402E33D0
 * Callers:
 *     sub_1402E3150 @ 0x1402E3150 (sub_1402E3150.c)
 *     sub_140374AC0 @ 0x140374AC0 (sub_140374AC0.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     sub_140211E70 @ 0x140211E70 (sub_140211E70.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140239F94 @ 0x140239F94 (sub_140239F94.c)
 *     sub_1402440B4 @ 0x1402440B4 (sub_1402440B4.c)
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     KeRemoveQueueApc @ 0x14024EC10 (KeRemoveQueueApc.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_1402A7FE0 @ 0x1402A7FE0 (sub_1402A7FE0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402B7800 @ 0x1402B7800 (sub_1402B7800.c)
 *     sub_1402E40E0 @ 0x1402E40E0 (sub_1402E40E0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347B50 @ 0x140347B50 (sub_140347B50.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_14036B090 @ 0x14036B090 (sub_14036B090.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14045A310 @ 0x14045A310 (sub_14045A310.c)
 *     sub_14056E8CC @ 0x14056E8CC (sub_14056E8CC.c)
 *     sub_14057AAF8 @ 0x14057AAF8 (sub_14057AAF8.c)
 *     sub_1407F4160 @ 0x1407F4160 (sub_1407F4160.c)
 *     sub_1407F7D3C @ 0x1407F7D3C (sub_1407F7D3C.c)
 */

__int64 __fastcall sub_1402E33D0(
        __int64 BugCheckParameter2,
        char a2,
        volatile signed __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned int a8,
        unsigned int a9,
        _BYTE *a10)
{
  char v12; // r12
  KSPIN_LOCK *v13; // rbx
  char v14; // r13
  __int64 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v17; // rcx
  int v18; // r13d
  unsigned __int8 v19; // r14
  char v20; // r15
  unsigned int v21; // eax
  int v22; // r12d
  unsigned int v23; // r15d
  volatile signed __int64 *v24; // r12
  __int64 v25; // rbx
  KSPIN_LOCK *v26; // r11
  KSPIN_LOCK v27; // rcx
  char v28; // r13
  unsigned int v29; // r10d
  char v30; // cl
  __int64 v31; // rcx
  __int64 v32; // r14
  __int64 v33; // r13
  struct _KPRCB *v34; // r12
  char v35; // cl
  __int64 v36; // rcx
  char v37; // al
  __int16 v38; // ax
  char v39; // cl
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // r14
  void *v44; // rbx
  struct _KPRCB *v45; // rcx
  __int64 v46; // rdx
  unsigned __int8 v47; // si
  signed __int64 BugCheckParameter4; // rcx
  _BYTE *v49; // rdx
  __int64 v51; // r9
  __int64 v52; // r13
  volatile signed __int32 *v53; // rbx
  struct _KPRCB *v54; // rdx
  __int64 v55; // rcx
  volatile signed __int32 *v56; // r12
  struct _KPRCB *v57; // rcx
  __int64 v58; // rdx
  unsigned __int64 v59; // rdx
  signed __int64 v60; // rdx
  unsigned int v61; // edx
  __int64 v62; // rcx
  struct _KTHREAD *v63; // rbx
  KSPIN_LOCK *v64; // r15
  char *v65; // rax
  char *v66; // rbx
  char **v67; // rdx
  _QWORD *v68; // rax
  _QWORD *v69; // rcx
  char v70; // r11
  struct _KTHREAD *v71; // r14
  __int64 v72; // r8
  unsigned __int64 v73; // rdx
  unsigned int v74; // ecx
  char *v75; // rsi
  int v76; // r8d
  struct _KTHREAD *v77; // r14
  __int64 v78; // rbx
  unsigned int v79; // eax
  __int64 v80; // rdx
  int v81; // eax
  unsigned __int64 v82; // rdx
  unsigned int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rbx
  __int64 v87; // r8
  _QWORD *v88; // rdx
  char v89; // al
  unsigned int v90; // ebx
  int v91; // eax
  __int64 v92; // rcx
  int v93; // eax
  unsigned __int8 v94; // al
  struct _KPRCB *v95; // r10
  __int64 v96; // r9
  int v97; // eax
  bool v98; // zf
  struct _KTHREAD *v99; // r14
  __int64 v100; // rbx
  unsigned int v101; // eax
  __int64 v102; // rdx
  int v103; // eax
  unsigned __int8 v104; // r10
  __int64 v105; // r9
  int v106; // eax
  int v107; // eax
  int v108; // eax
  struct _KPRCB *v109; // rcx
  __int64 v110; // rdx
  int v111; // eax
  int v112; // eax
  unsigned __int8 v113; // al
  struct _KPRCB *v114; // r10
  int v115; // eax
  unsigned int v116; // edx
  unsigned int v117; // eax
  __int64 v118; // r8
  struct _KPRCB *v119; // r13
  __int64 v120; // rcx
  int v121; // eax
  volatile signed __int64 *v122; // r14
  __int64 v123; // rcx
  int v124; // eax
  __int64 v125; // rcx
  int v126; // eax
  struct _KPRCB *v127; // rcx
  __int64 v128; // rdx
  int v129; // eax
  struct _KPRCB *v130; // rcx
  __int64 v131; // rdx
  int v132; // eax
  int v133; // eax
  unsigned __int8 v134; // al
  struct _KPRCB *v135; // r10
  __int64 v136; // r9
  int v137; // eax
  _QWORD *v138; // rax
  __int64 v139; // rdx
  _QWORD *v140; // rcx
  __int64 v141; // rcx
  char v142; // [rsp+40h] [rbp-138h]
  char v143; // [rsp+41h] [rbp-137h]
  char v145; // [rsp+43h] [rbp-135h]
  unsigned int v146; // [rsp+44h] [rbp-134h]
  unsigned int v147; // [rsp+48h] [rbp-130h]
  KSPIN_LOCK *Object; // [rsp+50h] [rbp-128h]
  volatile signed __int64 v149; // [rsp+58h] [rbp-120h]
  struct _KPRCB *v150; // [rsp+58h] [rbp-120h]
  __int64 v151; // [rsp+58h] [rbp-120h]
  int v152; // [rsp+60h] [rbp-118h] BYREF
  int v153; // [rsp+64h] [rbp-114h] BYREF
  volatile signed __int64 *v154; // [rsp+68h] [rbp-110h] BYREF
  volatile signed __int32 *v155; // [rsp+70h] [rbp-108h]
  __int64 v156; // [rsp+78h] [rbp-100h]
  __int64 v157; // [rsp+80h] [rbp-F8h]
  __int64 v158; // [rsp+88h] [rbp-F0h] BYREF
  int v159; // [rsp+90h] [rbp-E8h]
  int v160; // [rsp+94h] [rbp-E4h]
  int v161; // [rsp+98h] [rbp-E0h] BYREF
  int v162; // [rsp+9Ch] [rbp-DCh] BYREF
  unsigned int v163; // [rsp+A0h] [rbp-D8h]
  int v164; // [rsp+A4h] [rbp-D4h] BYREF
  __int64 v165; // [rsp+A8h] [rbp-D0h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-C8h]
  int v167; // [rsp+B8h] [rbp-C0h] BYREF
  volatile signed __int32 *v168; // [rsp+C0h] [rbp-B8h] BYREF
  __int128 v169; // [rsp+C8h] [rbp-B0h]
  __int64 v170; // [rsp+D8h] [rbp-A0h]
  __int64 v171; // [rsp+E0h] [rbp-98h] BYREF
  struct _KPRCB *v172; // [rsp+E8h] [rbp-90h]
  __int64 v173; // [rsp+F0h] [rbp-88h]
  __int64 v174; // [rsp+F8h] [rbp-80h]
  _BYTE *v175; // [rsp+100h] [rbp-78h]
  __int128 v176; // [rsp+108h] [rbp-70h]
  __int64 v177; // [rsp+118h] [rbp-60h]
  _QWORD v178[2]; // [rsp+120h] [rbp-58h] BYREF
  _QWORD v179[2]; // [rsp+130h] [rbp-48h] BYREF
  void *retaddr; // [rsp+178h] [rbp+0h]

  v158 = a4;
  v154 = a3;
  v175 = a10;
  v147 = 0;
  v12 = 0;
  v143 = 0;
  CurrentThread = 0LL;
  v157 = a6;
  if ( a6 )
  {
    if ( a7 )
    {
      if ( !(unsigned __int8)sub_1407F7D3C() )
      {
        v90 = sub_1407F4160(*((unsigned __int8 *)KeGetCurrentThread() + 562));
        v147 = v90;
        if ( v90 )
        {
          ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
          return v90;
        }
      }
    }
    if ( (int)qword_140C23440 >= 2 || byte_140C23413 )
    {
      v12 = 1;
      v143 = 1;
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v159 = 0;
      v77 = KeGetCurrentThread();
      v78 = 0LL;
      _disable();
      v79 = *((unsigned __int8 *)v77 + 792);
      if ( *((_BYTE *)v77 + 792) || (v79 = sub_14029F6A8((__int64)&qword_140C11720, (__int64)v77)) != 0 )
      {
        _BitScanForward((unsigned int *)&v80, v79);
        v159 = v80;
        *((_BYTE *)v77 + 792) = v79 & ~(1 << v80);
        _enable();
        v78 = (__int64)v77 + 96 * v80 + 1696;
        if ( (unsigned __int64)&qword_140C11720 - qword_140C50630 < 0x8000000000LL )
          v81 = sub_140287F30(*((_QWORD *)v77 + 23));
        else
          v81 = -1;
        *(_DWORD *)(v78 + 8) = v81;
        *(_QWORD *)v78 = (unsigned __int64)&qword_140C11720 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C11720, 0LL) )
        sub_14029F120(&qword_140C11720, v78, (__int64)&qword_140C11720);
      if ( v78 )
        *(_BYTE *)(v78 + 18) = 1;
    }
    else
    {
      v147 = 1073741861;
      v157 = 0LL;
    }
  }
  v165 = 0LL;
  v13 = (KSPIN_LOCK *)*((_QWORD *)KeGetCurrentThread() + 23);
  Object = v13;
  v14 = 0;
  v142 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v156 = CurrentIrql;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(a4 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( a2 && (v13[79] & 0x10) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel(v13 + 305);
    v14 = 1;
    v142 = 1;
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A310(BugCheckParameter2 + 64);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v17 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v17 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v91 = *(_DWORD *)(v17 + 24);
        *(_DWORD *)(v17 + 24) = v91 + 1;
        if ( v91 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 64), 0LL) )
    {
      v92 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v92 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v93 = *(_DWORD *)(v92 + 24) - 1;
          *(_DWORD *)(v92 + 24) = v93;
          if ( !v93 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      sub_140211E70((volatile signed __int32 *)(BugCheckParameter2 + 64));
    }
    v13 = Object;
  }
  if ( !v12 && *(_QWORD *)(BugCheckParameter2 + 256) )
  {
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(BugCheckParameter2 + 64));
    if ( v14 )
      KeReleaseSpinLockFromDpcLevel(v13 + 305);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v94 = KeGetCurrentIrql();
        if ( v94 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v94 >= 2u )
        {
          v95 = KeGetCurrentPrcb();
          v96 = *((_QWORD *)v95 + 4375);
          v97 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
          v98 = (v97 & *(_DWORD *)(v96 + 20)) == 0;
          *(_DWORD *)(v96 + 20) &= v97;
          if ( v98 )
            sub_140418E4C(v95);
        }
      }
    }
    __writecr8((unsigned __int8)CurrentIrql);
    v143 = 1;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v160 = 0;
    v99 = KeGetCurrentThread();
    v100 = 0LL;
    _disable();
    v101 = *((unsigned __int8 *)v99 + 792);
    if ( *((_BYTE *)v99 + 792) || (v101 = sub_14029F6A8((__int64)&qword_140C11720, (__int64)v99)) != 0 )
    {
      _BitScanForward((unsigned int *)&v102, v101);
      v160 = v102;
      *((_BYTE *)v99 + 792) = v101 & ~(1 << v102);
      _enable();
      v100 = (__int64)v99 + 96 * v102 + 1696;
      if ( (unsigned __int64)&qword_140C11720 - qword_140C50630 >= 0x8000000000LL )
        v103 = -1;
      else
        v103 = sub_140287F30(*((_QWORD *)v99 + 23));
      *(_DWORD *)(v100 + 8) = v103;
      *(_QWORD *)v100 = (unsigned __int64)&qword_140C11720 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C11720, 0LL) )
      sub_14029F120(&qword_140C11720, v100, (__int64)&qword_140C11720);
    if ( v100 )
      *(_BYTE *)(v100 + 18) = 1;
    v104 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v104 <= 0xFu )
    {
      v105 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v105 + 20) |= (-1 << (v104 + 1)) & 4;
    }
    LOBYTE(v156) = v104;
    if ( v14 )
      KeAcquireSpinLockAtDpcLevel(Object + 305);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(BugCheckParameter2 + 64));
  }
  v18 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 1) != 0 )
  {
    v86 = *(_QWORD *)(BugCheckParameter2 + 80);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v86 + 1200));
    v87 = *(_QWORD *)(BugCheckParameter2 + 224);
    v88 = *(_QWORD **)(BugCheckParameter2 + 232);
    if ( *(_QWORD *)(v87 + 8) != BugCheckParameter2 + 224 || *v88 != BugCheckParameter2 + 224 )
      goto LABEL_298;
    *v88 = v87;
    *(_QWORD *)(v87 + 8) = v88;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v86 + 1200));
    v89 = *(_BYTE *)(BugCheckParameter2 + 304) & 0xFE;
    *(_BYTE *)(BugCheckParameter2 + 304) = v89;
    if ( (v89 & 2) != 0 && *(_BYTE *)(BugCheckParameter2 + 248)
      || KeCancelTimer((PKTIMER)BugCheckParameter2)
      || KeRemoveQueueDpcEx(BugCheckParameter2 + 160, 0) )
    {
      v18 = 1;
    }
    v22 = BugCheckParameter2 + 72;
    if ( KeRemoveQueueApc(BugCheckParameter2 + 72) )
      ++v18;
  }
  else
  {
    v19 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v19 <= 0xFu )
    {
      a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(a4 + 20) |= (-1 << (v19 + 1)) & 4;
    }
    v171 = 0LL;
    v168 = 0LL;
    v152 = 0;
    v20 = 0;
    while ( 1 )
    {
      v161 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
      {
        do
          sub_1402F32E0(&v161);
        while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
      {
        v21 = -129;
        goto LABEL_18;
      }
      v52 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
      v155 = (volatile signed __int32 *)(qword_140D088C0[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 15360);
      v53 = &v155[2048 * (unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58) + 128 + 8 * v52];
      v54 = KeGetCurrentPrcb();
      v150 = v54;
      v162 = 0;
      v55 = *((_QWORD *)v54 + 4375);
      if ( v55 )
      {
        if ( *((_BYTE *)v54 + 32) <= 1u )
        {
          v106 = *(_DWORD *)(v55 + 24);
          *(_DWORD *)(v55 + 24) = v106 + 1;
          if ( v106 == -1 )
            sub_140418E4C(v54);
        }
      }
      while ( _interlockedbittestandset64(v53, 0LL) )
      {
        v84 = *((_QWORD *)v150 + 4375);
        if ( v84 )
        {
          if ( *((_BYTE *)v150 + 32) <= 1u )
          {
            v107 = *(_DWORD *)(v84 + 24) - 1;
            *(_DWORD *)(v84 + 24) = v107;
            if ( !v107 )
              sub_140418E4C(v150);
          }
        }
        do
          sub_1402F32E0(&v162);
        while ( *(_QWORD *)v53 );
        v85 = *((_QWORD *)v150 + 4375);
        if ( v85 )
        {
          if ( *((_BYTE *)v150 + 32) <= 1u )
          {
            v108 = *(_DWORD *)(v85 + 24);
            *(_DWORD *)(v85 + 24) = v108 + 1;
            if ( v108 == -1 )
              sub_140418E4C(v150);
          }
        }
      }
      v168 = v53;
      v56 = v155;
      if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v53, 0LL);
      v109 = KeGetCurrentPrcb();
      v110 = *((_QWORD *)v109 + 4375);
      if ( v110 )
      {
        if ( *((_BYTE *)v109 + 32) <= 1u )
        {
          v111 = *(_DWORD *)(v110 + 24) - 1;
          *(_DWORD *)(v110 + 24) = v111;
          if ( !v111 )
            sub_140418E4C(v109);
        }
      }
      if ( _InterlockedExchange64((volatile __int64 *)&v56[2 * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)], 0LL) )
      {
        v21 = 16777087;
        goto LABEL_72;
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      v152 = 0;
      while ( *(char *)(BugCheckParameter2 + 3) < 0 )
        sub_1402F32E0(&v152);
    }
    sub_1402E40E0(v155, BugCheckParameter2, (unsigned int)v52, &v168);
    _InterlockedAnd64((volatile signed __int64 *)v168, 0LL);
    v57 = KeGetCurrentPrcb();
    v58 = *((_QWORD *)v57 + 4375);
    if ( v58 )
    {
      if ( *((_BYTE *)v57 + 32) <= 1u )
      {
        v112 = *(_DWORD *)(v58 + 24) - 1;
        *(_DWORD *)(v58 + 24) = v112;
        if ( !v112 )
          sub_140418E4C(v57);
      }
    }
    v21 = -1073741953;
LABEL_72:
    v20 = 1;
LABEL_18:
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, v21);
    if ( (DWORD2(xmmword_140D06900) & 0x20000) != 0 && v20 )
    {
      v171 = BugCheckParameter2;
      v178[0] = &v171;
      v178[1] = 8LL;
      sub_14035EDE4((unsigned int)v178, 1, 1073872896, 3925, 1538);
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v113 = KeGetCurrentIrql();
        if ( v113 <= 0xFu && v19 <= 0xFu && v113 >= 2u )
        {
          v114 = KeGetCurrentPrcb();
          a4 = *((_QWORD *)v114 + 4375);
          v115 = ~(unsigned __int16)(-1LL << (v19 + 1));
          v98 = (v115 & *(_DWORD *)(a4 + 20)) == 0;
          *(_DWORD *)(a4 + 20) &= v115;
          if ( v98 )
            sub_140418E4C(v114);
        }
      }
    }
    __writecr8(v19);
    v22 = BugCheckParameter2 + 72;
    v18 = 0;
  }
  *(_BYTE *)(BugCheckParameter2 + 248) = 0;
  v23 = v18 + 1;
  v145 = *(_BYTE *)(BugCheckParameter2 + 4);
  v146 = a8;
  *(_DWORD *)(BugCheckParameter2 + 240) = a8;
  *(_DWORD *)(BugCheckParameter2 + 244) = 0;
  *(_DWORD *)(BugCheckParameter2 + 320) = a9;
  if ( v158 )
  {
    v63 = KeGetCurrentThread();
    KeInitializeApc(v22, (_DWORD)v63, 2, (unsigned int)sub_140256D10, 0LL, v158, a2, a5);
    v64 = (KSPIN_LOCK *)((char *)v63 + 1200);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v63 + 150);
    v65 = (char *)(BugCheckParameter2 + 224);
    v66 = (char *)v63 + 1208;
    v67 = (char **)*((_QWORD *)v66 + 1);
    if ( *v67 != v66 )
      goto LABEL_298;
    *(_QWORD *)v65 = v66;
    *(_QWORD *)(BugCheckParameter2 + 232) = v67;
    *v67 = v65;
    *((_QWORD *)v66 + 1) = v65;
    *(_BYTE *)(BugCheckParameter2 + 304) |= 1u;
    KeReleaseSpinLockFromDpcLevel(v64);
    v165 = BugCheckParameter2 + 160;
    v23 = v18;
    v146 = 0;
  }
  LOBYTE(a4) = 0;
  v24 = v154;
  v25 = *v154;
  v149 = *v154;
  v26 = Object;
  v27 = Object[162];
  v28 = v142;
  if ( !v142 )
    goto LABEL_23;
  if ( !*(_QWORD *)(BugCheckParameter2 + 280) )
  {
    if ( v27 && (*(_DWORD *)(v27 + 1512) & 0x40000) != 0 )
      LOBYTE(a4) = *(_DWORD *)(v27 + 1048) != 0;
    sub_140239F94(Object, (_QWORD *)(BugCheckParameter2 + 288), 0LL, a4, (KSPIN_LOCK **)(BugCheckParameter2 + 280));
    v26 = Object;
  }
  _InterlockedIncrement((volatile signed __int32 *)v26 + 606);
  if ( (v26[79] & 0x10) != 0 && (v62 = *((unsigned int *)v26 + 17), (_DWORD)v62) )
  {
    v25 = *v24;
    if ( *(__int64 *)v24 >= 0 )
    {
      if ( (unsigned __int64)v25 <= MEMORY[0xFFFFF78000000014] )
        v25 = MEMORY[0xFFFFF78000000014];
      v25 += v62;
      if ( v25 < *v24 )
        v25 = *v24;
    }
    else if ( v25 - v62 <= v25 )
    {
      v25 -= v62;
    }
    HIDWORD(v149) = HIDWORD(v25);
    v116 = (unsigned int)v62 / 0x2710;
    v29 = v146;
    if ( v146 && v116 + v146 > v146 )
    {
      v29 = v116 + v146;
      v146 += v116;
      *(_DWORD *)(BugCheckParameter2 + 240) += v116;
      *(_DWORD *)(BugCheckParameter2 + 244) = v116;
    }
    else
    {
      v117 = *(_DWORD *)(BugCheckParameter2 + 240);
      if ( v117 && v117 + v116 > v117 )
      {
        *(_DWORD *)(BugCheckParameter2 + 240) = v117 + v116;
        *(_DWORD *)(BugCheckParameter2 + 244) = v116;
      }
    }
  }
  else
  {
LABEL_23:
    v29 = v146;
  }
  v30 = *(_BYTE *)(BugCheckParameter2 + 304);
  if ( (v30 & 2) != 0 )
  {
    *(_QWORD *)(BugCheckParameter2 + 312) = v25;
    v43 = v157;
    if ( v149 >= 0 )
      *(_BYTE *)(BugCheckParameter2 + 248) = 1;
    else
      *(_BYTE *)(BugCheckParameter2 + 248) = (v157 != 0) + 2;
    goto LABEL_47;
  }
  v31 = v25;
  v176 = 0LL;
  v177 = 0LL;
  if ( a9 )
  {
    v59 = 10000LL * a9;
    if ( v59 > 0xFC0000 )
    {
      v60 = v59 - 16515072;
      if ( v25 >= 0 )
      {
        v25 += v60;
        if ( v25 < v31 )
          v25 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v25 -= v60;
        if ( v25 > v31 )
          v25 = 0x8000000000000000uLL;
      }
      if ( v29 )
      {
        v82 = (__int64)((unsigned __int128)(v60 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
        v83 = v29 + v82 + (v82 >> 63);
        if ( v83 < v29 )
          v83 = -1;
        v146 = v83;
      }
      LODWORD(v59) = 16515072;
    }
    v61 = (unsigned int)v59 >> 18;
    if ( v61 > 0x3F )
      LOBYTE(v61) = 63;
    BYTE1(v176) = 4 * v61;
  }
  v32 = qword_140D06CC8 ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v165 ^ qword_140D06E28), qword_140D06CC8);
  v173 = v32;
  v33 = KeGetCurrentIrql();
  v174 = v33;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)v33 <= 0xFu )
  {
    v51 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v51 + 20) |= (-1 << (v33 + 1)) & 4;
  }
  v34 = KeGetCurrentPrcb();
  v158 = 0LL;
  v154 = 0LL;
  v153 = 0;
  while ( 1 )
  {
    v167 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
    {
      do
        sub_1402F32E0(&v167);
      while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
    {
      v35 = 0;
      goto LABEL_31;
    }
    v118 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    v163 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    v151 = qword_140D088C0[*(unsigned __int16 *)(BugCheckParameter2 + 56)] + 15360;
    v155 = (volatile signed __int32 *)(v151
                                     + 32
                                     * (v118
                                      + ((unsigned __int64)*(unsigned __int16 *)(BugCheckParameter2 + 58) << 8)
                                      + 16));
    v119 = KeGetCurrentPrcb();
    v172 = v119;
    v164 = 0;
    v120 = *((_QWORD *)v119 + 4375);
    if ( v120 )
    {
      if ( *((_BYTE *)v119 + 32) <= 1u )
      {
        v121 = *(_DWORD *)(v120 + 24);
        *(_DWORD *)(v120 + 24) = v121 + 1;
        if ( v121 == -1 )
LABEL_252:
          sub_140418E4C(v119);
      }
    }
    while ( 1 )
    {
      v122 = (volatile signed __int64 *)v155;
      if ( !_interlockedbittestandset64(v155, 0LL) )
        break;
      v123 = *((_QWORD *)v119 + 4375);
      if ( v123 )
      {
        if ( *((_BYTE *)v119 + 32) <= 1u )
        {
          v124 = *(_DWORD *)(v123 + 24) - 1;
          *(_DWORD *)(v123 + 24) = v124;
          if ( !v124 )
            sub_140418E4C(v119);
        }
      }
      do
        sub_1402F32E0(&v164);
      while ( *v122 );
      v119 = v172;
      v125 = *((_QWORD *)v172 + 4375);
      if ( v125 )
      {
        if ( *((_BYTE *)v172 + 32) <= 1u )
        {
          v126 = *(_DWORD *)(v125 + 24);
          *(_DWORD *)(v125 + 24) = v126 + 1;
          if ( v126 == -1 )
            goto LABEL_252;
        }
      }
    }
    v154 = v122;
    v32 = v173;
    if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v155, 0LL);
    v127 = KeGetCurrentPrcb();
    v128 = *((_QWORD *)v127 + 4375);
    if ( v128 )
    {
      if ( *((_BYTE *)v127 + 32) <= 1u )
      {
        v129 = *(_DWORD *)(v128 + 24) - 1;
        *(_DWORD *)(v128 + 24) = v129;
        if ( !v129 )
          sub_140418E4C(v127);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v151 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
    {
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFFu);
      v35 = 1;
      goto LABEL_31;
    }
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    v153 = 0;
    while ( *(char *)(BugCheckParameter2 + 3) < 0 )
      sub_1402F32E0(&v153);
  }
  sub_1402E40E0(v151, BugCheckParameter2, v163, &v154);
  _InterlockedAnd64(v154, 0LL);
  v130 = KeGetCurrentPrcb();
  v131 = *((_QWORD *)v130 + 4375);
  if ( v131 )
  {
    if ( *((_BYTE *)v130 + 32) <= 1u )
    {
      v132 = *(_DWORD *)(v131 + 24) - 1;
      *(_DWORD *)(v131 + 24) = v132;
      if ( !v132 )
        sub_140418E4C(v130);
    }
  }
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xBFFFFFFF);
  v35 = 1;
LABEL_31:
  if ( (DWORD2(xmmword_140D06900) & 0x20000) != 0 && v35 )
  {
    v158 = BugCheckParameter2;
    v179[0] = &v158;
    v179[1] = 8LL;
    sub_14035EDE4((unsigned int)v179, 1, 1073872896, 3925, 1538);
  }
  v38 = 0;
  if ( !dword_140D06A20 )
  {
    if ( *((_BYTE *)v34 + 32)
      || ((v36 = *((_QWORD *)KeGetCurrentThread() + 23), (*(_DWORD *)(v36 + 1124) & 0x1000) == 0)
       || (*(_DWORD *)(v36 + 2172) & 0x4000000) != 0
        ? (v37 = 0)
        : (v37 = 1),
          !v37) )
    {
      v38 = 1;
    }
  }
  *(_WORD *)(BugCheckParameter2 + 58) = v38;
  *(_QWORD *)(BugCheckParameter2 + 48) = v32;
  *(_DWORD *)(BugCheckParameter2 + 60) = v146;
  v169 = 0LL;
  v170 = 0LL;
  LODWORD(v169) = *(_DWORD *)BugCheckParameter2;
  v39 = BYTE1(v176);
  BYTE1(v169) = BYTE1(v176);
  if ( v25 >= 0 )
  {
    BYTE1(v169) = BYTE1(v176) | 1;
    v25 = MEMORY[0xFFFFF78000000014] - v25;
    if ( v25 >= 0 )
    {
      *(_DWORD *)BugCheckParameter2 = v169;
      *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
      goto LABEL_84;
    }
    v39 = BYTE1(v169);
  }
  v40 = 0LL;
  if ( (v39 & 0xFC) != 0 )
    v40 = (unsigned __int8)(v39 & 0xFC) << 16;
  v41 = MEMORY[0xFFFFF78000000008] - v25;
  *(_QWORD *)(BugCheckParameter2 + 24) = MEMORY[0xFFFFF78000000008] - v25;
  BYTE3(v169) |= 0x40u;
  BYTE2(v169) = (unsigned __int64)(v40 + v41) >> 18;
  *(_DWORD *)BugCheckParameter2 = v169;
  *(_DWORD *)(BugCheckParameter2 + 4) = 0;
  v42 = v165;
  if ( sub_1402B7800(
         (__int64)v34,
         BugCheckParameter2,
         v165,
         (unsigned __int8)((unsigned __int64)(v40 + v41) >> 18),
         0LL) )
  {
    if ( (DWORD2(xmmword_140D06900) & 0x20000) != 0 )
      sub_14057AAF8(BugCheckParameter2, v42, 0LL);
    else
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    goto LABEL_44;
  }
LABEL_84:
  sub_1402A7FE0((__int64)v34, BugCheckParameter2, 0LL);
LABEL_44:
  sub_1402B0820((__int64)v34, 0, 1, 0, v174);
  v43 = v157;
  if ( v157 )
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 9u);
  v30 = *(_BYTE *)(BugCheckParameter2 + 304);
  v28 = v142;
  v26 = Object;
LABEL_47:
  v44 = *(void **)(BugCheckParameter2 + 256);
  *(_QWORD *)(BugCheckParameter2 + 256) = v43;
  *(_BYTE *)(BugCheckParameter2 + 304) = v30 ^ (v30 ^ (4 * a7)) & 4;
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
  {
    sub_14056E8CC(BugCheckParameter2 + 64, retaddr);
    v26 = Object;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 64), 0LL);
  }
  v45 = KeGetCurrentPrcb();
  v46 = *((_QWORD *)v45 + 4375);
  if ( v46 )
  {
    if ( *((_BYTE *)v45 + 32) <= 1u )
    {
      v133 = *(_DWORD *)(v46 + 24) - 1;
      *(_DWORD *)(v46 + 24) = v133;
      if ( !v133 )
      {
        sub_140418E4C(v45);
        v26 = Object;
      }
    }
  }
  if ( v28 )
    KeReleaseSpinLockFromDpcLevel(v26 + 305);
  v47 = v156;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v134 = KeGetCurrentIrql();
      if ( v134 <= 0xFu && (unsigned __int8)v156 <= 0xFu && v134 >= 2u )
      {
        v135 = KeGetCurrentPrcb();
        v136 = *((_QWORD *)v135 + 4375);
        v137 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v156 + 1));
        v98 = (v137 & *(_DWORD *)(v136 + 20)) == 0;
        *(_DWORD *)(v136 + 20) &= v137;
        if ( v98 )
          sub_140418E4C(v135);
      }
    }
  }
  __writecr8(v47);
  if ( v143 )
  {
    if ( v44 )
    {
      if ( v43 )
        goto LABEL_99;
      v138 = (_QWORD *)(BugCheckParameter2 + 264);
      v139 = *(_QWORD *)(BugCheckParameter2 + 264);
      v140 = *(_QWORD **)(BugCheckParameter2 + 272);
      if ( *(_QWORD *)(v139 + 8) == BugCheckParameter2 + 264 && (_QWORD *)*v140 == v138 )
      {
        *v140 = v139;
        *(_QWORD *)(v139 + 8) = v140;
        *v138 = 0LL;
        goto LABEL_99;
      }
    }
    else
    {
      if ( !v43 )
      {
LABEL_99:
        v70 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C11720, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v70 & 2) != 0 && (v70 & 4) == 0 )
          ExfTryToWakePushLock(&qword_140C11720);
        v71 = KeGetCurrentThread();
        if ( (unsigned __int64)&qword_140C11720 - qword_140C50630 < 0x8000000000LL )
          v72 = (unsigned int)sub_140287F30(*((_QWORD *)v71 + 23));
        else
          v72 = 0xFFFFFFFFLL;
        _disable();
        v73 = (unsigned __int64)&qword_140C11720 & 0x7FFFFFFFFFFFFFFCLL;
        v74 = 0;
        v75 = (char *)v71 + 1696;
        do
        {
          if ( (*(_QWORD *)v75 & 0x7FFFFFFFFFFFFFFCLL) == v73
            && v75[18]
            && (*(_DWORD *)v75 & 1) == 0
            && *((_DWORD *)v75 + 2) == (_DWORD)v72 )
          {
            v75[18] = 0;
            if ( *(__int64 *)v75 < 0 )
            {
              *v75 |= 2u;
              _enable();
              sub_14034EE30(v75, v73, v72);
              _disable();
            }
            v76 = *((_DWORD *)v75 + 22);
            *((_DWORD *)v75 + 22) = 0;
            v75[17] = 0;
            *(_QWORD *)v75 = 0LL;
            *((_BYTE *)v71 + 792) |= 1 << v75[16];
            _enable();
            if ( v76 )
              sub_14022B568((ULONG_PTR)v71, (__int64)&qword_140C11720, v76);
            goto LABEL_111;
          }
          ++v74;
          v75 += 96;
        }
        while ( v74 < 6 );
        if ( (*((_DWORD *)v71 + 30) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v71, (ULONG_PTR)&qword_140C11720, (unsigned int)v72, 0LL);
        _enable();
LABEL_111:
        sub_1402F9540(CurrentThread);
        if ( v44 )
          sub_14036B090(v44);
        goto LABEL_54;
      }
      v68 = (_QWORD *)(BugCheckParameter2 + 264);
      v69 = (_QWORD *)qword_140C11738;
      if ( *(__int64 **)qword_140C11738 == &qword_140C11730 )
      {
        *v68 = &qword_140C11730;
        *(_QWORD *)(BugCheckParameter2 + 272) = v69;
        *v69 = v68;
        qword_140C11738 = BugCheckParameter2 + 264;
        goto LABEL_99;
      }
    }
LABEL_298:
    __fastfail(3u);
  }
LABEL_54:
  if ( v23 )
  {
    sub_140347B50(BugCheckParameter2 - 48, v23);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), -v23) - v23;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( *(_QWORD *)(BugCheckParameter2 - 40) )
        KeBugCheckEx(
          0x18u,
          qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(BugCheckParameter2 - 48) >> 8)],
          BugCheckParameter2,
          6uLL,
          *(_QWORD *)(BugCheckParameter2 - 40));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
      sub_1402440B4(BugCheckParameter2 - 48);
    }
  }
  v49 = v175;
  if ( !v175 )
    return v147;
  if ( !a2 )
  {
    *v175 = v145;
    return v147;
  }
  v141 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v175 < 0x7FFFFFFF0000LL )
    v141 = (__int64)v175;
  *(_BYTE *)v141 = *(_BYTE *)v141;
  *v49 = v145;
  return v147;
}
