/*
 * XREFs of sub_1C0009130 @ 0x1C0009130
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00031D0 @ 0x1C00031D0 (sub_1C00031D0.c)
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C0009BC0 @ 0x1C0009BC0 (sub_1C0009BC0.c)
 *     sub_1C000A850 @ 0x1C000A850 (sub_1C000A850.c)
 *     sub_1C001466C @ 0x1C001466C (sub_1C001466C.c)
 *     sub_1C0017AF4 @ 0x1C0017AF4 (sub_1C0017AF4.c)
 *     sub_1C00226F8 @ 0x1C00226F8 (sub_1C00226F8.c)
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C00346C4 @ 0x1C00346C4 (sub_1C00346C4.c)
 *     sub_1C0038530 @ 0x1C0038530 (sub_1C0038530.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C0040778 @ 0x1C0040778 (sub_1C0040778.c)
 *     sub_1C0043604 @ 0x1C0043604 (sub_1C0043604.c)
 *     sub_1C0043728 @ 0x1C0043728 (sub_1C0043728.c)
 *     sub_1C00437E4 @ 0x1C00437E4 (sub_1C00437E4.c)
 *     sub_1C005AA9C @ 0x1C005AA9C (sub_1C005AA9C.c)
 *     sub_1C005CF3C @ 0x1C005CF3C (sub_1C005CF3C.c)
 *     sub_1C0061A30 @ 0x1C0061A30 (sub_1C0061A30.c)
 */

char __fastcall sub_1C0009130(__int64 a1, unsigned __int64 a2, unsigned int *a3, unsigned __int8 a4)
{
  __int64 v4; // rdi
  char v5; // r12
  unsigned __int64 v7; // r14
  __int64 v8; // rbp
  unsigned int v9; // r13d
  unsigned __int64 v10; // r15
  __int64 v11; // rsi
  char v12; // bl
  unsigned int v13; // r11d
  unsigned int v14; // r10d
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r8
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  char *v21; // r9
  unsigned __int64 v22; // rcx
  int v23; // eax
  _QWORD *v24; // rbx
  char v25; // cl
  char v26; // cl
  char v27; // al
  signed int v28; // ebx
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v30; // rax
  unsigned int v31; // ebx
  int v32; // r14d
  unsigned int v33; // ebp
  PIO_SECURITY_CONTEXT v34; // rbp
  _QWORD *p_Length; // rbp
  __int64 v36; // rbx
  struct _IO_SECURITY_CONTEXT *v37; // r12
  __int64 v38; // r14
  ULONGLONG QuadPart; // rax
  bool v40; // zf
  const char *v41; // r14
  __int64 v42; // rcx
  __int64 v43; // rax
  IRP *v44; // r15
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rdx
  int v48; // ebx
  int v49; // r15d
  unsigned int v50; // r14d
  int v51; // ebx
  int v52; // ecx
  bool v53; // r15
  __int64 *v54; // r12
  __int64 v55; // rcx
  __int64 v56; // rcx
  bool v57; // bl
  __int64 *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdx
  void (__fastcall *v61)(__int64, _QWORD, bool); // rax
  __int64 v62; // rdx
  __int64 v63; // rbx
  PIO_SECURITY_CONTEXT SecurityContext; // rsi
  unsigned __int64 FullCreateOptions; // rdx
  PIO_SECURITY_CONTEXT v66; // r14
  int SecurityQos; // ecx
  __int64 v68; // rcx
  unsigned int v69; // ebp
  unsigned int HighestNodeNumber; // r8d
  __int64 v71; // r8
  char v72; // al
  int v73; // esi
  struct _KDPC *v74; // rcx
  int v76; // [rsp+38h] [rbp-C0h]
  int v77; // [rsp+38h] [rbp-C0h]
  int v78; // [rsp+90h] [rbp-68h]
  int v79; // [rsp+94h] [rbp-64h]
  struct _IO_SECURITY_CONTEXT *v80; // [rsp+98h] [rbp-60h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v82; // [rsp+A8h] [rbp-50h]
  int v83; // [rsp+100h] [rbp+8h]
  PIRP Irp; // [rsp+108h] [rbp+10h]

  Irp = (PIRP)a2;
  v4 = *(_QWORD *)(a1 + 64);
  PerformanceFrequency.QuadPart = 0LL;
  v5 = 0;
  v7 = a2;
  v79 = 0;
  v8 = *(_QWORD *)(v4 + 24);
  v9 = 1;
  v78 = 0;
  v10 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v80 = 0LL;
  *(_BYTE *)(v11 + 3) = 0;
  if ( *(int *)(v8 + 4056) <= 0 && ExQueryDepthSList((PSLIST_HEADER)(v8 + 1040)) )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(v8 + 4056)) == 1 )
      sub_1C001466C(v8 + 944, *(_QWORD *)(v8 + 8), a4);
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 4056));
  }
  v12 = *(_BYTE *)(v11 + 2);
  if ( v12 != 40 )
  {
    v23 = *(_DWORD *)(v11 + 12);
    v5 = *(_BYTE *)(v11 + 72);
    v82 = *(_QWORD *)(v11 + 40);
    v83 = v23;
    if ( v82 )
      *(_QWORD *)(v11 + 40) = 0LL;
    goto LABEL_29;
  }
  a2 = *(unsigned int *)(v11 + 24);
  v82 = *(_QWORD *)(v11 + 104);
  v80 = (struct _IO_SECURITY_CONTEXT *)v11;
  v83 = a2;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_29;
  v13 = *(_DWORD *)(v11 + 56);
  v14 = 0;
  if ( !v13 )
    goto LABEL_29;
  while ( 1 )
  {
    v15 = *(unsigned int *)(v11 + 4LL * v14 + 120);
    if ( (unsigned int)v15 < 0x80 )
      goto LABEL_21;
    a2 = *(unsigned int *)(v11 + 16);
    if ( (unsigned int)v15 > (unsigned int)a2 )
      goto LABEL_21;
    v16 = v15 + v11;
    v17 = (unsigned int)v15;
    v18 = *(_DWORD *)(v15 + v11) - 64;
    if ( !v18 )
      break;
    v19 = v18 - 1;
    if ( !v19 )
    {
      v22 = v17 + 56;
      goto LABEL_20;
    }
    if ( v19 == 1 && v17 + 40 <= a2 )
    {
      v20 = *(_DWORD *)(v16 + 12);
      v21 = (char *)(v16 + 32);
      if ( !v20 )
        v21 = 0LL;
      goto LABEL_25;
    }
LABEL_21:
    if ( ++v14 >= v13 )
      goto LABEL_29;
  }
  v22 = v17 + 40;
