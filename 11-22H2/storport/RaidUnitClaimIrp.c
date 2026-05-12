/*
 * XREFs of RaidUnitClaimIrp @ 0x1C00094D0
 * Callers:
 *     RaUnitStartIo @ 0x1C0008F30 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x1C005F780 (RaUnitStartResetIo.c)
 * Callees:
 *     TranslateToExtendedSrb @ 0x1C000A790 (TranslateToExtendedSrb.c)
 *     RaidUnitReenablePendingTimer @ 0x1C000AC74 (RaidUnitReenablePendingTimer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C004FE78 (RaidSrbExGetBidirectionalData.c)
 *     RaidGetSystemAddressForMdl @ 0x1C0059738 (RaidGetSystemAddressForMdl.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x1C005C3CC (McTemplateK0dud_EtwWriteTransfer.c)
 *     StorpDataInBufferAllocateMdlAndLockPages @ 0x1C0063A04 (StorpDataInBufferAllocateMdlAndLockPages.c)
 */

__int64 __fastcall RaidUnitClaimIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v7; // r15
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rcx
  char v14; // bp
  __int64 v15; // r13
  unsigned int v16; // r11d
  unsigned int *v17; // r9
  __int64 v18; // r10
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // ecx
  unsigned int v23; // r14d
  __int64 v24; // r8
  char **v25; // rbp
  char **v26; // r12
  int v27; // eax
  __int64 v28; // r10
  char v29; // al
  __int64 v30; // rcx
  __int64 v31; // rdx
  char *v32; // rcx
  char v33; // r11
  unsigned int v34; // edx
  __int64 *v35; // r10
  _QWORD *v36; // r15
  unsigned int v37; // r13d
  _QWORD *v38; // r8
  __int64 v39; // r9
  struct _PROCESSOR_NUMBER v40; // edx
  unsigned int v41; // r10d
  __int64 v42; // r9
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // r8
  int v46; // ecx
  __int64 v47; // rax
  char *v48; // rax
  int v49; // eax
  __int64 *v50; // r15
  int v51; // eax
  char v52; // al
  __int64 v53; // rdx
  unsigned __int8 v54; // bl
  __int64 v55; // rdx
  __int64 v56; // r11
  __int64 v57; // r8
  __int64 v58; // rcx
  unsigned __int64 v59; // r9
  __int64 v60; // r10
  int v61; // ecx
  __int64 v62; // rdi
  __int64 v63; // rdi
  __int64 v64; // rax
  unsigned int v65; // r15d
  __int64 *v66; // rbx
  ULONGLONG UnbiasedInterruptTime; // rbp
  __int64 v68; // r14
  __int64 v69; // rdi
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v71; // ecx
  __int64 v72; // rbx
  int v73; // r15d
  _QWORD *v74; // rax
  __int64 v75; // rdx
  int v76; // ecx
  int v77; // r9d
  __int64 result; // rax
  int v79; // eax
  int v80; // ecx
  __int64 v81; // rdx
  __int64 *v82; // rbx
  __int64 v83; // rcx
  _QWORD *v84; // rax
  __int64 v85; // rax
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // r15
  unsigned int v89; // r13d
  __int64 v90; // rbp
  char *v91; // rax
  char *v92; // rcx
  char *v93; // rax
  int SystemAddressForMdl; // ebp
  __int64 v95; // r14
  __int64 v96; // rcx
  __int64 v97; // r8
  int v98; // ecx
  __int64 v99; // rcx
  unsigned __int64 v100; // r10
  __int64 v101; // rdx
  __int64 v102; // r10
  unsigned __int8 v103; // cl
  __int64 v104; // rdx
  __int64 v105; // r9
  int v106; // ecx
  __int64 v107; // rdx
  int v108; // ecx
  unsigned int v109; // ebx
  __int64 v110; // r8
  __int64 v111; // rcx
  unsigned __int64 v112; // r10
  __int64 BidirectionalData; // rax
  struct _MDL *v114; // rcx
  unsigned __int8 v115; // [rsp+31h] [rbp-D7h]
  char v116; // [rsp+32h] [rbp-D6h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v118; // [rsp+38h] [rbp-D0h]
  _QWORD *v119; // [rsp+40h] [rbp-C8h]
  __int64 v120; // [rsp+48h] [rbp-C0h]
  __int64 v121; // [rsp+50h] [rbp-B8h]
  char *v122; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v123; // [rsp+68h] [rbp-A0h]
  __int64 v124; // [rsp+70h] [rbp-98h]
  char **v125; // [rsp+78h] [rbp-90h]
  __int64 v126; // [rsp+80h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-80h] BYREF
  __int128 v128; // [rsp+A0h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0LL;
  v121 = a4;
  v7 = 0LL;
  v118 = a2;
  v8 = a2;
  v124 = 0LL;
  v9 = *(_QWORD *)(v4 + 8);
  v11 = *(_QWORD *)(a4 + 16);
  v116 = 0;
  *(_QWORD *)&v128 = 0LL;
  v12 = *(_BYTE *)(v9 + 2) == 40;
  v115 = 0;
  v120 = 0LL;
  v126 = 0LL;
  if ( v12 )
  {
    v13 = v9 + *(unsigned int *)(v9 + 52);
    v124 = v9;
    *(_WORD *)v13 = 1;
    *(_DWORD *)(v13 + 4) = 4;
    *(_BYTE *)(v13 + 8) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(v13 + 9) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(v13 + 10) = *(_BYTE *)(a1 + 98);
    v14 = *(_BYTE *)(v9 + 2);
    v15 = *(_QWORD *)(v9 + 80);
    v125 = *(char ***)(v9 + 64);
    if ( v14 == 40 && !*(_DWORD *)(v9 + 20) )
    {
      v16 = *(_DWORD *)(v9 + 56);
      v17 = (unsigned int *)(v9 + 56);
      v18 = 0LL;
      if ( !v16 )
        goto LABEL_11;
      while ( 1 )
      {
        v19 = *(unsigned int *)(v9 + 4 * v18 + 120);
        if ( (unsigned int)v19 >= 0x80 )
        {
          v20 = *(unsigned int *)(v9 + 16);
          if ( (unsigned int)v19 <= (unsigned int)v20 )
          {
            v21 = (unsigned int)v19;
            v22 = *(_DWORD *)(v19 + v9);
            if ( v22 == 64 )
            {
              if ( v21 + 40 <= v20 )
                goto LABEL_9;
            }
            else
            {
              v98 = v22 - 65;
              if ( v98 )
              {
                if ( v98 == 1 && v21 + 40 <= v20 )
                {
LABEL_9:
                  v115 = *(_BYTE *)(v21 + v9 + 9);
                  goto LABEL_11;
                }
              }
              else if ( v21 + 56 <= v20 )
              {
                goto LABEL_9;
              }
            }
          }
        }
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= v16 )
          goto LABEL_11;
      }
    }
    v17 = (unsigned int *)(v9 + 56);
    v115 = 0;
    if ( v14 == 40 )
    {
LABEL_11:
      if ( (*(_BYTE *)(v9 + 24) & 0xC0) == 0xC0 )
      {
        v23 = *v17;
        v24 = 0LL;
        if ( *v17 )
        {
          while ( 1 )
          {
            v99 = *(unsigned int *)(v9 + 4 * v24 + 120);
            if ( (unsigned int)v99 >= 0x80 )
            {
              v100 = *(unsigned int *)(v9 + 16);
              if ( (unsigned int)v99 <= (unsigned int)v100 )
              {
                v101 = v99 + v9;
                if ( *(_DWORD *)(v99 + v9) == 1 && v99 + 24 <= v100 )
                  break;
              }
            }
            v24 = (unsigned int)(v24 + 1);
            if ( (unsigned int)v24 >= v23 )
              goto LABEL_15;
          }
          if ( v101 )
          {
            v97 = *(_QWORD *)(v101 + 16);
            if ( v97 )
            {
              v102 = v99 + v9;
              v103 = 0;
              while ( 1 )
              {
                v104 = *(unsigned int *)(v9 + 4LL * v103 + 120);
                if ( (unsigned int)v104 >= 0x80
                  && (unsigned int)v104 < *(_DWORD *)(v9 + 16)
                  && *(_DWORD *)(v104 + v9) == 160 )
                {
                  break;
                }
                if ( ++v103 >= v23 )
                  goto LABEL_169;
              }
              v7 = *(_QWORD *)(v104 + v9 + 8);
              if ( v7 )
              {
                v120 = v97;
                v126 = v7;
              }
              else
              {
LABEL_169:
                v105 = v118;
                v106 = *(_DWORD *)(*(_QWORD *)(v118 + 184) + 24LL);
                if ( v106 == 315412 || v106 == 315464 )
                  v105 = *(unsigned __int8 *)(v118 + 64);
                else
                  LOBYTE(v105) = 0;
                v107 = *(unsigned int *)(v102 + 8);
                v120 = v97;
                result = StorpDataInBufferAllocateMdlAndLockPages(&v126, v107, v97, v105);
                if ( (int)result < 0 )
                  return result;
                v7 = v126;
              }
            }
          }
        }
      }
    }
