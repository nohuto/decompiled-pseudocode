/*
 * XREFs of KeDelayExecutionThread @ 0x1402B90A0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1402031E0 (FsRtlCreateSectionForDataScan.c)
 *     sub_14021CE94 @ 0x14021CE94 (sub_14021CE94.c)
 *     sub_140238330 @ 0x140238330 (sub_140238330.c)
 *     sub_140238A40 @ 0x140238A40 (sub_140238A40.c)
 *     sub_140265428 @ 0x140265428 (sub_140265428.c)
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 *     sub_140283C50 @ 0x140283C50 (sub_140283C50.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     sub_14028B330 @ 0x14028B330 (sub_14028B330.c)
 *     sub_1402A7370 @ 0x1402A7370 (sub_1402A7370.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     sub_1402D9E3C @ 0x1402D9E3C (sub_1402D9E3C.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_1403773D8 @ 0x1403773D8 (sub_1403773D8.c)
 *     sub_14037AFC0 @ 0x14037AFC0 (sub_14037AFC0.c)
 *     sub_140389670 @ 0x140389670 (sub_140389670.c)
 *     sub_14038A914 @ 0x14038A914 (sub_14038A914.c)
 *     sub_1403A3F0C @ 0x1403A3F0C (sub_1403A3F0C.c)
 *     sub_1403C5160 @ 0x1403C5160 (sub_1403C5160.c)
 *     sub_1403C5C64 @ 0x1403C5C64 (sub_1403C5C64.c)
 *     sub_140538B34 @ 0x140538B34 (sub_140538B34.c)
 *     sub_14053BFB8 @ 0x14053BFB8 (sub_14053BFB8.c)
 *     sub_14053DDB8 @ 0x14053DDB8 (sub_14053DDB8.c)
 *     sub_140550E80 @ 0x140550E80 (sub_140550E80.c)
 *     sub_140558DE0 @ 0x140558DE0 (sub_140558DE0.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_1405879D8 @ 0x1405879D8 (sub_1405879D8.c)
 *     sub_1405882D0 @ 0x1405882D0 (sub_1405882D0.c)
 *     sub_14058BEE4 @ 0x14058BEE4 (sub_14058BEE4.c)
 *     sub_14058DCA8 @ 0x14058DCA8 (sub_14058DCA8.c)
 *     sub_1405962EC @ 0x1405962EC (sub_1405962EC.c)
 *     sub_1405A70EC @ 0x1405A70EC (sub_1405A70EC.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 *     sub_1405FA660 @ 0x1405FA660 (sub_1405FA660.c)
 *     sub_1405FF19C @ 0x1405FF19C (sub_1405FF19C.c)
 *     sub_1406129E0 @ 0x1406129E0 (sub_1406129E0.c)
 *     sub_140647CF0 @ 0x140647CF0 (sub_140647CF0.c)
 *     sub_140652EC8 @ 0x140652EC8 (sub_140652EC8.c)
 *     sub_140661B8C @ 0x140661B8C (sub_140661B8C.c)
 *     sub_14066D4BC @ 0x14066D4BC (sub_14066D4BC.c)
 *     sub_140681CB0 @ 0x140681CB0 (sub_140681CB0.c)
 *     sub_1406A4A70 @ 0x1406A4A70 (sub_1406A4A70.c)
 *     sub_1406A5770 @ 0x1406A5770 (sub_1406A5770.c)
 *     sub_1406A91F0 @ 0x1406A91F0 (sub_1406A91F0.c)
 *     sub_1406DC970 @ 0x1406DC970 (sub_1406DC970.c)
 *     sub_1406FD140 @ 0x1406FD140 (sub_1406FD140.c)
 *     sub_14073A240 @ 0x14073A240 (sub_14073A240.c)
 *     sub_1407426B8 @ 0x1407426B8 (sub_1407426B8.c)
 *     sub_1407435A8 @ 0x1407435A8 (sub_1407435A8.c)
 *     MmGetSystemRoutineAddress @ 0x140759130 (MmGetSystemRoutineAddress.c)
 *     sub_140767730 @ 0x140767730 (sub_140767730.c)
 *     sub_140798CFC @ 0x140798CFC (sub_140798CFC.c)
 *     sub_14079FC78 @ 0x14079FC78 (sub_14079FC78.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     sub_1407D78A0 @ 0x1407D78A0 (sub_1407D78A0.c)
 *     sub_1407DE98C @ 0x1407DE98C (sub_1407DE98C.c)
 *     sub_1407DFC68 @ 0x1407DFC68 (sub_1407DFC68.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_1407EF098 @ 0x1407EF098 (sub_1407EF098.c)
 *     sub_1407F0478 @ 0x1407F0478 (sub_1407F0478.c)
 *     sub_1407FE7DC @ 0x1407FE7DC (sub_1407FE7DC.c)
 *     sub_140881C00 @ 0x140881C00 (sub_140881C00.c)
 *     sub_140882180 @ 0x140882180 (sub_140882180.c)
 *     sub_14091BC2C @ 0x14091BC2C (sub_14091BC2C.c)
 *     sub_14093FC6C @ 0x14093FC6C (sub_14093FC6C.c)
 *     sub_14095E6D4 @ 0x14095E6D4 (sub_14095E6D4.c)
 *     sub_14096D038 @ 0x14096D038 (sub_14096D038.c)
 *     PoShutdownBugCheck @ 0x14098FCB0 (PoShutdownBugCheck.c)
 *     sub_140A01E60 @ 0x140A01E60 (sub_140A01E60.c)
 *     WheaRemoveErrorSource @ 0x140A08880 (WheaRemoveErrorSource.c)
 *     sub_140A0E96C @ 0x140A0E96C (sub_140A0E96C.c)
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 *     sub_140A94030 @ 0x140A94030 (sub_140A94030.c)
 *     sub_140AAA09C @ 0x140AAA09C (sub_140AAA09C.c)
 *     sub_140B263A0 @ 0x140B263A0 (sub_140B263A0.c)
 *     sub_140B286CC @ 0x140B286CC (sub_140B286CC.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140217CA0 @ 0x140217CA0 (sub_140217CA0.c)
 *     sub_140217E70 @ 0x140217E70 (sub_140217E70.c)
 *     sub_140217FB0 @ 0x140217FB0 (sub_140217FB0.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_140229D30 @ 0x140229D30 (sub_140229D30.c)
 *     sub_1402946B8 @ 0x1402946B8 (sub_1402946B8.c)
 *     ntoskrnl_6 @ 0x14029B310 (ntoskrnl_6.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     sub_1402B7AE0 @ 0x1402B7AE0 (sub_1402B7AE0.c)
 *     sub_1402B9680 @ 0x1402B9680 (sub_1402B9680.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402B9FC0 @ 0x1402B9FC0 (sub_1402B9FC0.c)
 *     sub_1402BA000 @ 0x1402BA000 (sub_1402BA000.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140345AA0 @ 0x140345AA0 (sub_140345AA0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 */

NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  struct _KTHREAD *CurrentThread; // rdi
  NTSTATUS v4; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  NTSTATUS result; // eax
  struct _KTHREAD *v10; // rdi
  unsigned __int8 v11; // r12
  struct _KPRCB *v12; // rsi
  __int64 v13; // r8
  struct _KPRCB *v14; // rbp
  __int64 v15; // rcx
  struct _KPRCB *v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r14d
  PVOID *p_DpcData; // r8
  __int64 v23; // r9
  struct _KDPC *v24; // rcx
  bool v25; // zf
  struct _KPRCB *v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // rcx
  _BYTE *v31; // r14
  char v32; // cl
  char v33; // al
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int8 v38; // al
  unsigned __int64 v39; // r12
  __int64 v40; // rcx
  int v41; // r10d
  NTSTATUS v42; // eax
  struct _KPRCB *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned __int8 CurrentIrql; // r10
  __int64 v50; // r9
  int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  PVOID *v60; // rdx
  int v61; // eax
  __int64 v62; // rdx
  unsigned int v63; // edx
  char v64; // al
  char v65; // al
  char v66; // cl
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  __int64 v69; // r9
  int v70; // edx
  int v71; // [rsp+30h] [rbp-58h] BYREF
  int v72; // [rsp+34h] [rbp-54h] BYREF
  NTSTATUS v73; // [rsp+38h] [rbp-50h]
  unsigned __int64 v74[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 v75; // [rsp+A0h] [rbp+18h]
  int v76; // [rsp+A8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v74[0] = 0LL;
  v76 = 0;
  if ( Interval->QuadPart || !WaitMode || Alertable || (*((_BYTE *)CurrentThread + 194) & 2) != 0 )
  {
    v38 = sub_140217E70((__int64)CurrentThread, (__int64)Interval, 1, v74, &v76);
    v39 = v74[0];
    v75 = v38;
    while ( 1 )
    {
      result = sub_140217CA0((__int64)CurrentThread, WaitMode, 4, Alertable);
      v73 = result;
      if ( result )
        break;
      if ( (unsigned int)sub_140217FB0((__int64)CurrentThread, v76, v39) )
      {
        sub_1402946B8((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, v75);
        if ( Interval->QuadPart )
          return v73;
        else
          return ntoskrnl_6(0);
      }
      *((_QWORD *)CurrentThread + 44) = -1LL;
      *((_BYTE *)CurrentThread + 337) = 5;
      *((_BYTE *)CurrentThread + 587) = 1;
      v42 = sub_1402B5240(v40, (__int64 *)CurrentThread + 40, v41, v39, 0LL);
      if ( v42 != 256 )
      {
        if ( v42 != 258 )
          return v42;
        return v4;
      }
      v75 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v50 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v39 = v74[0];
        *(_DWORD *)(v50 + 20) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
      }
      *((_BYTE *)CurrentThread + 390) = CurrentIrql;
    }
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !*((_DWORD *)CurrentPrcb + 8118) && !*(_DWORD *)(*((_QWORD *)CurrentPrcb + 4361) + 8LL) )
      return 1073741860;
    v10 = KeGetCurrentThread();
    v11 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v11 <= 0xFu )
    {
      v37 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v37 + 20) |= (-1 << (v11 + 1)) & 4;
    }
    v12 = KeGetCurrentPrcb();
    if ( *((_DWORD *)v12 + 8118) || *(_DWORD *)(*((_QWORD *)v12 + 4361) + 8LL) )
    {
      sub_1402B4EC0((__int64)v10, 0);
      v14 = KeGetCurrentPrcb();
      v71 = 0;
      v15 = *((_QWORD *)v14 + 4375);
      if ( v15 )
      {
        if ( *((_BYTE *)v14 + 32) <= 1u )
        {
          v51 = *(_DWORD *)(v15 + 24);
          *(_DWORD *)(v15 + 24) = v51 + 1;
          if ( v51 == -1 )
LABEL_74:
            sub_140418E4C(v14);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v10 + 16, 0LL) )
      {
        v52 = *((_QWORD *)v14 + 4375);
        if ( v52 )
        {
          if ( *((_BYTE *)v14 + 32) <= 1u )
          {
            v53 = *(_DWORD *)(v52 + 24) - 1;
            *(_DWORD *)(v52 + 24) = v53;
            if ( !v53 )
              sub_140418E4C(v14);
          }
        }
        do
          sub_1402F32E0(&v71);
        while ( *((_QWORD *)v10 + 8) );
        v54 = *((_QWORD *)v14 + 4375);
        if ( v54 )
        {
          if ( *((_BYTE *)v14 + 32) <= 1u )
          {
            v55 = *(_DWORD *)(v54 + 24);
            *(_DWORD *)(v54 + 24) = v55 + 1;
            if ( v55 == -1 )
              goto LABEL_74;
          }
        }
      }
      v16 = KeGetCurrentPrcb();
      v72 = 0;
      v17 = *((_QWORD *)v16 + 4375);
      if ( v17 )
      {
        if ( *((_BYTE *)v16 + 32) <= 1u )
        {
          v56 = *(_DWORD *)(v17 + 24);
          *(_DWORD *)(v17 + 24) = v56 + 1;
          if ( v56 == -1 )
LABEL_86:
            sub_140418E4C(v16);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 12, 0LL) )
      {
        v47 = *((_QWORD *)v16 + 4375);
        if ( v47 )
        {
          if ( *((_BYTE *)v16 + 32) <= 1u )
          {
            v57 = *(_DWORD *)(v47 + 24) - 1;
            *(_DWORD *)(v47 + 24) = v57;
            if ( !v57 )
              sub_140418E4C(v16);
          }
        }
        do
          sub_1402F32E0(&v72);
        while ( *((_QWORD *)v12 + 6) );
        v48 = *((_QWORD *)v16 + 4375);
        if ( v48 )
        {
          if ( *((_BYTE *)v16 + 32) <= 1u )
          {
            v58 = *(_DWORD *)(v48 + 24);
            *(_DWORD *)(v48 + 24) = v58 + 1;
            if ( v58 == -1 )
              goto LABEL_86;
          }
        }
      }
      v18 = *((_QWORD *)v12 + 2);
      if ( v18 || (v18 = sub_1402B7AE0((__int64)v12, 0LL, 1LL)) != 0 )
      {
        if ( *((_BYTE *)v12 + 32) )
        {
          v19 = *((_QWORD *)v10 + 9);
        }
        else
        {
          _disable();
          v19 = sub_140345AA0(v12, v10, 0LL);
          _enable();
        }
        v20 = v19 + dword_140D050CC * (unsigned int)*((unsigned __int8 *)v10 + 651);
        if ( (*((_DWORD *)v10 + 30) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)v10 + 30, 5u);
        LOBYTE(v13) = 1;
        *((_QWORD *)v10 + 4) = v20;
        v21 = (char)sub_1402BA000(v10, 1LL, v13);
        if ( !(unsigned __int8)sub_1402B9FC0((ULONG_PTR)v10) )
        {
          v24 = (struct _KDPC *)KeGetCurrentPrcb();
          if ( (char)v21 > *((char *)v10 + 195) )
          {
            if ( *((_BYTE *)v10 + 793) )
            {
              v60 = (PVOID *)((char *)v10 + 808);
              if ( *((_QWORD *)v10 + 101) == 1LL )
              {
                p_DpcData = &v24[557].DpcData;
                if ( v24 != (struct _KDPC *)-35704LL )
                {
                  *v60 = *p_DpcData;
                  *p_DpcData = v60;
                  _InterlockedIncrement16((volatile signed __int16 *)v10 + 434);
                  sub_140229D30(v24);
                }
              }
            }
          }
          v25 = (*((_DWORD *)v10 + 30) & 0x400000) == 0;
          *((_BYTE *)v10 + 195) = v21;
          if ( !v25 )
          {
            LOBYTE(p_DpcData) = 1;
            sub_14045B7FC(*((_QWORD *)v10 + 121), v21, p_DpcData);
          }
        }
        *((_QWORD *)v10 + 8) = 0LL;
        v26 = KeGetCurrentPrcb();
        v27 = *((_QWORD *)v26 + 4375);
        if ( v27 )
        {
          if ( *((_BYTE *)v26 + 32) <= 1u )
          {
            v61 = *(_DWORD *)(v27 + 24) - 1;
            *(_DWORD *)(v27 + 24) = v61;
            if ( !v61 )
              sub_140418E4C(v26);
          }
        }
        *((_QWORD *)v12 + 2) = 0LL;
        _disable();
        *((_BYTE *)v12 + 32) = 1;
        v28 = __rdtsc();
        v29 = v28 - *((_QWORD *)v12 + 4144);
        *((_QWORD *)v10 + 9) += v29;
        v30 = ((v29 * (unsigned __int64)*((unsigned int *)v12 + 8302)) >> 16) + *((unsigned int *)v10 + 20);
        if ( v30 > 0xFFFFFFFF )
          LODWORD(v30) = -1;
        *((_QWORD *)v12 + 4144) = v28;
        v25 = (*((_BYTE *)v10 + 2) & 0xBE) == 0;
        *((_DWORD *)v10 + 20) = v30;
        if ( !v25 )
        {
          LOBYTE(v23) = 1;
          sub_1402B9680(v12, v10, v29, v23);
        }
        _enable();
        v31 = (_BYTE *)*((_QWORD *)v12 + 7);
        if ( (*(_BYTE *)(v18 + 2) & 4) != 0
          && *(char *)(v18 + 195) < 16
          && *(_QWORD *)(v18 + 104)
          && (v45 = *(_QWORD *)(v18 + 104)) != 0
          && (v46 = *((unsigned int *)v12 + 54) + v45) != 0
          && (unsigned int)sub_1402103E0(v18, v46, v29, 0, 0LL) )
        {
          v32 = 1;
        }
        else
        {
          v32 = *(_BYTE *)(v18 + 195);
        }
        v33 = v32 & 0x7F | (*(_BYTE *)(v18 + 119) << 7);
        *v31 = v33;
        v34 = *((_QWORD *)v12 + 4375);
        if ( v34 )
        {
          if ( v18 == *((_QWORD *)v12 + 3) )
            v62 = (unsigned int)dword_140D0504C;
          else
            v62 = v33 & 0x7F;
          sub_14045B7FC(v34, v62, 0LL);
        }
        v35 = *((_QWORD *)v12 + 7);
        if ( dword_140D068FC )
        {
          v63 = *(_DWORD *)(v18 + 80);
          v64 = (*(_BYTE *)(v35 + 64) ^ *(_BYTE *)(v18 + 512)) & 7 ^ *(_BYTE *)(v35 + 64);
          v65 = (v64 ^ (8 * *(_BYTE *)(v18 + 516))) & 0x38 ^ v64;
          if ( v63 <= *(_DWORD *)(v18 + 84) )
            v63 = *(_DWORD *)(v18 + 84);
          v66 = 64;
          if ( v63 < dword_140D05308 )
            v66 = 0;
          *(_BYTE *)(v35 + 64) = v66 | v65 & 0xBF;
        }
        *((_QWORD *)v12 + 1) = v18;
        if ( *(_BYTE *)(v18 + 388) == 1 )
          *(_DWORD *)(v18 + 132) = *(_DWORD *)(v18 + 132) - *(_DWORD *)(v18 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v18 + 388) = 2;
        *((_BYTE *)v10 + 643) = 33;
        *((_BYTE *)v10 + 390) = v11;
        sub_1402B9970(v12, v10);
        LOBYTE(v36) = 1;
        sub_140428A30(v10, v18, v36);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)v12 + 6, 0LL);
        v43 = KeGetCurrentPrcb();
        v44 = *((_QWORD *)v43 + 4375);
        if ( v44 )
        {
          if ( *((_BYTE *)v43 + 32) <= 1u )
          {
            v59 = *(_DWORD *)(v44 + 24) - 1;
            *(_DWORD *)(v44 + 24) = v59;
            if ( !v59 )
              sub_140418E4C(v43);
          }
        }
        sub_140224100((__int64)v10);
        v4 = 1073741860;
      }
    }
    else
    {
      v4 = 1073741860;
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v67 = KeGetCurrentIrql();
        if ( v67 <= 0xFu && v11 <= 0xFu && v67 >= 2u )
        {
          v68 = KeGetCurrentPrcb();
          v69 = *((_QWORD *)v68 + 4375);
          v70 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v25 = (v70 & *(_DWORD *)(v69 + 20)) == 0;
          *(_DWORD *)(v69 + 20) &= v70;
          if ( v25 )
            sub_140418E4C(v68);
        }
      }
    }
    __writecr8(v11);
    return v4;
  }
  return result;
}
