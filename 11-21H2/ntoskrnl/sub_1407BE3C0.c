/*
 * XREFs of sub_1407BE3C0 @ 0x1407BE3C0
 * Callers:
 *     sub_1407E6840 @ 0x1407E6840 (sub_1407E6840.c)
 *     NtAllocateVirtualMemory @ 0x1407E69E0 (NtAllocateVirtualMemory.c)
 *     sub_1407FABA0 @ 0x1407FABA0 (sub_1407FABA0.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_14024DB60 @ 0x14024DB60 (sub_14024DB60.c)
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     sub_1402867DC @ 0x1402867DC (sub_1402867DC.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402EDC48 @ 0x1402EDC48 (sub_1402EDC48.c)
 *     sub_1402EE0C8 @ 0x1402EE0C8 (sub_1402EE0C8.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14030EB80 @ 0x14030EB80 (sub_14030EB80.c)
 *     sub_14030EBF4 @ 0x14030EBF4 (sub_14030EBF4.c)
 *     sub_14030EC14 @ 0x14030EC14 (sub_14030EC14.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_14032BCC0 @ 0x14032BCC0 (sub_14032BCC0.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_14032E910 @ 0x14032E910 (sub_14032E910.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_14036B354 @ 0x14036B354 (sub_14036B354.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405A8748 @ 0x1405A8748 (sub_1405A8748.c)
 *     sub_1406A377C @ 0x1406A377C (sub_1406A377C.c)
 *     sub_1406A3E60 @ 0x1406A3E60 (sub_1406A3E60.c)
 *     sub_1406F74A8 @ 0x1406F74A8 (sub_1406F74A8.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14079EA28 @ 0x14079EA28 (sub_14079EA28.c)
 *     sub_1407A4C90 @ 0x1407A4C90 (sub_1407A4C90.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_1407B9FA0 @ 0x1407B9FA0 (sub_1407B9FA0.c)
 *     sub_14096B2A0 @ 0x14096B2A0 (sub_14096B2A0.c)
 *     sub_1409E3F78 @ 0x1409E3F78 (sub_1409E3F78.c)
 */

__int64 __fastcall sub_1407BE3C0(__int64 a1, LARGE_INTEGER a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  __int64 v8; // r9
  unsigned int v9; // r13d
  ULONG_PTR v10; // rcx
  int v11; // edx
  bool v12; // zf
  int v13; // edx
  int v14; // eax
  __int16 v15; // cx
  __int64 *v16; // r10
  int v17; // eax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  ULONG_PTR v22; // rsi
  unsigned __int64 v23; // r8
  int v24; // ecx
  BOOL v25; // eax
  unsigned __int64 v26; // r10
  __int64 v27; // rax
  int v28; // ecx
  int v29; // ecx
  int v30; // edx
  int v31; // r14d
  int v33; // r8d
  int v34; // eax
  __int64 v35; // rdx
  unsigned int v36; // eax
  unsigned int v37; // ecx
  __int64 v38; // r13
  unsigned __int64 v39; // r10
  int v40; // eax
  unsigned int v41; // edx
  int v42; // r8d
  unsigned __int64 v43; // r15
  int v44; // ecx
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // r8
  __int64 v48; // rcx
  unsigned __int64 v49; // r10
  __int64 v50; // rax
  LARGE_INTEGER v51; // r10
  __int64 v52; // r8
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned int v56; // r9d
  __int16 *v57; // rax
  int v58; // r8d
  int v59; // r9d
  __int64 v60; // [rsp+20h] [rbp-E0h]
  __int64 v61; // [rsp+28h] [rbp-D8h]
  int v62; // [rsp+30h] [rbp-D0h]
  __int16 v63; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+68h] [rbp-98h] BYREF
  int v65; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v66; // [rsp+74h] [rbp-8Ch]
  LARGE_INTEGER v67; // [rsp+78h] [rbp-88h] BYREF
  int v68; // [rsp+80h] [rbp-80h] BYREF
  int v69; // [rsp+84h] [rbp-7Ch] BYREF
  int v70; // [rsp+88h] [rbp-78h] BYREF
  __int64 v71; // [rsp+90h] [rbp-70h]
  __int64 v72; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v73; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v74[3]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v75[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v76; // [rsp+D0h] [rbp-30h]
  __int64 v77; // [rsp+E0h] [rbp-20h]
  __int64 v78; // [rsp+E8h] [rbp-18h]
  __int64 v79; // [rsp+F0h] [rbp-10h]
  int v80; // [rsp+F8h] [rbp-8h]
  int v81; // [rsp+FCh] [rbp-4h]
  _OWORD v82[3]; // [rsp+100h] [rbp+0h] BYREF

  v67 = a2;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v63 = 0;
  *a3 = 0LL;
  v64 = 0LL;
  memset(v82, 0, sizeof(v82));
  if ( a2.QuadPart >= 2uLL )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2.QuadPart + 4LL) & 0x100) != 0
      && ((*(_BYTE *)(a1 + 112) & 0x10) == 0 || (*(_DWORD *)(a1 + 40) & 0x20400000) != 0x20000000) )
    {
      return 3221225485LL;
    }
    v50 = sub_14032A72C(*(_QWORD *)(a1 + 88));
    if ( v52 == v50 )
      v51.QuadPart = 0LL;
    v67 = v51;
  }
  CurrentThread = KeGetCurrentThread();
  v6 = 2;
  v7 = *(_DWORD *)(a1 + 44);
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 1LL != *(_QWORD *)(a1 + 24) )
    v6 = 0;
  v72 = (__int64)CurrentThread;
  v66 = sub_14032BCC0(v7);
  v9 = v66;
  if ( v66 != -1 )
  {
    v10 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(a1 + 96) != v10 )
    {
      sub_14030D5C0(v10, 0LL, (__int64)v82, v8);
      v6 |= 1u;
    }
    v11 = 0;
    if ( (*(_DWORD *)(a1 + 60) & 8) == 0 )
      goto LABEL_11;
    if ( (unsigned int)PsGetHostSilo() )
      v11 |= 4u;
    if ( (v11 & 1) == 0 )