LABEL_15:
    v25 = v125;
    v26 = (char **)(a1 + 24);
    v5 = v120;
    v8 = v118;
  }
  else
  {
    v26 = (char **)(a1 + 24);
    v15 = *(_QWORD *)(v9 + 48);
    v25 = *(char ***)(v9 + 24);
    *(_BYTE *)(v9 + 6) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(v9 + 5) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(v9 + 7) = *(_BYTE *)(a1 + 98);
    v115 = *(_BYTE *)(v9 + 11);
    v85 = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v85 + 442) == 1 )
    {
      v86 = *(_QWORD *)(v11 + 760);
      if ( !v86 )
      {
        *(_BYTE *)(v9 + 3) = 48;
        *(_DWORD *)(v9 + 64) = -1073741670;
        return 3221225626LL;
      }
      result = TranslateToExtendedSrb(
                 v86,
                 v9,
                 *(_DWORD *)(v11 + 744),
                 v86,
                 a3,
                 (*(_DWORD *)(*(_QWORD *)(v85 + 568) + 184LL) & 0x80) != 0);
      if ( (int)result < 0 )
      {
        *(_BYTE *)(v9 + 3) = 48;
        *(_DWORD *)(v9 + 64) = result;
        return result;
      }
      v87 = *(_QWORD *)(v11 + 760);
      *(_BYTE *)(v11 + 16) |= 0x40u;
      v8 = v118;
      *(_QWORD *)(v11 + 752) = v9;
      *(_QWORD *)&v128 = v9;
      v9 = v87;
      v124 = v87;
      v116 = 1;
      *(_QWORD *)(*(_QWORD *)(v8 + 184) + 8LL) = v87;
    }
  }
  v12 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(v11 + 160) = v8;
  *(_QWORD *)(v11 + 168) = v9;
  *(_QWORD *)(v11 + 224) = a1;
  *(_QWORD *)(v11 + 104) = *(_QWORD *)(v8 + 8);
  *(_QWORD *)(v11 + 136) = v7;
  if ( !v12 )
  {
    IoGetActivityIdIrp(v8, v11 + 728);
    v8 = v118;
  }
  if ( ((*v26)[4596] & 1) != 0 )
  {
    if ( *(_BYTE *)(v9 + 2) == 40 )
      v27 = *(_DWORD *)(v124 + 96);
    else
      v27 = *(_DWORD *)(v9 + 56);
    *(_DWORD *)(v11 + 18) = v27;
  }
  else
  {
    *(_BYTE *)(v11 + 20) = -1;
    *(_WORD *)(v11 + 18) = -1;
  }
  v28 = v121;
  v29 = *(_BYTE *)(v11 + 16) & 0xE3 | 4;
  *(_DWORD *)(v11 + 24) = 0;
  *(_BYTE *)(v11 + 16) = v29;
  *(_QWORD *)(v11 + 176) = v15;
  *(_QWORD *)(v11 + 184) = v25;
  *(_QWORD *)(v11 + 192) = v5;
  if ( *(_BYTE *)(v9 + 2) == 40 )
  {
    v30 = v124;
    *(_QWORD *)(v124 + 96) = v11;
    *(_DWORD *)(v30 + 32) = *(_DWORD *)v28;
  }
  else
  {
    *(_QWORD *)(v9 + 48) = v11;
    *(_BYTE *)(v9 + 8) = *(_BYTE *)v28;
  }
  v31 = *(_QWORD *)(v28 + 8);
  if ( ((*((_DWORD *)*v26 + 121) + 7) & 0xFFFFFFF8) != 0 )
  {
    if ( *(_BYTE *)(v9 + 2) == 40 )
      *(_QWORD *)(v9 + 104) = v31;
    else
      *(_QWORD *)(v9 + 56) = v31;
  }
  v32 = *v26;
  v33 = 0;
  v12 = *(_QWORD *)(v8 + 8) == 0LL;
  v122 = *v26;
  if ( v12 )
    goto LABEL_55;
  v120 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 8LL);
  v34 = *(unsigned __int8 *)(v120 + 2);
  v35 = (__int64 *)(v120 + 24);
  v125 = (char **)(v120 + 24);
  if ( (_BYTE)v34 != 40 )
  {
    v38 = *(_QWORD **)(v120 + 48);
    v37 = v34;
    v49 = *(_DWORD *)(v120 + 12);
    v36 = v38;
    v39 = *v35;
    v119 = v38;
    if ( !(_BYTE)v34 )
    {
      v33 = *(_BYTE *)(v120 + 72);
      v119 = v38;
    }
    goto LABEL_41;
  }
  v36 = *(_QWORD **)(v120 + 96);
  v37 = *(_DWORD *)(v120 + 20);
  v38 = v36;
  v39 = *(_QWORD *)(v120 + 64);
  v40 = *(struct _PROCESSOR_NUMBER *)v35;
  v123 = v39;
  v119 = v36;
  ProcNumber = v40;
  if ( v37 )
  {
LABEL_145:
    LOBYTE(v34) = 40;
    goto LABEL_40;
  }
  v41 = *(_DWORD *)(v120 + 56);
  v42 = 0LL;
  v119 = v36;
  if ( !v41 )
  {
LABEL_186:
    v39 = v123;
    v35 = (__int64 *)(v120 + 24);
    goto LABEL_145;
  }
  v119 = v36;
  while ( 1 )
  {
    v43 = *(unsigned int *)(v120 + 4 * v42 + 120);
    if ( (unsigned int)v43 < 0x80 )
      goto LABEL_184;
    v44 = *(unsigned int *)(v120 + 16);
    if ( (unsigned int)v43 > (unsigned int)v44 )
      goto LABEL_184;
    v45 = (unsigned int)v43;
    v46 = *(_DWORD *)(v43 + v120);
    if ( v46 == 64 )
      break;
    v108 = v46 - 65;
    if ( v108 )
    {
      if ( v108 == 1 && v45 + 40 <= v44 )
      {
        if ( *(_DWORD *)(v45 + v120 + 12) )
        {
          v47 = v120 + 32;
          goto LABEL_38;
        }
LABEL_185:
        v32 = v122;
        v38 = v36;
        goto LABEL_186;
      }
    }
    else if ( v45 + 56 <= v44 )
    {
      if ( !*(_BYTE *)(v45 + v120 + 10) )
        goto LABEL_185;
      goto LABEL_37;
    }
LABEL_184:
    v42 = (unsigned int)(v42 + 1);
    if ( (unsigned int)v42 >= v41 )
      goto LABEL_185;
  }
  if ( v45 + 40 > v44 )
    goto LABEL_184;
  if ( !*(_BYTE *)(v45 + v120 + 10) )
    goto LABEL_185;
