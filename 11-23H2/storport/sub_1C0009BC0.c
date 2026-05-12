/*
 * XREFs of sub_1C0009BC0 @ 0x1C0009BC0
 * Callers:
 *     sub_1C0009130 @ 0x1C0009130 (sub_1C0009130.c)
 *     sub_1C005FDF0 @ 0x1C005FDF0 (sub_1C005FDF0.c)
 * Callees:
 *     sub_1C000B120 @ 0x1C000B120 (sub_1C000B120.c)
 *     sub_1C000B604 @ 0x1C000B604 (sub_1C000B604.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 *     sub_1C0050448 @ 0x1C0050448 (sub_1C0050448.c)
 *     sub_1C0059DA8 @ 0x1C0059DA8 (sub_1C0059DA8.c)
 *     sub_1C005CA3C @ 0x1C005CA3C (sub_1C005CA3C.c)
 *     sub_1C0064214 @ 0x1C0064214 (sub_1C0064214.c)
 */

__int64 __fastcall sub_1C0009BC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v7; // r15
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rbx
  bool v12; // zf
  __int64 v13; // rcx
  char v14; // r14
  __int64 v15; // r12
  unsigned int v16; // r11d
  _DWORD *v17; // rsi
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // r8
  int v23; // ecx
  int v24; // ecx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r10
  __int64 v31; // r9
  unsigned __int8 v32; // r8
  __int64 v33; // rcx
  int v34; // ecx
  __int64 result; // rax
  char *v36; // rsi
  _QWORD *v37; // r14
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // rax
  char v43; // al
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r15
  char v51; // bp
  __int64 v52; // r9
  __int64 v53; // r13
  unsigned int v54; // r8d
  struct _PROCESSOR_NUMBER *v55; // rdx
  _QWORD *v56; // r14
  unsigned int v57; // r15d
  _QWORD *v58; // r12
  __int64 v59; // rcx
  __int64 v60; // rsi
  unsigned int v61; // r11d
  __int64 v62; // r10
  __int64 v63; // rcx
  unsigned __int64 v64; // rdx
  __int64 v65; // r9
  __int64 v66; // r8
  int v67; // ecx
  int v68; // ecx
  char *v69; // rax
  unsigned __int64 v70; // rcx
  int v71; // eax
  __int64 *v72; // r14
  unsigned __int8 v73; // r11
  __int64 v74; // rdx
  __int64 v75; // rdi
  __int64 i; // r10
  __int64 v77; // rcx
  unsigned __int64 v78; // r8
  __int64 v79; // r9
  int v80; // ecx
  int v81; // ecx
  int v82; // eax
  char v83; // al
  __int64 v84; // rdi
  unsigned int v85; // r11d
  __int64 v86; // rdx
  __int64 v87; // rcx
  unsigned __int64 v88; // r9
  __int64 v89; // r14
  unsigned int v90; // r15d
  __int64 v91; // rbp
  char *v92; // rcx
  int v93; // ebp
  char *v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  struct _MDL *v97; // rcx
  unsigned __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rbx
  __int64 v101; // rax
  unsigned int v102; // edi
  __int64 *v103; // rsi
  ULONGLONG UnbiasedInterruptTime; // rbp
  __int64 v105; // r14
  __int64 v106; // rbx
  ULONG v107; // edx
  __int64 v108; // rsi
  int v109; // edi
  _QWORD *v110; // rax
  __int64 *v111; // r8
  __int64 v112; // rdx
  __int64 v113; // rcx
  _QWORD *v114; // rax
  __int64 v115; // rdx
  int v116; // ecx
  int v117; // r9d
  int v118; // eax
  unsigned __int8 v119; // [rsp+31h] [rbp-D7h]
  char v120; // [rsp+32h] [rbp-D6h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v122; // [rsp+38h] [rbp-D0h]
  _QWORD *v123; // [rsp+40h] [rbp-C8h]
  __int64 v124; // [rsp+50h] [rbp-B8h]
  __int64 v125; // [rsp+58h] [rbp-B0h]
  __int64 v126; // [rsp+60h] [rbp-A8h]
  __int64 v127; // [rsp+68h] [rbp-A0h]
  __int64 v128; // [rsp+70h] [rbp-98h]
  char *v129; // [rsp+78h] [rbp-90h] BYREF
  __int64 v130; // [rsp+80h] [rbp-88h] BYREF
  char **v131; // [rsp+88h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-78h] BYREF
  __int128 v133; // [rsp+A8h] [rbp-60h] BYREF

  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0LL;
  v128 = a4;
  v7 = 0LL;
  v122 = a2;
  v8 = a2;
  v124 = a1;
  v9 = *(_QWORD *)(v4 + 8);
  v10 = a1;
  v11 = *(_QWORD *)(a4 + 16);
  v127 = 0LL;
  v120 = 0;
  v12 = *(_BYTE *)(v9 + 2) == 40;
  *(_QWORD *)&v133 = 0LL;
  v119 = 0;
  v130 = 0LL;
  if ( v12 )
  {
    v13 = v9 + *(unsigned int *)(v9 + 52);
    v127 = v9;
    *(_WORD *)v13 = 1;
    *(_DWORD *)(v13 + 4) = 4;
    *(_BYTE *)(v13 + 8) = *(_BYTE *)(v10 + 96);
    *(_BYTE *)(v13 + 9) = *(_BYTE *)(v10 + 97);
    *(_BYTE *)(v13 + 10) = *(_BYTE *)(v10 + 98);
    v14 = *(_BYTE *)(v9 + 2);
    v15 = *(_QWORD *)(v9 + 80);
    v129 = *(char **)(v9 + 64);
    if ( v14 == 40 && !*(_DWORD *)(v9 + 20) )
    {
      v16 = *(_DWORD *)(v9 + 56);
      v17 = (_DWORD *)(v9 + 56);
      v18 = 0LL;
      if ( !v16 )
        goto LABEL_17;
      while ( 1 )
      {
        v19 = *(unsigned int *)(v9 + 4 * v18 + 120);
        if ( (unsigned int)v19 < 0x80 )
          goto LABEL_12;
        v20 = *(unsigned int *)(v9 + 16);
        if ( (unsigned int)v19 > (unsigned int)v20 )
          goto LABEL_12;
        v21 = v19 + v9;
        v22 = (unsigned int)v19;
        v23 = *(_DWORD *)(v19 + v9) - 64;
        if ( !v23 )
          goto LABEL_10;
        v24 = v23 - 1;
        if ( v24 )
          break;
        v25 = v22 + 56;
LABEL_11:
        if ( v25 <= v20 )
        {
          v119 = *(_BYTE *)(v21 + 9);
          goto LABEL_17;
        }
LABEL_12:
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= v16 )
          goto LABEL_17;
      }
      if ( v24 != 1 )
        goto LABEL_12;
LABEL_10:
      v25 = v22 + 40;
      goto LABEL_11;
    }
    v119 = 0;
    v17 = (_DWORD *)(v9 + 56);
    if ( v14 == 40 )
    {
LABEL_17:
      if ( (*(_BYTE *)(v9 + 24) & 0xC0) == 0xC0 )
      {
        v26 = 0LL;
        if ( *v17 )
        {
          while ( 1 )
          {
            v27 = *(unsigned int *)(v9 + 4 * v26 + 120);
            if ( (unsigned int)v27 >= 0x80 )
            {
              v28 = *(unsigned int *)(v9 + 16);
              if ( (unsigned int)v27 <= (unsigned int)v28 )
              {
                v29 = v27 + v9;
                if ( *(_DWORD *)(v27 + v9) == 1 && v27 + 24 <= v28 )
                  break;
              }
            }
            v26 = (unsigned int)(v26 + 1);
            if ( (unsigned int)v26 >= *v17 )
              goto LABEL_41;
          }
          if ( v29 )
          {
            v30 = *(_QWORD *)(v29 + 16);
            if ( v30 )
            {
              v31 = (unsigned int)*v17;
              if ( !(_DWORD)v31 )
                goto LABEL_33;
              v32 = 0;
              while ( 1 )
              {
                v33 = *(unsigned int *)(v9 + 4LL * v32 + 120);
                if ( (unsigned int)v33 >= 0x80
                  && (unsigned int)v33 < *(_DWORD *)(v9 + 16)
                  && *(_DWORD *)(v33 + v9) == 160 )
                {
                  break;
                }
                if ( ++v32 >= (unsigned int)v31 )
                  goto LABEL_33;
              }
              v5 = *(_QWORD *)(v33 + v9 + 8);
              if ( v5 )
              {
                v7 = *(_QWORD *)(v29 + 16);
                v130 = *(_QWORD *)(v33 + v9 + 8);
              }
              else
              {
LABEL_33:
                v34 = *(_DWORD *)(*(_QWORD *)(v122 + 184) + 24LL);
                if ( v34 == 315412 || v34 == 315464 )
                  v31 = *(unsigned __int8 *)(v122 + 64);
                else
                  LOBYTE(v31) = 0;
                v7 = *(_QWORD *)(v29 + 16);
                result = sub_1C0064214(&v130, *(unsigned int *)(v29 + 8), v30, v31);
                if ( (int)result < 0 )
                  return result;
                v5 = v130;
              }
            }
          }
        }
      }
    }
