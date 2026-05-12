/*
 * XREFs of sub_1C0001770 @ 0x1C0001770
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0001008 @ 0x1C0001008 (sub_1C0001008.c)
 *     sub_1C00031D0 @ 0x1C00031D0 (sub_1C00031D0.c)
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00035A0 @ 0x1C00035A0 (sub_1C00035A0.c)
 *     sub_1C00036C0 @ 0x1C00036C0 (sub_1C00036C0.c)
 *     sub_1C00042F0 @ 0x1C00042F0 (sub_1C00042F0.c)
 *     sub_1C0004AE0 @ 0x1C0004AE0 (sub_1C0004AE0.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0008D80 @ 0x1C0008D80 (sub_1C0008D80.c)
 *     sub_1C0010160 @ 0x1C0010160 (sub_1C0010160.c)
 *     sub_1C00157F4 @ 0x1C00157F4 (sub_1C00157F4.c)
 *     sub_1C00176A0 @ 0x1C00176A0 (sub_1C00176A0.c)
 *     sub_1C0019ED0 @ 0x1C0019ED0 (sub_1C0019ED0.c)
 *     sub_1C001A278 @ 0x1C001A278 (sub_1C001A278.c)
 *     sub_1C001AEA8 @ 0x1C001AEA8 (sub_1C001AEA8.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 *     sub_1C00239D4 @ 0x1C00239D4 (sub_1C00239D4.c)
 *     sub_1C0023EC4 @ 0x1C0023EC4 (sub_1C0023EC4.c)
 *     sub_1C0023F18 @ 0x1C0023F18 (sub_1C0023F18.c)
 *     sub_1C00240D8 @ 0x1C00240D8 (sub_1C00240D8.c)
 *     sub_1C00242C4 @ 0x1C00242C4 (sub_1C00242C4.c)
 *     sub_1C00244B0 @ 0x1C00244B0 (sub_1C00244B0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C0037AA8 @ 0x1C0037AA8 (sub_1C0037AA8.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C00404D0 @ 0x1C00404D0 (sub_1C00404D0.c)
 *     sub_1C0040590 @ 0x1C0040590 (sub_1C0040590.c)
 *     sub_1C0040624 @ 0x1C0040624 (sub_1C0040624.c)
 *     sub_1C0043604 @ 0x1C0043604 (sub_1C0043604.c)
 *     sub_1C0050448 @ 0x1C0050448 (sub_1C0050448.c)
 *     sub_1C00504C4 @ 0x1C00504C4 (sub_1C00504C4.c)
 *     sub_1C005CA3C @ 0x1C005CA3C (sub_1C005CA3C.c)
 *     sub_1C0060EDC @ 0x1C0060EDC (sub_1C0060EDC.c)
 *     sub_1C00659DC @ 0x1C00659DC (sub_1C00659DC.c)
 *     sub_1C00684E4 @ 0x1C00684E4 (sub_1C00684E4.c)
 *     sub_1C006882C @ 0x1C006882C (sub_1C006882C.c)
 */