LABEL_11:
      *(_DWORD *)(a1 + 120) &= ~2u;
    if ( (v11 & 4) == 0 && (*(_DWORD *)(a1 + 120) & 8) != 0 )
    {
      v31 = -1073741811;
      goto LABEL_97;
    }
    *(_DWORD *)(a1 + 120) |= v11;
    v12 = (*(_DWORD *)(a1 + 64) & 0x4000000) == 0;
    v65 = 0;
    if ( !v12 && v6 < 2 )
      goto LABEL_113;
    v13 = *(_DWORD *)(a1 + 40);
    if ( (v13 & 0x40000000) != 0 && !*(_QWORD *)(*(_QWORD *)(a1 + 88) + 2240LL) )
    {
      v31 = -1073741811;
      goto LABEL_97;
    }
    v14 = *(_DWORD *)(a1 + 112) & 0x1A;
    if ( v14 )
    {
      if ( (v14 & 2) != 0 )
      {
        v53 = 0xFFFFLL;
      }
      else if ( (v14 & 8) != 0 )
      {
        v53 = 0x1FFFFFLL;
      }
      else
      {
        v53 = -1LL;
        if ( (v14 & 0x10) != 0 )
          v53 = 0x3FFFFFFFLL;
      }
      if ( ((*(_QWORD *)(a1 + 8) + 1LL) & v53) != 0 || (v53 & *(_QWORD *)a1) != 0 )
      {
LABEL_113:
        v31 = -1073741811;
        goto LABEL_97;
      }
      if ( (v13 & 0x20400000) == 0x400000 )
      {
LABEL_18:
        if ( v6 >= 0x10 && !SeSinglePrivilegeCheck(stru_140D3CA80, *(_BYTE *)(a1 + 57)) )
        {
          v31 = -1073741727;
          goto LABEL_97;
        }
        v15 = *(_WORD *)sub_14032A72C(*(_QWORD *)(a1 + 88));
        v17 = *(_DWORD *)(a1 + 40);
        v63 = v15;
        if ( (v17 & 0x2000) != 0 )
        {
          v31 = sub_1407B8B60((_QWORD *)a1, v16, v9, (unsigned __int64 *)&v64, &v63);
          if ( v31 >= 0 )
            goto LABEL_38;
        }
        else if ( (v17 & 0x40000000) != 0 )
        {
          v31 = -1073741811;
        }
        else
        {
          if ( !*(_QWORD *)(a1 + 72) )
          {
            v18 = *(_QWORD *)a1;
            v19 = *(_QWORD *)(a1 + 8);
            v73 = *(_QWORD *)a1 >> 12;
            v64 = v18;
            v71 = v19;
            v20 = v19 >> 12;
            v21 = sub_14030E7C0(v18, 0, &v65);
            v22 = v21;
            if ( !v21 )
            {
              v31 = v65;
              if ( v65 == -1073741664 )
                v31 = -1073741800;
              goto LABEL_97;
            }
            if ( v20 > (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32)) )
            {
              v31 = -1073741800;
              goto LABEL_96;
            }
            if ( (*(_DWORD *)(v21 + 48) & 0x2200000) != 0x2200000 && *(_DWORD *)(a1 + 48) )
            {
              v31 = -1073741800;
              goto LABEL_96;
            }
            v23 = v64;
            *a3 = v64;
            v24 = *(_DWORD *)(v21 + 48);
            if ( (v24 & 0x6200000) == 0x4200000 )
            {
              v54 = v24 & 0x70;
              if ( (_BYTE)v54 == 48 )
              {
                v34 = sub_1405A8748(v54, v21, v23, v19, *(_DWORD *)(a1 + 40), v9);
LABEL_55:
                v31 = v34;
                if ( v34 < 0 )
                  goto LABEL_96;
                sub_14032E700((char *)v22);
LABEL_38:
                if ( (WORD2(xmmword_140D06900[0]) & 0x8000) != 0 )
                {
                  v56 = *(_DWORD *)(a1 + 40);
                  if ( (v56 & 0x3000) != 0 )
                  {
                    v57 = (__int16 *)sub_14032A72C(*(_QWORD *)(a1 + 88));
                    if ( (*(_BYTE *)(a1 + 64) & 1) != 0 )
                      v59 = 0x2000;
                    sub_1409E3F78(v64, *(_QWORD *)(a1 + 24), v58, v59, *v57, v63);
                  }
                  else if ( (v56 & 0x1080000) != 0 )
                  {
                    sub_14096B2A0(v64, *(_QWORD *)(a1 + 24), v56);
                  }
                }
                if ( (v6 & 1) != 0 )
                  sub_1402D0930((__int64)v82, 0LL);
                if ( (v66 & 2) != 0 )
                {
                  LODWORD(v61) = *(_DWORD *)(a1 + 44);
                  LODWORD(v60) = *(_DWORD *)(a1 + 40);
                  sub_14079EA28(*(_QWORD *)(a1 + 88), *(_BYTE *)(a1 + 57), v64, *(_QWORD *)(a1 + 32), v60, v61);
                }
                *a3 = v64;
                return (unsigned int)v31;
              }
              if ( (*(_DWORD *)(a1 + 64) & 0x10000000) == 0 )
              {
                v31 = -1073741664;
                goto LABEL_96;
              }
            }
            v25 = sub_14032E910(v21);
            v26 = v64;
            if ( !v25 )
            {
              if ( (*(_DWORD *)(v22 + 48) & 0xA00000) != 0xA00000 )
              {
                v31 = -1073741800;
                goto LABEL_96;
              }
              v55 = sub_14030EBF4(v22);
              if ( (((v55 << 12) - 1) & (v26 | (v19 + 1))) != 0 )
              {
                v31 = -1073741811;
                goto LABEL_96;
              }
            }
            v27 = *(unsigned int *)(v22 + 52);
            LODWORD(v27) = v27 & 0x7FFFFFFF;
            if ( (v27 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 34) << 31)) >= 0x7FFFFFFFDLL )
            {
              v31 = -1073741800;
              goto LABEL_96;
            }
            if ( (*(_DWORD *)(v22 + 48) & 0x70) != 0x40 )
            {
LABEL_30:
              v28 = *(_DWORD *)(a1 + 40);
              if ( (v28 & 0x1080000) != 0 )
              {
                v34 = sub_14024DB60(*(_QWORD *)(a1 + 96), v26, v19, v22, v28, *(_BYTE *)(a1 + 57));
              }
              else
              {
                if ( (v9 & 2) != 0 )
                {
                  v31 = sub_1402EDC48(*(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 96), v22, v9, v26, v19);
                  if ( v31 < 0 )
                    goto LABEL_96;
                  if ( (*(_DWORD *)(v22 + 48) & 0x100) != 0 )
                  {
                    v40 = *(_DWORD *)(a1 + 120);
                    if ( (v40 & 2) == 0 )
                    {
                      v40 &= ~1u;
                      *(_DWORD *)(a1 + 120) = v40;
                    }
                    if ( (v40 & 8) == 0 )
                      *(_DWORD *)(a1 + 120) = v40 & 0xFFFFFFFB;
                  }
                  v33 = *(_DWORD *)(a1 + 120);
                  if ( v33 )
                  {
                    if ( (*(_DWORD *)(v22 + 48) & 8) != 0 )
                    {
                      v31 = sub_1407A4C90(v22, v64, *(_QWORD *)(a1 + 24), v9, *(_BYTE *)(a1 + 57));
                      if ( v31 < 0 )
                        goto LABEL_96;
                      v33 = *(_DWORD *)(a1 + 120);
                      v6 |= 4u;
                    }
                    v74[0] = v64;
                    v74[1] = v71;
                    v31 = sub_1406F74A8(v22, v74, v33);
                    if ( v31 < 0 )
                      goto LABEL_96;
                    v6 |= 0x20u;
                  }
                  v26 = v64;
                }
                v29 = *(_DWORD *)(v22 + 48);
                v30 = *(_DWORD *)(a1 + 44);
                if ( (v29 & 0x200000) != 0 )
                {
                  if ( (v30 & 0x88) != 0 || (v29 & 0x70) == 0x40 && (v30 & 0xFFFFF9F9) != 0 )
                    goto LABEL_71;
                  if ( (v29 & 8) == 0 )
                  {
LABEL_36:
                    v31 = sub_14032C1B0(
                            v22,
                            v26,
                            *(_QWORD *)(a1 + 24),
                            *(_DWORD *)(a1 + 44),
                            *(_DWORD *)(a1 + 48),
                            *(_QWORD *)(a1 + 112),
                            *(_DWORD *)(a1 + 52),
                            *(_BYTE *)(a1 + 56),
                            (LARGE_INTEGER)v67.QuadPart,
                            &v70,
                            &v63);
                    if ( v31 >= 0 )
                    {
                      sub_14032E700((char *)v22);
                      if ( v70 )
                      {
                        v35 = *(_QWORD *)(a1 + 88);
                        v72 = v64;
                        v73 = *(_QWORD *)(a1 + 24);
                        v36 = *(_DWORD *)(a1 + 44);
                        v37 = v36 | 0x40000000;
                        v65 = 0;
                        if ( v6 < 0x20 )
                          v37 = v36;
                        sub_1407B9FA0(*(_QWORD *)(a1 + 96), v35, (unsigned __int64 *)&v72, (__int64 *)&v73, v37, &v65);
                      }
                      goto LABEL_38;
                    }
LABEL_96:
                    sub_14032E700((char *)v22);
                    goto LABEL_97;
                  }
                  if ( !sub_1402EE0C8(v22, 64LL) )
                  {
                    v31 = sub_1407A4C90(v48, v49, *(_QWORD *)(a1 + 24), v9, *(_BYTE *)(a1 + 57));
                    if ( v31 < 0 )
                      goto LABEL_96;
                    v26 = v64;
                    goto LABEL_36;
                  }
LABEL_71:
                  v31 = -1073741755;
                  goto LABEL_96;
                }
                if ( (v30 & 0x600) != 0 )
                  goto LABEL_71;
                if ( (v29 & 8) != 0 && (v6 & 4) == 0 )
                {
                  v31 = sub_1407A4C90(v22, v26, *(_QWORD *)(a1 + 24), v9, *(_BYTE *)(a1 + 57));
                  if ( v31 < 0 )
                    goto LABEL_96;
                }
                v38 = **(_QWORD **)(v22 + 72);
                v63 = *(_WORD *)sub_14030EC14(v38);
                if ( *(_QWORD *)(v38 + 64) )
                {
                  if ( *(__int64 *)(v22 + 120) >= 0 )
                  {
                    v31 = -1073741791;
                  }
                  else
                  {
                    v67.QuadPart = ((unsigned __int64)(*(_DWORD *)(v22 + 64) & 0xFFFFFF) << 16)
                                 - ((*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) << 12)
                                 + v71
                                 + 1;
                    if ( (unsigned int)sub_14036B354(v38, 0LL, 0LL) )
                    {
                      v43 = 0LL;
                      if ( (*(_DWORD *)(v22 + 48) & 0x200000) == 0 && *(_QWORD *)(v22 + 128) )
                      {
                        v43 = *(_QWORD *)(v22 + 128);
                        ObfReferenceObject((PVOID)v43);
                      }
                      sub_140281C44(v72, v22);
                      v44 = *(_DWORD *)(v38 + 56);
                      v76 = 0LL;
                      v75[0] = 0LL;
                      v75[1] = 0LL;
                      v77 = 0LL;
                      v79 = 0LL;
                      if ( v43 )
                      {
                        if ( (v44 & 0x20) != 0 )
                          v78 = v43 | 1;
                        else
                          v78 = v43 | 2;
                      }
                      else
                      {
                        v78 = v38;
                      }
                      v80 = v44;
                      v81 = 4;
                      v31 = sub_1406A377C((__int64)v75, &v67, 0);
                      if ( v43 )
                        ObfDereferenceObject((PVOID)v43);
                      sub_14030B7F0(v72, v22);
                      sub_1402867DC(v38, 0LL, 0LL);
                      if ( v31 >= 0
                        && !(unsigned int)sub_14030EB80(v22)
                        && v73 >= v47
                        && v73 <= v45
                        && v20 <= v45
                        && v20 >= v47
                        && ((*(_DWORD *)(v22 + 48) & 8) == 0
                         || (int)sub_1407A4C90(v46, v64, *(_QWORD *)(a1 + 24), v66, *(_BYTE *)(a1 + 57)) >= 0)
                        && *(__int64 *)(v22 + 120) < 0 )
                      {
                        v31 = sub_14032D1C0(
                                *(_QWORD *)(a1 + 88),
                                v22,
                                v64,
                                v71,
                                *(_DWORD *)(a1 + 44),
                                0,
                                &v69,
                                (__int64)&v68);
                      }
                    }
                    else
                    {
                      v31 = -1073741670;
                    }
                  }
                  goto LABEL_96;
                }
                v34 = sub_1406A3E60(
                        *(_QWORD *)(a1 + 88),
                        v22,
                        v39,
                        v71,
                        *(_DWORD *)(a1 + 44),
                        v61,
                        v62,
                        &v69,
                        (__int64)&v68);
              }
              goto LABEL_55;
            }
            v41 = *(_DWORD *)(a1 + 44) & 0xFFFFF9FF;
            *(_DWORD *)(a1 + 44) = v41;
            v42 = *(_DWORD *)(v22 + 48) & 0xC00;
            if ( (*(_DWORD *)(v22 + 48) & 0x380) != 0 && v42 == 3072 )
            {
              v41 |= 0x400u;
            }
            else
            {
              if ( v42 != 1024 )
                goto LABEL_70;
              v41 |= 0x200u;
            }
            *(_DWORD *)(a1 + 44) = v41;
LABEL_70:
            v66 = sub_14032BCC0(v41);
            v9 = v66;
            if ( v66 == -1 )
              goto LABEL_71;
            goto LABEL_30;
          }
          v31 = -1073741811;
        }
LABEL_97:
        if ( (WORD2(xmmword_140D06900[0]) & 0x8000) != 0
          && (*(_DWORD *)(a1 + 40) & 0x1000000) != 0
          && v31 == -1073740748 )
        {
          sub_14096B2A0(v64, *(_QWORD *)(a1 + 24), 0LL);
        }
        if ( (v6 & 1) != 0 )
          sub_1402D0930((__int64)v82, 0LL);
        return (unsigned int)v31;
      }
    }
    else if ( (v13 & 0x20400000) != 0x20000000 )
    {
      goto LABEL_18;
    }
    v6 |= 0x10u;
    goto LABEL_18;
  }
  return 3221225541LL;
}
