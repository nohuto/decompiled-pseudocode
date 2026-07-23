/*
 * XREFs of sub_14079028C @ 0x14079028C
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     sub_14081637C @ 0x14081637C (sub_14081637C.c)
 * Callees:
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     PsGetCurrentThreadProcessId @ 0x1402A7BC0 (PsGetCurrentThreadProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 *     sub_1402E1010 @ 0x1402E1010 (sub_1402E1010.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406B8E18 @ 0x1406B8E18 (sub_1406B8E18.c)
 *     sub_1406F2158 @ 0x1406F2158 (sub_1406F2158.c)
 *     sub_1406F21DC @ 0x1406F21DC (sub_1406F21DC.c)
 *     sub_140758DB8 @ 0x140758DB8 (sub_140758DB8.c)
 *     sub_14078F0FC @ 0x14078F0FC (sub_14078F0FC.c)
 *     sub_14078FA54 @ 0x14078FA54 (sub_14078FA54.c)
 *     sub_14078FCF8 @ 0x14078FCF8 (sub_14078FCF8.c)
 *     sub_14078FE24 @ 0x14078FE24 (sub_14078FE24.c)
 *     sub_14078FF9C @ 0x14078FF9C (sub_14078FF9C.c)
 *     sub_140790030 @ 0x140790030 (sub_140790030.c)
 *     sub_1407900EC @ 0x1407900EC (sub_1407900EC.c)
 *     sub_140790B38 @ 0x140790B38 (sub_140790B38.c)
 *     sub_140790CF8 @ 0x140790CF8 (sub_140790CF8.c)
 *     sub_140792A4C @ 0x140792A4C (sub_140792A4C.c)
 *     sub_1407968D0 @ 0x1407968D0 (sub_1407968D0.c)
 *     sub_140796B04 @ 0x140796B04 (sub_140796B04.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     sub_140857B98 @ 0x140857B98 (sub_140857B98.c)
 *     sub_140882EB0 @ 0x140882EB0 (sub_140882EB0.c)
 *     sub_1409E0668 @ 0x1409E0668 (sub_1409E0668.c)
 *     sub_1409E591C @ 0x1409E591C (sub_1409E591C.c)
 *     sub_1409EBA3C @ 0x1409EBA3C (sub_1409EBA3C.c)
 */

