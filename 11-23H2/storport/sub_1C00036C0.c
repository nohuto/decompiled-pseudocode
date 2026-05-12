/*
 * XREFs of sub_1C00036C0 @ 0x1C00036C0
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 * Callees:
 *     sub_1C006B6E0 @ 0x1C006B6E0 (sub_1C006B6E0.c)
 */

__int64 __fastcall sub_1C00036C0(_QWORD *a1, __int64 a2, char *a3, __int64 a4, char a5)
{
  int v5; // ebx
  unsigned int v6; // r13d
  int v8; // r8d
  unsigned __int8 v9; // r12
  char v10; // di
  unsigned __int8 LowPart; // cl
  _BYTE *v12; // rbp
  _DWORD *v13; // r8
  unsigned int *v14; // r9
  unsigned int v15; // r11d
  unsigned int v16; // r10d
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r8
  int v21; // ecx
  int v22; // ecx
  unsigned __int64 v23; // rcx
  unsigned int *v24; // r14
  unsigned int v25; // r11d
  _DWORD *v26; // rsi
  unsigned int v27; // ebx
  unsigned int v28; // r10d
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // r8
  int v33; // ecx
  int v34; // ecx
  _DWORD *v35; // rax
  _DWORD *v36; // r8
  _DWORD *v37; // r9
  _DWORD *v38; // rcx
  char v39; // dl
  char v40; // al
  unsigned __int64 v41; // rcx
  _DWORD *v42; // rbp
  char *v43; // rdx
  unsigned int v44; // ebx
  unsigned int v45; // r11d
  _DWORD *v46; // r14
  __int64 v47; // rcx
  unsigned __int64 v48; // r8
  __int64 v49; // r10
  __int64 v50; // r9
  int v51; // ecx
  int v52; // ecx
  int v53; // edx
  unsigned __int64 v54; // rcx
  char v55; // cl
  union _LARGE_INTEGER v56; // rcx
  bool v57; // zf
  LARGE_INTEGER v58; // rax
  LARGE_INTEGER v59; // rbx
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v61; // rbx
  unsigned __int64 v63; // rdi
  char *v64; // rsi
  unsigned __int64 v65; // r12
  char v66; // al
  char *v68; // r11
  unsigned int v69; // r10d
  __int64 v70; // rcx
  unsigned __int64 v71; // rdx
  __int64 v72; // r9
  __int64 v73; // r8
  int v74; // ecx
  int v75; // ecx
  unsigned __int64 v76; // rcx
  char v77; // cl
  __int64 v78; // r14
  unsigned __int64 v79; // kr00_8
  char v80; // r12
  ULONG v81; // r10d
  int v82; // r8d
  __int64 *v83; // rcx
  int v84; // r9d
  unsigned int v85; // eax
  __int64 v86; // rcx
  int v87; // ebp
  __int64 v88; // rax
  __int64 *v89; // rcx
  unsigned int v90; // eax
  char v91; // r11
  __int64 v92; // rdx
  volatile signed __int64 *v93; // rcx
  __int64 *v94; // rax
  int v95; // edx
  volatile signed __int64 *v96; // rdx
  __int64 v97; // rcx
  char v98; // al
  unsigned __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rax
  unsigned __int64 v102; // rax
  unsigned int v103; // [rsp+B8h] [rbp-80h]
  int v104; // [rsp+BCh] [rbp-7Ch]
  int v105; // [rsp+C0h] [rbp-78h]
  int v106; // [rsp+C4h] [rbp-74h]
  int v107; // [rsp+C8h] [rbp-70h]
  char v108; // [rsp+D0h] [rbp-68h]
  int v109; // [rsp+D8h] [rbp-60h]
  int v110; // [rsp+DCh] [rbp-5Ch]
  _DWORD *v111; // [rsp+E0h] [rbp-58h]
  _DWORD *v112; // [rsp+E8h] [rbp-50h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+148h] [rbp+10h] BYREF
  char *v115; // [rsp+150h] [rbp+18h]
  __int64 v116; // [rsp+158h] [rbp+20h]

  v116 = a4;
  v115 = a3;
  v5 = *(unsigned __int8 *)(a2 + 2);
  v6 = 0;
  LOBYTE(v109) = 0;
  v108 = 0;
  v103 = 0;
  LOBYTE(v116) = v5;
  if ( (_BYTE)v5 == 40 )
    v8 = *(_DWORD *)(a2 + 20);
  else
    v8 = v5;
  v110 = v8;
  if ( v8 || ((a5 - 8) & 0x5D) != 0 )
  {
    v104 = 0;
    if ( v8 )
      goto LABEL_10;
  }
  else
  {
    v104 = 1;
  }
  if ( ((a5 - 8) & 0x5F) != 0 )
  {
LABEL_10:
    v106 = 0;
    if ( v8 )
      goto LABEL_26;
    goto LABEL_11;
  }
  v106 = 1;
LABEL_11:
  if ( a5 == 66 )
  {
    v105 = 1;
LABEL_13:
    v107 = 0;
    goto LABEL_14;
  }
LABEL_26:
  v105 = 0;
  if ( v8 || a5 != 53 && a5 != -111 )
    goto LABEL_13;
  v107 = 1;
LABEL_14:
  v9 = 0;
  v10 = 0;
  LowPart = *(_BYTE *)(a2 + 3);
  v12 = 0LL;
  LOBYTE(PerformanceFrequency.LowPart) = LowPart;
  if ( (_BYTE)v5 != 40 )
  {
    v10 = *(_BYTE *)(a2 + 4);
    v24 = (unsigned int *)(a2 + 56);
    v25 = LowPart;
    v112 = (_DWORD *)(a2 + 56);
    v26 = (_DWORD *)(a2 + 20);
    LOBYTE(v25) = LowPart & 0x3F;
    v35 = (_DWORD *)(a2 + 20);
    v36 = (_DWORD *)(a2 + 56);
    v111 = (_DWORD *)(a2 + 20);
    if ( !(_BYTE)v5 )
    {
      v12 = *(_BYTE **)(a2 + 32);
      v9 = *(_BYTE *)(a2 + 11);
    }
    goto LABEL_45;
  }
  v13 = (_DWORD *)(a2 + 20);
  v14 = (unsigned int *)(a2 + 56);
  v111 = (_DWORD *)(a2 + 20);
  v112 = (_DWORD *)(a2 + 56);
  if ( *(_DWORD *)(a2 + 20) )
    goto LABEL_33;
  v15 = *v14;
  v16 = 0;
  if ( !*v14 )
    goto LABEL_33;
  while ( 1 )
  {
    v17 = *(unsigned int *)(a2 + 4LL * v16 + 120);
    if ( (unsigned int)v17 < 0x80 )
      goto LABEL_24;
    v18 = *(unsigned int *)(a2 + 16);
    if ( (unsigned int)v17 >= (unsigned int)v18 )
      goto LABEL_24;
    v19 = v17 + a2;
    v20 = (unsigned int)v17;
    v21 = *(_DWORD *)(v17 + a2) - 64;
    if ( !v21 )
    {
LABEL_22:
      v23 = v20 + 40;
      goto LABEL_23;
    }
    v22 = v21 - 1;
    if ( !v22 )
      break;
    if ( v22 == 1 )
      goto LABEL_22;
LABEL_24:
    if ( ++v16 >= v15 )
      goto LABEL_32;
  }
  v23 = v20 + 56;
LABEL_23:
  if ( v23 > v18 )
    goto LABEL_24;
  v10 = *(_BYTE *)(v19 + 8);
LABEL_32:
  LowPart = PerformanceFrequency.LowPart;
  v13 = (_DWORD *)(a2 + 20);
  v14 = (unsigned int *)(a2 + 56);
LABEL_33:
  v25 = LowPart;
  v24 = v14;
  LOBYTE(v25) = LowPart & 0x3F;
  v26 = v13;
  if ( *v13 )
    goto LABEL_44;
  v27 = *v14;
  v28 = 0;
  if ( !*v14 )
    goto LABEL_43;
  while ( 2 )
  {
    v29 = *(unsigned int *)(a2 + 4LL * v28 + 120);
    if ( (unsigned int)v29 < 0x80 )
      goto LABEL_53;
    v30 = *(unsigned int *)(a2 + 16);
    if ( (unsigned int)v29 >= (unsigned int)v30 )
      goto LABEL_53;
    v31 = v29 + a2;
    v32 = (unsigned int)v29;
    v33 = *(_DWORD *)(v29 + a2) - 64;
    if ( v33 )
    {
      v34 = v33 - 1;
      if ( v34 )
      {
        if ( v34 == 1 && v32 + 40 <= v30 )
        {
          v12 = *(_BYTE **)(v31 + 24);
          goto LABEL_42;
        }
        goto LABEL_53;
      }
      v41 = v32 + 56;
    }
    else
    {
      v41 = v32 + 40;
    }
    if ( v41 > v30 )
    {
LABEL_53:
      if ( ++v28 >= v27 )
        goto LABEL_43;
      continue;
    }
    break;
  }
  v12 = *(_BYTE **)(v31 + 16);
LABEL_42:
  v9 = *(_BYTE *)(v31 + 9);
LABEL_43:
  LOBYTE(v5) = v116;
LABEL_44:
  v35 = (_DWORD *)(a2 + 20);
  v36 = (_DWORD *)(a2 + 56);
LABEL_45:
  v37 = v35;
  v38 = v35;
  if ( SLOBYTE(PerformanceFrequency.QuadPart) >= 0 )
  {
    if ( v10 == 2 )
      goto LABEL_62;
    if ( (unsigned __int8)v25 > 0x12u )
      goto LABEL_62;
    v53 = 262211;
    if ( !_bittest(&v53, v25) )
      goto LABEL_62;
  }
  else
  {
    if ( v12 && v9 >= 0x12u && (unsigned __int8)((*v12 & 0x7F) - 112) <= 1u )
    {
      v39 = v12[12];
      v40 = v12[2] & 0xF;
    }
    else
    {
      v40 = 0;
      v39 = 0;
    }
    if ( (_BYTE)v25 != 1 || v40 || v39 )
    {
LABEL_62:
      LOBYTE(v116) = 1;
      goto LABEL_63;
    }
  }
  LOBYTE(v116) = 0;
LABEL_63:
  if ( v104 )
  {
    v42 = v36;
    if ( (_BYTE)v5 == 40 )
    {
      v43 = 0LL;
      v103 = *(_DWORD *)(a2 + 60);
      if ( *v26 )
      {
        v46 = v38;
        goto LABEL_91;
      }
      v44 = *v24;
      v45 = 0;
      v103 = *(_DWORD *)(a2 + 60);
      v46 = v37;
      if ( v44 )
      {
        v103 = *(_DWORD *)(a2 + 60);
        do
        {
          v47 = *(unsigned int *)(a2 + 4LL * v45 + 120);
          if ( (unsigned int)v47 < 0x80 )
            goto LABEL_83;
          v48 = *(unsigned int *)(a2 + 16);
          if ( (unsigned int)v47 >= (unsigned int)v48 )
            goto LABEL_83;
          v49 = v47 + a2;
          v50 = (unsigned int)v47;
          v51 = *(_DWORD *)(v47 + a2) - 64;
          if ( v51 )
          {
            v52 = v51 - 1;
            if ( v52 )
            {
              if ( v52 == 1 && v50 + 40 <= v48 )
              {
                if ( *(_DWORD *)(v49 + 12) )
                  v43 = (char *)(v49 + 32);
                break;
              }
              goto LABEL_83;
            }
            v54 = v50 + 56;
          }
          else
          {
            v54 = v50 + 40;
          }
          if ( v54 <= v48 )
          {
            if ( *(_BYTE *)(v49 + 10) )
              v43 = (char *)(v49 + 24);
            break;
          }
LABEL_83:
          ++v45;
        }
        while ( v45 < v44 );
      }
LABEL_91:
      if ( v43 )
      {
        v55 = *v43;
        if ( ((*v43 - 8) & 0xFD) != 0 )
        {
          if ( ((v55 - 40) & 0xFD) != 0 && ((v55 + 88) & 0xFD) != 0 )
          {
            if ( ((v55 + 120) & 0xFD) != 0 )
              v108 = -1;
            else
              v108 = v43[9];
          }
          else
          {
            v108 = v43[5];
          }
        }
        else
        {
          v108 = v43[3];
        }
      }
    }
    else
    {
      v46 = v38;
      v103 = *(_DWORD *)(a2 + 16);
      if ( !(_BYTE)v5 )
      {
        v103 = *(_DWORD *)(a2 + 16);
        if ( *(_BYTE *)(a2 + 10) )
        {
          v43 = (char *)(a2 + 72);
          v103 = *(_DWORD *)(a2 + 16);
          goto LABEL_91;
        }
      }
    }
  }
  else
  {
    v42 = v112;
    v46 = v111;
  }
  v56.QuadPart = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  if ( byte_1C0093BE8 )
  {
    v57 = byte_1C0093BA0 == 0;
    goto LABEL_103;
  }
  if ( dword_1C0093400 )
  {
    if ( !byte_1C0093BA0 )
    {
LABEL_108:
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      v56 = PerformanceFrequency;
      v59.QuadPart = UnbiasedInterruptTime;
      goto LABEL_110;
    }
    v57 = dword_1C0093404 == 0;
LABEL_103:
    if ( !v57 )
    {
      v58 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v56 = PerformanceFrequency;
      v59 = v58;
      goto LABEL_110;
    }
    goto LABEL_108;
  }
  v59.QuadPart = 0LL;
LABEL_110:
  v61 = v59.QuadPart - a1[87];
  if ( byte_1C0093BE8 )
  {
    if ( !byte_1C0093BA0 )
    {
LABEL_120:
      v63 = v61;
      goto LABEL_121;
    }
    if ( !dword_1C0093404 )
    {
      if ( !v56.QuadPart )
        return 3221225534LL;
      v61 = 10000000 * v61 / v56.QuadPart;
    }
  }
  if ( !byte_1C0093BA0 || !dword_1C0093404 )
    goto LABEL_120;
  if ( !v56.QuadPart )
    return 3221225534LL;
  v63 = 10000000 * v61 / v56.QuadPart;
LABEL_121:
  v64 = v115;
  v65 = a1[86];
  if ( v115[3280] )
  {
    v66 = *(_BYTE *)(a2 + 2);
    if ( !(v66 == 40 ? *v46 : *(unsigned __int8 *)(a2 + 2)) )
    {
      if ( v66 != 40 )
      {
        v68 = (char *)(a2 + 72);
        goto LABEL_145;
      }
      v68 = 0LL;
      if ( !*v46 )
      {
        v69 = 0;
        if ( !*v42 )
        {
LABEL_141:
          v64 = v115;
          goto LABEL_145;
        }
        while ( 1 )
        {
          v70 = *(unsigned int *)(a2 + 4LL * v69 + 120);
          if ( (unsigned int)v70 < 0x80 )
            goto LABEL_140;
          v71 = *(unsigned int *)(a2 + 16);
          if ( (unsigned int)v70 >= (unsigned int)v71 )
            goto LABEL_140;
          v72 = v70 + a2;
          v73 = (unsigned int)v70;
          v74 = *(_DWORD *)(v70 + a2) - 64;
          if ( v74 )
          {
            v75 = v74 - 1;
            if ( v75 )
            {
              if ( v75 == 1 && v73 + 40 <= v71 )
              {
                v64 = v115;
                if ( *(_DWORD *)(v72 + 12) )
                  v68 = (char *)(v72 + 32);
                break;
              }
              goto LABEL_140;
            }
            v76 = v73 + 56;
          }
          else
          {
            v76 = v73 + 40;
          }
          if ( v76 <= v71 )
          {
            v64 = v115;
            if ( *(_BYTE *)(v72 + 10) )
              v68 = (char *)(v72 + 24);
            break;
          }
LABEL_140:
          if ( ++v69 >= *v42 )
            goto LABEL_141;
        }
      }
LABEL_145:
      if ( v68 )
      {
        v77 = *v68;
        if ( (((*v68 - 8) & 0x5D) == 0 || v77 == 37 || v77 == -98 || (unsigned __int8)(v77 - 94) <= 1u)
          && v65 + v63 >= *((_QWORD *)v64 + 415) )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v64 + 270);
        }
      }
    }
  }
  if ( !v65 )
    goto LABEL_159;
  _InterlockedIncrement64((volatile signed __int64 *)v64 + 277);
  _InterlockedExchangeAdd64((volatile signed __int64 *)v64 + 278, v65);
  if ( v65 > *((_QWORD *)v64 + 279) )
    *((_QWORD *)v64 + 279) = v65;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    if ( v65 > 10000000 * (unsigned __int64)*(unsigned int *)(a2 + 40) )
      _InterlockedIncrement64((volatile signed __int64 *)v64 + 280);
    v109 = *(_DWORD *)(a2 + 48);