LABEL_37:
  v47 = v120 + 24;
LABEL_38:
  v32 = v122;
  v35 = (__int64 *)(v120 + 24);
  v39 = v123;
  v48 = (char *)(v45 + v47);
  LOBYTE(v34) = 40;
  v38 = v36;
  if ( v48 )
    v33 = *v48;
LABEL_40:
  LOBYTE(v49) = ProcNumber.Group;
LABEL_41:
  if ( (v49 & 0xC0) == 0 )
    goto LABEL_123;
  if ( v39 )
  {
    v50 = v36 + 13;
    goto LABEL_44;
  }
  v50 = v38 + 13;
  if ( !v38[13] )
  {
    v8 = v118;
    v28 = v121;
    goto LABEL_55;
  }
LABEL_44:
  if ( v37 <= 0x17 && (v51 = 8389124, _bittest(&v51, v37))
    || (v52 = v32[433], v52 == 3)
    || (unsigned __int8)(v52 - 1) <= 1u && (v37 || ((v33 - 8) & 0x5D) != 0) )
  {
    v8 = v118;
    v88 = *v50;
    v89 = 16;
    v90 = v38[23];
    if ( !*(_BYTE *)(v118 + 64) )
      v89 = 32;
    if ( (*(_BYTE *)(v88 + 10) & 5) != 0 )
    {
      v92 = *(char **)(v88 + 24);
    }
    else
    {
      v91 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v88, 0, MmCached, 0LL, 0, v89 | 0x40000000);
      v38 = v119;
      v92 = v91;
      v8 = v118;
    }
    if ( v92 )
    {
      if ( v90 )
        v90 = v90 - *(unsigned int *)(v88 + 44) - *(_QWORD *)(v88 + 32);
      v93 = &v92[v90];
      SystemAddressForMdl = 0;
      v12 = *(_BYTE *)(v120 + 2) == 40;
      v95 = v120;
      v122 = v93;
      if ( v12 )
        *(_QWORD *)(v120 + 64) = v93;
      else
        *v125 = v93;
      v96 = v38[17];
      if ( v96 )
      {
        SystemAddressForMdl = RaidGetSystemAddressForMdl(v96, v119[24], v89, &v122);
        if ( SystemAddressForMdl >= 0 )
        {
          BidirectionalData = RaidSrbExGetBidirectionalData(v95);
          *(_QWORD *)(BidirectionalData + 16) = v122;
        }
        v8 = v118;
      }
    }
    else
    {
      SystemAddressForMdl = -1073741670;
    }
    if ( SystemAddressForMdl != -1073741670 )
      goto LABEL_124;
    if ( *(_BYTE *)(v9 + 2) == 40 )
    {
      if ( !v116 )
      {
        *(_DWORD *)(v124 + 44) = -1073741670;
        goto LABEL_206;
      }
    }
    else if ( !v116 )
    {
      *(_QWORD *)(v9 + 48) = *(_QWORD *)(v11 + 176);
LABEL_205:
      *(_DWORD *)(v9 + 64) = -1073741670;
LABEL_206:
      v114 = *(struct _MDL **)(v11 + 136);
      if ( v114 )
      {
        MmUnlockPages(v114);
        IoFreeMdl(*(PMDL *)(v11 + 136));
        *(_QWORD *)(v11 + 136) = 0LL;
      }
      return 3221225626LL;
    }
    v9 = v128;
    *(_QWORD *)(*(_QWORD *)(v8 + 184) + 8LL) = v128;
    goto LABEL_205;
  }
  if ( !v32[4306] )
  {
LABEL_123:
    v8 = v118;
LABEL_124:
    v28 = v121;
    goto LABEL_55;
  }
  if ( (_BYTE)v34 != 40 )
  {
    *v35 = 0LL;
    goto LABEL_123;
  }
  v53 = 0LL;
  if ( (*(_BYTE *)v35 & 0xC0) == 0xC0 )
  {
    v109 = *(_DWORD *)(v120 + 56);
    v110 = 0LL;
    if ( v109 )
    {
      while ( 1 )
      {
        v111 = *(unsigned int *)(v120 + 4 * v110 + 120);
        if ( (unsigned int)v111 >= 0x80 )
        {
          v112 = *(unsigned int *)(v120 + 16);
          if ( (unsigned int)v111 <= (unsigned int)v112 && *(_DWORD *)(v111 + v120) == 1 && v111 + 24 <= v112 )
            break;
        }
        v110 = (unsigned int)(v110 + 1);
        if ( (unsigned int)v110 >= v109 )
          goto LABEL_53;
      }
      v53 = v111 + v120;
    }
  }
