/*
 * XREFs of StorpTelemetryCollectPerfData @ 0x1C00086D0
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 * Callees:
 *     McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer @ 0x1C0018000 (McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer.c)
 */

__int64 __fastcall StorpTelemetryCollectPerfData(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  int v5; // r14d
  unsigned int v6; // r12d
  int v9; // r8d
  char v10; // bl
  unsigned __int8 v11; // bp
  char v12; // si
  _BYTE *v13; // rdi
  int v14; // ebx
  unsigned int v15; // r11d
  unsigned int v16; // r9d
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v20; // r8
  int v21; // ecx
  int v22; // ecx
  unsigned __int64 v23; // rcx
  unsigned int v24; // r11d
  unsigned int v25; // ebx
  unsigned int v26; // r10d
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // r8
  int v31; // ecx
  int v32; // ecx
  char v33; // al
  unsigned __int64 v34; // rcx
  char *v35; // rdx
  unsigned int v36; // ebx
  unsigned int v37; // r11d
  __int64 v38; // rcx
  unsigned __int64 v39; // r8
  __int64 v40; // r10
  __int64 v41; // r9
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  unsigned __int64 v45; // rcx
  char v46; // cl
  union _LARGE_INTEGER v47; // rcx
  bool v48; // zf
  LARGE_INTEGER v49; // rax
  LARGE_INTEGER v50; // rbx
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v52; // rbx
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // rbp
  char v56; // al
  char *v58; // r11
  unsigned int v59; // esi
  unsigned int v60; // r10d
  __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  __int64 v63; // r9
  __int64 v64; // r8
  int v65; // ecx
  int v66; // ecx
  unsigned __int64 v67; // rcx
  char v68; // cl
  ULONG v69; // r10d
  int v70; // r8d
  __int64 *v71; // rcx
  int v72; // r9d
  unsigned int v73; // eax
  __int64 v74; // rcx
  int v75; // esi
  int v76; // r14d
  __int64 v77; // rax
  __int64 *v78; // rcx
  unsigned int v79; // eax
  __int64 v80; // rdx
  volatile signed __int64 *v81; // rcx
  __int64 *v82; // rax
  int v83; // edx
  volatile signed __int64 *v84; // rdx
  __int64 v85; // rcx
  char v86; // al
  unsigned __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v92; // [rsp+B0h] [rbp-68h]
  unsigned int v93; // [rsp+B8h] [rbp-60h]
  int v94; // [rsp+BCh] [rbp-5Ch]
  int v95; // [rsp+C0h] [rbp-58h]
  int v96; // [rsp+C4h] [rbp-54h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+C8h] [rbp-50h] BYREF
  unsigned __int64 v98; // [rsp+D0h] [rbp-48h]
  int v99; // [rsp+D8h] [rbp-40h]
  int v100; // [rsp+DCh] [rbp-3Ch]
  int v102; // [rsp+128h] [rbp+10h]
  unsigned __int8 v103; // [rsp+138h] [rbp+20h]
  char v104; // [rsp+138h] [rbp+20h]

  v5 = *(unsigned __int8 *)(a2 + 2);
  v6 = 0;
  v99 = 0;
  v98 = 0LL;
  HIDWORD(v91) = 0;
  v93 = 0;
  if ( (_BYTE)v5 == 40 )
    v9 = *(_DWORD *)(a2 + 20);
  else
    v9 = v5;
  v100 = v9;
  if ( v9 || ((a5 - 8) & 0x5D) != 0 )
  {
    v94 = 0;
    if ( v9 )
      goto LABEL_10;
  }
  else
  {
    v94 = 1;
  }
  if ( ((a5 - 8) & 0x5F) != 0 )
  {
LABEL_10:
    v96 = 0;
    if ( v9 )
      goto LABEL_26;
    goto LABEL_11;
  }
  v96 = 1;
LABEL_11:
  if ( a5 == 66 )
  {
    v95 = 1;
    goto LABEL_13;
  }
LABEL_26:
  v95 = 0;
  if ( !v9 && (a5 == 53 || a5 == -111) )
  {
    v102 = 1;
    goto LABEL_14;
  }
LABEL_13:
  v102 = 0;
LABEL_14:
  v10 = 0;
  v103 = *(_BYTE *)(a2 + 3);
  v11 = 0;
  v12 = 0;
  v13 = 0LL;
  if ( (_BYTE)v5 != 40 )
  {
    v24 = v103;
    v12 = *(_BYTE *)(a2 + 4);
    LOBYTE(v24) = v103 & 0x3F;
    if ( !(_BYTE)v5 )
    {
      v13 = *(_BYTE **)(a2 + 32);
      v11 = *(_BYTE *)(a2 + 11);
    }
    goto LABEL_43;
  }
  v14 = *(_DWORD *)(a2 + 20);
  if ( !v14 )
  {
    v15 = *(_DWORD *)(a2 + 56);
    v16 = 0;
    if ( v15 )
    {
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
          goto LABEL_22;
        v22 = v21 - 1;
        if ( v22 )
          break;
        v23 = v20 + 56;
LABEL_23:
        if ( v23 <= v18 )
        {
          v12 = *(_BYTE *)(v19 + 8);
          goto LABEL_32;
        }
LABEL_24:
        if ( ++v16 >= v15 )
          goto LABEL_32;
      }
      if ( v22 != 1 )
        goto LABEL_24;
LABEL_22:
      v23 = v20 + 40;
      goto LABEL_23;
    }
  }