LABEL_159:
    if ( *(_BYTE *)(a2 + 2) == 40 )
      *(_DWORD *)(a2 + 48) = 0;
  }
  if ( v65 + v63 >= qword_1C0093438
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v64 + 572) <= 0x80
    && (byte_1C0093A06 & 4) != 0 )
  {
    v78 = *((_QWORD *)v64 + 3);
    v79 = v65;
    v80 = a5;
    v64 = v115;
    sub_1C006B6E0(
      (_DWORD)v115 + 169,
      (_DWORD)v115 + 160,
      (_DWORD)v115 + 2024,
      *(_QWORD *)(v78 + 4656),
      *(_DWORD *)(v78 + 56),
      v78 + 5000,
      v115[96],
      v115[97],
      v115[98],
      (__int64)(v115 + 2024),
      (__int64)(v115 + 160),
      (__int64)(v115 + 169),
      (__int64)(v115 + 186),
      v115[450] & 1,
      qword_1C0093438 / 0x2710uLL,
      (int)v63 / 10000,
      v79 / 0x2710,
      a5,
      v103,
      v108,
      v109);
  }
  else
  {
    v80 = a5;
  }
  v81 = KeGetCurrentProcessorNumberEx(0LL) % dword_1C0093BF0;
  if ( v104 )
  {
    v82 = 13;
    v83 = (__int64 *)*(&xmmword_1C00934E8 + 1);
    v84 = v106 ^ 1;
    v85 = 0;
    while ( v61 > *v83 )
    {
      ++v85;
      ++v83;
      if ( v85 >= 0xD )
        goto LABEL_172;
    }
    v82 = v85;
LABEL_172:
    v86 = (unsigned int)dword_1C009350C;
    v87 = v105;
    v88 = v84 + v82 * (unsigned int)(unsigned __int16)qword_1C00934E0;
  }
  else
  {
    v87 = v105;
    if ( !v105 && !v107 )
      return 3221225473LL;
    v89 = (__int64 *)xmmword_1C0093520;
    v82 = 4;
    v90 = 0;
    while ( v61 > *v89 )
    {
      ++v90;
      ++v89;
      if ( v90 >= 4 )
        goto LABEL_181;
    }
    v82 = v90;
LABEL_181:
    v84 = v105;
    v86 = *((unsigned int *)&xmmword_1C0093530 + 3);
    v88 = v105 + v82 * (unsigned int)(unsigned __int16)xmmword_1C0093510;
  }
  v91 = v116;
  v92 = *((_QWORD *)v64 + 287) + (unsigned int)dword_1C0093578 * v81 + 24 * (v88 + v86);
  v93 = (volatile signed __int64 *)v92;
  if ( (_BYTE)v116 )
    v93 = (volatile signed __int64 *)(v92 + 8);
  _InterlockedIncrement64(v93);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v92 + 16), v63);
  if ( !v104 )
    goto LABEL_203;
  if ( !v91 && (v64[451] & 0x10) != 0 )
  {
    v94 = (__int64 *)xmmword_1C0093550;
    v95 = 8;
    while ( v103 > *v94 )
    {
      ++v6;
      ++v94;
      if ( v6 >= 8 )
        goto LABEL_192;
    }
    v95 = v6;
LABEL_192:
    v96 = (volatile signed __int64 *)(*((_QWORD *)v64 + 288)
                                    + (unsigned int)dword_1C009357C * v81
                                    + 16
                                    * (*((unsigned int *)&xmmword_1C0093560 + 3)
                                     + (unsigned __int64)(v84
                                                        + (unsigned __int16)xmmword_1C0093540
                                                        * (v82 * (unsigned int)WORD1(xmmword_1C0093540) + v95))));
    _InterlockedIncrement64(v96);
    _InterlockedExchangeAdd64(v96 + 1, v63);
  }
  if ( *((_QWORD *)v64 + 292) )
  {
    v97 = *((_QWORD *)v64 + 292)
        + dword_1C0093590 * (KeGetCurrentNodeNumber() % ((unsigned int)(unsigned __int16)word_1C0093BEC + 1));
    if ( *(_QWORD *)v97 < v63 )
      *(_QWORD *)v97 = v63;
    v98 = *(_BYTE *)(a2 + 2);
    if ( v106 )
    {
      if ( v98 == 40 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v97 + 8), *(unsigned int *)(a2 + 60));
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v97 + 8), *(unsigned int *)(a2 + 16));
    }
    else if ( v98 == 40 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v97 + 16), *(unsigned int *)(a2 + 60));
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v97 + 16), *(unsigned int *)(a2 + 16));
    }
  }
  else
  {
LABEL_203:
    if ( v107 )
    {
      if ( *((_QWORD *)v64 + 296) < v63 )
        *((_QWORD *)v64 + 296) = v63;
    }
    else if ( v87 && *((_QWORD *)v64 + 297) < v63 )
    {
      *((_QWORD *)v64 + 297) = v63;
    }
  }
  if ( !v110 && ((v80 - 10) & 0x5F) == 0 )
  {
    v99 = *(_BYTE *)(a2 + 2) == 40 ? *(unsigned int *)(a2 + 60) : *(unsigned int *)(a2 + 16);
    _InterlockedExchangeAdd64((volatile signed __int64 *)v64 + 406, v99);
    v100 = a1[96];
    if ( (v100 || (v100 = a1[22]) != 0) && ((*(_DWORD *)(v100 + 16) & 8) == 0 || (v100 = *(_QWORD *)(v100 + 24)) != 0) )
    {
      v101 = *(_QWORD *)(v100 + 184);
      if ( v101 )
      {
        if ( (unsigned __int16)*(_DWORD *)(v101 + 16) )
        {
          if ( *(_BYTE *)(a2 + 2) == 40 )
            v102 = *(unsigned int *)(a2 + 60);
          else
            v102 = *(unsigned int *)(a2 + 16);
          _InterlockedExchangeAdd64((volatile signed __int64 *)v64 + 407, v102);
        }
      }
    }
  }
  return 0LL;
}