LABEL_20:
  if ( v22 > a2 )
    goto LABEL_21;
  if ( !*(_BYTE *)(v16 + 10) )
    goto LABEL_29;
  v21 = (char *)(v16 + 24);
LABEL_25:
  if ( v21 )
    v5 = *v21;
LABEL_29:
  if ( (*(_BYTE *)(v7 + 142) & 0x20) != 0 )
  {
    if ( v12 == 40 )
    {
      v24 = *(_QWORD **)(v11 + 96);
      v80 = (struct _IO_SECURITY_CONTEXT *)v11;
      *(_QWORD *)(v11 + 96) = v24[2];
    }
    else
    {
      v24 = *(_QWORD **)(v11 + 48);
      *(_QWORD *)(v11 + 48) = v24[2];
    }
    if ( v24[1] != -1LL )
      v10 = KeQueryUnbiasedInterruptTime() + (unsigned int)(5000000 * *(_DWORD *)(v4 + 3304)) - v24[1];
    ExFreePoolWithTag(v24, 0x54436152u);
  }
  if ( (*(_BYTE *)(v4 + 450) & 2) != 0 && (unsigned __int8)sub_1C0043604(v11, a2) )
  {
    sub_1C000729C(v4);
    v25 = *(_BYTE *)(v11 + 3);
    if ( *(_BYTE *)(v11 + 2) == 40 )
    {
      v26 = ((v25 >> 7) & 0x80) + 56;
    }
    else
    {
      v27 = 56;
      if ( v25 < 0 )
        v27 = -72;
      v26 = v27;
    }
    *(_BYTE *)(v11 + 3) = v26;
    v28 = -1073740534;
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2152));
LABEL_97:
    v44 = Irp;
    sub_1C00437E4(v4, Irp, 0LL);
