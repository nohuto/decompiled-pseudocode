/*
 * XREFs of sub_1C00052B0 @ 0x1C00052B0
 * Callers:
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 *     sub_1C00201F4 @ 0x1C00201F4 (sub_1C00201F4.c)
 *     sub_1C0062414 @ 0x1C0062414 (sub_1C0062414.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0004BDC @ 0x1C0004BDC (sub_1C0004BDC.c)
 *     sub_1C0006430 @ 0x1C0006430 (sub_1C0006430.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C0015A74 @ 0x1C0015A74 (sub_1C0015A74.c)
 *     sub_1C0015AA8 @ 0x1C0015AA8 (sub_1C0015AA8.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C001A174 @ 0x1C001A174 (sub_1C001A174.c)
 *     sub_1C00215F4 @ 0x1C00215F4 (sub_1C00215F4.c)
 *     sub_1C0023A9C @ 0x1C0023A9C (sub_1C0023A9C.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0037008 @ 0x1C0037008 (sub_1C0037008.c)
 *     sub_1C00407E4 @ 0x1C00407E4 (sub_1C00407E4.c)
 *     sub_1C0040FA8 @ 0x1C0040FA8 (sub_1C0040FA8.c)
 *     sub_1C0043604 @ 0x1C0043604 (sub_1C0043604.c)
 *     sub_1C004BD5C @ 0x1C004BD5C (sub_1C004BD5C.c)
 *     sub_1C005A998 @ 0x1C005A998 (sub_1C005A998.c)
 *     sub_1C0065E24 @ 0x1C0065E24 (sub_1C0065E24.c)
 *     sub_1C007896C @ 0x1C007896C (sub_1C007896C.c)
 */