LABEL_41:
    v36 = v129;
    v37 = (_QWORD *)(v10 + 24);
    v8 = v122;
    v123 = (_QWORD *)(v10 + 24);
  }
  else
  {
    v37 = (_QWORD *)(a1 + 24);
    v15 = *(_QWORD *)(v9 + 48);
    v36 = *(char **)(v9 + 24);
    *(_BYTE *)(v9 + 6) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(v9 + 5) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(v9 + 7) = *(_BYTE *)(a1 + 98);
    v119 = *(_BYTE *)(v9 + 11);
    v39 = *(_QWORD *)(a1 + 24);
    v123 = (_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v39 + 442) == 1 )
    {
      v40 = *(_QWORD *)(v11 + 760);
      if ( !v40 )
      {
        *(_BYTE *)(v9 + 3) = 48;
        *(_DWORD *)(v9 + 64) = -1073741670;
        return 3221225626LL;
      }
      result = sub_1C000B120(
                 v40,
                 v9,
                 *(_DWORD *)(v11 + 744),
                 v40,
                 a3,
                 (*(_DWORD *)(*(_QWORD *)(v39 + 568) + 184LL) & 0x80) != 0);
      if ( (int)result < 0 )
      {
        *(_BYTE *)(v9 + 3) = 48;
        *(_DWORD *)(v9 + 64) = result;
        return result;
      }
      v41 = *(_QWORD *)(v11 + 760);
      *(_BYTE *)(v11 + 16) |= 0x40u;
      v8 = v122;
      *(_QWORD *)(v11 + 752) = v9;
      *(_QWORD *)&v133 = v9;
      v9 = v41;
      v127 = v41;
      v42 = *(_QWORD *)(v8 + 184);
      v120 = 1;
      v123 = v37;
      *(_QWORD *)(v42 + 8) = v41;
    }
  }
  v12 = byte_1C0093BE8 == 0;
  *(_QWORD *)(v11 + 160) = v8;
  *(_QWORD *)(v11 + 168) = v9;
  *(_QWORD *)(v11 + 224) = v10;
  *(_QWORD *)(v11 + 104) = *(_QWORD *)(v8 + 8);
  *(_QWORD *)(v11 + 136) = v5;
  if ( !v12 )
    IoGetActivityIdIrp(v8, v11 + 728);
  if ( (*(_BYTE *)(*v37 + 4596LL) & 1) != 0 )
  {
    if ( *(_BYTE *)(v9 + 2) == 40 )
      v38 = *(_DWORD *)(v127 + 96);
    else
      v38 = *(_DWORD *)(v9 + 56);
    *(_DWORD *)(v11 + 18) = v38;
  }
  else
  {
    *(_BYTE *)(v11 + 20) = -1;
    *(_WORD *)(v11 + 18) = -1;
  }
  v43 = *(_BYTE *)(v11 + 16);
  *(_DWORD *)(v11 + 24) = 0;
  *(_QWORD *)(v11 + 176) = v15;
  *(_BYTE *)(v11 + 16) = v43 & 0xE3 | 4;
  *(_QWORD *)(v11 + 184) = v36;
  *(_QWORD *)(v11 + 192) = v7;
  if ( *(_BYTE *)(v9 + 2) == 40 )
  {
    v44 = v127;
    *(_QWORD *)(v127 + 96) = v11;
    if ( (unsigned int)sub_1C00230AC() && (v45 = sub_1C0023100(*v37), (_BYTE)v45) )
    {
      LODWORD(v45) = HIDWORD(KeGetPcr()[1].LockArray);
      _InterlockedIncrement(*(volatile signed __int32 **)(8 * v45 + *(_QWORD *)(v46 + 6080)));
      v48 = v128;
      v47 = **(_QWORD **)(8 * v45 + *(_QWORD *)(v46 + 6080));
      *(_DWORD *)(v44 + 44) = HIDWORD(v47);
      *(_DWORD *)(v44 + 32) = v47;
    }
    else
    {
      v48 = v128;
      *(_DWORD *)(v44 + 32) = *(_DWORD *)v128;
    }
  }
  else
  {
    *(_QWORD *)(v9 + 48) = v11;
    if ( (unsigned int)sub_1C00230AC() && (unsigned __int8)sub_1C0023100(*v37) )
    {
      v48 = v128;
      *(_BYTE *)(v9 + 8) = -1;
    }
    else
    {
      v48 = v128;
      *(_BYTE *)(v9 + 8) = *(_BYTE *)v128;
    }
  }
  v49 = *(_QWORD *)(v48 + 8);
  if ( ((*(_DWORD *)(*v37 + 484LL) + 7) & 0xFFFFFFF8) != 0 )
  {
    if ( *(_BYTE *)(v9 + 2) == 40 )
      *(_QWORD *)(v9 + 104) = v49;
    else
      *(_QWORD *)(v9 + 56) = v49;
  }
  v50 = v122;
  v51 = 0;
  v52 = *v37;
  v126 = *v37;
  if ( !*(_QWORD *)(v122 + 8) )
    goto LABEL_93;
  v53 = *(_QWORD *)(*(_QWORD *)(v122 + 184) + 8LL);
  v54 = *(unsigned __int8 *)(v53 + 2);
  v55 = (struct _PROCESSOR_NUMBER *)(v53 + 24);
  v131 = (char **)(v53 + 24);
  if ( (_BYTE)v54 != 40 )
  {
    v58 = *(_QWORD **)(v53 + 48);
    v60 = v53;
    v71 = *(_DWORD *)(v53 + 12);
    v56 = v58;
    v59 = *(_QWORD *)&v55->Group;
    v57 = v54;
    if ( !(_BYTE)v54 )
      v51 = *(_BYTE *)(v53 + 72);
    goto LABEL_89;
  }
  v56 = *(_QWORD **)(v53 + 96);
  v57 = *(_DWORD *)(v53 + 20);
  v58 = v56;
  v59 = *(_QWORD *)(v53 + 64);
  ProcNumber = *v55;
  v60 = v53;
  v125 = v59;
  if ( v57 )
    goto LABEL_88;
  v61 = *(_DWORD *)(v53 + 56);
  v62 = 0LL;
  if ( !v61 )
    goto LABEL_88;
  while ( 1 )
  {
    v63 = *(unsigned int *)(v53 + 4 * v62 + 120);
    if ( (unsigned int)v63 < 0x80 )
      goto LABEL_86;
    v64 = *(unsigned int *)(v53 + 16);
    if ( (unsigned int)v63 > (unsigned int)v64 )
      goto LABEL_86;
    v65 = v63 + v53;
    v66 = (unsigned int)v63;
    v67 = *(_DWORD *)(v63 + v53) - 64;
    if ( v67 )
      break;
    v70 = v66 + 40;
LABEL_85:
    if ( v70 <= v64 )
    {
      if ( *(_BYTE *)(v65 + 10) )
      {
        v69 = (char *)(v65 + 24);
        goto LABEL_107;
      }
LABEL_87:
      v52 = v126;
      v55 = (struct _PROCESSOR_NUMBER *)(v53 + 24);
      LOBYTE(v54) = 40;
      v59 = v125;
      goto LABEL_88;
    }
LABEL_86:
    v62 = (unsigned int)(v62 + 1);
    if ( (unsigned int)v62 >= v61 )
      goto LABEL_87;
  }
  v68 = v67 - 1;
  if ( !v68 )
  {
    v70 = v66 + 56;
    goto LABEL_85;
  }
  if ( v68 != 1 || v66 + 40 > v64 )
    goto LABEL_86;
  if ( !*(_DWORD *)(v65 + 12) )
    goto LABEL_87;
  v69 = (char *)(v65 + 32);