LABEL_53:
  v8 = v118;
  v28 = v121;
  *(_QWORD *)(v120 + 64) = 0LL;
  if ( v53 )
    *(_QWORD *)(v53 + 16) = 0LL;
LABEL_55:
  v54 = v115;
  if ( v115 <= *(_BYTE *)(a1 + 1780) )
    v54 = *(_BYTE *)(a1 + 1780);
  v55 = *(_QWORD *)(v11 + 168);
  v56 = *(_QWORD *)(v28 + 24);
  if ( *(_BYTE *)(v55 + 2) == 40 )
  {
    if ( *(_DWORD *)(v55 + 20) )
      goto LABEL_68;
    v57 = 0LL;
    if ( !*(_DWORD *)(v55 + 56) )
      goto LABEL_68;
    while ( 1 )
    {
      v58 = *(unsigned int *)(v55 + 4 * v57 + 120);
      if ( (unsigned int)v58 < 0x80 )
        goto LABEL_66;
      v59 = *(unsigned int *)(v55 + 16);
      if ( (unsigned int)v58 > (unsigned int)v59 )
        goto LABEL_66;
      v60 = (unsigned int)v58;
      v61 = *(_DWORD *)(v58 + v55);
      if ( v61 != 64 )
        break;
      if ( v60 + 40 <= v59 )
        goto LABEL_64;
LABEL_66:
      v57 = (unsigned int)(v57 + 1);
      if ( (unsigned int)v57 >= *(_DWORD *)(v55 + 56) )
      {
        v8 = v118;
        goto LABEL_68;
      }
    }
    v80 = v61 - 65;
    if ( v80 )
    {
      if ( v80 != 1 || v60 + 40 > v59 )
        goto LABEL_66;
      *(_QWORD *)(v11 + 200) = *(_QWORD *)(v60 + v55 + 24);
      *(_BYTE *)(v11 + 208) = *(_BYTE *)(v60 + v55 + 9);
      *(_QWORD *)(v60 + v55 + 24) = v56;
    }
    else
    {
      if ( v60 + 56 > v59 )
        goto LABEL_66;
LABEL_64:
      *(_QWORD *)(v11 + 200) = *(_QWORD *)(v60 + v55 + 16);
      *(_BYTE *)(v11 + 208) = *(_BYTE *)(v60 + v55 + 9);
      *(_QWORD *)(v60 + v55 + 16) = v56;
    }
    *(_BYTE *)(v60 + v55 + 9) = v54;
    *(_BYTE *)(v11 + 16) |= 0x20u;
    goto LABEL_66;
  }
  *(_QWORD *)(v11 + 200) = *(_QWORD *)(v55 + 32);
  *(_BYTE *)(v11 + 208) = *(_BYTE *)(v55 + 11);
  *(_QWORD *)(v55 + 32) = v56;
  *(_BYTE *)(v55 + 11) = v54;
  *(_BYTE *)(v11 + 16) |= 0x20u;