__int64 __fastcall sub_1C00052B0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rcx
  IRP *v5; // r14
  __int64 v6; // r12
  _BYTE *v7; // rsi
  char *v9; // r11
  unsigned int v10; // ebx
  unsigned int v11; // r10d
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r8
  int v15; // ecx
  int v16; // ecx
  unsigned __int64 v17; // rcx
  char v18; // cl
  char v19; // al
  char v20; // al
  char v21; // bl
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  PIO_SECURITY_CONTEXT SecurityContext; // r9
  char v25; // r15
  struct _IO_SECURITY_CONTEXT *v27; // r14
  unsigned int AccessState; // ebx
  unsigned int v29; // r11d
  __int64 v30; // rcx
  unsigned __int64 DesiredAccess; // rdx
  __int64 v32; // r10
  __int64 v33; // r8
  int v34; // ecx
  int v35; // ecx
  unsigned __int64 v36; // rcx
  unsigned int v37; // esi
  unsigned int v38; // r11d
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  __int64 v41; // r8
  int v42; // ecx
  int v43; // ecx
  unsigned __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // r9
  unsigned int v47; // r10d
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rsi
  unsigned __int8 *v51; // r14
  bool v52; // zf
  __int64 v53; // r11
  unsigned int v54; // ebx
  unsigned int v55; // r10d
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  __int64 v58; // r9
  __int64 v59; // r8
  int v60; // ecx
  int v61; // ecx
  unsigned __int64 v62; // rcx
  int v63; // edx
  int v64; // eax
  __int64 *v65; // rbx
  __int64 v66; // rcx
  unsigned int v67; // r14d
  unsigned __int8 v68; // bl
  _BYTE *v69; // rsi
  __int64 v70; // r15
  __int64 v71; // r8
  _QWORD *v72; // rcx
  volatile signed __int32 *v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rcx
  unsigned __int8 v77; // bl
  _BYTE *v78; // rsi
  __int64 v79; // r14
  __int64 v80; // rcx
  unsigned __int64 v81; // r14
  _DWORD *v82; // rsi
  __int64 v83; // r12
  _DWORD *Pool2; // rax
  _QWORD *v85; // r15
  ULONGLONG v86; // rax
  int v87; // eax
  __int64 v88; // rbx
  int Number; // r9d
  unsigned __int64 v90; // rcx
  __int64 v91; // rax
  char v92; // r12
  int v93; // esi
  __int64 v94; // r15
  unsigned int v95; // esi
  KSPIN_LOCK *v96; // rbx
  unsigned __int64 v97; // rbx
  unsigned __int8 *v98; // rbx
  __int64 v99; // r14
  char v100; // si
  int v101; // eax
  unsigned __int8 *v102; // r11
  unsigned int v103; // ebx
  unsigned int v104; // r10d
  __int64 v105; // rcx
  unsigned __int64 v106; // rdx
  __int64 v107; // r9
  __int64 v108; // r8
  int v109; // ecx
  int v110; // ecx
  unsigned __int64 v111; // rcx
  char v112; // dl
  int v113; // ecx
  unsigned __int64 v114; // r15
  unsigned int v115; // ecx
  _QWORD *v116; // rsi
  __int64 v117; // r14
  __int64 v118; // rbx
  ULONG CurrentProcessorNumber; // eax
  unsigned int v120; // r8d
  unsigned int v121; // eax
  __int64 v122; // rbx
  __int64 v123; // rdx
  __int64 v124; // r8
  int v125; // r9d
  PSLIST_ENTRY v126; // rcx
  _QWORD *v127; // rcx
  _QWORD *v128; // rax
  __int64 v129; // rbx
  _QWORD *v130; // rcx
  unsigned int v131; // r15d
  char *v132; // rax
  unsigned __int64 v133; // rcx
  PSLIST_ENTRY v134; // rsi
  PSLIST_ENTRY v135; // rbx
  unsigned int v136; // r8d
  __int64 v137; // rax
  int v138; // r12d
  unsigned int v139; // r8d
  unsigned int v140; // r15d
  PSLIST_ENTRY v141; // rax
  __int64 v142; // rdx
  __int64 v143; // r8
  _QWORD *v144; // rcx
  _QWORD *v145; // rax
  __int64 v146; // rbx
  _QWORD *v147; // rcx
  PSLIST_ENTRY v148; // rbx
  void *v149; // r9
  unsigned int v150; // edx
  struct _SLIST_ENTRY *Next; // rsi
  _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp-99h] BYREF
  unsigned __int8 *v153; // [rsp+48h] [rbp-91h]
  __int64 v154; // [rsp+50h] [rbp-89h]
  int v155; // [rsp+5Ch] [rbp-7Dh] BYREF
  int v156; // [rsp+60h] [rbp-79h] BYREF
  __int64 v157; // [rsp+68h] [rbp-71h]
  int v158; // [rsp+70h] [rbp-69h] BYREF
  __int64 v159; // [rsp+78h] [rbp-61h]
  __int64 v160; // [rsp+80h] [rbp-59h] BYREF
  __int64 v161; // [rsp+88h] [rbp-51h] BYREF
  __int64 v162; // [rsp+90h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE v163; // [rsp+98h] [rbp-41h] BYREF
  __int128 v164; // [rsp+B0h] [rbp-29h] BYREF
  PSLIST_ENTRY v165; // [rsp+C0h] [rbp-19h]
  PSLIST_ENTRY v166; // [rsp+C8h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-9h] BYREF
  signed __int32 v168; // [rsp+140h] [rbp+67h]
  KIRQL v169; // [rsp+140h] [rbp+67h]
  unsigned __int64 v170; // [rsp+148h] [rbp+6Fh]
  char v172; // [rsp+158h] [rbp+7Fh]
  char v173; // [rsp+158h] [rbp+7Fh]

  v170 = a2;
  v165 = 0LL;
  v4 = *(_QWORD *)(a2 + 184);
  v164 = 0LL;
  LODWORD(v166) = 0;
  v5 = (IRP *)a2;
  ProcNumber = 0;
  v6 = *(_QWORD *)(v4 + 8);
  v162 = v4;
  v159 = 0LL;
  v160 = 0LL;
  v7 = (_BYTE *)(v6 + 2);
  v156 = 0;
  v153 = (unsigned __int8 *)(v6 + 2);
  v155 = 0;
  v157 = v6;
  if ( !*(_BYTE *)(a1 + 3280) )
    goto LABEL_32;
  if ( *v7 == 40 ? *(_DWORD *)(v6 + 20) : (unsigned __int8)*v7 )
    goto LABEL_32;
  if ( *v7 != 40 )
  {
    v9 = (char *)(v6 + 72);
    goto LABEL_26;
  }
  v9 = 0LL;
  if ( !*(_DWORD *)(v6 + 20) )
  {
    v10 = *(_DWORD *)(v6 + 56);
    v11 = 0;
    if ( v10 )
    {
      do
      {
        v12 = *(unsigned int *)(v6 + 4LL * v11 + 120);
        if ( (unsigned int)v12 < 0x80 )
          continue;
        a2 = *(unsigned int *)(v6 + 16);
        if ( (unsigned int)v12 >= (unsigned int)a2 )
          continue;
        v13 = v12 + v6;
        v14 = (unsigned int)v12;
        v15 = *(_DWORD *)(v12 + v6) - 64;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            if ( v16 == 1 && v14 + 40 <= a2 )
            {
              v9 = (char *)(v13 + 32);
              if ( !*(_DWORD *)(v13 + 12) )
                v9 = 0LL;
              break;
            }
            continue;
          }
          v17 = v14 + 56;
        }
        else
        {
          v17 = v14 + 40;
        }
        if ( v17 <= a2 )
        {
          if ( *(_BYTE *)(v13 + 10) )
            v9 = (char *)(v13 + 24);
          break;
        }
      }
      while ( ++v11 < v10 );
    }
  }