void __fastcall sub_1C0001770(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KIRQL v4; // al
  __int64 v5; // rsi
  __int64 v6; // r15
  IRP *v7; // r12
  __int64 v8; // rdi
  unsigned int v9; // eax
  unsigned int v10; // r14d
  PIO_SECURITY_CONTEXT SecurityContext; // rcx
  PSECURITY_QUALITY_OF_SERVICE SecurityQos; // r14
  unsigned int *v13; // r15
  __int64 v14; // rbx
  struct _SECURITY_QUALITY_OF_SERVICE *v15; // r14
  KSPIN_LOCK *v16; // rbx
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v18; // rcx
  char ImpersonationLevel; // al
  int v20; // r9d
  __int64 v21; // rcx
  KSPIN_LOCK v22; // r8
  struct _SECURITY_QUALITY_OF_SERVICE **v23; // rax
  __int64 *p_ImpersonationLevel; // rcx
  KSPIN_LOCK v25; // rdx
  __int64 **v26; // rax
  int v27; // eax
  int v28; // edx
  int v29; // ecx
  _BYTE *v30; // r15
  unsigned int v31; // r11d
  unsigned int i; // r10d
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // ecx
  int v37; // ecx
  unsigned __int64 v38; // rcx
  int v39; // ecx
  __int64 v40; // rdx
  __int64 v41; // rdx
  char v42; // al
  char v43; // bl
  unsigned int v44; // r11d
  unsigned __int8 v45; // r12
  char v46; // r14
  _BYTE *v47; // r15
  unsigned int v48; // r11d
  unsigned int v49; // r9d
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  __int64 v52; // r10
  __int64 v53; // r8
  int v54; // ecx
  int v55; // ecx
  unsigned __int64 v56; // rcx
  unsigned int v57; // ebx
  unsigned int v58; // r10d
  __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  __int64 v61; // r9
  __int64 v62; // r8
  int v63; // ecx
  int v64; // ecx
  char v65; // al
  unsigned __int64 v66; // rcx
  PIRP v67; // rbx
  int v68; // ecx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int8 v70; // bl
  __int64 v71; // r14
  _QWORD *v72; // rcx
  unsigned int HighestNodeNumber; // r8d
  __int64 v74; // rcx
  bool v75; // zf
  unsigned int v76; // r11d
  unsigned int v77; // r9d
  __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  __int64 v80; // r10
  __int64 v81; // r8
  int v82; // ecx
  int v83; // ecx
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // r12
  _BYTE *v86; // rbx
  ULONG_PTR v87; // rax
  PIRP v88; // rbx
  struct _IO_STACK_LOCATION *v89; // rax
  PIO_SECURITY_CONTEXT v90; // r15
  PSECURITY_QUALITY_OF_SERVICE v91; // r14
  __int64 v92; // r13
  int v93; // edx
  int v94; // ecx
  int v95; // r9d
  __int64 v96; // rcx
  __int64 v97; // r13
  LARGE_INTEGER v98; // rax
  LARGE_INTEGER v99; // rbx
  unsigned int AccessState; // r9d
  __int64 v101; // rdx
  __int64 v102; // rcx
  unsigned __int64 DesiredAccess; // rax
  __int64 v104; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v106; // rdx
  DWORD LowPart; // ecx
  unsigned __int64 v108; // r8
  unsigned __int64 v109; // r9
  LONGLONG v110; // r9
  PIRP v111; // rcx
  __int64 v112; // rbx
  __int64 v113; // rax
  __int64 v114; // rax
  int v115; // ebx
  bool v116; // bl
  __int64 *v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rax
  void (__fastcall *v120)(__int64, _QWORD, bool); // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  struct _MDL *v123; // rcx
  int AccessState_high; // eax
  unsigned __int64 v125; // r8
  signed __int32 v126; // eax
  signed __int32 v127; // ett
  _BYTE *v128; // r14
  __int64 v129; // rbx
  PIO_WORKITEM WorkItem; // rax
  char v131; // cl
  __int64 v132; // rax
  __int64 v133; // r13
  unsigned int v134; // r15d
  __int64 v135; // rcx
  _BYTE *v136; // rcx
  char v137; // al
  int v138; // ecx
  __int64 v139; // rax
  const int *v140; // r15
  int v141; // r11d
  __int64 v142; // rdx
  char v143; // r11
  int v144; // ecx
  unsigned int v145; // r13d
  __int64 v146; // rbx
  const int *v147; // r14
  int v148; // eax
  int v149; // eax
  const int *v150; // r14
  __int64 v151; // rax
  _BYTE *v152; // rcx
  char v153; // al
  __int64 v154; // rcx
  char v155; // r15
  __int64 v156; // rax
  __int64 v157; // rcx
  const int *v158; // r8
  __int64 v159; // r9
  __int64 v160; // r9
  const int *v161; // r14
  __int64 v162; // r14
  __int64 v163; // rax
  ULONG *v164; // rax
  void *v165; // rcx
  IRP *v166; // rbx
  char v167; // al
  __int64 v168; // rcx
  int v169; // ebx
  bool v170; // r13
  __int64 v171; // rax
  __int64 v172; // r14
  unsigned int v173; // esi
  KSPIN_LOCK *v174; // rbx
  unsigned __int64 v175; // rbx
  char *v176; // rsi
  KIRQL v177; // al
  signed __int64 v178; // r8
  char v179; // r14
  char v180; // r12
  signed __int64 v181; // r9
  PSLIST_ENTRY v182; // rax
  struct _EX_RUNDOWN_REF *v183; // r15
  volatile LONG *v184; // r14
  unsigned int v185; // r12d
  signed __int64 v186; // r8
  char v187; // r12
  signed __int64 v188; // r9
  PSLIST_ENTRY v189; // rax
  signed __int64 v190; // rsi
  signed __int64 v191; // rax
  int v192; // eax
  __int64 v193; // rax
  signed __int64 v194; // r14
  signed __int64 v195; // rax
  __int64 j; // rsi
  char v197; // [rsp+80h] [rbp-80h]
  char v198; // [rsp+80h] [rbp-80h]
  unsigned int v199; // [rsp+84h] [rbp-7Ch] BYREF
  KIRQL v200; // [rsp+88h] [rbp-78h]
  __int64 v201; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v202; // [rsp+98h] [rbp-68h]
  _BYTE *v203; // [rsp+A0h] [rbp-60h]
  __int64 v204; // [rsp+A8h] [rbp-58h]
  PIRP Irp; // [rsp+B0h] [rbp-50h]
  int v206; // [rsp+B8h] [rbp-48h]
  _LARGE_INTEGER PerformanceFrequency; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v208; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v209; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v210; // [rsp+D8h] [rbp-28h]
  __int64 v211; // [rsp+E0h] [rbp-20h]
  __int64 v212; // [rsp+E8h] [rbp-18h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v214; // [rsp+108h] [rbp+8h] BYREF
  __int64 v215; // [rsp+118h] [rbp+18h]
  int v216; // [rsp+120h] [rbp+20h]
  struct _KLOCK_QUEUE_HANDLE v217; // [rsp+128h] [rbp+28h] BYREF
  __int128 v218; // [rsp+140h] [rbp+40h] BYREF
  __int128 v219; // [rsp+150h] [rbp+50h] BYREF

  v4 = *(_BYTE *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 168);
  v6 = a1;
  v7 = *(IRP **)(a1 + 160);
  v8 = *(_QWORD *)(a1 + 224);
  v209 = 0LL;
  v211 = a1;
  v200 = v4;
  v9 = *(unsigned __int8 *)(v5 + 2);
  v201 = a1;
  v208 = 0LL;
  Irp = v7;
  if ( (_BYTE)v9 == 40 )
  {
    v199 = *(_DWORD *)(v5 + 20);
    v210 = *(_QWORD *)(v5 + 104);
    v212 = a1 + 800;
    v10 = *(_DWORD *)(v5 + 32);
    v206 = *(_DWORD *)(v5 + 24);
    LODWORD(v204) = *(_DWORD *)(v5 + 60);
    v202 = v10;
    if ( (unsigned int)sub_1C00230AC()
      && (unsigned __int8)sub_1C0023100(*(_QWORD *)(v8 + 24))
      && (*(_BYTE *)(v5 + 3) & 0x3F) == 1 )
    {
      *(_DWORD *)(v5 + 44) = 0;
    }
  }
  else
  {
    v199 = v9;
    v210 = *(_QWORD *)(v5 + 56);
    v212 = *(_QWORD *)(v5 + 32);
    v202 = *(unsigned __int8 *)(v5 + 8);
    v206 = *(_DWORD *)(v5 + 12);
    LODWORD(v204) = *(_DWORD *)(v5 + 16);
  }
  SecurityContext = v7->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SecurityQos = SecurityContext[4].SecurityQos;
  else
    SecurityQos = SecurityContext[2].SecurityQos;
  if ( (SecurityQos[1].ImpersonationLevel & 2) == 0 )
    goto LABEL_34;
  v13 = *(unsigned int **)(v8 + 504);
  v14 = (SecurityQos[7].Length + 1LL) << 6;
  v15 = SecurityQos + 4;
  v16 = (KSPIN_LOCK *)((char *)v13 + v14);
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  v18 = v16 + 5;
  if ( CurrentIrql == 2 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v18, &LockHandle);
    ImpersonationLevel = v15[-3].ImpersonationLevel;
    v20 = *v13;
    if ( (ImpersonationLevel & 2) == 0 )
    {
LABEL_26:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_30;
    }
    LOBYTE(v15[-3].ImpersonationLevel) = ImpersonationLevel & 0xFD;
    v21 = *(_QWORD *)&v15->Length;
    v22 = *v16;
    if ( *(struct _SECURITY_QUALITY_OF_SERVICE **)(*(_QWORD *)&v15->Length + 8LL) == v15 )
    {
      v23 = *(struct _SECURITY_QUALITY_OF_SERVICE ***)&v15->ContextTrackingMode;
      if ( *v23 == v15 )
      {
        *v23 = (struct _SECURITY_QUALITY_OF_SERVICE *)v21;
        *(_QWORD *)(v21 + 8) = v23;
        if ( (v15[4].Length & 1) == 0 )
        {
LABEL_21:
          if ( (v20 & 4) == 0 && (struct _SECURITY_QUALITY_OF_SERVICE *)v22 == v15 )
          {
            if ( (KSPIN_LOCK *)*v16 == v16 )
              v27 = -1;
            else
              v27 = *(_DWORD *)(*v16 + 32);
            *((_DWORD *)v16 + 12) = v27;
          }
          goto LABEL_26;
        }
        p_ImpersonationLevel = (__int64 *)&v15[1].ImpersonationLevel;
        if ( (SECURITY_IMPERSONATION_LEVEL *)v16[4] == &v15[1].ImpersonationLevel )
          v16[4] = *p_ImpersonationLevel;
        v25 = *p_ImpersonationLevel;
        if ( *(__int64 **)(*p_ImpersonationLevel + 8) == p_ImpersonationLevel )
        {
          v26 = *(__int64 ***)&v15[2].Length;
          if ( *v26 == p_ImpersonationLevel )
          {
            *v26 = (__int64 *)v25;
            *(_QWORD *)(v25 + 8) = v26;
            v15[4].Length &= ~1u;
            goto LABEL_21;
          }
        }
      }
    }
    __fastfail(3u);
  }
  KeAcquireInStackQueuedSpinLock(v18, &LockHandle);
  sub_1C0040590(v16, *v13, v15);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_30:
  if ( byte_1C0093BE8 )
  {
    v218 = 0LL;
    IoGetActivityIdIrp(v7, &v218);
    if ( byte_1C0093A02 < 0 )
      sub_1C005CA3C(v29, v28, (unsigned int)&v218, a4, 4);
    v6 = v201;
LABEL_34:
    if ( byte_1C0093BE8 )
    {
      if ( (byte_1C0093A01 & 1) != 0 )
        sub_1C00684E4(v6, 0LL, 0LL);
      if ( *(_DWORD *)(v8 + 1860) && (byte_1C0093A03 & 2) != 0 )
        sub_1C006882C(v6, 0LL, 0LL);
    }
  }
  if ( *(_BYTE *)(v5 + 2) != 40 )
  {
    v30 = (_BYTE *)(v5 + 72);
    goto LABEL_59;
  }
  v30 = 0LL;
  v203 = 0LL;
  if ( !*(_DWORD *)(v5 + 20) )
  {
    v31 = *(_DWORD *)(v5 + 56);
    for ( i = 0; i < v31; ++i )
    {
      v33 = *(unsigned int *)(v5 + 4LL * i + 120);
      if ( (unsigned int)v33 < 0x80 )
        continue;
      v34 = *(unsigned int *)(v5 + 16);
      if ( (unsigned int)v33 >= (unsigned int)v34 )
        continue;
      a4 = v33 + v5;
      v35 = (unsigned int)v33;
      v36 = *(_DWORD *)(v33 + v5) - 64;
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( v37 )
        {
          if ( v37 == 1 && v35 + 40 <= v34 )
          {
            if ( !*(_DWORD *)(a4 + 12) )
              break;
            v30 = (_BYTE *)(a4 + 32);
            goto LABEL_59;
          }
          continue;
        }
        v38 = v35 + 56;
      }
      else
      {
        v38 = v35 + 40;
      }
      if ( v38 <= v34 )
      {
        if ( !*(_BYTE *)(a4 + 10) )
          break;
        v30 = (_BYTE *)(a4 + 24);
LABEL_59:
        v203 = v30;
        break;
      }
    }
  }
  if ( *(_DWORD *)(v8 + 2292) )
  {
    if ( v30 )
    {
      v39 = (unsigned __int8)*v30;
      if ( !v199 )
      {
        if ( (unsigned __int8)(v39 - 8) <= 0x3Au
          && (v40 = 0x400200500000005LL, _bittest64(&v40, (unsigned int)(v39 - 8)))
          || (unsigned __int8)(v39 + 120) <= 0x22u && (v41 = 0x500000205LL, _bittest64(&v41, (unsigned int)(v39 + 120))) )
        {
          sub_1C00036C0(v201, v5, v8, a4, v39);
        }
      }
    }
  }
  if ( !dword_1C0093408 || !v30 )
  {
    v67 = v7;
    goto LABEL_119;
  }
  v42 = *(_BYTE *)(v5 + 2);
  v43 = 0;
  v44 = *(unsigned __int8 *)(v5 + 3);
  v45 = 0;
  v46 = 0;
  v197 = *(_BYTE *)(v5 + 3);
  v47 = 0LL;
  if ( v42 != 40 )
  {
    v46 = *(_BYTE *)(v5 + 4);
    LOBYTE(v44) = v44 & 0x3F;
    if ( !v42 )
    {
      v47 = *(_BYTE **)(v5 + 32);
      v45 = *(_BYTE *)(v5 + 11);
    }
    goto LABEL_96;
  }
  if ( *(_DWORD *)(v5 + 20) )
    goto LABEL_85;
  v48 = *(_DWORD *)(v5 + 56);
  v49 = 0;
  if ( !v48 )
    goto LABEL_84;
  while ( 1 )
  {
    v50 = *(unsigned int *)(v5 + 4LL * v49 + 120);
    if ( (unsigned int)v50 < 0x80 )
      goto LABEL_80;
    v51 = *(unsigned int *)(v5 + 16);
    if ( (unsigned int)v50 >= (unsigned int)v51 )
      goto LABEL_80;
    v52 = v50 + v5;
    v53 = (unsigned int)v50;
    v54 = *(_DWORD *)(v50 + v5) - 64;
    if ( !v54 )
    {
LABEL_78:
      v56 = v53 + 40;
      goto LABEL_79;
    }
    v55 = v54 - 1;
    if ( !v55 )
      break;
    if ( v55 == 1 )
      goto LABEL_78;
LABEL_80:
    if ( ++v49 >= v48 )
      goto LABEL_84;
  }
  v56 = v53 + 56;