LABEL_107:
  v59 = v125;
  v55 = (struct _PROCESSOR_NUMBER *)(v53 + 24);
  LOBYTE(v54) = 40;
  v52 = v126;
  if ( v69 )
    v51 = *v69;
LABEL_88:
  LOBYTE(v71) = ProcNumber.Group;
LABEL_89:
  if ( (v71 & 0xC0) == 0 )
    goto LABEL_92;
  if ( v59 )
  {
    v72 = v56 + 13;
  }
  else
  {
    v72 = v58 + 13;
    if ( !v58[13] )
      goto LABEL_92;
  }
  if ( v57 <= 0x17 && (v82 = 8389124, _bittest(&v82, v57))
    || (v83 = *(_BYTE *)(v52 + 433), v83 == 3)
    || (unsigned __int8)(v83 - 1) <= 1u && (v57 || ((v51 - 8) & 0x5D) != 0) )
  {
    v89 = *v72;
    v90 = 32;
    v91 = v58[23];
    if ( *(_BYTE *)(v122 + 64) )
      v90 = 16;
    if ( (*(_BYTE *)(v89 + 10) & 5) != 0 )
      v92 = *(char **)(v89 + 24);
    else
      v92 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v89, 0, MmCached, 0LL, 0, v90 | 0x40000000);
    if ( v92 )
    {
      if ( v91 )
        v91 = v91 - *(unsigned int *)(v89 + 44) - *(_QWORD *)(v89 + 32);
      v94 = &v92[v91];
      v93 = 0;
      v12 = *(_BYTE *)(v53 + 2) == 40;
      v129 = v94;
      if ( v12 )
        *(_QWORD *)(v60 + 64) = v94;
      else
        *v131 = v94;
      v95 = v58[17];
      if ( v95 )
      {
        v93 = sub_1C0059DA8(v95, v58[24], v90, &v129);
        if ( v93 >= 0 )
        {
          v96 = sub_1C0050448(v60);
          *(_QWORD *)(v96 + 16) = v129;
        }
      }
    }
    else
    {
      v93 = -1073741670;
    }
    if ( v93 != -1073741670 )
      goto LABEL_92;
    if ( *(_BYTE *)(v9 + 2) == 40 )
    {
      if ( !v120 )
      {
        *(_DWORD *)(v127 + 44) = -1073741670;
        goto LABEL_155;
      }
    }
    else if ( !v120 )
    {
      *(_QWORD *)(v9 + 48) = *(_QWORD *)(v11 + 176);
      goto LABEL_154;
    }
    v9 = v133;
    *(_QWORD *)(*(_QWORD *)(v122 + 184) + 8LL) = v133;