LABEL_26:
  if ( v9 && ((v18 = *v9, ((*v9 - 8) & 0x5D) == 0) || v18 == 37 || v18 == -98 || (unsigned __int8)(v18 - 94) <= 1u) )
  {
    v172 = 1;
  }
  else
  {
LABEL_32:
    v153 = (unsigned __int8 *)(v6 + 2);
    v172 = 0;
  }
  if ( *v7 == 40 )
    LODWORD(v154) = *(_DWORD *)(v6 + 24);
  else
    LODWORD(v154) = *(_DWORD *)(v6 + 12);
  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 && (unsigned __int8)sub_1C0043604(v6, a2) )
  {
    sub_1C000729C(a1);
    v19 = *(_BYTE *)(v6 + 3);
    if ( *v7 == 40 )
    {
      v20 = ((v19 >> 7) & 0x80) + 56;
    }
    else
    {
      v21 = 56;
      if ( v19 < 0 )
        v21 = -72;
      v20 = v21;
    }
    *(_BYTE *)(v6 + 3) = v20;
    sub_1C0003440(v5, 0, 0xC000050A);
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2152));
    return 1LL;
  }
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  if ( *v7 == 40 )
  {
    *(_PROCESSOR_NUMBER *)(v6 + 96) = ProcNumber;
    v159 = v6;
  }
  else
  {
    if ( !*(_QWORD *)(v6 + 40) )
      *(_QWORD *)(v6 + 40) = *(_QWORD *)(v6 + 56);
    *(_PROCESSOR_NUMBER *)(v6 + 56) = ProcNumber;
  }
  v168 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 832), 0, 0);
  if ( (*(_BYTE *)(a1 + 128) & 2) == 0 )
    goto LABEL_123;
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction != 15 )
    goto LABEL_123;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  v25 = BYTE2(SecurityContext->SecurityQos);
  if ( v25 == 40 ? SecurityContext->FullCreateOptions : BYTE2(SecurityContext->SecurityQos) )
    goto LABEL_123;
  if ( v25 != 40 )
  {
    v27 = SecurityContext + 3;
    goto LABEL_90;
  }
  v27 = 0LL;
  if ( SecurityContext->FullCreateOptions )
    goto LABEL_74;
  AccessState = (unsigned int)SecurityContext[2].AccessState;
  v29 = 0;
  if ( !AccessState )
    goto LABEL_74;
  while ( 1 )
  {
    v30 = *((unsigned int *)&SecurityContext[5].SecurityQos + v29);
    if ( (unsigned int)v30 < 0x80 )
      goto LABEL_70;
    DesiredAccess = SecurityContext->DesiredAccess;
    if ( (unsigned int)v30 >= (unsigned int)DesiredAccess )
      goto LABEL_70;
    v32 = (__int64)SecurityContext + v30;
    v33 = (unsigned int)v30;
    v34 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v30) - 64;
    if ( !v34 )
      break;
    v35 = v34 - 1;
    if ( !v35 )
    {
      v36 = v33 + 56;
      goto LABEL_69;
    }
    if ( v35 == 1 && v33 + 40 <= DesiredAccess )
    {
      v27 = (struct _IO_SECURITY_CONTEXT *)(v32 + 32);
      if ( !*(_DWORD *)(v32 + 12) )
        v27 = 0LL;
      goto LABEL_74;
    }
LABEL_70:
    if ( ++v29 >= AccessState )
      goto LABEL_74;
  }
  v36 = v33 + 40;
LABEL_69:
  if ( v36 > DesiredAccess )
    goto LABEL_70;
  if ( *(_BYTE *)(v32 + 10) )
    v27 = (struct _IO_SECURITY_CONTEXT *)(v32 + 24);
LABEL_74:
  if ( !SecurityContext->FullCreateOptions )
  {
    v37 = (unsigned int)SecurityContext[2].AccessState;
    v38 = 0;
    if ( v37 )
    {
      while ( 2 )
      {
        v39 = *((unsigned int *)&SecurityContext[5].SecurityQos + v38);
        if ( (unsigned int)v39 >= 0x80 )
        {
          v40 = SecurityContext->DesiredAccess;
          if ( (unsigned int)v39 < (unsigned int)v40 )
          {
            v41 = (unsigned int)v39;
            v42 = *(_DWORD *)((char *)&SecurityContext->SecurityQos + v39) - 64;
            if ( v42 )
            {
              v43 = v42 - 1;
              if ( v43 )
              {
                if ( v43 == 1 && v41 + 40 <= v40 )
                  break;
                goto LABEL_86;
              }
              v44 = v41 + 56;
            }
            else
            {
              v44 = v41 + 40;
            }
            if ( v44 <= v40 )
              break;
          }
        }
LABEL_86:
        if ( ++v38 >= v37 )
          break;
        continue;
      }
    }
  }
