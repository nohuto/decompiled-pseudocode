/*
 * XREFs of PpmPerfSelectProcessorState @ 0x14021FD60
 * Callers:
 *     PpmPerfSelectProcessorStates @ 0x14021FCD0 (PpmPerfSelectProcessorStates.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1403031F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

int __fastcall PpmPerfSelectProcessorState(__int64 *a1)
{
  __int64 v1; // r14
  int v2; // r10d
  unsigned __int8 v3; // r8
  __int64 v5; // r13
  __int64 v6; // r9
  __int64 *v7; // rsi
  char v8; // al
  bool v9; // al
  int v10; // edx
  _BOOL8 v11; // rdi
  unsigned int v12; // ecx
  char v13; // r8
  char v14; // r11
  unsigned int v15; // r15d
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // r12d
  unsigned __int8 v19; // r10
  unsigned int v20; // r11d
  unsigned int v21; // edi
  unsigned int v22; // edx
  unsigned int v23; // r8d
  int v24; // r10d
  int v25; // r15d
  unsigned int v26; // eax
  bool v27; // cf
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  const GUID *ActivityId; // r9
  const EVENT_DESCRIPTOR *v32; // r11
  int *v33; // rax
  REGHANDLE v34; // r10
  unsigned __int64 Keyword; // r8
  unsigned __int8 v36; // cl
  unsigned int v37; // ecx
  unsigned int v38; // eax
  char v39; // r8
  unsigned int v40; // r10d
  bool v41; // cc
  char v42; // al
  char v43; // al
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v47; // [rsp+50h] [rbp-79h]
  char v48; // [rsp+54h] [rbp-75h]
  char v49; // [rsp+55h] [rbp-74h]
  int v50; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v51; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v52; // [rsp+68h] [rbp-61h]
  unsigned int v53; // [rsp+70h] [rbp-59h] BYREF
  unsigned int v54; // [rsp+78h] [rbp-51h] BYREF
  unsigned int v55; // [rsp+80h] [rbp-49h] BYREF
  _BOOL8 v56; // [rsp+88h] [rbp-41h]
  __int64 v57; // [rsp+90h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-29h] BYREF
  unsigned int *v59; // [rsp+B0h] [rbp-19h]
  __int64 v60; // [rsp+B8h] [rbp-11h]
  unsigned int *v61; // [rsp+C0h] [rbp-9h]
  __int64 v62; // [rsp+C8h] [rbp-1h]
  unsigned int *v63; // [rsp+D0h] [rbp+7h]
  __int64 v64; // [rsp+D8h] [rbp+Fh]
  unsigned int *v65; // [rsp+E0h] [rbp+17h]
  __int64 v66; // [rsp+E8h] [rbp+1Fh]

  v1 = a1[1];
  v2 = 0;
  v3 = PpmMfBufferingThreshold;
  v5 = *a1;
  v6 = a1[2];
  v57 = *(_QWORD *)(v1 + 8);
  v47 = 0;
  v52 = 0;
  v50 = 1;
  if ( (unsigned int)PpmMfBufferingThreshold > 0x64 )
    v3 = 100;
  v7 = &PpmCurrentProfile[534 * dword_140C232CC + 5];
  if ( v6 && PpmCurrentProfile == (__int64 *)PpmLowPowerProfile && byte_140C2330C && *(_BYTE *)(v6 + 233) < v3 )
  {
    v2 = 4096;
    v7 = (__int64 *)((char *)&unk_140C1D088 + 4272 * dword_140C232CC);
    v47 = 4096;
  }
  if ( (unsigned __int8)PpmHeteroNominalPerformanceClasses > 1u )
  {
    if ( *a1 )
    {
      v8 = *(_BYTE *)(*a1 + 301);
      goto LABEL_8;
    }
  }
  else if ( *((_BYTE *)a1 + 64) )
  {
    v8 = *((_BYTE *)a1 + 88);
LABEL_8:
    v9 = v8 != 0;
    goto LABEL_9;
  }
  v9 = 0;
LABEL_9:
  v10 = *((_DWORD *)v7 + 14);
  v11 = v9;
  v56 = v9;
  v12 = *((unsigned __int8 *)v7 + v9 + 38);
  v13 = *((_BYTE *)v7 + v9 + 34);
  v14 = *((_BYTE *)v7 + v9 + 121);
  v55 = *((unsigned __int8 *)v7 + v9 + 30);
  v54 = *((unsigned __int8 *)v7 + v9 + 32);
  v49 = *((_BYTE *)v7 + v9 + 36);
  v48 = v13;
  v53 = *((unsigned __int8 *)v7 + v9 + 40);
  v51 = v12;
  v15 = (v12 + v53) >> 1;
  if ( !v6 )
    goto LABEL_12;
  v16 = *((_DWORD *)v7 + v9 + 23);
  v17 = *((_DWORD *)v7 + v11 + 21);
  if ( v16 == v17 )
  {
    *(_BYTE *)(v1 + 60) = 0;
    goto LABEL_12;
  }
  v39 = *(_BYTE *)(v1 + 60);
  v40 = *(_DWORD *)(v6 + 240);
  if ( !v39 )
  {
    v27 = v40 < v16;
    v2 = v47;
    if ( v27 )
    {
      *(_BYTE *)(v1 + 61) = 0;
    }
    else
    {
      ++*(_BYTE *)(v1 + 61);
      v2 = v47 | 0x100000;
      v47 |= 0x100000u;
      if ( *(_BYTE *)(v1 + 61) >= *((_BYTE *)v7 + v11 + 102) )
      {
        *(_WORD *)(v1 + 60) = 1;
        v39 = 1;
      }
    }
    goto LABEL_80;
  }
  v41 = v40 <= v17;
  v2 = v47;
  if ( v41 )
  {
    ++*(_BYTE *)(v1 + 61);
    v2 = v47 | 0x80000;
    v47 |= 0x80000u;
    if ( *(_BYTE *)(v1 + 61) >= *((_BYTE *)v7 + v11 + 100) )
    {
      *(_WORD *)(v1 + 60) = 0;
      v39 = 0;
    }
LABEL_80:
    if ( !v39 )
      goto LABEL_84;
    goto LABEL_83;
  }
  *(_BYTE *)(v1 + 61) = 0;
LABEL_83:
  v2 |= 0x200000u;
  v47 = v2;
LABEL_84:
  v13 = v48;
LABEL_12:
  if ( ((v10 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned int)(v10 - 5) <= 1 || PpmPerfBoostAtGuaranteed )
      v18 = *(_DWORD *)(v1 + 24);
    else
      v18 = 100;
  }
  else
  {
    v18 = *(_DWORD *)(v5 + 444);
  }
  if ( !*(_BYTE *)(v5 + 505) )
  {
    v21 = v18;
    v25 = v2 | 0x40000;
    v24 = v50;
    goto LABEL_40;
  }
  if ( *((_BYTE *)a1 + 64) && *((_BYTE *)a1 + 92) && v14 )
  {
    v21 = v18;
    v25 = v2 | 1;
    v24 = 1;
    if ( v14 == 1 )
      v21 = 1;
    goto LABEL_40;
  }
  v19 = PpmPerfIdealAggressiveIncreaseThreshold;
  if ( (unsigned __int8)PpmPerfIdealAggressiveIncreaseThreshold > 0x64u )
    v19 = 100;
  if ( !(_BYTE)v15 )
  {
    v42 = v49;
    if ( !v49 )
      v42 = 2;
    v49 = v42;
    v43 = v13;
    if ( !v13 )
      v43 = 2;
    v48 = v43;
  }
  v20 = *((_DWORD *)a1 + 10);
  v21 = *(_DWORD *)(v1 + 56);
  if ( PpmPerfCalculateActualUtilization )
  {
    v52 = v20 / *((unsigned __int16 *)a1 + 29);
    v22 = v52;
    if ( PpmPerfCalculateActualUtilization == 2 )
      v21 = *(_DWORD *)(v1 + 72);
  }
  else
  {
    v22 = v20 / v21;
    v52 = v20 / v21;
  }
  v23 = v21;
  if ( v22 > v53 )
  {
    if ( v21 < v18 )
    {
      switch ( v49 )
      {
        case 2:
          v21 = v18;
          v25 = v47 | 0x40;
          break;
        case 0:
          v38 = v20 / (unsigned __int8)v15;
          v25 = v47 | 0x10;
          v21 = v38;
          if ( v38 >= v18 )
            v21 = v18;
          goto LABEL_33;
        case 1:
          v21 += PpmPerfSingleStepSize;
          v25 = v47 | 0x20;
          break;
        case 3:
          if ( v22 < v19 )
            v44 = v20 / (unsigned __int8)v15;
          else
            v44 = v20 / v51;
          v21 = v44;
          v25 = v47 | 0x80;
          break;
        default:
          v25 = v47;
          break;
      }
      if ( v21 >= v18 )
        v21 = v18;
LABEL_33:
      v24 = v50;
      goto LABEL_34;
    }
LABEL_32:
    v25 = v47;
    goto LABEL_33;
  }
  if ( v22 >= v51 || v21 <= 1 )
    goto LABEL_32;
  v24 = 3;
  if ( v48 == 1 )
  {
    v25 = v47 | 0x200;
    if ( v21 > PpmPerfSingleStepSize )
    {
      v21 -= PpmPerfSingleStepSize;
      goto LABEL_34;
    }
LABEL_107:
    v21 = 1;
    v25 |= 0x400u;
    goto LABEL_34;
  }
  if ( !v48 )
  {
    v37 = (unsigned __int8)v15;
    v25 = v47 | 0x100;
    v21 = v20 / v37;
    goto LABEL_34;
  }
  v25 = v47;
  if ( v48 == 2 )
    goto LABEL_107;
LABEL_34:
  if ( PpmCheckCurrentPipelineId == 5 )
    goto LABEL_37;
  v26 = *(_DWORD *)(v5 + 984);
  v27 = v21 < v23;
  if ( v21 > v23 )
  {
    if ( v26 < v54 )
    {
LABEL_108:
      v25 |= 0x800u;
      v21 = v23;
      goto LABEL_37;
    }
    v27 = v21 < v23;
  }
  if ( v27 && v26 < v55 )
    goto LABEL_108;
LABEL_37:
  if ( v6 )
  {
    v28 = *(unsigned __int8 *)(v6 + 237);
    if ( (_BYTE)v28 )
    {
      v25 |= 0x10000u;
      *(_BYTE *)(v6 + 237) = 0;
      if ( v21 <= v28 )
        v21 = v28;
    }
    v29 = *(unsigned __int8 *)(v6 + 238);
    if ( (_BYTE)v29 )
    {
      v25 |= 0x20000u;
      *(_BYTE *)(v6 + 238) = 0;
      if ( v21 <= v29 )
        v21 = v29;
    }
  }
LABEL_40:
  v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, int, _QWORD, _QWORD))(v5 + 376))(
          v57,
          v21,
          *(unsigned int *)(v5 + 452),
          v18,
          *((_DWORD *)v7 + v56 + 16),
          *((_DWORD *)v7 + 18),
          v24,
          0LL,
          0LL);
  ActivityId = 0LL;
  *(_DWORD *)(v1 + 56) = v30;
  v53 = v30;
  v51 = v25;
  v54 = v21;
  v55 = v52;
  v50 = 0;
  if ( *((_BYTE *)a1 + 64) )
  {
    v32 = &PPM_ETW_PERF_SELECT_PROCESSOR_STATE;
    LOWORD(v50) = *((unsigned __int8 *)a1 - 33760);
    BYTE2(v50) = *((_BYTE *)a1 - 33759);
    *(_QWORD *)&UserData.Size = 3LL;
  }
  else
  {
    v32 = (const EVENT_DESCRIPTOR *)PPM_ETW_PERF_SELECT_PROCESSOR_STATE_HV;
    v50 = *(_DWORD *)(a1[1] + 20);
    *(_QWORD *)&UserData.Size = 4LL;
  }
  v33 = &v50;
  UserData.Ptr = (ULONGLONG)&v50;
  if ( PpmEtwRegistered )
  {
    v34 = PpmEtwHandle;
    if ( PpmEtwHandle )
    {
      if ( (v33 = *(int **)(PpmEtwHandle + 32), Keyword = v32->Keyword, v33[24])
        && ((v36 = *((_BYTE *)v33 + 100), v32->Level <= v36) || !v36)
        && ((v33[26] & 0x40) != 0 && !Keyword
         || (Keyword & *((_QWORD *)v33 + 14)) != 0
         && (v45 = *((_QWORD *)v33 + 15), LODWORD(v33) = v45 & Keyword, (v45 & Keyword) == v45))
        || *(_BYTE *)(PpmEtwHandle + 101)
        && (LODWORD(v33) = EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 96LL, v32->Level, Keyword),
            (_BYTE)v33) )
      {
        v60 = 4LL;
        v59 = &v55;
        v62 = 4LL;
        v61 = &v54;
        v64 = 4LL;
        v63 = &v53;
        v66 = 4LL;
        v65 = &v51;
        LODWORD(v33) = EtwWriteEx(v34, v32, 0LL, (ULONG)ActivityId, ActivityId, ActivityId, 5u, &UserData);
      }
    }
  }
  return (int)v33;
}