LABEL_79:
  if ( v56 > v51 )
    goto LABEL_80;
  v46 = *(_BYTE *)(v52 + 8);
LABEL_84:
  v44 = (unsigned __int8)v197;
LABEL_85:
  LOBYTE(v44) = v44 & 0x3F;
  if ( *(_DWORD *)(v5 + 20) )
    goto LABEL_96;
  v57 = *(_DWORD *)(v5 + 56);
  v58 = 0;
  if ( !v57 )
    goto LABEL_95;
  while ( 2 )
  {
    v59 = *(unsigned int *)(v5 + 4LL * v58 + 120);
    if ( (unsigned int)v59 < 0x80 )
      goto LABEL_104;
    v60 = *(unsigned int *)(v5 + 16);
    if ( (unsigned int)v59 >= (unsigned int)v60 )
      goto LABEL_104;
    v61 = v59 + v5;
    v62 = (unsigned int)v59;
    v63 = *(_DWORD *)(v59 + v5) - 64;
    if ( v63 )
    {
      v64 = v63 - 1;
      if ( v64 )
      {
        if ( v64 == 1 && v62 + 40 <= v60 )
        {
          v47 = *(_BYTE **)(v61 + 24);
          goto LABEL_94;
        }
        goto LABEL_104;
      }
      v66 = v62 + 56;
    }
    else
    {
      v66 = v62 + 40;
    }
    if ( v66 > v60 )
    {
LABEL_104:
      if ( ++v58 >= v57 )
        goto LABEL_95;
      continue;
    }
    break;
  }
  v47 = *(_BYTE **)(v61 + 16);
LABEL_94:
  v45 = *(_BYTE *)(v61 + 9);
LABEL_95:
  v43 = 0;