LABEL_90:
  if ( !v27
    || !(unsigned int)sub_1C0015AA8(0LL, LOBYTE(v27->SecurityQos))
    || *(_DWORD *)(a1 + 868) == (_DWORD)v45
    || (v25 != 40 ? (v48 = *(_DWORD *)(v46 + 12)) : (v48 = *(_DWORD *)(v46 + 24)),
        (v48 & 0x1000) == 0 || *(_QWORD *)(a1 + 3352) == v45) )
  {
LABEL_123:
    v51 = v153;
    goto LABEL_124;
  }
  v49 = sub_1C007896C(v27, v47);
  v50 = (unsigned int)sub_1C0023A9C(a1, v49);
  if ( (unsigned __int8)sub_1C0040FA8(a1 + 656, v170) || v168 )
  {
    v51 = v153;
    v63 = a3 | 0x20;
    a3 |= 0x20u;
  }
  else
  {
    RtlInterlockedSetBitRun(a1 + 3360, (unsigned int)v50, 1LL);
    v51 = v153;
    if ( (qword_1C0093468 & 0x1000) != 0 )
    {
      v52 = *v153 == 40;
      v161 = 0LL;
      v158 = 0;
      if ( !v52 )
      {
        v53 = v6 + 72;
        goto LABEL_121;
      }
      v53 = 0LL;
      if ( !*(_DWORD *)(v6 + 20) )
      {
        v54 = *(_DWORD *)(v6 + 56);
        v55 = 0;
        if ( v54 )
        {
          while ( 2 )
          {
            v56 = *(unsigned int *)(v6 + 4LL * v55 + 120);
            if ( (unsigned int)v56 >= 0x80 )
            {
              v57 = *(unsigned int *)(v6 + 16);
              if ( (unsigned int)v56 < (unsigned int)v57 )
              {
                v58 = v56 + v6;
                v59 = (unsigned int)v56;
                v60 = *(_DWORD *)(v56 + v6) - 64;
                if ( v60 )
                {
                  v61 = v60 - 1;
                  if ( v61 )
                  {
                    if ( v61 == 1 && v59 + 40 <= v57 )
                    {
                      v53 = v58 + 32;
                      if ( !*(_DWORD *)(v58 + 12) )
                        v53 = 0LL;
                      break;
                    }
                    goto LABEL_116;
                  }
                  v62 = v59 + 56;
                }
                else
                {
                  v62 = v59 + 40;
                }
                if ( v62 <= v57 )
                {
                  if ( *(_BYTE *)(v58 + 10) )
                    v53 = v58 + 24;
                  break;
                }
              }
            }
LABEL_116:
            if ( ++v55 >= v54 )
              break;
            continue;
          }
        }
      }
LABEL_121:
      sub_1C00407E4(v53, &v161, &v158);
      sub_1C0019E4C(*(_QWORD *)(a1 + 24), 47, v161, v50, *(unsigned __int8 *)(v50 + *(_QWORD *)(a1 + 3352)), 1LL, 0LL);
    }
LABEL_124:
    v63 = a3;
  }
  v64 = *v51;
  if ( (_BYTE)v64 == 40 )
    v64 = *(_DWORD *)(v6 + 20);
  switch ( v64 )
  {
    case 0:
    case 2:
    case 7:
    case 9:
    case 18:
    case 19:
    case 23:
    case 32:
    case 36:
    case 37:
      v65 = (__int64 *)(a1 + 24);
      goto LABEL_157;
    case 8:
      v65 = (__int64 *)(a1 + 24);
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 24) + 427LL) )
        goto LABEL_129;
      goto LABEL_157;
    case 16:
      v75 = *(_QWORD *)(a1 + 24);
      v65 = (__int64 *)(a1 + 24);
      if ( !v75 || (*(_BYTE *)(v75 + 564) & 0x10) == 0 )
        goto LABEL_129;
LABEL_157:
      if ( (v154 & 0x100800) != 0 )
        goto LABEL_130;
      goto LABEL_132;
    default:
LABEL_129:
      v65 = (__int64 *)(a1 + 24);
