/*
 * XREFs of KeWaitForMultipleObjects @ 0x1402F13C0
 * Callers:
 *     sub_14022EBF8 @ 0x14022EBF8 (sub_14022EBF8.c)
 *     sub_140237720 @ 0x140237720 (sub_140237720.c)
 *     sub_140238330 @ 0x140238330 (sub_140238330.c)
 *     sub_14027DB4C @ 0x14027DB4C (sub_14027DB4C.c)
 *     sub_1402C4BF0 @ 0x1402C4BF0 (sub_1402C4BF0.c)
 *     sub_14038BCE0 @ 0x14038BCE0 (sub_14038BCE0.c)
 *     sub_1403C4AE0 @ 0x1403C4AE0 (sub_1403C4AE0.c)
 *     sub_1403C5160 @ 0x1403C5160 (sub_1403C5160.c)
 *     sub_1403C7DE0 @ 0x1403C7DE0 (sub_1403C7DE0.c)
 *     sub_1403C81D0 @ 0x1403C81D0 (sub_1403C81D0.c)
 *     sub_1403CA190 @ 0x1403CA190 (sub_1403CA190.c)
 *     sub_1403CBBF0 @ 0x1403CBBF0 (sub_1403CBBF0.c)
 *     sub_1403CDBF0 @ 0x1403CDBF0 (sub_1403CDBF0.c)
 *     sub_1403CFD20 @ 0x1403CFD20 (sub_1403CFD20.c)
 *     sub_14053D400 @ 0x14053D400 (sub_14053D400.c)
 *     sub_14058DE20 @ 0x14058DE20 (sub_14058DE20.c)
 *     sub_1405980C8 @ 0x1405980C8 (sub_1405980C8.c)
 *     sub_1405983C0 @ 0x1405983C0 (sub_1405983C0.c)
 *     sub_140616030 @ 0x140616030 (sub_140616030.c)
 *     sub_140714594 @ 0x140714594 (sub_140714594.c)
 *     sub_14078B2D4 @ 0x14078B2D4 (sub_14078B2D4.c)
 *     sub_140799440 @ 0x140799440 (sub_140799440.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1407A11A0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 *     sub_14083ECE0 @ 0x14083ECE0 (sub_14083ECE0.c)
 *     sub_140882180 @ 0x140882180 (sub_140882180.c)
 *     sub_140988074 @ 0x140988074 (sub_140988074.c)
 *     sub_140990634 @ 0x140990634 (sub_140990634.c)
 *     sub_1409B1074 @ 0x1409B1074 (sub_1409B1074.c)
 *     sub_1409EF190 @ 0x1409EF190 (sub_1409EF190.c)
 *     sub_140A69140 @ 0x140A69140 (sub_140A69140.c)
 *     sub_140A6A1B0 @ 0x140A6A1B0 (sub_140A6A1B0.c)
 *     sub_140B24E48 @ 0x140B24E48 (sub_140B24E48.c)
 * Callees:
 *     sub_1402175B8 @ 0x1402175B8 (sub_1402175B8.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_140294824 @ 0x140294824 (sub_140294824.c)
 *     sub_14029F580 @ 0x14029F580 (sub_14029F580.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F35E0 @ 0x1402F35E0 (sub_1402F35E0.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     sub_14035C3FC @ 0x14035C3FC (sub_14035C3FC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 *     sub_140578730 @ 0x140578730 (sub_140578730.c)
 */