__int64 __fastcall sub_14079028C(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  __int64 v7; // rsi
  volatile signed __int32 *v8; // r15
  int v9; // ebx
  __int64 v10; // r14
  unsigned int v11; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r14
  int CurrentThreadProcessId; // eax
  char v15; // si
  __int128 *v16; // rdx
  unsigned int v17; // r15d
  bool v18; // zf
  __int64 v19; // rax
  struct _KTHREAD *v20; // rax
  char v21; // r15
  int v22; // ecx
  char v23; // dl
  __int16 v24; // cx
  __int64 v25; // r8
  __int64 v27; // rcx
  volatile signed __int32 *v28; // rbx
  size_t v29; // rcx
  int v30; // eax
  int v31; // r12d
  _DWORD *v32; // rdx
  unsigned __int8 i; // cl
  unsigned int v34; // r12d
  __int64 v35; // rcx
  __int64 v36; // r13
  _QWORD *v37; // rax
  __int64 v38; // r13
  char v39; // r15
  unsigned __int8 v40; // bl
  char v41; // al
  __int16 v42; // cx
  volatile signed __int32 *v43; // rdx
  __int64 v44; // rbx
  int v45; // ecx
  unsigned int v46; // r13d
  const EVENT_DESCRIPTOR *v47; // r12
  int v48; // ecx
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 ProcessServerSilo; // rax
  __int64 v53; // rbx
  __int64 v54; // r9
  __int64 v55; // r10
  _BYTE *v56; // r8
  _DWORD *v57; // rdx
  __int64 v58; // rcx
  int v59; // eax
  void *v60; // rbx
  const EVENT_DESCRIPTOR *v61; // r15
  __int64 v62; // r8
  signed __int32 v63; // eax
  __int64 v64; // rcx
  signed __int32 v65; // ett
  struct _KTHREAD *v66; // rax
  ULONG_PTR v67; // rax
  unsigned int ProcessId; // eax
  __int16 v69; // bx
  struct _KTHREAD *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  unsigned int v74; // [rsp+28h] [rbp-D8h]
  char v75; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v76; // [rsp+51h] [rbp-AFh]
  char v77; // [rsp+52h] [rbp-AEh]
  char v78[13]; // [rsp+53h] [rbp-ADh] BYREF
  volatile signed __int32 *v79; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v80; // [rsp+68h] [rbp-98h] BYREF
  __int64 v81; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v82; // [rsp+78h] [rbp-88h]
  int v83; // [rsp+80h] [rbp-80h]
  int v84; // [rsp+84h] [rbp-7Ch]
  volatile signed __int32 *v85; // [rsp+88h] [rbp-78h]
  void *Src; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v87; // [rsp+98h] [rbp-68h]
  _QWORD *v88; // [rsp+A0h] [rbp-60h]
  __int64 v89; // [rsp+A8h] [rbp-58h]
  PVOID Object; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v91; // [rsp+B8h] [rbp-48h]
  HANDLE Handle; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v93; // [rsp+C8h] [rbp-38h] BYREF
  int v94; // [rsp+D8h] [rbp-28h]
  unsigned int *v95; // [rsp+E0h] [rbp-20h]
  _QWORD *v96; // [rsp+E8h] [rbp-18h]
  __int64 v97[12]; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v98[3]; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v99[3]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v100[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v101[8]; // [rsp+1B4h] [rbp+B4h] BYREF
  int v102; // [rsp+1BCh] [rbp+BCh]

  v3 = *(_DWORD *)(a2 + 80) & 0x20;
  Handle = 0LL;
  *(_DWORD *)&v78[5] = v3;
  Object = 0LL;
  v84 = 0;
  v77 = 0;
  v76 = v3 != 0 ? 2 : 0;
  LOBYTE(v83) = 0;
  *(_WORD *)v78 = 0;
  v75 = 0;
  v7 = 0LL;
  v81 = 0LL;
  v80 = 0;
  memset(v97, 0, 0x58uLL);
  v79 = 0LL;
  v94 = 0;
  Src = 0LL;
  v8 = 0LL;
  v93 = 0LL;
  v9 = sub_14078FE24(a1, a2, a3, (__int64)&v93, &v81, (__int64)v97);
  if ( v9 < 0 )
    goto LABEL_125;
  v10 = *(unsigned int *)(a2 + 116);
  v11 = *(_DWORD *)(a2 + 72);
  v87 = v11;
  if ( (unsigned int)(v10 - 1) <= 1 )
  {
    v55 = v10;
    v56 = &v100[-a2 - 120];
    v57 = (_DWORD *)(a2 + 128);
    do
    {
      v58 = a2 + *((_QWORD *)v57 - 1);
      *(_DWORD *)&v101[(_QWORD)v57 - 120 - a2] = v57[1];
      v59 = *v57;
      *(_QWORD *)((char *)v57 + (_QWORD)v56 - 8) = v58;
      *(_DWORD *)((char *)v57 + (_QWORD)v56) = v59;
      v57 += 4;
      --v55;
    }
    while ( v55 );
  }
  else
  {
    LODWORD(v10) = 0;
    v102 = 0;
  }
  if ( !*(_DWORD *)&v78[5] )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v9 = sub_14078FCF8(
           a1,
           (__int64 *)(a2 + 40),
           *(_WORD *)(a2 + 78),
           v11,
           *(_DWORD *)(a2 + 88),
           (__int64)v100,
           v10,
           &v75);
    KeLeaveCriticalRegion();
    if ( !v75 )
    {
      v74 = v10;
      v13 = v81;
      v9 = sub_1402E1010(v81, a2 + 40, v11, *(_QWORD *)(a2 + 88), (__int64)v100, v74);
      if ( v9 != -1073741163 )
        goto LABEL_35;
      v8 = v79;
      goto LABEL_8;
    }
LABEL_125:
    v13 = v81;
    goto LABEL_35;
  }
  v13 = v81;
LABEL_8:
  if ( (*(_WORD *)(a2 + 78) & 0xFFFD) == 0 )
  {
    v9 = -1073741790;
    goto LABEL_93;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v15 = BYTE2(v94);
  v16 = &xmmword_140010D88;
  v17 = v76;
  v18 = BYTE2(v94) == 0;
  *(_DWORD *)(a2 + 36) = CurrentThreadProcessId;
  if ( v18 )
    v16 = (__int128 *)(a2 + 40);
  v19 = sub_1407968D0(a1, v16, v17);
  if ( v19 )
  {
    if ( v11 == 1 || (v7 = v19, !v11) )
    {
      v7 = v19;
      if ( v13 )
      {
        v27 = 0x4648BDB6B675EC37LL - *(_QWORD *)(a2 + 40);
        if ( *(_QWORD *)(a2 + 40) == 0x4648BDB6B675EC37LL )
          v27 = 0xA23C4DC7FDF392BCuLL - *(_QWORD *)(a2 + 48);
        if ( !v27 )
        {
          v61 = (const EVENT_DESCRIPTOR *)qword_140037A18;
          if ( v11 != 1 )
            v61 = &stru_140037FF0;
          if ( EtwEventEnabled(qword_140C15FA8, v61) )
          {
            if ( v11 == 1 )
              sub_1409E0668(
                (unsigned int)&stru_140010D68,
                (_DWORD)v61,
                v62,
                v13 + 136,
                (__int64)&stru_140010D68,
                *(_QWORD *)(a2 + 88),
                *(_QWORD *)(a2 + 96),
                *(_DWORD *)(a2 + 80),
                *(_BYTE *)(a2 + 76));
            else
              sub_140882EB0(&stru_140010D68, v61, v62, 2LL, v13 + 136, &stru_140010D68);
          }
        }
      }
    }
  }
  else
  {
    if ( v15 || v11 != 1 )
    {
      v9 = -1073741163;
      v7 = 0LL;
      goto LABEL_35;
    }
    v7 = sub_140792A4C(a1, a2 + 40, v17);
    if ( !v7 )
    {
      v9 = -1073741801;
      goto LABEL_35;
    }
  }
  v20 = KeGetCurrentThread();
  --*((_WORD *)v20 + 242);
  ExAcquirePushLockExclusiveEx(v7 + 408, 0LL);
  v21 = 1;
  v22 = *(_DWORD *)&v78[5];
  *(_QWORD *)(v7 + 416) = KeGetCurrentThread();
  v78[1] = 1;
  if ( v11 == 1 && (*(_BYTE *)(v7 + 91) & 1) != 0 && !v22 && *(_WORD *)(a2 + 78) != *(_WORD *)(v7 + 88) )
  {
    v50 = 0x4719A4EB910C653DLL - *(_QWORD *)(v7 + 40);
    if ( *(_QWORD *)(v7 + 40) == 0x4719A4EB910C653DLL )
      v50 = 0x91ECBAE3884509B9uLL - *(_QWORD *)(v7 + 48);
    if ( !v50 )
    {
      v13 = v81;
      v9 = -1073741053;
      goto LABEL_34;
    }
    v22 = *(_DWORD *)&v78[5];
  }
  v13 = v81;
  if ( v81 && (*(_DWORD *)(v81 + 816) & 0x40) != 0 )
  {
    v9 = -1073741162;
    goto LABEL_34;
  }
  if ( v22 )
  {
    v9 = sub_140857B98(v81);
    if ( v9 )
      goto LABEL_34;
  }
  v23 = BYTE2(v94);
  *(_DWORD *)(a2 + 112) = v11;
  v24 = *(_WORD *)(a2 + 78);
  *(_WORD *)(a2 + 104) = v24;
  *(_BYTE *)(a2 + 106) = *(_BYTE *)(a2 + 76);
  *(_DWORD *)(a2 + 108) = *(_DWORD *)(a2 + 88);
  v25 = *(_QWORD *)(a2 + 88);
  if ( v23 )
  {
    *(_BYTE *)(a2 + 107) = 1;
    *(_WORD *)(a2 + 104) = v24 & 0x7FFF;
  }
  if ( !v25 )
    *(_QWORD *)(a2 + 88) = -1LL;
  if ( !*(_BYTE *)(a2 + 76) )
    *(_BYTE *)(a2 + 76) = -1;
  if ( v11 != 2 && !v23 )
  {
    v9 = sub_14078FA54(v7, a2, v25, v97, v78);
    if ( v9 < 0 )
    {
LABEL_34:
      *(_QWORD *)(v7 + 416) = 0LL;
      ExReleasePushLockEx(v7 + 408, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_35;
    }
    *(_OWORD *)(a2 + 72) = *(_OWORD *)(v7 + 96);
    *(_OWORD *)(a2 + 88) = *(_OWORD *)(v7 + 112);
    if ( (*(_DWORD *)(a2 + 80) & 4) != 0 )
    {
      _m_prefetchw((const void *)(v13 + 816));
      v63 = *(_DWORD *)(v13 + 816);
      do
      {
        v64 = v63 | 0x2000u;
        v65 = v63;
        v63 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 816), v64, v63);
      }
      while ( v65 != v63 );
      if ( (v63 & 0x2000) == 0 )
        sub_1409E591C(v64, 0x2000LL);
      v13 = v81;
    }
  }
  if ( *(_QWORD *)(v7 + 56) == v7 + 56 && (*(_QWORD *)(v7 + 400) || *(_QWORD *)(v7 + 16) == v7 + 16) )
  {
    v9 = 0;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(a2 + 12) )
  {
    v9 = sub_1406B8E18(v7, &Handle, &Object);
    if ( v9 < 0 )
      goto LABEL_34;
    *(_QWORD *)(a2 + 24) = Object;
  }
  if ( (int)sub_1406F2158(v7, (_OWORD *)a2, 255, &Src) < 0 )
  {
    v9 = -1073741801;
    goto LABEL_96;
  }
  v28 = (volatile signed __int32 *)Src;
  v29 = *((unsigned int *)Src + 1);
  v95 = (unsigned int *)((char *)Src + 4);
  v30 = sub_1406F21DC(v29, Src, &v79);
  v8 = v79;
  if ( v30 < 0 )
  {
    v9 = -1073741801;
    goto LABEL_93;
  }
  v31 = v83;
  v32 = (_DWORD *)(v7 + 128);
  v85 = v79;
  for ( i = 0; i < 8u; ++i )
  {
    if ( *v32 )
      v31 = (unsigned __int8)v31 | (1 << i);
    v32 += 8;
  }
  v83 = v31;
  v34 = v87;
  v75 = 0;
  v89 = 0LL;
  if ( !*(_QWORD *)(v7 + 400) )
  {
    v35 = *(_QWORD *)(v7 + 16);
    if ( v35 != v7 + 16 )
      v89 = v35 - 16;
  }
  v36 = v7;
  v91 = v7;
  while ( 1 )
  {
    v37 = *(_QWORD **)(v36 + 56);
    v96 = (_QWORD *)(v36 + 56);
    v88 = v37;
    if ( v37 != (_QWORD *)(v36 + 56) )
      break;
LABEL_85:
    if ( v36 != v7 )
    {
      *(_QWORD *)(v36 + 416) = 0LL;
      ExReleasePushLockEx(v36 + 408, 0LL);
      KeLeaveCriticalRegion();
    }
    v44 = v89;
    if ( !v89 )
    {
      v9 = 0;
      v45 = v84;
      *(_QWORD *)(a2 + 24) = Handle;
      *(_DWORD *)(a2 + 20) = v45;
      if ( v13 && v34 <= 1 )
      {
        v46 = v87;
        v47 = (const EVENT_DESCRIPTOR *)qword_14000E090;
        if ( v87 != 1 )
          v47 = &stru_14000E0A0;
        if ( EtwEventEnabled(qword_140C15FA8, v47) )
        {
          if ( v46 == 1 )
            sub_1409E0668(
              v48,
              (_DWORD)v47,
              v49,
              v13 + 136,
              a2 + 40,
              *(_QWORD *)(a2 + 88),
              *(_QWORD *)(a2 + 96),
              *(_DWORD *)(a2 + 80),
              *(_BYTE *)(a2 + 76));
          else
            sub_140882EB0(a2 + 40, v47, v49, 2LL, v13 + 136, a2 + 40);
        }
      }
      goto LABEL_93;
    }
    v70 = KeGetCurrentThread();
    v75 = 1;
    v36 = v89;
    v91 = v89;
    --*((_WORD *)v70 + 242);
    ExAcquirePushLockExclusiveEx(v44 + 408, 0LL);
    v71 = 0LL;
    v13 = v81;
    v8 = v79;
    *(_QWORD *)(v44 + 416) = KeGetCurrentThread();
    v72 = *(_QWORD *)(v44 + 16);
    v28 = (volatile signed __int32 *)Src;
    v73 = v72 - 16;
    if ( v73 != v7 )
      v71 = v73;
    v89 = v71;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)&v78[5] )
    {
      v38 = (__int64)(v37 - 2);
      v66 = KeGetCurrentThread();
      --*((_WORD *)v66 + 242);
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v38 + 32) + 408LL, 0LL);
      v13 = v81;
      v8 = v79;
      v28 = (volatile signed __int32 *)Src;
      *(_QWORD *)(*(_QWORD *)(v38 + 32) + 416LL) = KeGetCurrentThread();
      v37 = v88;
      v77 = 1;
    }
    else
    {
      v38 = (__int64)v37;
    }
    v88 = (_QWORD *)*v37;
    if ( !(unsigned __int8)sub_140790B38(v38, v13, (unsigned int)&v93, a2, (__int64)v97, v75, v76) )
      goto LABEL_81;
    v82 = v28;
    if ( BYTE2(v94) )
      break;
    if ( v34 == 2 )
      goto LABEL_74;
    v39 = v75;
    if ( v75 )
    {
      if ( *(_DWORD *)&v78[5] )
        v40 = *(_BYTE *)(v38 + 103);
      else
        v40 = *(_BYTE *)(v38 + 102);
    }
    else if ( *(_DWORD *)&v78[5] )
    {
      v40 = *(_BYTE *)(v38 + 101);
    }
    else
    {
      v40 = *(_BYTE *)(v38 + 100);
    }
    sub_140790030(v38, v13, v78[0], v76, v75, v34);
    v41 = sub_1407900EC(v38, v78[0], v40, v83, v76, v39, v34, &v79);
    v8 = v79;
    if ( v41 )
    {
      if ( v79 )
      {
        v82 = v79;
        if ( v79 != v85 )
        {
          sub_14078F0FC(v85);
          v85 = v8;
        }
      }
      else
      {
        v8 = v85;
        v79 = v85;
      }
      if ( v34 - 1 <= 1 )
      {
LABEL_74:
        v42 = *(_WORD *)(v38 + 98);
        if ( (v42 & 8) != 0 || (v42 & 0x20) != 0 || (*(_DWORD *)(v13 + 816) & 0x2000000) != 0 )
        {
          if ( (v42 & 1) != 0 )
          {
            v60 = 0LL;
            memset(v98, 0, sizeof(v98));
            if ( (v42 & 0x10) == 0 )
              goto LABEL_123;
            v67 = sub_1402DF880(*(_DWORD *)(v38 + 56));
            v60 = (void *)v67;
            if ( !v67 )
              goto LABEL_77;
            if ( (int)sub_1402312E0(v67) >= 0 )
            {
LABEL_123:
              sub_140758DB8(v13, 0, v38);
              if ( !v60 )
                goto LABEL_77;
              sub_140231240((__int64)v60, (__int64)v98);
            }
            ObfDereferenceObject(v60);
          }
          else if ( sub_140347810((struct _EX_RUNDOWN_REF *)(*(_QWORD *)(v38 + 80) + 1112LL)) )
          {
            v51 = *(_QWORD *)(v38 + 80);
            memset(v99, 0, sizeof(v99));
            ProcessServerSilo = PsGetProcessServerSilo(v51);
            v53 = PsAttachSiloToCurrentThread(ProcessServerSilo);
            sub_14030D5C0(*(_QWORD *)(v38 + 80), 0LL, (__int64)v99, v54);
            sub_140758DB8(v13, 1, v38);
            sub_1402D0930((__int64)v99, 0LL);
            PsDetachSiloFromCurrentThread(v53);
            sub_1402AD030((struct _EX_RUNDOWN_REF *)(*(_QWORD *)(v38 + 80) + 1112LL));
          }
        }
      }
LABEL_77:
      v43 = v82;
LABEL_78:
      if ( (int)sub_140790CF8(v38, v43) >= 0 && (*(_BYTE *)(v38 + 98) & 2) != 0 )
        ++v84;
      goto LABEL_81;
    }
    if ( !v79 )
    {
      v8 = v85;
      v79 = v85;
    }