LABEL_130:
      v154 = (__int64)v65;
      a3 = v63 | 8;
      *(_QWORD *)(v162 + 16) = 0LL;
      if ( (unsigned __int8)sub_1C0008B84(a1) )
      {
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
        v154 = (__int64)v65;
      }
      else if ( *(_QWORD *)(*v65 + 4896) )
      {
LABEL_132:
        v154 = (__int64)v65;
        if ( KeGetCurrentIrql() >= 2u || *(char *)(a1 + 448) < 0 || (*(_BYTE *)(a1 + 449) & 1) != 0 )
        {
          v76 = *v65;
          v77 = 0;
          v78 = (_BYTE *)(v76 + 108);
          v79 = *(_QWORD *)(v170 + 184);
          if ( *(_QWORD *)(v76 + 4896) )
          {
            if ( (*v78 & 1) != 0 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v76 + 5216));
              if ( (*v78 & 2) != 0 )
                _InterlockedIncrement64((volatile signed __int64 *)(v76 + 5224));
            }
            PoFxActivateComponent(**(_QWORD **)(v76 + 4896), 0LL, 2LL);
            v77 = 2;
          }
          if ( *(char *)(a1 + 449) < 0
            && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784)) )
          {
            if ( (*v78 & 1) != 0 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2088));
              if ( (*v78 & 2) != 0 )
                _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2096));
            }
            v80 = *(_QWORD *)(a1 + 1792);
            if ( (*(_DWORD *)(v80 + 148) & 1) != 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v80 + 144));
              v80 = *(_QWORD *)(a1 + 1792);
            }
            PoFxActivateComponent(*(_QWORD *)v80, 0LL, 2LL);
            v77 |= 1u;
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
          }
          *(_QWORD *)(v79 + 16) = v77;
        }
        else
        {
          v66 = *v65;
          v67 = 5;
          v68 = 0;
          v69 = (_BYTE *)(v66 + 108);
          v70 = *(_QWORD *)(v170 + 184);
          if ( *(_QWORD *)(v66 + 4896) )
          {
            if ( (*v69 & 1) != 0 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v66 + 5216));
              if ( (*v69 & 2) != 0 )
                _InterlockedIncrement64((volatile signed __int64 *)(v66 + 5224));
            }
            v52 = *(_DWORD *)(v66 + 92) == 0;
            v71 = 5LL;
            v72 = *(_QWORD **)(v66 + 4896);
            if ( v52 )
              v71 = 1LL;
            PoFxActivateComponent(*v72, 0LL, v71);
            v68 = 2;
          }
          if ( *(char *)(a1 + 449) < 0
            && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784)) )
          {
            if ( (*v69 & 1) != 0 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2088));
              if ( (*v69 & 2) != 0 )
                _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2096));
            }
            v73 = *(volatile signed __int32 **)(a1 + 1792);
            if ( (v73[37] & 1) != 0 )
            {
              _InterlockedIncrement(v73 + 36);
              v73 = *(volatile signed __int32 **)(a1 + 1792);
            }
            v74 = *(_QWORD *)v73;
            if ( !*(_DWORD *)(a1 + 972) )
              v67 = 1;
            PoFxActivateComponent(v74, 0LL, v67);
            v68 |= 1u;
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
          }
          *(_QWORD *)(v70 + 16) = v68;
        }
      }
      v81 = -1LL;
      if ( v172 )
      {
        v82 = 0LL;
        if ( *(_DWORD *)(a1 + 3304) != -1 || *(_DWORD *)(a1 + 3288) != -1 || *(_DWORD *)(a1 + 3292) )
        {
          v83 = *(_QWORD *)(a1 + 8);
          Pool2 = (_DWORD *)ExAllocatePool2(64LL, 56LL, 1413701970LL);
          v85 = Pool2;
          v82 = Pool2;
          if ( Pool2 || !v83 )
          {
            if ( Pool2 )
            {
              *Pool2 = 300819165;
              if ( *(_DWORD *)(a1 + 3304) == -1 )
                v86 = -1LL;
              else
                v86 = (unsigned int)(5000000 * *(_DWORD *)(a1 + 3304)) + KeQueryUnbiasedInterruptTime();
              v85[1] = v86;
              a3 |= 0x10u;
              v85[5] = v170;
              v85[6] = a1;
            }
          }
          else
          {
            sub_1C005A998(v83, 64LL, 56LL, 1413701970LL);
          }
          v6 = v157;
        }
        if ( *v153 == 40 )
        {
          v159 = v6;
          if ( v82 )
          {
            *((_QWORD *)v82 + 2) = *(_QWORD *)(v6 + 96);
            *(_QWORD *)(v6 + 96) = v82;
          }
          v87 = *(_DWORD *)(a1 + 3296);
          v88 = a1 + 24;
          v154 = a1 + 24;
          *(_DWORD *)(v6 + 40) = v87;
        }
        else
        {
          if ( v82 )
          {
            *((_QWORD *)v82 + 2) = *(_QWORD *)(v6 + 48);
            *(_QWORD *)(v6 + 48) = v82;
          }
          v88 = v154;
          *(_DWORD *)(v6 + 20) = *(_DWORD *)(a1 + 3296);
        }
      }
      else
      {
        v88 = v154;
      }
      v169 = KfRaiseIrql(2u);
      if ( (*(_BYTE *)(*(_QWORD *)v88 + 4596LL) & 1) == 0
        || ProcNumber.Group >= (unsigned int)dword_1C0093AA8
        || (Number = ProcNumber.Number,
            (unsigned int)ProcNumber.Number >= *((_DWORD *)qword_1C0093AA0 + ProcNumber.Group))
        || (v90 = (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7, *(_DWORD *)((char *)P + v90 + 80)) )
      {
        v173 = 0;
      }
      else
      {
        v173 = 1;
        _InterlockedExchange((volatile __int32 *)((char *)P + v90 + 80), 2);
      }
      v91 = v162;
      v92 = 0;
      v93 = v170;
      *(_BYTE *)(v170 + 141) = -87;
      *(_QWORD *)(v91 + 32) = a1;
      if ( *(_QWORD *)v88 )
      {
        v94 = *(_QWORD *)(a1 + 504);
        if ( v94 )
        {
          if ( *(_QWORD *)(*(_QWORD *)v88 + 4840LL) )
          {
            v95 = 0;
            memset(&LockHandle, 0, sizeof(LockHandle));
            if ( *(_DWORD *)(v94 + 8) )
            {
              do
              {
                v96 = (KSPIN_LOCK *)(v94 + ((v95 + 1LL) << 6));
                KeAcquireInStackQueuedSpinLock(v96 + 5, &LockHandle);
                if ( (KSPIN_LOCK *)*v96 != v96 && *(_QWORD *)(*v96 + 40) < v81 )
                  v81 = *(_QWORD *)(*v96 + 40);
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                ++v95;
              }
              while ( v95 < *(_DWORD *)(v94 + 8) );
            }
            v97 = 0LL;
            if ( v81 != -1LL )
              v97 = v81;
            if ( v97 )
              v92 = KeQueryUnbiasedInterruptTime() - v97 > *(_QWORD *)(*(_QWORD *)v154 + 4840LL);
            v93 = v170;
          }
        }
      }
      v98 = v153;
      if ( *v153 == 40 )
      {
        v99 = v157;
        *(_DWORD *)(v157 + 4) = 0;
        *(_DWORD *)(v99 + 28) = 0;
      }
      else
      {
        v99 = v159;
      }
      v100 = sub_1C0006430((int)a1 + 656, v93, a3, Number, v92, (__int64)&v160, (__int64)&v156, (__int64)&v155);
      if ( !v100 )
        goto LABEL_256;
      if ( v92 )
        ++*(_QWORD *)(a1 + 2016);
      if ( *v98 != 40 )
        goto LABEL_248;
      v101 = HIDWORD(v160);
      *(_DWORD *)(v99 + 4) = v160;
      *(_DWORD *)(v99 + 28) = v101;
      if ( !*(_DWORD *)(a1 + 2292) )
        goto LABEL_248;
      if ( *(_BYTE *)(v99 + 2) != 40 )
      {
        v102 = (unsigned __int8 *)(v99 + 72);
        goto LABEL_241;
      }
      v102 = 0LL;
      if ( *(_DWORD *)(v99 + 20) )
        goto LABEL_241;
      v103 = *(_DWORD *)(v99 + 56);
      v104 = 0;
      if ( !v103 )
        goto LABEL_241;
      break;
  }
  while ( 2 )
  {
    v105 = *(unsigned int *)(v99 + 4LL * v104 + 120);
    if ( (unsigned int)v105 < 0x80 )
      goto LABEL_236;
    v106 = *(unsigned int *)(v99 + 16);
    if ( (unsigned int)v105 >= (unsigned int)v106 )
      goto LABEL_236;
    v107 = v105 + v99;
    v108 = (unsigned int)v105;
    v109 = *(_DWORD *)(v105 + v99) - 64;
    if ( v109 )
    {
      v110 = v109 - 1;
      if ( v110 )
      {
        if ( v110 == 1 && v108 + 40 <= v106 )
        {
          if ( *(_DWORD *)(v107 + 12) )
            v102 = (unsigned __int8 *)(v107 + 32);
          goto LABEL_241;
        }
        goto LABEL_236;
      }
      v111 = v108 + 56;
    }
    else
    {
      v111 = v108 + 40;
    }
    if ( v111 > v106 )
    {
LABEL_236:
      if ( ++v104 >= v103 )
        goto LABEL_241;
      continue;
    }
    break;
  }
  if ( *(_BYTE *)(v107 + 10) )
    v102 = (unsigned __int8 *)(v107 + 24);