LABEL_32:
  v24 = v103;
  LOBYTE(v24) = v103 & 0x3F;
  if ( v14 )
    goto LABEL_42;
  v25 = *(_DWORD *)(a2 + 56);
  v26 = 0;
  if ( !v25 )
    goto LABEL_42;
  while ( 1 )
  {
    v27 = *(unsigned int *)(a2 + 4LL * v26 + 120);
    if ( (unsigned int)v27 < 0x80 )
      goto LABEL_51;
    v28 = *(unsigned int *)(a2 + 16);
    if ( (unsigned int)v27 >= (unsigned int)v28 )
      goto LABEL_51;
    v29 = v27 + a2;
    v30 = (unsigned int)v27;
    v31 = *(_DWORD *)(v27 + a2) - 64;
    if ( !v31 )
      break;
    v32 = v31 - 1;
    if ( !v32 )
    {
      v34 = v30 + 56;
      goto LABEL_50;
    }
    if ( v32 == 1 && v30 + 40 <= v28 )
    {
      v13 = *(_BYTE **)(v29 + 24);
      goto LABEL_41;
    }
LABEL_51:
    if ( ++v26 >= v25 )
      goto LABEL_42;
  }
  v34 = v30 + 40;
LABEL_50:
  if ( v34 > v28 )
    goto LABEL_51;
  v13 = *(_BYTE **)(v29 + 16);
LABEL_41:
  v11 = *(_BYTE *)(v29 + 9);
LABEL_42:
  v10 = 0;
LABEL_43:
  if ( (v103 & 0x80u) == 0 )
  {
    if ( v12 == 2 )
      goto LABEL_60;
    if ( (unsigned __int8)v24 > 0x12u )
      goto LABEL_60;
    v44 = 262211;
    if ( !_bittest(&v44, v24) )
      goto LABEL_60;
  }
  else
  {
    if ( v13 && v11 >= 8u && (unsigned __int8)((*v13 & 0x7F) - 112) <= 1u )
    {
      v33 = v13[12];
      v10 = v13[2] & 0xF;
    }
    else
    {
      v33 = 0;
    }
    if ( (_BYTE)v24 != 1 || v10 || v33 )
    {
LABEL_60:
      v104 = 1;
      goto LABEL_61;
    }
  }
  v104 = 0;