LABEL_96:
  if ( v197 >= 0 )
  {
    if ( v46 != 2 && (unsigned __int8)v44 <= 0x12u )
    {
      v68 = 262211;
      if ( _bittest(&v68, v44) )
        goto LABEL_113;
    }
  }
  else
  {
    if ( v47 && v45 >= 0x12u && (unsigned __int8)((*v47 & 0x7F) - 112) <= 1u )
    {
      v65 = v47[12];
      v43 = v47[2] & 0xF;
    }
    else
    {
      v65 = 0;
    }
    if ( (_BYTE)v44 == 1 && !v43 && !v65 )
    {
LABEL_113:
      v30 = v203;
      v67 = Irp;
      goto LABEL_119;
    }
  }
  v67 = Irp;
  sub_1C00157F4(v8, Irp, v201, v5);
  v30 = v203;
LABEL_119:
  if ( (*(_BYTE *)(v201 + 17) & 2) != 0 )
  {
    sub_1C001AEA8(v8, *(unsigned int *)(v201 + 748));
    *(_BYTE *)(v201 + 17) &= ~2u;
  }
  CurrentStackLocation = v67->Tail.Overlay.CurrentStackLocation;
  v70 = CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter & 3;
  CurrentStackLocation->Parameters.QueryDirectory.FileName = 0LL;
  v71 = *(_QWORD *)(v8 + 24);
  if ( (v70 & 1) != 0
    && *(char *)(v8 + 449) < 0
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1784)) )
  {
    PoFxIdleComponent(**(_QWORD **)(v8 + 1792), 0LL, 0LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 1784));
  }
  if ( v70 >= 2u )
  {
    v72 = *(_QWORD **)(v71 + 4896);
    if ( v72 )
      PoFxIdleComponent(*v72, 0LL, 0LL);
  }
  if ( !(unsigned __int8)sub_1C0023100(*(_QWORD *)(v8 + 24)) )
  {
    HighestNodeNumber = KeQueryHighestNodeNumber();
    if ( v202 / *(_DWORD *)(v8 + 584) < HighestNodeNumber + 1 )
      HighestNodeNumber = v202 / *(_DWORD *)(v8 + 584);
    ExpInterlockedPushEntrySList(
      (PSLIST_HEADER)(*(_QWORD *)(v8 + 512) + ((unsigned __int64)HighestNodeNumber << 6)),
      (PSLIST_ENTRY)(*(_QWORD *)(v8 + 576) + 16LL * v202));
  }
  v202 = (v206 & 0x102) != 0x102
      && (v206 & 0x80010) == 0
      && (v199 > 0x20 || (v74 = 0x1000D0000LL, !_bittest64(&v74, v199)));
  if ( (*(_BYTE *)(v8 + 450) & 2) != 0 && (unsigned __int8)sub_1C0043604(v5, 1LL) )
  {
    v75 = *(_BYTE *)(v5 + 2) == 40;
    *(_BYTE *)(v5 + 3) = 56;
    if ( v75 )
    {
      if ( !*(_DWORD *)(v5 + 20) )
      {
        v76 = *(_DWORD *)(v5 + 56);
        v77 = 0;
        if ( v76 )
        {
          while ( 1 )
          {
            v78 = *(unsigned int *)(v5 + 4LL * v77 + 120);
            if ( (unsigned int)v78 < 0x80 )
              goto LABEL_150;
            v79 = *(unsigned int *)(v5 + 16);
            if ( (unsigned int)v78 >= (unsigned int)v79 )
              goto LABEL_150;
            v80 = v78 + v5;
            v81 = (unsigned int)v78;
            v82 = *(_DWORD *)(v78 + v5) - 64;
            if ( !v82 )
              goto LABEL_148;
            v83 = v82 - 1;
            if ( v83 )
              break;
            v84 = v81 + 56;
LABEL_149:
            if ( v84 <= v79 )
            {
              *(_BYTE *)(v80 + 8) = 0;
              goto LABEL_155;
            }
LABEL_150:
            if ( ++v77 >= v76 )
              goto LABEL_155;
          }
          if ( v83 != 1 )
            goto LABEL_150;
LABEL_148:
          v84 = v81 + 40;
          goto LABEL_149;
        }
      }
    }
    else
    {
      *(_BYTE *)(v5 + 4) = 0;
    }
LABEL_155:
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 2152));
  }
  v85 = -1LL;
  if ( (*(_BYTE *)(v5 + 3) & 0x3F) == 1 )
  {
    LOBYTE(v71) = 0;
    v206 = v71;
    if ( v30
      && *v30 == 29
      && (*(_BYTE *)(v5 + 2) != 40 ? (v86 = *(_BYTE **)(v5 + 24)) : (v86 = *(_BYTE **)(v5 + 64)), v86) )
    {
      v75 = MmIsAddressValid(v86) == 0;
      v87 = (unsigned int)v204;
      if ( !v75 && (unsigned int)v204 >= 9 && *v86 == 14 )
        v206 = v86[8] == 15;
    }
    else
    {
      v87 = (unsigned int)v204;
    }
    v88 = Irp;
    Irp->IoStatus.Information = v87;
    v89 = v88->Tail.Overlay.CurrentStackLocation;
    v88->IoStatus.Status = 0;
    v90 = v89->Parameters.Create.SecurityContext;
    if ( BYTE2(v90->SecurityQos) == 40 )
      v91 = v90[4].SecurityQos;
    else
      v91 = v90[2].SecurityQos;
    v92 = *(_QWORD *)&v91[18].ContextTrackingMode;
    v204 = v92;
    if ( (v91[1].ImpersonationLevel & 2) != 0 )
    {
      sub_1C00404D0(*(_QWORD *)(v92 + 504), &v91[4]);
      if ( byte_1C0093BE8 )
      {
        v219 = 0LL;
        IoGetActivityIdIrp(v88, &v219);
        if ( byte_1C0093A02 < 0 )
          sub_1C005CA3C(v94, v93, (unsigned int)&v219, v95, 4);
      }
    }
    sub_1C00035A0(v91, *(_QWORD *)(*(_QWORD *)(v92 + 24) + 8LL));
    v96 = *(_QWORD *)(v92 + 24);
    if ( *(_QWORD *)(v96 + 5544) )
      sub_1C0037AA8(v96, v91);
    if ( BYTE2(v90->SecurityQos) == 40 )
    {
      if ( (v91[1].ImpersonationLevel & 0x40) != 0 )
      {
        v97 = *(_QWORD *)&v91[62].ContextTrackingMode;
        PerformanceFrequency.QuadPart = 1LL;
        if ( v97 )
        {
          if ( byte_1C0093BA0 )
            v98 = KeQueryPerformanceCounter(&PerformanceFrequency);
          else
            v98.QuadPart = KeQueryUnbiasedInterruptTime();
          v99 = v98;
          *(_BYTE *)(v97 + 3) = BYTE3(v90->SecurityQos);
          *(_DWORD *)(v97 + 12) = v90[1].SecurityQos;
          if ( ((__int64)v90[1].SecurityQos & 0x40) != 0 )
            *(_DWORD *)(v97 + 16) = HIDWORD(v90[2].AccessState);
          if ( BYTE3(v90->SecurityQos) == 48 )
            *(_DWORD *)(v97 + 64) = v90[1].FullCreateOptions;
          if ( !v90->FullCreateOptions )
          {
            AccessState = (unsigned int)v90[2].AccessState;
            v101 = 0LL;
            if ( AccessState )
            {
              while ( 1 )
              {
                v102 = *((unsigned int *)&v90[5].SecurityQos + v101);
                if ( (unsigned int)v102 >= 0x80 )
                {
                  DesiredAccess = v90->DesiredAccess;
                  if ( (unsigned int)v102 <= (unsigned int)DesiredAccess )
                  {
                    v104 = (__int64)v90 + v102;
                    if ( *(_DWORD *)((char *)&v90->SecurityQos + v102) == 64 && v102 + 40 <= DesiredAccess )
                      break;
                  }
                }
                v101 = (unsigned int)(v101 + 1);
                if ( (unsigned int)v101 >= AccessState )
                  goto LABEL_194;
              }
              *(_BYTE *)(v97 + 4) = *(_BYTE *)(v104 + 8);
              *(_QWORD *)(v97 + 32) = *(_QWORD *)(v104 + 16);
              *(_BYTE *)(v97 + 11) = *(_BYTE *)(v104 + 9);
            }
            else
            {
LABEL_194:
              *(_BYTE *)(v97 + 3) = 48;
              *(_DWORD *)(v97 + 64) = -1073741811;
            }
          }
          if ( byte_1C0093BA0 )
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
          else
            PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
          if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v99.QuadPart )
            v108 = PerformanceCounter.QuadPart - v99.QuadPart;
          else
            v108 = PerformanceCounter.QuadPart - v99.QuadPart - 1;
          if ( byte_1C0093BA0 )
          {
            LowPart = PerformanceFrequency.LowPart;
            LOBYTE(v109) = 0;
            if ( PerformanceFrequency.QuadPart && v108 )
            {
              v110 = v108 / PerformanceFrequency.QuadPart;
              v108 = 1000 * (v108 % PerformanceFrequency.QuadPart);
              v106.QuadPart = 10000 * (v108 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
              v109 = 10000 * (v108 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
                   + 10000 * (1000 * v110 + v108 / PerformanceFrequency.QuadPart);
            }
          }
          else
          {
            LOBYTE(v109) = v108;
          }
          if ( (byte_1C0093A00 & 0x40) != 0 )
            sub_1C00504C4(LowPart, v106.LowPart, v108, (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result", v109);
        }
        v92 = v204;
        *(_QWORD *)(*(_QWORD *)&v91[62].ContextTrackingMode + 48LL) = *(_QWORD *)&v91[14].ContextTrackingMode;
        *(_QWORD *)(*(_QWORD *)&v91[62].ContextTrackingMode + 24LL) = *(_QWORD *)&v91[15].ImpersonationLevel;
        v111 = Irp;
        *(_QWORD *)(*(_QWORD *)&v91[62].ContextTrackingMode + 56LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)&v91[62].ContextTrackingMode + 40LL) = 0LL;
        v111->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId = *(_QWORD *)&v91[62].ContextTrackingMode;
        LOBYTE(v91[1].ImpersonationLevel) &= ~0x40u;
        *(_QWORD *)&v91[62].ContextTrackingMode = 0LL;
      }
      else
      {
        v90[4].SecurityQos = 0LL;
        *(_QWORD *)&v90[2].DesiredAccess = *(_QWORD *)&v91[15].ImpersonationLevel;
        v90[4].AccessState = 0LL;
        v112 = *(_QWORD *)&v91[16].Length;
        if ( v112 )
        {
          v113 = sub_1C0050448(v90);
          if ( v113 )
            *(_QWORD *)(v113 + 16) = v112;
        }
      }
    }
    else
    {
      v90[2].SecurityQos = *(PSECURITY_QUALITY_OF_SERVICE *)&v91[14].ContextTrackingMode;
      v90[1].SecurityQos = *(PSECURITY_QUALITY_OF_SERVICE *)&v91[15].ImpersonationLevel;
      v90[2].AccessState = 0LL;
      *(_QWORD *)&v90[1].DesiredAccess = 0LL;
    }
    if ( *(_QWORD *)&v91[9].ImpersonationLevel )
    {
      v114 = *(_QWORD *)&v91[14].Length;
      if ( *(_BYTE *)(v114 + 2) == 40 )
        v115 = *(_DWORD *)(v114 + 24) >> 6;
      else
        LOBYTE(v115) = *(_BYTE *)(v114 + 12) >> 6;
      v116 = (v115 & 1) == 0;
      if ( dword_1C0093B08 )
        sub_1C00659DC(v91);
      v117 = (__int64 *)(*(_QWORD *)&v91[18].Length + 760LL);
      if ( *(_QWORD *)&v91[18].Length != -760LL )
      {
        v118 = *v117;
        if ( *v117 )
        {
          v119 = *(_QWORD *)(v118 + 8);
          if ( v119 )
          {
            v120 = *(void (__fastcall **)(__int64, _QWORD, bool))(v119 + 96);
            if ( v120 )
              v120(v118, *(_QWORD *)&v91[9].ImpersonationLevel, v116);
          }
        }
      }
      v121 = *(_QWORD *)&v91[12].ContextTrackingMode;
      *(_QWORD *)&v91[9].ImpersonationLevel = 0LL;
      *(_QWORD *)&v91[12].Length = 0LL;
      if ( v121 )
      {
        sub_1C0008D80(*(_QWORD *)&v91[18].Length + 760LL, v121, 0LL);
        *(_QWORD *)&v91[12].ContextTrackingMode = 0LL;
      }
    }
    v122 = *(_QWORD *)&v91[8].ContextTrackingMode;
    if ( v122 && (v91[1].ImpersonationLevel & 1) != 0 )
    {
      if ( (*(_BYTE *)(v122 + 10) & 2) != 0 )
        MmUnlockPages((PMDL)v122);
      IoFreeMdl(*(PMDL *)&v91[8].ContextTrackingMode);
      LOBYTE(v91[1].ImpersonationLevel) &= ~1u;
      *(_QWORD *)&v91[8].ContextTrackingMode = 0LL;
    }
    v123 = *(struct _MDL **)&v91[11].ImpersonationLevel;
    if ( v123 )
    {
      MmUnlockPages(v123);
      IoFreeMdl(*(PMDL *)&v91[11].ImpersonationLevel);
      *(_QWORD *)&v91[11].ImpersonationLevel = 0LL;
    }
    if ( BYTE2(v90->SecurityQos) == 40 )
      AccessState_high = (int)v90[1].SecurityQos;
    else
      AccessState_high = HIDWORD(v90->AccessState);
    if ( (AccessState_high & 0x4000) == 0 )
    {
      v125 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
      v126 = *(_DWORD *)(v125 + *(_QWORD *)(v92 + 32));
      if ( (v126 & 1) != 0 )
      {
LABEL_243:
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v92 + 968), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(v92 + 464), 0, 0);
      }
      else
      {
        while ( 1 )
        {
          v127 = v126;
          v126 = _InterlockedCompareExchange((volatile signed __int32 *)(v125 + *(_QWORD *)(v92 + 32)), v126 - 2, v126);
          if ( v127 == v126 )
            break;
          if ( (v126 & 1) != 0 )
            goto LABEL_243;
        }
      }
    }
    v128 = v203;
    if ( v203 && *v203 == 59 && (v203[1] & 0x1F) == 0xF || (_BYTE)v206 )
    {
      v129 = sub_1C0007CF4(64LL, 16LL, 1230463314LL, *(_QWORD *)(v8 + 8));
      if ( v129 )
      {
        WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v8 + 8));
        *(_QWORD *)v129 = WorkItem;
        if ( WorkItem )
        {
          *(_QWORD *)(v129 + 8) = Irp;
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 968));
          IoQueueWorkItem(*(PIO_WORKITEM *)v129, WorkerRoutine, CriticalWorkQueue, (PVOID)v129);
          v131 = 1;
          goto LABEL_354;
        }
        ExFreePoolWithTag((PVOID)v129, 0x49576152u);
      }
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(v8 + 24) + 32LL), BusRelations);
      goto LABEL_341;
    }
    if ( (*(_BYTE *)(v8 + 128) & 2) != 0 && v203 )
    {
      if ( *(_BYTE *)(v5 + 2) == 40 )
        v132 = *(_QWORD *)(v5 + 64);
      else
        v132 = *(_QWORD *)(v5 + 24);
      v133 = v201;
      if ( v132 )
      {
        v134 = v199;
        if ( MmIsAddressValid(*(PVOID *)(v201 + 184))
          && !v199
          && ((*v203 == 37 || *v203 == 0x9E)
           && ((unsigned int)sub_1C0023EC4() && (*(_DWORD *)(v8 + 3520) & 1) == 0
            || !(unsigned int)sub_1C0023EC4() && !*(_DWORD *)(v8 + 868))
           || *v203 == 0x9E
           && ((unsigned int)sub_1C0023EC4() && (*(_DWORD *)(v8 + 3520) & 2) == 0
            || !(unsigned int)sub_1C0023EC4() && *(_QWORD *)(v8 + 3376) == 0xFFFFFFFFLL)) )
        {
          v199 = 0;
          v201 = 0LL;
          if ( (unsigned int)sub_1C0023EC4() )
          {
            v139 = *(_QWORD *)(v8 + 152);
            v140 = 0LL;
            v141 = *(_DWORD *)(v8 + 96);
            LODWORD(v204) = v141;
            if ( v139 )
            {
              v140 = (const int *)(v139 + 90);
            }
            else
            {
              v142 = *(_QWORD *)(v8 + 144);
              if ( v142 )
              {
                v135 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 568LL);
                if ( (*(_DWORD *)(v135 + 184) & 0x40) != 0 )
                  v140 = (const int *)(v142 + 41);
              }
            }
            if ( _interlockedbittestandset((volatile signed __int32 *)(v8 + 456), 4u) )
            {
              if ( (byte_1C0093A07 & 0x10) != 0 )
              {
                v150 = &dword_1C0082784;
                if ( v140 )
                  v150 = v140;
                sub_1C0023F18(
                  v8 + 169,
                  v8 + 160,
                  *(_QWORD *)(v8 + 24) + 5000,
                  *(_QWORD *)(*(_QWORD *)(v8 + 24) + 4656LL),
                  *(_DWORD *)(*(_QWORD *)(v8 + 24) + 56LL),
                  *(_QWORD *)(v8 + 24) + 5000LL,
                  v141,
                  SBYTE1(v204),
                  SBYTE2(v204),
                  v8 + 160,
                  v8 + 169,
                  v8 + 186,
                  (__int64)v150);
              }
            }
            else
            {
              LOBYTE(v135) = *v203 != 37;
              if ( (unsigned __int8)sub_1C00244B0(v135, *(_QWORD *)(v133 + 184), &v199, &v201) )
              {
                *(_DWORD *)(v8 + 868) = v199;
                *(_QWORD *)(v8 + 3376) = v201;
                v149 = *(_DWORD *)(v8 + 3520) | 1;
                *(_DWORD *)(v8 + 3520) = v149;
                if ( *v128 == 0x9E )
                  *(_DWORD *)(v8 + 3520) = v149 | 2;
                _interlockedbittestandreset((volatile signed __int32 *)(v8 + 456), 4u);
              }
              else
              {
                if ( !*(_DWORD *)(v8 + 868) )
                {
                  v144 = 512;
                  if ( (*(_BYTE *)(v8 + 128) & 2) != 0 )
                    v144 = 4096;
                  *(_DWORD *)(v8 + 868) = v144;
                }
                v145 = v199;
                v146 = v201;
                if ( (byte_1C0093A07 & 8) != 0 )
                {
                  v147 = &dword_1C0082784;
                  if ( v140 )
                    v147 = v140;
                  sub_1C00240D8(
                    v8 + 169,
                    v8 + 160,
                    *(_QWORD *)(v8 + 24) + 5000,
                    *(_QWORD *)(*(_QWORD *)(v8 + 24) + 4656LL),
                    *(_DWORD *)(*(_QWORD *)(v8 + 24) + 56LL),
                    *(_QWORD *)(v8 + 24) + 5000LL,
                    v143,
                    SBYTE1(v204),
                    SBYTE2(v204),
                    v8 + 160,
                    v8 + 169,
                    v8 + 186,
                    (__int64)v147,
                    v201,
                    v199);
                }
                v148 = *(_DWORD *)(v8 + 3520);
                *(_DWORD *)(v8 + 3524) = v145;
                *(_QWORD *)(v8 + 3528) = v146;
                *(_DWORD *)(v8 + 3520) = v148 ^ (v148 ^ (v148 + 4)) & 0x3FFFC;
                _interlockedbittestandreset((volatile signed __int32 *)(v8 + 456), 4u);
              }
            }
            goto LABEL_341;
          }
          v136 = *(_BYTE **)(v133 + 184);
          if ( *v203 == 37 )
          {
            HIBYTE(v199) = v136[4];
            BYTE2(v199) = v136[5];
            BYTE1(v199) = v136[6];
            LOBYTE(v199) = v136[7];
            BYTE3(v201) = *v136;
            BYTE2(v201) = v136[1];
            BYTE1(v201) = v136[2];
            v137 = v136[3];
          }
          else
          {
            HIBYTE(v199) = v136[8];
            BYTE2(v199) = v136[9];
            BYTE1(v199) = v136[10];
            LOBYTE(v199) = v136[11];
            HIBYTE(v201) = *v136;
            BYTE6(v201) = v136[1];
            BYTE5(v201) = v136[2];
            BYTE4(v201) = v136[3];
            BYTE3(v201) = v136[4];
            BYTE2(v201) = v136[5];
            BYTE1(v201) = v136[6];
            v137 = v136[7];
          }
          v138 = v199;
          LOBYTE(v201) = v137;
          if ( v199 )
          {
            if ( ((v199 - 1) & v199) == 0 )
            {
LABEL_282:
              *(_QWORD *)(v8 + 3376) = v201;
              *(_DWORD *)(v8 + 868) = v138;
              goto LABEL_341;
            }
            do
              v138 &= v138 - 1;
            while ( ((v138 - 1) & v138) != 0 );
          }
          else
          {
            v138 = 512;
          }
          v199 = v138;
          goto LABEL_282;
        }
LABEL_308:
        if ( (*(_BYTE *)(v8 + 128) & 2) == 0
          || !v203
          || v134
          || *v203 != 0x95
          || v203[1]
          || !*(_DWORD *)(v8 + 868)
          || (*(_DWORD *)(v8 + 3396) & 1) != 0 )
        {
          goto LABEL_341;
        }
        v151 = *(_BYTE *)(v5 + 2) == 40 ? *(_QWORD *)(v5 + 64) : *(_QWORD *)(v5 + 24);
        if ( !v151 || !MmIsAddressValid(*(PVOID *)(v133 + 184)) )
          goto LABEL_341;
        v152 = *(_BYTE **)(v133 + 184);
        HIBYTE(v203) = v152[72];
        BYTE6(v203) = v152[73];
        BYTE5(v203) = v152[74];
        BYTE4(v203) = v152[75];
        BYTE3(v203) = v152[76];
        BYTE2(v203) = v152[77];
        BYTE1(v203) = v152[78];
        v153 = v152[79];
        v154 = *(_QWORD *)(v8 + 3328);
        LOBYTE(v203) = v153;
        v155 = v153;
        v156 = (_QWORD)v203 * *(unsigned int *)(v8 + 868);
        if ( v154 != v156 )
        {
          *(_QWORD *)(v8 + 3328) = v156;
          v154 = v156;
        }
        if ( v154 )
        {
          if ( *(_QWORD *)(v8 + 3352) )
            goto LABEL_341;
          v162 = (unsigned int)sub_1C00239D4(v8);
          v163 = sub_1C0007CF4(64LL, v162, 1381654866LL, *(_QWORD *)(v8 + 8));
          *(_QWORD *)(v8 + 3352) = v163;
          if ( v163 )
          {
            v164 = (ULONG *)sub_1C0007CF4(64LL, ((_DWORD)v162 + 3) & 0xFFFFFFFC, 1381654866LL, *(_QWORD *)(v8 + 8));
            if ( v164 )
            {
              RtlInitializeBitMap((PRTL_BITMAP)(v8 + 3360), v164, v162);
              RtlClearAllBits((PRTL_BITMAP)(v8 + 3360));
              *(_DWORD *)(v8 + 3396) |= 1u;
              goto LABEL_341;
            }
          }
          v165 = *(void **)(v8 + 3352);
          if ( v165 )
          {
            ExFreePoolWithTag(v165, 0x525A6152u);
            *(_QWORD *)(v8 + 3352) = 0LL;
          }
          *(_BYTE *)(v8 + 451) |= 1u;
        }
        else
        {
          v157 = *(_QWORD *)(v8 + 152);
          v158 = 0LL;
          if ( v157 )
          {
            v158 = (const int *)(v157 + 90);
          }
          else
          {
            v159 = *(_QWORD *)(v8 + 144);
            if ( v159 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 568LL) + 184LL) & 0x40) != 0 )
              v158 = (const int *)(v159 + 41);
          }
          if ( (byte_1C0093A04 & 4) != 0 )
          {
            v161 = &dword_1C0082784;
            if ( v158 )
              v161 = v158;
            v160 = *(_QWORD *)(v8 + 24);
            sub_1C00242C4(
              *(_DWORD *)(v8 + 96) >> 8,
              v160 + 5000,
              v8 + 186,
              *(_QWORD *)(v160 + 4656),
              *(_DWORD *)(v160 + 56),
              v160 + 5000,
              *(_DWORD *)(v8 + 96),
              BYTE1(*(_DWORD *)(v8 + 96)),
              BYTE2(*(_DWORD *)(v8 + 96)),
              v8 + 160,
              v8 + 169,
              v8 + 186,
              (__int64)v161,
              0,
              v155);
          }
          *(_DWORD *)(v8 + 3396) |= 2u;
        }
        IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(v8 + 8));