NTSTATUS __stdcall KeWaitForMultipleObjects(
        ULONG Count,
        PVOID Object[],
        WAIT_TYPE WaitType,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray)
{
  __int64 *v8; // r12
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 CurrentIrql; // r11
  unsigned __int8 v11; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v13; // rcx
  ULONG v14; // r13d
  char v15; // r14
  struct _KPRCB *v16; // rcx
  __int64 v17; // rdx
  struct _KPRCB *v18; // r10
  char *v19; // rdi
  PVOID *__attribute__((__org_arrdim(0,0))) v20; // r11
  unsigned __int64 v21; // r8
  ULONG v22; // r14d
  volatile signed __int32 *v23; // rbx
  PVOID *v24; // rdx
  __int64 v25; // r9
  int v26; // ecx
  unsigned __int64 v27; // rax
  unsigned int v28; // edi
  unsigned int v29; // ebx
  unsigned __int64 v30; // r15
  NTSTATUS v31; // r14d
  PVOID *__attribute__((__org_arrdim(0,0))) v32; // r11
  __int64 v34; // r9
  unsigned __int64 v35; // rbx
  char v36; // al
  struct _KPRCB *v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // r13
  struct _KPRCB *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r15
  __int64 v43; // rcx
  __int64 *v44; // rbx
  volatile signed __int32 *v45; // rdi
  __int64 v46; // rcx
  __int64 **v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  struct _KPRCB *v50; // rbx
  __int64 v51; // rcx
  unsigned __int8 v52; // r10
  __int64 v53; // r9
  struct _KPRCB *v54; // rdi
  __int64 v55; // rcx
  bool v56; // zf
  __int64 v57; // rcx
  __int64 v58; // rcx
  unsigned __int8 v59; // cl
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  struct _KPRCB *v69; // rcx
  __int64 v70; // rdx
  unsigned __int64 v71; // rax
  char v72; // r14
  __int64 *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 *v76; // rdi
  __int64 v77; // rax
  unsigned int v78; // r8d
  unsigned __int64 v79; // rdx
  __int64 v80; // r9
  unsigned __int64 v81; // rdi
  char *v82; // rbx
  __int64 v83; // rax
  __int64 v84; // r13
  NTSTATUS v85; // ebx
  int v86; // eax
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // rcx
  int v90; // eax
  struct _KPRCB *v91; // rbx
  __int64 v92; // rcx
  int v93; // eax
  __int64 v94; // rcx
  int v95; // eax
  __int64 v96; // rcx
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // eax
  int v103; // eax
  int v104; // eax
  __int64 v105; // rax
  struct _KPRCB *v106; // rdi
  __int64 v107; // rcx
  int v108; // eax
  __int64 v109; // rcx
  int v110; // eax
  __int64 v111; // rcx
  int v112; // eax
  struct _KPRCB *v113; // rcx
  __int64 v114; // rdx
  int v115; // eax
  struct _KPRCB *v116; // rcx
  __int64 v117; // rdx
  unsigned __int8 v118; // al
  struct _KPRCB *v119; // r9
  __int64 v120; // r8
  int v121; // eax
  unsigned __int8 v122; // [rsp+40h] [rbp-79h]
  int v123; // [rsp+44h] [rbp-75h]
  ULONG v124; // [rsp+48h] [rbp-71h] BYREF
  PVOID *__attribute__((__org_arrdim(0,0))) v125; // [rsp+50h] [rbp-69h] BYREF
  struct _KPRCB *v126; // [rsp+58h] [rbp-61h]
  KWAIT_REASON v127; // [rsp+60h] [rbp-59h] BYREF
  __int64 v128; // [rsp+68h] [rbp-51h]
  LONGLONG QuadPart; // [rsp+70h] [rbp-49h]
  int v130; // [rsp+78h] [rbp-41h] BYREF
  _DWORD v131[4]; // [rsp+7Ch] [rbp-3Dh] BYREF
  int v132; // [rsp+8Ch] [rbp-2Dh] BYREF
  int v133; // [rsp+90h] [rbp-29h] BYREF
  PVOID v134; // [rsp+98h] [rbp-21h] BYREF
  _QWORD v135[2]; // [rsp+A0h] [rbp-19h] BYREF

  v8 = (__int64 *)WaitBlockArray;
  v127 = WaitReason;
  v125 = Object;
  v124 = Count;
  QuadPart = 0LL;
  if ( Count == 1 )
    return KeWaitForSingleObject(*Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  if ( !WaitBlockArray )
  {
    if ( Count <= 3 )
    {
      v8 = (__int64 *)((char *)CurrentThread + 320);
      goto LABEL_5;
    }
LABEL_138:
    KeBugCheck(0xCu);
  }
  if ( Count > 0x40 )
    goto LABEL_138;
LABEL_5:
  if ( WaitType )
  {
    v134 = 0LL;
    v122 = _bittestandreset((signed __int32 *)CurrentThread + 29, 2u);
    if ( !v122 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v34 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v34 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      *((_BYTE *)CurrentThread + 390) = CurrentIrql;
    }
    if ( Timeout )
    {
      if ( Timeout->HighPart >= 0 )
      {
        QuadPart = Timeout->QuadPart;
        v123 = 1;
      }
      else
      {
        v123 = 2;
        QuadPart = MEMORY[0xFFFFF78000000008]
                 - MEMORY[0xFFFFF780000003B0]
                 - (Timeout->QuadPart
                  + *((_QWORD *)CurrentThread + 31));
      }
    }
    else
    {
      v123 = 0;
    }
LABEL_12:
    v11 = *((_BYTE *)CurrentThread + 390);
    while ( 1 )
    {
      *((_DWORD *)CurrentThread + 29) &= ~0x10u;
      *((_BYTE *)CurrentThread + 112) = 0;
      *((_BYTE *)CurrentThread + 391) = WaitMode;
      if ( Alertable )
        *((_DWORD *)CurrentThread + 29) |= 0x10u;
      CurrentPrcb = KeGetCurrentPrcb();
      v130 = 0;
      v13 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v13 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v66 = *(_DWORD *)(v13 + 24);
          *(_DWORD *)(v13 + 24) = v66 + 1;
          if ( v66 == -1 )
LABEL_141:
            sub_140418E4C(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
      {
        v57 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v57 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v67 = *(_DWORD *)(v57 + 24) - 1;
            *(_DWORD *)(v57 + 24) = v67;
            if ( !v67 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(&v130);
        while ( *((_QWORD *)CurrentThread + 8) );
        v58 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v58 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v68 = *(_DWORD *)(v58 + 24);
            *(_DWORD *)(v58 + 24) = v68 + 1;
            if ( v68 == -1 )
              goto LABEL_141;
          }
        }
      }
      if ( !*((_BYTE *)CurrentThread + 193) || *((_WORD *)CurrentThread + 243) || v11 )
        break;
      sub_140224100((__int64)CurrentThread);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v69 = KeGetCurrentPrcb();
          v70 = *((_QWORD *)v69 + 4375);
          v56 = (*(_DWORD *)(v70 + 20) & 0xFFFF0003) == 0;
          *(_DWORD *)(v70 + 20) &= 0xFFFF0003;
          if ( v56 )
            sub_140418E4C(v69);
        }
      }
      __writecr8(1uLL);
      sub_1402F1DC0(0LL, 0LL, 0LL);
      v59 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v59 <= 0xFu )
      {
        v62 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v62 + 20) |= ~((unsigned __int8)(1LL << (v59 + 1)) - 1) & 4;
      }
      *((_BYTE *)CurrentThread + 390) = 0;
    }
    v14 = v124;
    v15 = v127;
    if ( Alertable )
    {
      if ( *((_BYTE *)CurrentThread + WaitMode + 114) )
      {
        *((_BYTE *)CurrentThread + WaitMode + 114) = 0;
        v85 = 257;
        goto LABEL_90;
      }
      if ( !WaitMode || *((struct _KTHREAD **)CurrentThread + 21) == (struct _KTHREAD *)((char *)CurrentThread + 168) )
      {
        if ( !*((_BYTE *)CurrentThread + 114) )
        {
LABEL_20:
          *((_BYTE *)CurrentThread + 388) = 5;
          *((_BYTE *)CurrentThread + 643) = v15;
          *((_DWORD *)CurrentThread + 109) = MEMORY[0xFFFFF78000000320];
          *((_QWORD *)CurrentThread + 8) = 0LL;
          v16 = KeGetCurrentPrcb();
          v17 = *((_QWORD *)v16 + 4375);
          if ( v17 )
          {
            if ( *((_BYTE *)v16 + 32) <= 1u )
            {
              v65 = *(_DWORD *)(v17 + 24) - 1;
              *(_DWORD *)(v17 + 24) = v65;
              if ( !v65 )
                sub_140418E4C(v16);
            }
          }
          v18 = KeGetCurrentPrcb();
          v19 = (char *)v8 + 17;
          v20 = v125;
          v21 = 0LL;
          v126 = v18;
          v22 = 0;
          v128 = 0LL;
          while ( 1 )
          {
            v131[0] = 0;
            v23 = (volatile signed __int32 *)v20[v22];
            *(v19 - 1) = 1;
            *v19 = 4;
            *(_WORD *)(v19 + 1) = v22;
            *(_QWORD *)(v19 + 7) = CurrentThread;
            *(_QWORD *)(v19 + 15) = v23;
            if ( _interlockedbittestandset(v23, 7u) )
            {
              do
              {
                do
                  sub_1402F32E0(v131);
                while ( (*v23 & 0x80u) != 0 );
              }
              while ( _interlockedbittestandset(v23, 7u) );
              v20 = v125;
              v21 = v128;
              v18 = v126;
            }
            if ( (*(_BYTE *)v23 & 0x7F) == 2 )
            {
              if ( (v23[12] & 2) != 0 )
              {
                _bittestandset64((__int64 *)&v21, v22);
                v128 = v21;
              }
              if ( *((int *)v23 + 1) > 0
                || CurrentThread == *((struct _KTHREAD **)v23 + 5) && *((_BYTE *)v23 + 2) == *((_BYTE *)v18 + 13242) )
              {
                if ( *((_DWORD *)v23 + 1) == 0x80000000 )
                {
                  _InterlockedAnd(v23, 0xFFFFFF7F);
                  v91 = KeGetCurrentPrcb();
                  v124 = 0;
                  v92 = *((_QWORD *)v91 + 4375);
                  if ( !v92 )
                    goto LABEL_185;
                  if ( *((_BYTE *)v91 + 32) > 1u )
                    goto LABEL_185;
                  v93 = *(_DWORD *)(v92 + 24);
                  *(_DWORD *)(v92 + 24) = v93 + 1;
                  if ( v93 != -1 )
                    goto LABEL_185;
                  while ( 1 )
                  {
                    sub_140418E4C(v91);
                    while ( 1 )
                    {
LABEL_185:
                      if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
                      {
                        sub_140578730((_DWORD)v126, (_DWORD)CurrentThread, v122, (_DWORD)v8, v22);
                        RtlRaiseStatus(-1073741423);
                      }
                      v94 = *((_QWORD *)v91 + 4375);
                      if ( v94 )
                      {
                        if ( *((_BYTE *)v91 + 32) <= 1u )
                        {
                          v95 = *(_DWORD *)(v94 + 24) - 1;
                          *(_DWORD *)(v94 + 24) = v95;
                          if ( !v95 )
                            sub_140418E4C(v91);
                        }
                      }
                      do
                        sub_1402F32E0(&v124);
                      while ( *((_QWORD *)CurrentThread + 8) );
                      v96 = *((_QWORD *)v91 + 4375);
                      if ( v96 )
                      {
                        if ( *((_BYTE *)v91 + 32) <= 1u )
                        {
                          v97 = *(_DWORD *)(v96 + 24);
                          *(_DWORD *)(v96 + 24) = v97 + 1;
                          if ( v97 == -1 )
                            break;
                        }
                      }
                    }
                  }
                }
                v54 = KeGetCurrentPrcb();
                v127 = Executive;
                v55 = *((_QWORD *)v54 + 4375);
                if ( v55 )
                {
                  if ( *((_BYTE *)v54 + 32) <= 1u )
                  {
                    v86 = *(_DWORD *)(v55 + 24);
                    *(_DWORD *)(v55 + 24) = v86 + 1;
                    if ( v86 == -1 )
LABEL_171:
                      sub_140418E4C(v54);
                  }
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
                {
                  v87 = *((_QWORD *)v54 + 4375);
                  if ( v87 )
                  {
                    if ( *((_BYTE *)v54 + 32) <= 1u )
                    {
                      v88 = *(_DWORD *)(v87 + 24) - 1;
                      *(_DWORD *)(v87 + 24) = v88;
                      if ( !v88 )
                        sub_140418E4C(v54);
                    }
                  }
                  do
                    sub_1402F32E0(&v127);
                  while ( *((_QWORD *)CurrentThread + 8) );
                  v89 = *((_QWORD *)v54 + 4375);
                  if ( v89 )
                  {
                    if ( *((_BYTE *)v54 + 32) <= 1u )
                    {
                      v90 = *(_DWORD *)(v89 + 24);
                      *(_DWORD *)(v89 + 24) = v90 + 1;
                      if ( v90 == -1 )
                        goto LABEL_171;
                    }
                  }
                }
                v39 = (__int64)v126;
                if ( (*((_BYTE *)CurrentThread + 112) & 7) == 0 )
                {
                  *((_QWORD *)CurrentThread + 25) = v22;
                  *((_QWORD *)CurrentThread + 122) = 0LL;
                  v56 = (*((_DWORD *)v23 + 1))-- == 1;
                  if ( v56 )
                    sub_1402F35E0(v23, CurrentThread, v39);
                }
                goto LABEL_50;
              }
            }
            else if ( *((int *)v23 + 1) > 0 )
            {
              v37 = KeGetCurrentPrcb();
              v133 = 0;
              v38 = *((_QWORD *)v37 + 4375);
              if ( v38 )
              {
                if ( *((_BYTE *)v37 + 32) <= 1u )
                {
                  v101 = *(_DWORD *)(v38 + 24);
                  *(_DWORD *)(v38 + 24) = v101 + 1;
                  if ( v101 == -1 )
LABEL_208:
                    sub_140418E4C(v37);
                }
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
              {
                v60 = *((_QWORD *)v37 + 4375);
                if ( v60 )
                {
                  if ( *((_BYTE *)v37 + 32) <= 1u )
                  {
                    v102 = *(_DWORD *)(v60 + 24) - 1;
                    *(_DWORD *)(v60 + 24) = v102;
                    if ( !v102 )
                      sub_140418E4C(v37);
                  }
                }
                do
                  sub_1402F32E0(&v133);
                while ( *((_QWORD *)CurrentThread + 8) );
                v61 = *((_QWORD *)v37 + 4375);
                if ( v61 )
                {
                  if ( *((_BYTE *)v37 + 32) <= 1u )
                  {
                    v103 = *(_DWORD *)(v61 + 24);
                    *(_DWORD *)(v61 + 24) = v103 + 1;
                    if ( v103 == -1 )
                      goto LABEL_208;
                  }
                }
              }
              if ( (*((_BYTE *)CurrentThread + 112) & 7) == 0 )
              {
                *((_QWORD *)CurrentThread + 25) = v22;
                *((_QWORD *)CurrentThread + 122) = 0LL;
                if ( (*(_BYTE *)v23 & 7) == 1 )
                {
                  *((_DWORD *)v23 + 1) = 0;
                }
                else if ( (*(_BYTE *)v23 & 0x7F) == 5 )
                {
                  --*((_DWORD *)v23 + 1);
                }
              }
              v39 = (__int64)v126;
LABEL_50:
              _InterlockedAnd(v23, 0xFFFFFF7F);
LABEL_51:
              *((_BYTE *)CurrentThread + 388) = 2;
              *((_QWORD *)CurrentThread + 8) = 0LL;
              v40 = KeGetCurrentPrcb();
              v41 = *((_QWORD *)v40 + 4375);
              if ( v41 )
              {
                if ( *((_BYTE *)v40 + 32) <= 1u )
                {
                  v104 = *(_DWORD *)(v41 + 24) - 1;
                  *(_DWORD *)(v41 + 24) = v104;
                  if ( !v104 )
                    sub_140418E4C(v40);
                }
              }
              v42 = *((_QWORD *)CurrentThread + 25);
              v43 = *((_QWORD *)CurrentThread + 122);
              if ( v43 )
              {
                *((_QWORD *)CurrentThread + 122) = 0LL;
                v105 = sub_140347C10(v43, 0LL, 1LL);
                if ( v105 )
                  *(_BYTE *)(v105 + 18) = 1;
              }
              if ( v22 )
              {
                v44 = &v8[6 * (unsigned __int8)v22];
                do
                {
                  if ( *((_BYTE *)v8 + 17) < 5u )
                  {
                    v45 = (volatile signed __int32 *)v8[4];
                    sub_1402F3290(v45);
                    if ( *((_BYTE *)v8 + 17) == 4 )
                    {
                      v46 = *v8;
                      v47 = (__int64 **)v8[1];
                      if ( *(__int64 **)(*v8 + 8) != v8 || *v47 != v8 )
                        goto LABEL_58;
                      *v47 = (__int64 *)v46;
                      *(_QWORD *)(v46 + 8) = v47;
                    }
                    _InterlockedAnd(v45, 0xFFFFFF7F);
                  }
                  v8 += 6;
                }
                while ( v8 != v44 );
              }
              v35 = *((unsigned __int8 *)CurrentThread + 390);
              v36 = *((_BYTE *)CurrentThread + 112);
              if ( (v36 & 0x38) != 0 )
              {
                if ( (v36 & 0x18) != 0 )
                {
                  if ( (v36 & 8) != 0 )
                    _interlockedbittestandset((volatile signed __int32 *)CurrentThread + 30, 0xCu);
                  v135[0] = 0LL;
                  v106 = KeGetCurrentPrcb();
                  LODWORD(v125) = 0;
                  v107 = *((_QWORD *)v106 + 4375);
                  if ( v107 )
                  {
                    if ( *((_BYTE *)v106 + 32) <= 1u )
                    {
                      v108 = *(_DWORD *)(v107 + 24);
                      *(_DWORD *)(v107 + 24) = v108 + 1;
                      if ( v108 == -1 )
LABEL_225:
                        sub_140418E4C(v106);
                    }
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 48), 0LL) )
                  {
                    v109 = *((_QWORD *)v106 + 4375);
                    if ( v109 )
                    {
                      if ( *((_BYTE *)v106 + 32) <= 1u )
                      {
                        v110 = *(_DWORD *)(v109 + 24) - 1;
                        *(_DWORD *)(v109 + 24) = v110;
                        if ( !v110 )
                          sub_140418E4C(v106);
                      }
                    }
                    do
                      sub_1402F32E0(&v125);
                    while ( *(_QWORD *)(v39 + 48) );
                    v111 = *((_QWORD *)v106 + 4375);
                    if ( v111 )
                    {
                      if ( *((_BYTE *)v106 + 32) <= 1u )
                      {
                        v112 = *(_DWORD *)(v111 + 24);
                        *(_DWORD *)(v111 + 24) = v112 + 1;
                        if ( v112 == -1 )
                          goto LABEL_225;
                      }
                    }
                  }
                  if ( !*(_QWORD *)(v39 + 16) )
                    sub_14035C3FC(v39, v135, v21);
                  _InterlockedAnd64((volatile signed __int64 *)(v39 + 48), 0LL);
                  v113 = KeGetCurrentPrcb();
                  v114 = *((_QWORD *)v113 + 4375);
                  if ( v114 )
                  {
                    if ( *((_BYTE *)v113 + 32) <= 1u )
                    {
                      v115 = *(_DWORD *)(v114 + 24) - 1;
                      *(_DWORD *)(v114 + 24) = v115;
                      if ( !v115 )
                        sub_140418E4C(v113);
                    }
                  }
                  sub_140344800(v39, v135, (unsigned __int8)v35);
                }
                else
                {
                  sub_140294824(v39, 1u);
                  sub_1402F1DC0(0LL, 0LL, 0LL);
                  if ( dword_140D06B08 )
                  {
                    if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
                    {
                      v116 = KeGetCurrentPrcb();
                      v117 = *((_QWORD *)v116 + 4375);
                      v56 = (*(_DWORD *)(v117 + 20) & 0xFFFF0001) == 0;
                      *(_DWORD *)(v117 + 20) &= 0xFFFF0001;
                      if ( v56 )
                        sub_140418E4C(v116);
                    }
                  }
                  __writecr8(0LL);
                }
              }
              else if ( v122 )
              {
                sub_140294824(v39, v35);
              }
              else
              {
                if ( dword_140D06B08 )
                {
                  if ( (dword_140D06B08 & 1) != 0 )
                  {
                    v118 = KeGetCurrentIrql();
                    if ( v118 <= 0xFu && (unsigned __int8)v35 <= 0xFu && v118 >= 2u )
                    {
                      v119 = KeGetCurrentPrcb();
                      v120 = *((_QWORD *)v119 + 4375);
                      v121 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
                      v56 = (v121 & *(_DWORD *)(v120 + 20)) == 0;
                      *(_DWORD *)(v120 + 20) &= v121;
                      if ( v56 )
                        sub_140418E4C(v119);
                    }
                  }
                }
                __writecr8(v35);
              }
              return v42;
            }
            v24 = (PVOID *)*((_QWORD *)v23 + 2);
            if ( *v24 != v23 + 2 )
LABEL_58:
              __fastfail(3u);
            *(_QWORD *)(v19 - 9) = v24;
            *(_QWORD *)(v19 - 17) = v23 + 2;
            *v24 = v19 - 17;
            *((_QWORD *)v23 + 2) = v19 - 17;
            _InterlockedAnd(v23, 0xFFFFFF7F);
            ++v22;
            v19 += 48;
            if ( v22 >= v14 )
            {
              v25 = QuadPart;
              v26 = v123;
              v27 = QuadPart;
              if ( v123 == 2 )
              {
                v48 = *((unsigned int *)CurrentThread + 238);
                v49 = MEMORY[0xFFFFF78000000008] - *((_QWORD *)CurrentThread + 31) - MEMORY[0xFFFFF780000003B0];
                v27 = QuadPart;
                if ( *((_BYTE *)CurrentThread + 391)
                  && !*((_DWORD *)CurrentThread + 121)
                  && !*((_BYTE *)CurrentThread + 390)
                  && !*((_BYTE *)CurrentThread + 192)
                  && (_DWORD)v48 )
                {
                  v27 = QuadPart + v48;
                }
              }
              else
              {
                if ( !v123 )
                  goto LABEL_29;
                if ( !QuadPart )
                {
LABEL_81:
                  v50 = KeGetCurrentPrcb();
                  v132 = 0;
                  v51 = *((_QWORD *)v50 + 4375);
                  if ( v51 )
                  {
                    if ( *((_BYTE *)v50 + 32) <= 1u )
                    {
                      v98 = *(_DWORD *)(v51 + 24);
                      *(_DWORD *)(v51 + 24) = v98 + 1;
                      if ( v98 == -1 )
LABEL_198:
                        sub_140418E4C(v50);
                    }
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentThread + 16, 0LL) )
                  {
                    v63 = *((_QWORD *)v50 + 4375);
                    if ( v63 )
                    {
                      if ( *((_BYTE *)v50 + 32) <= 1u )
                      {
                        v99 = *(_DWORD *)(v63 + 24) - 1;
                        *(_DWORD *)(v63 + 24) = v99;
                        if ( !v99 )
                          sub_140418E4C(v50);
                      }
                    }
                    do
                      sub_1402F32E0(&v132);
                    while ( *((_QWORD *)CurrentThread + 8) );
                    v64 = *((_QWORD *)v50 + 4375);
                    if ( v64 )
                    {
                      if ( *((_BYTE *)v50 + 32) <= 1u )
                      {
                        v100 = *(_DWORD *)(v64 + 24);
                        *(_DWORD *)(v64 + 24) = v100 + 1;
                        if ( v100 == -1 )
                          goto LABEL_198;
                      }
                    }
                  }
                  v39 = (__int64)v126;
                  if ( (*((_BYTE *)CurrentThread + 112) & 7) == 0 )
                  {
                    *((_QWORD *)CurrentThread + 25) = 258LL;
                    *((_QWORD *)CurrentThread + 122) = 0LL;
                  }
                  goto LABEL_51;
                }
                v49 = MEMORY[0xFFFFF78000000014];
              }
              if ( v49 > v27 )
                goto LABEL_81;
              v26 = v123;
LABEL_29:
              v28 = 0;
              *((_BYTE *)CurrentThread + 587) = v14;
              v29 = 0;
              v30 = 0LL;
              if ( v21 )
              {
                do
                {
                  _BitScanForward64(&v71, v21);
                  v72 = v71;
                  v131[1] = v71;
                  v128 = v21 & ~(1LL << v71);
                  v73 = (__int64 *)sub_140347C10(v20[v71], 0LL, 0LL);
                  v76 = v73;
                  if ( !v73 )
                    break;
                  v30 |= 1LL << v72;
                  sub_14029F580(v73, v74, v75);
                  v21 = v128;
                  v20 = v125;
                  v77 = v29++;
                  *((_BYTE *)&v135[1] + v77) = (2 * *((_BYTE *)v76 + 16)) | 1;
                }
                while ( v21 );
                v25 = QuadPart;
                v28 = 0;
                v26 = v123;
              }
              v31 = sub_1402B5240((__int64)CurrentThread, v8, v26, v25, &v134);
              v32 = v125;
              if ( v134 )
              {
                v78 = 0;
                v79 = v30;
                if ( v30 )
                {
                  while ( 1 )
                  {
                    _BitScanForward64((unsigned __int64 *)&v80, v79);
                    v79 &= ~(1LL << v80);
                    v131[2] = v80;
                    if ( v134 == v125[v80] )
                      break;
                    ++v78;
                    if ( !v79 )
                      goto LABEL_164;
                  }
                  v81 = v78;
                  v30 &= ~(1LL << v80);
                  v82 = (char *)KeGetCurrentThread() + 96 * (*((_BYTE *)&v135[1] + v78) >> 1);
                  sub_140347C10(v125[v80], v82 + 1696, 0LL);
                  v82[1714] = 1;
                  if ( v81 >= 6 )
                    sub_140502A3C();
                  v32 = v125;
                  *((_BYTE *)&v135[1] + v81) = 0;
                  v28 = 0;
                }
LABEL_164:
                *((_QWORD *)CurrentThread + 122) = 0LL;
              }
              for ( ; v30; ++v28 )
              {
                _BitScanForward64((unsigned __int64 *)&v83, v30);
                v84 = (unsigned int)v83;
                v131[3] = v83;
                v30 &= ~(1LL << v83);
                if ( !*((_BYTE *)&v135[1] + v28) )
                  ++v28;
                sub_140347C10(
                  v32[(unsigned int)v83],
                  (char *)KeGetCurrentThread() + 96 * (*((_BYTE *)&v135[1] + v28) >> 1) + 1696,
                  0LL);
                sub_140353BB0((ULONG_PTR)v125[v84]);
                v32 = v125;
              }
              if ( v31 != 256 )
                return v31;
              v122 = 0;
              v52 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v52 <= 0xFu )
              {
                v53 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
                *(_DWORD *)(v53 + 20) |= ~((unsigned __int8)(1LL << (v52 + 1)) - 1) & 4;
              }
              *((_BYTE *)CurrentThread + 390) = v52;
              goto LABEL_12;
            }
          }
        }
        *((_BYTE *)CurrentThread + 114) = 0;
        v85 = 257;
        goto LABEL_90;
      }
      *((_BYTE *)CurrentThread + 194) |= 2u;
    }
    else if ( (*((_BYTE *)CurrentThread + 194) & 2) == 0 || !WaitMode )
    {
      goto LABEL_20;
    }
    v85 = 192;
LABEL_90:
    sub_140224100((__int64)CurrentThread);
    sub_140294824((__int64)KeGetCurrentPrcb(), v11);
    return v85;
  }
  return sub_1402175B8(Count, Object, WaitReason, WaitMode, Alertable, (__int64)Timeout, (__int64)v8);
}