LABEL_61:
  if ( !v94 )
    goto LABEL_97;
  if ( (_BYTE)v5 == 40 )
  {
    v35 = 0LL;
    v93 = *(_DWORD *)(a2 + 60);
    if ( *(_DWORD *)(a2 + 20) )
      goto LABEL_88;
    v36 = *(_DWORD *)(a2 + 56);
    v37 = 0;
    if ( !v36 )
      goto LABEL_88;
    while ( 2 )
    {
      v38 = *(unsigned int *)(a2 + 4LL * v37 + 120);
      if ( (unsigned int)v38 >= 0x80 )
      {
        v39 = *(unsigned int *)(a2 + 16);
        if ( (unsigned int)v38 < (unsigned int)v39 )
        {
          v40 = v38 + a2;
          v41 = (unsigned int)v38;
          v42 = *(_DWORD *)(v38 + a2) - 64;
          if ( v42 )
          {
            v43 = v42 - 1;
            if ( v43 )
            {
              if ( v43 == 1 && v41 + 40 <= v39 )
              {
                v35 = (char *)(v40 + 32);
                if ( !*(_DWORD *)(v40 + 12) )
                  v35 = 0LL;
                goto LABEL_88;
              }
              goto LABEL_81;
            }
            v45 = v41 + 56;
          }
          else
          {
            v45 = v41 + 40;
          }
          if ( v45 <= v39 )
          {
            if ( *(_BYTE *)(v40 + 10) )
              v35 = (char *)(v40 + 24);
LABEL_88:
            if ( v35 )
            {
              v46 = *v35;
              if ( ((*v35 - 8) & 0xFD) != 0 )
              {
                if ( ((v46 - 40) & 0xFD) != 0 && ((v46 + 88) & 0xFD) != 0 )
                {
                  if ( ((v46 + 120) & 0xFD) != 0 )
                  {
                    v98 = -1LL;
                  }
                  else
                  {
                    HIBYTE(v92) = v35[2];
                    BYTE6(v92) = v35[3];
                    BYTE5(v92) = v35[4];
                    BYTE4(v92) = v35[5];
                    BYTE3(v92) = v35[6];
                    BYTE2(v92) = v35[7];
                    BYTE1(v92) = v35[8];
                    LOBYTE(v92) = v35[9];
                    v98 = v92;
                  }
                }
                else
                {
                  BYTE3(v91) = v35[2];
                  BYTE2(v91) = v35[3];
                  BYTE1(v91) = v35[4];
                  LOBYTE(v91) = v35[5];
                  v98 = v91;
                }
              }
              else
              {
                v98 = (unsigned __int8)v35[3] | (((unsigned __int8)v35[2] | ((unsigned __int64)(v35[1] & 0x1F) << 8)) << 8);
              }
            }
            goto LABEL_97;
          }
        }
      }
LABEL_81:
      if ( ++v37 >= v36 )
        goto LABEL_88;
      continue;
    }
  }
  v93 = *(_DWORD *)(a2 + 16);
  if ( !(_BYTE)v5 && *(_BYTE *)(a2 + 10) )
  {
    v35 = (char *)(a2 + 72);
    goto LABEL_88;
  }
LABEL_97:
  v47.QuadPart = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    v48 = UseQPCTime == 0;
    goto LABEL_99;
  }
  if ( g_StorpTraceLoggingPerformanceEnabled )
  {
    if ( !UseQPCTime )
      goto LABEL_104;
    v48 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_99:
    if ( v48 )
    {
LABEL_104:
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      v47 = PerformanceFrequency;
      v50.QuadPart = UnbiasedInterruptTime;
    }
    else
    {
      v49 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v47 = PerformanceFrequency;
      v50 = v49;
    }
  }
  else
  {
    v50.QuadPart = 0LL;
  }
  v52 = v50.QuadPart - a1[87];
  if ( !StorEtwLoggingEnabled )
    goto LABEL_111;
  if ( !UseQPCTime )
    goto LABEL_116;
  if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
  {
    if ( v47.QuadPart )
    {
      v52 = 10000000 * v52 / v47.QuadPart;
      goto LABEL_111;
    }
    return 3221225534LL;
  }