LABEL_241:
  if ( v102
    && ((unsigned int)sub_1C0015A74(*(unsigned int *)(v99 + 20), *v102)
     || !v113 && (v112 == 66 || v112 == 53 || v112 == -111)) )
  {
    *(_DWORD *)(v99 + 48) = v155;
  }
LABEL_248:
  switch ( v156 )
  {
    case 1:
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2248));
      break;
    case 4:
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2256));
      break;
    case 5:
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2264));
      break;
    case 6:
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2272));
      break;
  }
LABEL_256:
  if ( (a3 & 8) == 0 && *(_BYTE *)(a1 + 695) && *(char *)(a1 + 449) >= 0 )
    sub_1C004BD5C(a1);
  if ( v100 )
    goto LABEL_277;
  v114 = v170;
  memset(&v163, 0, sizeof(v163));
  v115 = 0;
  *(_BYTE *)(v170 + 141) = -88;
  v116 = (_QWORD *)(v170 + 120);
  v117 = *(_QWORD *)(a1 + 664);
  if ( *(_DWORD *)(*(_QWORD *)(v117 + 48) + 904LL) > 1u )
  {
    v118 = *(_QWORD *)(v117 + 48);
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    v120 = *(_DWORD *)(v118 + 904);
    v121 = CurrentProcessorNumber / *(_DWORD *)(v118 + 912);
    v115 = v121;
    if ( v121 >= v120 )
      v115 = v121 % v120;
  }
  v122 = v117 + 320LL * v115;
  if ( v122 && *(_DWORD *)(*(_QWORD *)(v122 + 48) + 924LL) || *(int *)(v122 + 40) > 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v122, &v163);
    if ( !(unsigned __int8)sub_1C001A174(v122) && *(int *)(v122 + 40) <= 0 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v163);
      goto LABEL_270;
    }
    v127 = *(_QWORD **)(v122 + 16);
    if ( *v127 == v122 + 8 )
    {
      *v116 = v122 + 8;
      *(_QWORD *)(v170 + 128) = v127;
      *v127 = v116;
      *(_QWORD *)(v122 + 16) = v116;
      ++*(_DWORD *)(v122 + 24);
      if ( (*(_BYTE *)(v170 + 142) & 0x20) == 0 )
        goto LABEL_276;
      v128 = (_QWORD *)sub_1C00215F4(v170 + 120, v123, v124);
      v129 = v122 + 264;
      v130 = *(_QWORD **)(v129 + 8);
      if ( *v130 == v129 )
      {
        *v128 = v129;
        v128[1] = v130;
        *v130 = v128;
        *(_QWORD *)(v129 + 8) = v128;
        goto LABEL_276;
      }
    }