LABEL_144:
    SecurityContext = v44->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    {
      FullCreateOptions = SecurityContext->FullCreateOptions;
      v66 = v44->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
      SecurityQos = (int)SecurityContext[1].SecurityQos;
    }
    else
    {
      SecurityQos = HIDWORD(SecurityContext->AccessState);
      FullCreateOptions = BYTE2(SecurityContext->SecurityQos);
      v66 = v80;
    }
    if ( (SecurityQos & 0x102) == 0x102
      || (SecurityQos & 0x80010) != 0
      || (unsigned int)FullCreateOptions <= 0x20 && (v68 = 0x1000D0000LL, _bittest64(&v68, FullCreateOptions)) )
    {
      v9 = 0;
    }
    if ( v78 )
    {
      v69 = *a3;
      if ( !(unsigned __int8)sub_1C0023100(*(_QWORD *)(v4 + 24)) )
      {
        HighestNodeNumber = KeQueryHighestNodeNumber();
        if ( v69 / *(_DWORD *)(v4 + 584) < HighestNodeNumber + 1 )
          HighestNodeNumber = v69 / *(_DWORD *)(v4 + 584);
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)(v4 + 512) + ((unsigned __int64)HighestNodeNumber << 6)),
          (PSLIST_ENTRY)(*(_QWORD *)(v4 + 576) + 16LL * v69));
      }
    }
    sub_1C0040778(v4 + 656, v9);
    if ( (BYTE3(SecurityContext->SecurityQos) & 0x3F) == 0 )
    {
      v72 = sub_1C005AA9C((unsigned int)v28);
      BYTE3(SecurityContext->SecurityQos) = v72;
      if ( (v72 & 0x3F) == 0x30 )
      {
        if ( BYTE2(SecurityContext->SecurityQos) == 40 )
          v66[1].FullCreateOptions = -1073741670;
        else
          SecurityContext[2].DesiredAccess = -1073741670;
      }
    }
    if ( v79 )
      sub_1C0017AF4(v44);
    v73 = (unsigned __int8)sub_1C00031D0((__int64)a3, 0LL, v71);
    v44->IoStatus.Information = 0LL;
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 8) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003F0C4(off_1C0093070->AttachedDevice, 24LL, &unk_1C0083530, *(_QWORD *)(v4 + 8), v44, v44->IoStatus.Status);
    }
    sub_1C0061A30(v4, v44);
    sub_1C0003440(v44, 0, v28);
    if ( v73 )
      v74 = (struct _KDPC *)(*(_QWORD *)(v4 + 24) + 1648LL);
    else
      v74 = (struct _KDPC *)(v4 + 1240);
    LOBYTE(v43) = KeInsertQueueDpc(v74, 0LL, 0LL);
    return v43;
  }
  if ( !(unsigned int)sub_1C00230AC() || !(unsigned __int8)sub_1C0023100(v8) )
  {
    CurrentNodeNumber = KeGetCurrentNodeNumber();
    v30 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v4 + 512) + ((unsigned __int64)CurrentNodeNumber << 6)));
    if ( !v30 )
    {
      v31 = 0;
      v32 = 0;
      v33 = KeQueryHighestNodeNumber() + 1;
      while ( !v33 )
      {
LABEL_51:
        ++v32;
        v31 = 0;
        if ( v32 == 10 )
        {
          v78 = 1;
          *a3 = -1;
          goto LABEL_54;
        }
      }
      while ( 1 )
      {
        v30 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v4 + 512) + ((unsigned __int64)v31 << 6)));
        if ( v30 )
          break;
        if ( ++v31 >= v33 )
          goto LABEL_51;
      }
    }
    v78 = 1;
    *a3 = *((_DWORD *)&v30->Next + 2);
  }