LABEL_111:
  if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
  {
    if ( !v47.QuadPart )
      return 3221225534LL;
    v54 = 10000000 * v52 / v47.QuadPart;
  }
  else
  {
LABEL_116:
    v54 = v52;
  }
  v55 = a1[86];
  if ( *(_BYTE *)(a3 + 3232) )
  {
    v56 = *(_BYTE *)(a2 + 2);
    if ( !(v56 == 40 ? *(_DWORD *)(a2 + 20) : *(unsigned __int8 *)(a2 + 2)) )
    {
      if ( v56 != 40 )
      {
        v58 = (char *)(a2 + 72);
        goto LABEL_142;
      }
      v58 = 0LL;
      if ( !*(_DWORD *)(a2 + 20) )
      {
        v59 = *(_DWORD *)(a2 + 56);
        v60 = 0;
        if ( v59 )
        {
          while ( 2 )
          {
            v61 = *(unsigned int *)(a2 + 4LL * v60 + 120);
            if ( (unsigned int)v61 >= 0x80 )
            {
              v62 = *(unsigned int *)(a2 + 16);
              if ( (unsigned int)v61 < (unsigned int)v62 )
              {
                v63 = v61 + a2;
                v64 = (unsigned int)v61;
                v65 = *(_DWORD *)(v61 + a2) - 64;
                if ( v65 )
                {
                  v66 = v65 - 1;
                  if ( v66 )
                  {
                    if ( v66 == 1 && v64 + 40 <= v62 )
                    {
                      v58 = (char *)(v63 + 32);
                      if ( !*(_DWORD *)(v63 + 12) )
                        v58 = 0LL;
                      break;
                    }
                    goto LABEL_137;
                  }
                  v67 = v64 + 56;
                }
                else
                {
                  v67 = v64 + 40;
                }
                if ( v67 <= v62 )
                {
                  if ( *(_BYTE *)(v63 + 10) )
                    v58 = (char *)(v63 + 24);
                  break;
                }
              }
            }
LABEL_137:
            if ( ++v60 >= v59 )
              break;
            continue;
          }
        }
      }
LABEL_142:
      if ( v58 )
      {
        v68 = *v58;
        if ( (((*v58 - 8) & 0x5D) == 0 || v68 == 37 || v68 == -98 || (unsigned __int8)(v68 - 94) <= 1u)
          && v54 + v55 >= *(_QWORD *)(a3 + 3272) )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(a3 + 2112));
        }
      }
    }
  }
  if ( v55 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a3 + 2168));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 2176), v55);
    if ( v55 > *(_QWORD *)(a3 + 2184) )
      *(_QWORD *)(a3 + 2184) = v55;
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      if ( v55 > 10000000 * (unsigned __int64)*(unsigned int *)(a2 + 40) )
        _InterlockedIncrement64((volatile signed __int64 *)(a3 + 2192));
      v99 = *(_DWORD *)(a2 + 48);
      goto LABEL_156;
    }
  }
  else
  {
LABEL_156:
    if ( *(_BYTE *)(a2 + 2) == 40 )
      *(_DWORD *)(a2 + 48) = 0;
  }
  if ( v54 + v55 >= HighLatencyIoThreshold
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a3 + 2240)) <= 0x80
    && (byte_1C00799E6 & 2) != 0 )
  {
    McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer(
      a3 + 169,
      a3 + 160,
      a3 + 1976,
      *(_QWORD *)(*(_QWORD *)(a3 + 24) + 4592LL),
      *(_DWORD *)(*(_QWORD *)(a3 + 24) + 56LL),
      *(_QWORD *)(a3 + 24) + 4936LL,
      *(_BYTE *)(a3 + 96),
      *(_BYTE *)(a3 + 97),
      *(_BYTE *)(a3 + 98),
      a3 + 1976,
      a3 + 160,
      a3 + 169,
      a3 + 186,
      *(_BYTE *)(a3 + 450) & 1,
      HighLatencyIoThreshold / 0x2710uLL,
      (__int64)v54 / 10000,
      v55 / 0x2710,
      a5,
      v93,
      v98,
      v99);
  }
  v69 = KeGetCurrentProcessorNumberEx(0LL) % g_RaidNumberProcessors;
  if ( v94 )
  {
    v70 = 11;
    v71 = (__int64 *)*(&P + 1);
    v72 = v96 ^ 1;
    v73 = 0;
    while ( v52 > *v71 )
    {
      ++v73;
      ++v71;
      if ( v73 >= 0xB )
        goto LABEL_168;
    }
    v70 = v73;
LABEL_168:
    v74 = (unsigned int)dword_1C007976C;
    v75 = v95;
    v76 = v102;
    v77 = v72 + v70 * (unsigned int)(unsigned __int16)TelemetryPerfContext;
  }
  else
  {
    v75 = v95;
    v76 = v102;
    if ( !v95 && !v102 )
      return 3221225473LL;
    v78 = (__int64 *)xmmword_1C0079780;
    v70 = 4;
    v79 = 0;
    while ( v52 > *v78 )
    {
      ++v79;
      ++v78;
      if ( v79 >= 4 )
        goto LABEL_177;
    }
    v70 = v79;
LABEL_177:
    v72 = v95;
    v74 = *((unsigned int *)&xmmword_1C0079790 + 3);
    v77 = v95 + v70 * (unsigned int)(unsigned __int16)xmmword_1C0079770;
  }
  v80 = *(_QWORD *)(a3 + 2248) + v69 * (unsigned int)dword_1C00797D8 + 24 * (v77 + v74);
  v81 = (volatile signed __int64 *)v80;
  if ( v104 )
    v81 = (volatile signed __int64 *)(v80 + 8);
  _InterlockedIncrement64(v81);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v80 + 16), v54);
  if ( !v94 )
    goto LABEL_199;
  if ( !v104 && (*(_BYTE *)(a3 + 451) & 0x10) != 0 )
  {
    v82 = (__int64 *)xmmword_1C00797B0;
    v83 = 8;
    while ( v93 > *v82 )
    {
      ++v6;
      ++v82;
      if ( v6 >= 8 )
        goto LABEL_188;
    }
    v83 = v6;
LABEL_188:
    v84 = (volatile signed __int64 *)(*(_QWORD *)(a3 + 2256)
                                    + v69 * (unsigned int)dword_1C00797DC
                                    + 16
                                    * (*((unsigned int *)&xmmword_1C00797C0 + 3)
                                     + (unsigned __int64)(v72
                                                        + (unsigned __int16)xmmword_1C00797A0
                                                        * (v70 * (unsigned int)WORD1(xmmword_1C00797A0) + v83))));
    _InterlockedIncrement64(v84);
    _InterlockedExchangeAdd64(v84 + 1, v54);
  }
  if ( *(_QWORD *)(a3 + 2288) )
  {
    v85 = *(_QWORD *)(a3 + 2288)
        + dword_1C00797F0
        * (KeGetCurrentNodeNumber() % ((unsigned int)(unsigned __int16)g_RaidNumaHighestNodeNumber + 1));
    if ( *(_QWORD *)v85 < v54 )
      *(_QWORD *)v85 = v54;
    v86 = *(_BYTE *)(a2 + 2);
    if ( v96 )
    {
      if ( v86 == 40 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v85 + 8), *(unsigned int *)(a2 + 60));
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v85 + 8), *(unsigned int *)(a2 + 16));
    }
    else if ( v86 == 40 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v85 + 16), *(unsigned int *)(a2 + 60));
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v85 + 16), *(unsigned int *)(a2 + 16));
    }
  }
  else
  {
LABEL_199:
    if ( v76 )
    {
      if ( *(_QWORD *)(a3 + 2320) < v54 )
        *(_QWORD *)(a3 + 2320) = v54;
    }
    else if ( v75 && *(_QWORD *)(a3 + 2328) < v54 )
    {
      *(_QWORD *)(a3 + 2328) = v54;
    }
  }
  if ( !v100 && ((a5 - 10) & 0x5F) == 0 )
  {
    v87 = *(_BYTE *)(a2 + 2) == 40 ? *(unsigned int *)(a2 + 60) : *(unsigned int *)(a2 + 16);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 3200), v87);
    v88 = a1[96];
    if ( (v88 || (v88 = a1[22]) != 0) && ((*(_DWORD *)(v88 + 16) & 8) == 0 || (v88 = *(_QWORD *)(v88 + 24)) != 0) )
    {
      v89 = *(_QWORD *)(v88 + 184);
      if ( v89 )
      {
        if ( (unsigned __int16)*(_DWORD *)(v89 + 16) )
        {
          if ( *(_BYTE *)(a2 + 2) == 40 )
            v90 = *(unsigned int *)(a2 + 60);
          else
            v90 = *(unsigned int *)(a2 + 16);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 3208), v90);
        }
      }
    }
  }
  return 0LL;
}