LABEL_341:
        if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070 || (HIDWORD(off_1C0093070->Timer) & 8) == 0 )
        {
          v166 = Irp;
        }
        else
        {
          v166 = Irp;
          if ( BYTE1(off_1C0093070->Timer) >= 4u )
            sub_1C003F0C4(off_1C0093070->AttachedDevice, 23LL, &unk_1C0083530, v8, Irp, Irp->IoStatus.Status);
        }
        if ( (qword_1C0093468 & 0x10) != 0 )
          sub_1C0060EDC(*(_QWORD *)(v8 + 24), v166, v5);
        sub_1C0003440(v166);
        v131 = 1;
        goto LABEL_354;
      }
    }
    else
    {
      v133 = v201;
    }
    v134 = v199;
    goto LABEL_308;
  }
  if ( (*(_BYTE *)(v8 + 128) & 2) != 0 )
  {
    v167 = sub_1C0010160(v8, 0LL, v201, 0LL);
    v168 = *(_QWORD *)(v8 + 24);
    if ( v167 )
    {
      ++*(_DWORD *)(v168 + 5576);
      ++*(_DWORD *)(v8 + 2204);
    }
    else
    {
      ++*(_DWORD *)(v168 + 5580);
    }
  }
  v131 = sub_1C00176A0(v8, v201);