LABEL_303:
    __fastfail(3u);
  }
LABEL_270:
  v125 = *(_DWORD *)(v122 + 128);
  if ( v125 )
  {
    v136 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v122 + 152) + 64LL) + 912LL);
    v137 = v125 * (HIDWORD(KeGetPcr()[1].LockArray) % v136) / v136;
    v138 = v137;
    v126 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v122 + 64) + 8 * v137));
    if ( !v126 )
    {
      v139 = *(_DWORD *)(v122 + 128);
      v140 = 1;
      if ( v139 <= 1 )
      {
LABEL_294:
        v114 = v170;
        goto LABEL_295;
      }
      while ( !v126 )
      {
        v141 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v122 + 64) + 8LL * ((v140 + v138) % v139)));
        v139 = *(_DWORD *)(v122 + 128);
        ++v140;
        v126 = v141;
        if ( v140 >= v139 )
        {
          if ( !v141 )
            goto LABEL_294;
          break;
        }
      }
    }
    LODWORD(v126->Next) = v138;
    goto LABEL_294;
  }
  v126 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v122 + 64));
LABEL_295:
  if ( v126
    || *(_DWORD *)(v122 + 136) < *(_DWORD *)(v122 + 144)
    && (sub_1C0065E24((PVOID)v122), (v126 = sub_1C0004BDC(v122 + 64)) != 0LL) )
  {
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v122 + 192)) >= *(_DWORD *)(v122 + 36) )
      *(_DWORD *)(v122 + 36) = *(_DWORD *)(v122 + 192);
    v148 = v126 + 3;
    v165 = v126 + 3;
    v166 = v126 + 53;
    *((_QWORD *)&v164 + 1) = v126 + 69;
    v149 = (void *)*((_QWORD *)&v126[50].Next + 1);
    v150 = *((_DWORD *)&v126[49].Next + 2);
    LOBYTE(v126[4].Next) &= 0x9Cu;
    Next = v126[52].Next;
    LODWORD(v126[3].Next) = 523124044;
    *((_QWORD *)&v126[3].Next + 1) = 0LL;
    WORD1(v126[4].Next) = -1;
    BYTE4(v126[4].Next) = -1;
    *((_DWORD *)&v126[4].Next + 2) = 0;
    *((_QWORD *)&v126[9].Next + 1) = 0LL;
    v126[10].Next = 0LL;
    *((_QWORD *)&v126[11].Next + 1) = 0LL;
    *((_QWORD *)&v126[12].Next + 1) = 0LL;
    v126[12].Next = 0LL;
    v126[15].Next = 0LL;
    v126[13].Next = 0LL;
    *((_QWORD *)&v126[13].Next + 1) = 0LL;
    *((_QWORD *)&v126[16].Next + 1) = 0LL;
    v126[17].Next = 0LL;
    *((_QWORD *)&v126[10].Next + 1) = 0LL;
    *((_QWORD *)&v126[46].Next + 1) = 0LL;
    v126[47].Next = 0LL;
    *((_QWORD *)&v126[47].Next + 1) = 0LL;
    v126[48].Next = 0LL;
    *((_DWORD *)&v126[49].Next + 2) = v150;
    *((_QWORD *)&v126[50].Next + 1) = v149;
    if ( v149 )
      memset_0(v149, 0, v150);
    LOBYTE(v148[1].Next) &= ~0x80u;
    BYTE1(v148[1].Next) &= 0xF0u;
    v148[48].Next = 0LL;
    *((_DWORD *)&v148[46].Next + 3) = 0;
    *((_DWORD *)&v148[48].Next + 2) = 0;
    v148[49].Next = Next;
    (*(void (__fastcall **)(_QWORD, unsigned __int64, __int128 *, _QWORD))(a1 + 648))(
      *(_QWORD *)(a1 + 640),
      v114,
      &v164,
      0LL);
    v131 = 1;
  }
  else
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v122, &v163);
    v144 = *(_QWORD **)(v122 + 16);
    if ( *v144 != v122 + 8 )
      goto LABEL_303;
    *v116 = v122 + 8;
    *(_QWORD *)(v170 + 128) = v144;
    *v144 = v116;
    *(_QWORD *)(v122 + 16) = v116;
    ++*(_DWORD *)(v122 + 24);
    *(_DWORD *)(v122 + 40) = 1;
    if ( (*(_BYTE *)(v170 + 142) & 0x20) != 0 )
    {
      v145 = (_QWORD *)sub_1C00215F4(v116, v142, v143);
      v146 = v122 + 264;
      v147 = *(_QWORD **)(v146 + 8);
      if ( *v147 != v146 )
        goto LABEL_303;
      *v145 = v146;
      v145[1] = v147;
      *v147 = v145;
      *(_QWORD *)(v146 + 8) = v145;
    }