LABEL_68:
  v62 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 8LL);
  if ( *(_BYTE *)(v62 + 2) == 40 )
    v63 = *(_QWORD *)(v62 + 96);
  else
    v63 = *(_QWORD *)(v62 + 48);
  v64 = *(_QWORD *)(v63 + 168);
  if ( *(_BYTE *)(v64 + 2) == 40 )
    v65 = *(_DWORD *)(v64 + 40);
  else
    v65 = *(_DWORD *)(v64 + 20);
  if ( v65 <= 2 && !*(_BYTE *)(a1 + 3280) )
    v65 = 3;
  if ( *v26 && *((_QWORD *)*v26 + 605) )
  {
    v66 = (__int64 *)(a1 + 504);
  }
  else
  {
    v66 = (__int64 *)(a1 + 504);
    if ( (**(_BYTE **)(a1 + 504) & 1) == 0 )
    {
      UnbiasedInterruptTime = 0LL;
      goto LABEL_77;
    }
  }
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
LABEL_77:
  *(_BYTE *)(v63 + 16) |= 2u;
  v68 = *v66;
  memset(&LockHandle, 0, sizeof(LockHandle));
  ProcNumber = 0;
  v69 = v63 + 48;
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
  if ( *(_DWORD *)(v68 + 8) == 64 )
    v71 = ProcessorIndexFromNumber & 0x3F;
  else
    v71 = ProcessorIndexFromNumber % *(_DWORD *)(v68 + 8);
  v72 = v68 + ((v71 + 1LL) << 6);
  if ( v65 - 1 > 0xFFFFFFFC )
    v65 = 10;
  *(_DWORD *)(v69 + 36) = v71;
  v73 = 2 * v65;
  *(_QWORD *)(v69 + 40) = UnbiasedInterruptTime;
  *(_DWORD *)(v69 + 32) = v73;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v72 + 40), &LockHandle);
  v74 = *(_QWORD **)(v72 + 8);
  if ( *v74 != v72 )
    goto LABEL_215;
  *(_QWORD *)v69 = v72;
  *(_QWORD *)(v69 + 8) = v74;
  *v74 = v69;
  *(_QWORD *)(v72 + 8) = v69;
  if ( *(_DWORD *)(v72 + 48) >= 0xFFFFFFFE )
    *(_DWORD *)(v72 + 48) = v73;
  if ( (*(_BYTE *)v68 & 1) == 0 )
  {
    *(_DWORD *)(v69 + 48) &= ~1u;
    goto LABEL_86;
  }
  v81 = *(_QWORD *)(v72 + 24);
  v82 = (__int64 *)(v72 + 16);
  if ( (__int64 *)v81 == v82 )
  {
LABEL_108:
    v83 = *v82;
    v84 = (_QWORD *)(v69 + 16);
    if ( *(__int64 **)(*v82 + 8) == v82 )
    {
      *v84 = v83;
      *(_QWORD *)(v69 + 24) = v82;
      *(_QWORD *)(v83 + 8) = v84;
      *v82 = (__int64)v84;
      *(_DWORD *)(v69 + 48) |= 1u;
      goto LABEL_86;
    }
LABEL_215:
    __fastfail(3u);
  }
  while ( *(_QWORD *)(v69 + 40) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v69 + 32)) < *(_QWORD *)(v81 + 24) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v81 + 16)) )
  {
    v81 = *(_QWORD *)(v81 + 8);
    if ( (__int64 *)v81 == v82 )
      goto LABEL_108;
  }
  *(_QWORD *)(v69 + 16) = *(_QWORD *)v81;
  *(_QWORD *)(*(_QWORD *)v81 + 8LL) = v69 + 16;
  *(_QWORD *)v81 = v69 + 16;
  *(_DWORD *)(v69 + 48) |= 1u;
  *(_QWORD *)(v69 + 24) = v81;
LABEL_86:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( StorEtwLoggingEnabled )
  {
    v128 = 0LL;
    IoGetActivityIdIrp(v118, &v128);
    if ( byte_1C0092A02 < 0 )
      McTemplateK0dud_EtwWriteTransfer(v76, v75, (unsigned int)&v128, v77, 3);
  }
  if ( *(char *)(a1 + 449) < 0 || *((_QWORD *)*v26 + 612) )
  {
    if ( (*(_DWORD *)(a1 + 456) & 4) != 0 )
      v79 = 1;
    else
      v79 = (unsigned __int8)_interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 2u);
    if ( *(_BYTE *)(a1 + 3308) )
      goto LABEL_214;
    if ( !v79 )
      RaidUnitReenablePendingTimer(a1, 0LL);
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 3308) )
      return 0LL;
LABEL_214:
    LOBYTE(v75) = 1;
    RaidUnitReenablePendingTimer(a1, v75);
    *(_BYTE *)(a1 + 3308) = 0;
  }
  return 0LL;
}