LABEL_354:
  if ( (v200 & 0x1C) == 0xC || !v131 )
    return;
  v169 = (unsigned __int8)sub_1C00031D0(&v209, &v208);
  if ( v208 )
    (*(void (__fastcall **)(_QWORD, __int64, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v208 + 64) + 32LL) + 648LL))(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v208 + 64) + 32LL) + 640LL),
      v208 - 120,
      &v209,
      0LL);
  if ( v169 )
    sub_1C0019ED0(*(_QWORD *)(v8 + 24), 0LL);
  v170 = 0;
  v215 = 0LL;
  v216 = 0;
  v171 = *(_QWORD *)(v8 + 24);
  v214 = 0LL;
  if ( v171 )
  {
    v172 = *(_QWORD *)(v8 + 504);
    if ( v172 )
    {
      if ( *(_QWORD *)(v171 + 4840) )
      {
        v173 = 0;
        memset(&v217, 0, sizeof(v217));
        if ( *(_DWORD *)(v172 + 8) )
        {
          do
          {
            v174 = (KSPIN_LOCK *)(v172 + ((v173 + 1LL) << 6));
            KeAcquireInStackQueuedSpinLock(v174 + 5, &v217);
            if ( (KSPIN_LOCK *)*v174 != v174 && *(_QWORD *)(*v174 + 40) < v85 )
              v85 = *(_QWORD *)(*v174 + 40);
            KeReleaseInStackQueuedSpinLock(&v217);
            ++v173;
          }
          while ( v173 < *(_DWORD *)(v172 + 8) );
        }
        v175 = 0LL;
        if ( v85 != -1LL )
          v175 = v85;
        if ( v175 )
          v170 = KeQueryUnbiasedInterruptTime() - v175 > *(_QWORD *)(*(_QWORD *)(v8 + 24) + 4840LL);
      }
    }
  }
  v176 = 0LL;
  v177 = KfRaiseIrql(2u);
  v178 = *(_QWORD *)(v8 + 744);
  v179 = 0;
  v180 = 0;
  v200 = v177;
  v198 = 0;
  if ( (v178 & 1) != 0 )
    goto LABEL_399;
  while ( 1 )
  {
    v181 = v178;
    if ( (unsigned int)(v178 / 0x100000000LL) )
      break;
    v178 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 744), v178 - 2, v178);
    if ( v181 == v178 )
      goto LABEL_394;