LABEL_276:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v163);
LABEL_277:
    v131 = 0;
  }
  if ( v173 == 1
    && (*(_BYTE *)(*(_QWORD *)v154 + 4596LL) & 1) != 0
    && ProcNumber.Group < (unsigned int)dword_1C0093AA8
    && (unsigned int)ProcNumber.Number < *((_DWORD *)qword_1C0093AA0 + ProcNumber.Group) )
  {
    v132 = (char *)P;
    v133 = (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7;
    _InterlockedExchange((volatile __int32 *)((char *)P + v133 + 80), 1);
    v134 = ExpInterlockedFlushSList((PSLIST_HEADER)&v132[v133 + 64]);
    while ( v134 )
    {
      v52 = (BYTE1(v134[-1].Next) & 1) == 0;
      v135 = v134 - 2;
      v134 = v134->Next;
      if ( !v52 )
      {
        sub_1C0037008(*((_QWORD *)&v135[13].Next + 1), *((unsigned int *)&v135[46].Next + 3));
        BYTE1(v135[1].Next) &= ~1u;
      }
      ((void (__fastcall *)(PSLIST_ENTRY))v135[41].Next)(v135);
    }
    _InterlockedExchange(
      (volatile __int32 *)P + 32 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) + 20,
      0);
  }
  KeLowerIrql(v169);
  return v131;
}