LABEL_81:
    if ( v77 )
    {
      *(_QWORD *)(*(_QWORD *)(v38 + 32) + 416LL) = 0LL;
      ExReleasePushLockEx(*(_QWORD *)(v38 + 32) + 408LL, 0LL);
      KeLeaveCriticalRegion();
      v77 = 0;
    }
    v37 = v88;
    if ( v88 == v96 )
    {
      v36 = v91;
      goto LABEL_85;
    }
    v28 = (volatile signed __int32 *)Src;
  }
  ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v38 + 80));
  if ( (unsigned int)sub_1409EBA3C(ProcessId, *(_WORD *)(a2 + 78) & 0x7FFF, &v80) )
    goto LABEL_81;
  v69 = v80;
  if ( v80 == *((_WORD *)v8 + 39) )
  {
LABEL_156:
    v43 = v8;
    goto LABEL_78;
  }
  if ( (int)sub_1406F21DC(*v95, Src, &v79) >= 0 )
  {
    sub_14078F0FC(v85);
    v8 = v79;
    v85 = v79;
    *((_WORD *)v79 + 39) = v69 | 0x8000;
    *((_WORD *)v8 + 52) = v69;
    goto LABEL_156;
  }
  v8 = v85;
  if ( v77 )
  {
    *(_QWORD *)(*(_QWORD *)(v38 + 32) + 416LL) = 0LL;
    ExReleasePushLockEx(*(_QWORD *)(v38 + 32) + 408LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v9 = -1073741801;
LABEL_93:
  if ( v8 )
    sub_14078F0FC(v8);
  v21 = v78[1];
LABEL_96:
  if ( Src )
    sub_14078F0FC((volatile signed __int32 *)Src);
  if ( v21 )
    goto LABEL_34;
LABEL_35:
  if ( v13 )
    sub_1407981E8(v13, 0LL);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v7 )
    sub_140796B04((PVOID)v7);
  sub_14078FF9C((__int64)v97);
  return (unsigned int)v9;
}