LABEL_391:
    if ( (v178 & 1) != 0 )
      goto LABEL_395;
  }
  if ( v170 )
    goto LABEL_395;
  if ( ExQueryDepthSList((PSLIST_HEADER)(v8 + 768)) )
  {
    if ( !v180 && !v179 )
    {
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v8 + 736)) )
        goto LABEL_399;
      v179 = 1;
    }
  }
  else
  {
    if ( !v180 )
    {
      if ( v179 )
      {
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v8 + 736));
        v179 = 0;
      }
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v8 + 728));
      v180 = 1;
      goto LABEL_390;
    }
    sub_1C0001008((union _SLIST_HEADER *)(v8 + 656));
  }
  v182 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v8 + 768));
  if ( !v182 )
  {
    v176 = 0LL;
LABEL_390:
    v178 = *(_QWORD *)(v8 + 744);
    goto LABEL_391;
  }
  v176 = (char *)(&v182[-1].Next + 1);
  if ( v182 == (PSLIST_ENTRY)8 )
    goto LABEL_390;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 744), 0xFFFFFFFF00000000uLL);
  v176[20] &= 0xFCu;
LABEL_394:
  v198 = 1;
LABEL_395:
  v183 = (struct _EX_RUNDOWN_REF *)(v8 + 736);
  if ( v179 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v8 + 736));
  if ( v180 )
  {
    v184 = (volatile LONG *)(v8 + 728);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 728));
    goto LABEL_400;
  }