LABEL_154:
    *(_DWORD *)(v9 + 64) = -1073741670;
LABEL_155:
    v97 = *(struct _MDL **)(v11 + 136);
    if ( v97 )
    {
      MmUnlockPages(v97);
      IoFreeMdl(*(PMDL *)(v11 + 136));
      *(_QWORD *)(v11 + 136) = 0LL;
    }
    return 3221225626LL;
  }
  if ( !*(_BYTE *)(v52 + 4306) )
  {
LABEL_92:
    v10 = v124;
    v37 = v123;
    v50 = v122;
    goto LABEL_93;
  }
  if ( (_BYTE)v54 != 40 )
  {
    *(_QWORD *)&v55->Group = 0LL;
    goto LABEL_92;
  }
  v84 = 0LL;
  if ( (v55->Group & 0xC0) == 0xC0 )
  {
    v85 = *(_DWORD *)(v60 + 56);
    v86 = 0LL;
    if ( v85 )
    {
      while ( 1 )
      {
        v87 = *(unsigned int *)(v60 + 4 * v86 + 120);
        if ( (unsigned int)v87 >= 0x80 )
        {
          v88 = *(unsigned int *)(v60 + 16);
          if ( (unsigned int)v87 <= (unsigned int)v88 && *(_DWORD *)(v87 + v60) == 1 && v87 + 24 <= v88 )
            break;
        }
        v86 = (unsigned int)(v86 + 1);
        if ( (unsigned int)v86 >= v85 )
          goto LABEL_129;
      }
      v84 = v87 + v60;
    }
  }