LABEL_54:
  v28 = sub_1C0009BC0(v4, Irp, v82);
  if ( v28 < 0 )
  {
    sub_1C000729C(v4);
    goto LABEL_97;
  }
  v79 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(v4 + 24) + 2012LL) && v5 != 18 && v5 != -96 )
  {
    *(_BYTE *)(v11 + 3) = 37;
    v28 = sub_1C0008570(37);
    goto LABEL_97;
  }
  if ( *(char *)(v4 + 449) < 0
    && *(_DWORD *)(v4 + 492) != 1
    && (unsigned __int8)sub_1C0043728(v4, v11)
    && (v83 & 0x100000) != 0 )
  {
    v28 = -1073741823;
    *(_BYTE *)(v11 + 3) = 36;
    goto LABEL_97;
  }
  v34 = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(v34->SecurityQos) == 40 )
    p_Length = &v34[4].SecurityQos->Length;
  else
    p_Length = &v34[2].SecurityQos->Length;
  p_Length[96] = v82;
  p_Length[82] = sub_1C0001770;
  if ( v10 || *(_BYTE *)(v11 + 2) != 40 )
  {
    v37 = v80;
  }
  else
  {
    v36 = *(unsigned int *)(v11 + 4);
    v37 = (struct _IO_SECURITY_CONTEXT *)v11;
    v80 = (struct _IO_SECURITY_CONTEXT *)v11;
    if ( (_DWORD)v36 || *(_DWORD *)(v11 + 28) )
    {
      v38 = *(unsigned int *)(v11 + 28);
      QuadPart = 0LL;
      v40 = byte_1C0093BE8 == 0;
      *(_DWORD *)(v11 + 4) = 0;
      *(_DWORD *)(v11 + 28) = 0;
      if ( v40 )
      {
        if ( dword_1C0093400 )
        {
          if ( !byte_1C0093BA0 || !dword_1C0093404 )
            goto LABEL_78;
LABEL_74:
          QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
        }
      }
      else
      {
        if ( byte_1C0093BA0 )
          goto LABEL_74;
LABEL_78:
        QuadPart = KeQueryUnbiasedInterruptTime();
      }
      v10 = QuadPart - (v36 | (v38 << 32));
      if ( byte_1C0093BA0 && (dword_1C0093404 || byte_1C0093BE8) )
        v10 = 10000000 * v10 / PerformanceFrequency.QuadPart;
    }
  }
  p_Length[86] = v10;
  if ( v10 < qword_1C0093440 )
  {
    if ( _InterlockedExchange64((volatile __int64 *)(v4 + 2280), 0LL) )
    {
      v41 = "End";
      goto LABEL_89;
    }
  }
  else if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2280)) == 1 )
  {
    v41 = "Start";
LABEL_89:
    if ( (byte_1C0093A06 & 4) != 0 )
      sub_1C005CF3C(
        v4 + 169,
        v4 + 160,
        v4 + 2024,
        *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4656LL),
        *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
        *(_QWORD *)(v4 + 24) + 5000LL,
        *(_BYTE *)(v4 + 96),
        *(_BYTE *)(v4 + 97),
        *(_BYTE *)(v4 + 98),
        v4 + 2024,
        v4 + 160,
        v4 + 169,
        v4 + 186,
        *(_BYTE *)(v4 + 450) & 1,
        (__int64)v41);
  }
  v42 = *(_QWORD *)(v4 + 24);
  if ( *(_QWORD *)(v42 + 5544) )
  {
    LODWORD(v43) = sub_1C00346C4(v42, p_Length);
    v28 = v43;
    if ( (_DWORD)v43 == 259 )
      return v43;
    if ( (int)v43 < 0 )
    {
      if ( *(_BYTE *)(v11 + 2) == 40 )
      {
        BYTE3(v37->SecurityQos) = 48;
        v37[1].FullCreateOptions = v43;
      }
      else
      {
        *(_BYTE *)(v11 + 3) = 48;
        *(_DWORD *)(v11 + 64) = v43;
      }
      goto LABEL_97;
    }
  }
  v45 = *(_QWORD *)(v4 + 24);
  if ( !*(_BYTE *)(v45 + 4306) )
    goto LABEL_135;
  v46 = p_Length[21];
  v47 = *(unsigned __int8 *)(v46 + 2);
  if ( (_BYTE)v47 == 40 )
    v48 = *(_DWORD *)(v46 + 24);
  else
    v48 = *(_DWORD *)(v46 + 12);
  if ( (*(_BYTE *)(v45 + 4307) & 4) != 0 )
  {
    v57 = (v48 & 0x40) != 0;
    if ( p_Length[13] )
    {
      v58 = (__int64 *)(v45 + 760);
      if ( v45 != -760 )
      {
        v59 = *v58;
        if ( *v58 )
        {
          v60 = *(_QWORD *)(v59 + 8);
          if ( v60 )
          {
            if ( *(int *)(v45 + 788) >= 3 && (v61 = *(void (__fastcall **)(__int64, _QWORD, bool))(v60 + 240)) != 0LL )
              v61(v59, p_Length[13], v57);
            else
              KeFlushIoBuffers(p_Length[13], v57, 1LL);
          }
        }
      }
    }
    v62 = p_Length[17];
    if ( v62 )
      sub_1C00226F8(v45 + 760, v62, v57);
    goto LABEL_135;
  }
  if ( p_Length[17] )
  {
    LODWORD(v43) = sub_1C0038530(*(_QWORD *)(v4 + 24), p_Length);
    goto LABEL_136;
  }
  if ( (v48 & 0xC0) == 0 )
  {
LABEL_135:
    LODWORD(v43) = sub_1C000A850(v45, p_Length);
LABEL_136:
    v28 = v43;
    goto LABEL_137;
  }
  if ( (_BYTE)v47 == 40 )
  {
    v49 = *(_DWORD *)(v46 + 24);
    v50 = *(_DWORD *)(v46 + 60);
    v51 = *(_DWORD *)(v46 + 20);
  }
  else
  {
    v49 = *(_DWORD *)(v46 + 12);
    v51 = *(unsigned __int8 *)(v46 + 2);
    v50 = *(_DWORD *)(v46 + 16);
  }
  LODWORD(v43) = *(_DWORD *)(v45 + 564);
  v52 = v49 & 0x40;
  v53 = (v49 & 0x80) != 0;
  if ( (v43 & 8) == 0 && (*(_BYTE *)(v45 + 108) & 4) == 0 )
  {
    LOBYTE(v47) = v52 != 0;
    LOBYTE(v43) = KeFlushIoBuffers(p_Length[13], v47, 1LL);
  }
  if ( v51 == 23 )
  {
    v43 = p_Length[13];
    if ( *(_DWORD *)(v43 + 40) > v50 )
      v50 = *(_DWORD *)(v43 + 40);
  }
  v54 = (__int64 *)(v45 + 760);
  if ( v45 == -760 )
    goto LABEL_124;
  v55 = *v54;
  if ( !*v54 )
    goto LABEL_124;
  v43 = *(_QWORD *)(v55 + 8);
  if ( !v43 )
    goto LABEL_124;
  v43 = *(_QWORD *)(v43 + 112);
  if ( !v43 )
    goto LABEL_124;
  LOBYTE(v76) = v53;
  LODWORD(v43) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, _QWORD *), _QWORD *, int, _QWORD *, int))v43)(
                   v55,
                   *(_QWORD *)(v45 + 8),
                   p_Length[13],
                   p_Length[23],
                   v50,
                   sub_1C0008ED0,
                   p_Length,
                   v76,
                   p_Length + 29,
                   424);
  v28 = v43;
  if ( (_DWORD)v43 == -1073741789 )
  {
    v56 = *v54;
    if ( *v54 )
    {
      v43 = *(_QWORD *)(v56 + 8);
      if ( v43 )
      {
        v43 = *(_QWORD *)(v43 + 88);
        if ( v43 )
        {
          LOBYTE(v77) = v53;
          LODWORD(v43) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, _QWORD *), _QWORD *, int))v43)(
                           v56,
                           *(_QWORD *)(v45 + 8),
                           p_Length[13],
                           p_Length[23],
                           v50,
                           sub_1C0008ED0,
                           p_Length,
                           v77);
          goto LABEL_136;
        }
      }
    }
LABEL_124:
    v28 = -1073741811;
  }
LABEL_137:
  if ( v28 < 0 )
  {
    v44 = Irp;
    goto LABEL_144;
  }
  v63 = *(_QWORD *)(v4 + 24);
  if ( *(int *)(v63 + 4056) <= 0 )
  {
    LOWORD(v43) = ExQueryDepthSList((PSLIST_HEADER)(v63 + 1040));
    if ( (_WORD)v43 )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v63 + 4056)) == 1 )
        LOBYTE(v43) = sub_1C001466C(v63 + 944, *(_QWORD *)(v63 + 8), a4);
      _InterlockedDecrement((volatile signed __int32 *)(v63 + 4056));
    }
  }
  return v43;
}