LABEL_399:
  v184 = (volatile LONG *)(v8 + 728);
  v183 = (struct _EX_RUNDOWN_REF *)(v8 + 736);
LABEL_400:
  if ( v198 )
  {
    KeLowerIrql(v200);
    v185 = v202;
    goto LABEL_444;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(v184);
  v186 = *(_QWORD *)(v8 + 744);
  v187 = 0;
  if ( (v186 & 1) != 0 )
    goto LABEL_417;
  while ( 2 )
  {
    v188 = v186;
    if ( !(unsigned int)(v186 / 0x100000000LL) )
    {
      v186 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 744), v186 - 2, v186);
      if ( v188 == v186 )
        goto LABEL_416;
      goto LABEL_413;
    }
    if ( v170 )
      goto LABEL_417;
    if ( !ExQueryDepthSList((PSLIST_HEADER)(v8 + 768)) )
      sub_1C0001008((union _SLIST_HEADER *)(v8 + 656));
    if ( !v176 )
    {
      v189 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v8 + 768));
      if ( !v189 || (v176 = (char *)(&v189[-1].Next + 1), v189 == (PSLIST_ENTRY)8) )
      {
        v186 = *(_QWORD *)(v8 + 744);
LABEL_413:
        if ( (v186 & 1) != 0 )
          goto LABEL_417;
        continue;
      }
    }
    break;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 744), 0xFFFFFFFF00000000uLL);
  v176[20] &= 0xFCu;
LABEL_416:
  v187 = 1;
LABEL_417:
  if ( v187 )
  {
    v185 = v202;
  }
  else
  {
    v190 = *(_QWORD *)(v8 + 744);
    if ( (v190 & 1) == 0 )
    {
      ExWaitForRundownProtectionRelease(v183);
      ExRundownCompleted(v183);
      do
      {
        v191 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 744), v190 | 1, v190);
        v75 = v190 == v191;
        v190 = v191;
      }
      while ( !v75 && (v191 & 1) == 0 );
    }
    v185 = v202;
    if ( v202 )
      *(_BYTE *)(v8 + 694) = 0;
    v192 = *(_DWORD *)(v8 + 684);
    if ( v192 )
      *(_DWORD *)(v8 + 684) = v192 - 1;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 744), 0xFFFFFFFFFFFFFFFEuLL);
    if ( (((__int64)*(unsigned int *)(v8 + 744) >> 1) & 0x7FFFFFFF) == 0 && *(_DWORD *)(v8 + 696) )
      KeSetEvent((PRKEVENT)(v8 + 704), 0, 0);
    v193 = sub_1C00042F0(v8 + 656, v170);
    v194 = *(_QWORD *)(v8 + 744);
    v176 = (char *)v193;
    if ( (v194 & 1) != 0
      && !*(_DWORD *)(v8 + 684)
      && !*(_DWORD *)(v8 + 672)
      && !*(_DWORD *)(v8 + 688)
      && !*(_BYTE *)(v8 + 693)
      && !*(_BYTE *)(v8 + 695)
      && !*(_BYTE *)(v8 + 692)
      && *(int *)(v8 + 680) <= 0
      && !*(_BYTE *)(v8 + 694) )
    {
      ExReInitializeRundownProtection(v183);
      do
      {
        v195 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 744), v194 ^ 1, v194);
        v75 = v194 == v195;
        v194 = v195;
      }
      while ( !v75 && (v195 & 1) != 0 );
    }
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 728), v200);
LABEL_444:
  if ( v176 )
  {
    if ( byte_1C0093BE8 )
    {
      if ( byte_1C0093A02 < 0 )
      {
        v218 = 0LL;
        IoGetActivityIdIrp(v176 - 120, &v218);
        if ( byte_1C0093A02 < 0 )
          sub_1C0040624(
            ((v176[22] & 6) != 0) + 1,
            *(__int64 *)(v8 + 744) >> 63,
            (unsigned int)&v218,
            v8 + 656,
            ((v176[22] & 6) != 0) + 1,
            5,
            0,
            *(_BYTE *)(v8 + 672) + *(_QWORD *)(v8 + 744) / 0x100000000LL,
            *(__int64 *)(v8 + 744) >> 1);
      }
    }
    if ( !(unsigned __int8)sub_1C0004AE0(*(_QWORD *)(v8 + 664), v176, &v214) )
      (*(void (__fastcall **)(_QWORD, char *, __int128 *, _QWORD))(v8 + 648))(
        *(_QWORD *)(v8 + 640),
        v176 - 120,
        &v214,
        0LL);
  }
  if ( v185 )
  {
    for ( j = sub_1C001A278(v8 + 656); j; j = sub_1C001A278(v8 + 656) )
    {
      if ( !(unsigned __int8)sub_1C0004AE0(*(_QWORD *)(v8 + 664), j, &v214) )
        (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(v8 + 648))(
          *(_QWORD *)(v8 + 640),
          j - 120,
          &v214,
          0LL);
    }
  }
}