LABEL_129:
  v10 = v124;
  v37 = v123;
  v50 = v122;
  *(_QWORD *)(v60 + 64) = 0LL;
  if ( v84 )
    *(_QWORD *)(v84 + 16) = 0LL;
LABEL_93:
  v73 = *(_BYTE *)(v10 + 1780);
  v74 = *(_QWORD *)(v11 + 168);
  if ( v119 > v73 )
    v73 = v119;
  v75 = *(_QWORD *)(v128 + 24);
  if ( *(_BYTE *)(v74 + 2) == 40 )
  {
    if ( !*(_DWORD *)(v74 + 20) )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v74 + 56); i = (unsigned int)(i + 1) )
      {
        v77 = *(unsigned int *)(v74 + 4 * i + 120);
        if ( (unsigned int)v77 < 0x80 )
          continue;
        v78 = *(unsigned int *)(v74 + 16);
        if ( (unsigned int)v77 > (unsigned int)v78 )
          continue;
        v79 = (unsigned int)v77;
        v80 = *(_DWORD *)(v77 + v74) - 64;
        if ( v80 )
        {
          v81 = v80 - 1;
          if ( v81 )
          {
            if ( v81 != 1 || v79 + 40 > v78 )
              continue;
            *(_QWORD *)(v11 + 200) = *(_QWORD *)(v79 + v74 + 24);
            *(_BYTE *)(v11 + 208) = *(_BYTE *)(v79 + v74 + 9);
            *(_QWORD *)(v79 + v74 + 24) = v75;
            goto LABEL_161;
          }
          v98 = v79 + 56;
        }
        else
        {
          v98 = v79 + 40;
        }
        if ( v98 <= v78 )
        {
          *(_QWORD *)(v11 + 200) = *(_QWORD *)(v79 + v74 + 16);
          *(_BYTE *)(v11 + 208) = *(_BYTE *)(v79 + v74 + 9);
          *(_QWORD *)(v79 + v74 + 16) = v75;
LABEL_161:
          *(_BYTE *)(v79 + v74 + 9) = v73;
          *(_BYTE *)(v11 + 16) |= 0x20u;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(v11 + 200) = *(_QWORD *)(v74 + 32);
    *(_BYTE *)(v11 + 208) = *(_BYTE *)(v74 + 11);
    *(_QWORD *)(v74 + 32) = v75;
    *(_BYTE *)(v74 + 11) = v73;
    *(_BYTE *)(v11 + 16) |= 0x20u;
  }
  v99 = *(_QWORD *)(*(_QWORD *)(v50 + 184) + 8LL);
  if ( *(_BYTE *)(v99 + 2) == 40 )
    v100 = *(_QWORD *)(v99 + 96);
  else
    v100 = *(_QWORD *)(v99 + 48);
  v101 = *(_QWORD *)(v100 + 168);
  if ( *(_BYTE *)(v101 + 2) == 40 )
    v102 = *(_DWORD *)(v101 + 40);
  else
    v102 = *(_DWORD *)(v101 + 20);
  if ( !*(_BYTE *)(v10 + 3280) && v102 <= 2 )
    v102 = 3;
  if ( *v37 && *(_QWORD *)(*v37 + 4840LL) )
  {
    v103 = (__int64 *)(v10 + 504);
    goto LABEL_177;
  }
  v103 = (__int64 *)(v10 + 504);
  if ( (**(_BYTE **)(v10 + 504) & 1) != 0 )
LABEL_177:
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  else
    UnbiasedInterruptTime = 0LL;
  *(_BYTE *)(v100 + 16) |= 2u;
  v105 = *v103;
  memset(&LockHandle, 0, sizeof(LockHandle));
  ProcNumber = 0;
  v106 = v100 + 48;
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  v107 = KeGetProcessorIndexFromNumber(&ProcNumber) % *(_DWORD *)(v105 + 8);
  *(_QWORD *)(v106 + 40) = UnbiasedInterruptTime;
  *(_DWORD *)(v106 + 36) = v107;
  v108 = v105 + ((v107 + 1LL) << 6);
  if ( v102 - 1 > 0xFFFFFFFC )
    v102 = 10;
  v109 = 2 * v102;
  *(_DWORD *)(v106 + 32) = v109;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v108 + 40), &LockHandle);
  v110 = *(_QWORD **)(v108 + 8);
  if ( *v110 != v108 )
    goto LABEL_207;
  *(_QWORD *)v106 = v108;
  *(_QWORD *)(v106 + 8) = v110;
  *v110 = v106;
  *(_QWORD *)(v108 + 8) = v106;
  if ( *(_DWORD *)(v108 + 48) >= 0xFFFFFFFE )
    *(_DWORD *)(v108 + 48) = v109;
  if ( (*(_BYTE *)v105 & 1) == 0 )
  {
    *(_DWORD *)(v106 + 48) &= ~1u;
    goto LABEL_193;
  }
  v111 = (__int64 *)(v108 + 16);
  v112 = *(_QWORD *)(v108 + 24);
  if ( v112 == v108 + 16 )
  {
LABEL_187:
    v113 = *v111;
    v114 = (_QWORD *)(v106 + 16);
    if ( *(__int64 **)(*v111 + 8) == v111 )
    {
      *v114 = v113;
      *(_QWORD *)(v106 + 24) = v111;
      *(_QWORD *)(v113 + 8) = v114;
      *v111 = (__int64)v114;
      *(_DWORD *)(v106 + 48) |= 1u;
      goto LABEL_193;
    }
LABEL_207:
    __fastfail(3u);
  }
  while ( *(_QWORD *)(v106 + 40) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v106 + 32)) < *(_QWORD *)(v112 + 24) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v112 + 16)) )
  {
    v112 = *(_QWORD *)(v112 + 8);
    if ( (__int64 *)v112 == v111 )
      goto LABEL_187;
  }
  *(_QWORD *)(v106 + 16) = *(_QWORD *)v112;
  *(_QWORD *)(*(_QWORD *)v112 + 8LL) = v106 + 16;
  *(_QWORD *)v112 = v106 + 16;
  *(_DWORD *)(v106 + 48) |= 1u;
  *(_QWORD *)(v106 + 24) = v112;
LABEL_193:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( byte_1C0093BE8 )
  {
    v133 = 0LL;
    IoGetActivityIdIrp(v50, &v133);
    if ( byte_1C0093A02 < 0 )
      sub_1C005CA3C(v116, v115, (unsigned int)&v133, v117, 3);
  }
  if ( *(char *)(v10 + 449) < 0 || *(_QWORD *)(*v123 + 4896LL) )
  {
    if ( (*(_DWORD *)(v10 + 456) & 4) != 0 )
      v118 = 1;
    else
      v118 = (unsigned __int8)_interlockedbittestandset((volatile signed __int32 *)(v10 + 456), 2u);
    if ( !*(_BYTE *)(v10 + 3308) )
    {
      if ( !v118 )
        sub_1C000B604(v10, 0LL);
      return 0LL;
    }
LABEL_199:
    LOBYTE(v115) = 1;
    sub_1C000B604(v10, v115);
    result = 0LL;
    *(_BYTE *)(v10 + 3308) = 0;
  }
  else
  {
    if ( *(_BYTE *)(v10 + 3308) )
      goto LABEL_199;
    return 0LL;
  }
  return result;
}
