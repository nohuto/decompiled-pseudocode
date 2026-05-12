/*
 * XREFs of sub_1C0010614 @ 0x1C0010614
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0008424 @ 0x1C0008424 (sub_1C0008424.c)
 *     sub_1C00084E4 @ 0x1C00084E4 (sub_1C00084E4.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C0008870 @ 0x1C0008870 (sub_1C0008870.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C0008C44 @ 0x1C0008C44 (sub_1C0008C44.c)
 *     sub_1C0008DB8 @ 0x1C0008DB8 (sub_1C0008DB8.c)
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C0010420 @ 0x1C0010420 (sub_1C0010420.c)
 *     sub_1C0010DF4 @ 0x1C0010DF4 (sub_1C0010DF4.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     sub_1C001AE00 @ 0x1C001AE00 (sub_1C001AE00.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 *     sub_1C003EF50 @ 0x1C003EF50 (sub_1C003EF50.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C0063D90 @ 0x1C0063D90 (sub_1C0063D90.c)
 *     sub_1C00642A8 @ 0x1C00642A8 (sub_1C00642A8.c)
 */

__int64 __fastcall sub_1C0010614(__int64 a1, IRP *a2)
{
  __int64 v2; // r14
  unsigned int *v4; // r15
  _QWORD *v5; // r12
  char v6; // r13
  struct _IRP *MasterIrp; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rbx
  PVOID v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  int v21; // eax
  bool v22; // zf
  __int64 v23; // rcx
  void *v24; // r13
  __int64 v25; // r8
  int v26; // eax
  signed int v27; // ebx
  _DWORD *v28; // r13
  ULONG v29; // eax
  ULONG ByteCount; // eax
  char v31; // r11
  unsigned int v32; // ecx
  USHORT *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // r8
  int FullDriverPath; // r13d
  __int64 v37; // r8
  IRP *v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // r13
  unsigned int *v41; // rax
  void *v43; // rcx
  int v44; // eax
  int v45; // eax
  size_t v46; // rbx
  WCHAR *v47; // rax
  const WCHAR *v48; // rdi
  void *v49; // rcx
  void *v50; // rcx
  __int64 v51; // [rsp+30h] [rbp-59h]
  struct _MDL *v52; // [rsp+38h] [rbp-51h]
  UNICODE_STRING String2; // [rsp+48h] [rbp-41h] BYREF
  PVOID v55; // [rsp+58h] [rbp-31h]
  __int64 v56; // [rsp+60h] [rbp-29h]
  PVOID P; // [rsp+68h] [rbp-21h]
  unsigned int *v58; // [rsp+70h] [rbp-19h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-11h] BYREF
  WCHAR SourceString[8]; // [rsp+88h] [rbp-1h] BYREF
  __int64 v61; // [rsp+98h] [rbp+Fh]
  int v62; // [rsp+A0h] [rbp+17h]
  __int16 v63; // [rsp+A4h] [rbp+1Bh]

  v2 = *(_QWORD *)(a1 + 24);
  P = 0LL;
  v4 = 0LL;
  v56 = 0LL;
  v5 = 0LL;
  v51 = 0LL;
  v6 = 0;
  v58 = 0LL;
  String2 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( a2->RequestorMode )
  {
    v27 = -1073741790;
LABEL_78:
    v38 = a2;
    return sub_1C0003440(v38, 0, v27);
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 0x68 )
  {
    v27 = -1073741789;
    goto LABEL_78;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  memset_0(MasterIrp, 0, 0x68uLL);
  v8 = sub_1C0007CF4(64LL, 352LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v52 = (struct _MDL *)v8;
  if ( !v8 )
  {
    v38 = a2;
    v27 = -1073741670;
    return sub_1C0003440(v38, 0, v27);
  }
  *(_DWORD *)(v8 + 4) = 280;
  *(_DWORD *)(v8 + 8) = 1145917508;
  *(_DWORD *)v8 = 1;
  v9 = v8 + 280;
  *(_OWORD *)(v8 + 16) = *(_OWORD *)(v2 + 344);
  *(_OWORD *)(v8 + 32) = *(_OWORD *)(v2 + 360);
  *(_OWORD *)(v8 + 48) = *(_OWORD *)(v2 + 376);
  *(_OWORD *)(v8 + 64) = *(_OWORD *)(v2 + 392);
  *(_OWORD *)(v8 + 80) = *(_OWORD *)(v2 + 408);
  *(_OWORD *)(v8 + 96) = *(_OWORD *)(v2 + 424);
  *(_OWORD *)(v8 + 112) = *(_OWORD *)(v2 + 440);
  *(_OWORD *)(v8 + 128) = *(_OWORD *)(v2 + 456);
  *(_OWORD *)(v8 + 144) = *(_OWORD *)(v2 + 472);
  *(_OWORD *)(v8 + 160) = *(_OWORD *)(v2 + 488);
  *(_OWORD *)(v8 + 176) = *(_OWORD *)(v2 + 504);
  *(_OWORD *)(v8 + 192) = *(_OWORD *)(v2 + 520);
  *(_OWORD *)(v8 + 208) = *(_OWORD *)(v2 + 536);
  *(_OWORD *)(v8 + 224) = *(_OWORD *)(v2 + 552);
  sub_1C0010420(*(_DWORD *)(a1 + 3344), v8 + 240, (_WORD *)(v8 + 272));
  v10 = *(_QWORD *)(v2 + 568);
  if ( (*(_DWORD *)(v10 + 184) & 0x80u) != 0 && (*(_DWORD *)(v10 + 188) & 2) != 0 )
    WORD1(v52[5].StartVa) = word_1C00933DC;
  else
    WORD1(v52[5].StartVa) = -1;
  if ( sub_1C0008B84(a1) )
  {
    if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1792)) >= 0 )
    {
      *(_BYTE *)v9 = 1;
      v6 = 1;
      *(_QWORD *)(v9 + 8) = **(_QWORD **)(a1 + 1792);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  }
  v11 = *(_QWORD **)(*(_QWORD *)(a1 + 24) + 4896LL);
  if ( v11 && (int)PoFxRegisterCrashdumpDevice(*v11) >= 0 )
  {
    v6 = 1;
    *(_BYTE *)(v9 + 32) = 1;
    *(_QWORD *)(v9 + 40) = **(_QWORD **)(*(_QWORD *)(a1 + 24) + 4896LL);
  }
  *(_WORD *)(*(_QWORD *)(a1 + 24) + 4962LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 24) + 4960LL) = 40;
  if ( (int)sub_1C0010DF4(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 24LL)) >= 0
    && (v12 = *(_QWORD *)(a1 + 24), (v13 = *(_QWORD *)(v12 + 4992)) != 0)
    && *(_QWORD *)(v12 + 4984) )
  {
    *(_QWORD *)(v9 + 56) = v13;
    *(_QWORD *)(v9 + 64) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4968LL);
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 4962LL) = 0;
    if ( !v6 )
      goto LABEL_19;
  }
  MasterIrp->Overlay.AsynchronousParameters.UserApcContext = (PVOID)v9;
  MasterIrp->Overlay.AllocationSize.QuadPart = (LONGLONG)sub_1C004DE50;
LABEL_19:
  *(_QWORD *)(v9 + 16) = a1 + 1782;
  v14 = *(_QWORD *)(a1 + 24) + 4829LL;
  *(_QWORD *)(v9 + 24) = a1 + 1783;
  *(_QWORD *)(v9 + 48) = v14;
  v15 = (_QWORD *)sub_1C0007CF4(64LL, 88LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v55 = v15;
  if ( !v15 || (v5 = (_QWORD *)sub_1C0007CF4(64LL, 88LL, 1145266514LL, *(_QWORD *)(a1 + 8))) == 0LL )
  {
    v27 = -1073741670;
    v39 = 0LL;
    goto LABEL_87;
  }
  sub_1C001AE00(v15 + 1, 30LL, L"diskdump.sys");
  sub_1C001AE00((char *)v15 + 38, 30LL, L"storport.sys");
  *v15 = v5;
  *v5 = 0LL;
  MasterIrp->MdlAddress = v52;
  MasterIrp->UserEvent = (PKEVENT)(a1 + 1783);
  BYTE4(MasterIrp->AssociatedIrp.SystemBuffer) = 1;
  *(_DWORD *)&MasterIrp->Type = 4;
  *(_DWORD *)(&MasterIrp->Size + 1) = 104;
  *(_QWORD *)&MasterIrp->Flags = 0LL;
  MasterIrp->ThreadListEntry.Flink = 0LL;
  MasterIrp->ThreadListEntry.Blink = (struct _LIST_ENTRY *)v15;
  if ( (unsigned __int8)(*(_BYTE *)(v2 + 488) - 2) <= 2u )
    MasterIrp->IoStatus.Status |= 1u;
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 568) + 184LL) & 0x20) != 0 )
    MasterIrp->IoStatus.Status |= 4u;
  if ( !*(_BYTE *)(v2 + 4306) || (*(_DWORD *)(*(_QWORD *)(v2 + 568) + 184LL) & 8) != 0 )
  {
    P = (PVOID)sub_1C0007CF4(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    v16 = P;
    if ( P )
    {
      v4 = (unsigned int *)sub_1C0007BA4(*(_QWORD *)(a1 + 8), 0x26u, *(_BYTE *)(v2 + 442), 0);
      if ( v4 && (v18 = sub_1C0008424(((*(_DWORD *)(v2 + 484) + 7) & 0xFFFFFFF8) + 1104, v17, v2), (v56 = v18) != 0) )
      {
        v20 = v18 + 48;
        v51 = v18 + 48;
        sub_1C0004C64(v18 + 48, v19, 0, 0LL);
        *(_BYTE *)(v20 + 17) |= 8u;
        *(_QWORD *)(v20 + 176) = a2;
        *(_QWORD *)(v20 + 184) = v16;
        *(_QWORD *)(v20 + 168) = v4;
        if ( *(_BYTE *)(v2 + 442) == 1 )
        {
          *((_QWORD *)v4 + 10) = a2;
          v4[6] = 256;
          v21 = v4[6];
          *((_QWORD *)v4 + 12) = v20;
          v4[5] = 38;
          *((_QWORD *)v4 + 8) = v16;
          v4[15] = 112;
          v22 = *(_BYTE *)(v2 + 4306) == 0;
          v4[10] = 10;
          if ( v22 )
            v21 = 64;
          v58 = v4;
          v23 = v4[13];
          v4[6] = v21;
          *((_BYTE *)v4 + v23 + 8) = *(_BYTE *)(a1 + 96);
          *((_BYTE *)v4 + v23 + 9) = *(_BYTE *)(a1 + 97);
          *((_BYTE *)v4 + v23 + 10) = *(_BYTE *)(a1 + 98);
        }
        else
        {
          v4[3] = 256;
          *(_WORD *)v4 = 88;
          v44 = v4[3];
          *((_QWORD *)v4 + 6) = v20;
          *((_BYTE *)v4 + 2) = 38;
          *((_QWORD *)v4 + 3) = v16;
          v4[4] = 112;
          v22 = *(_BYTE *)(v2 + 4306) == 0;
          v4[5] = 10;
          if ( v22 )
            v44 = 64;
          v4[3] = v44;
          *((_BYTE *)v4 + 5) = *(_BYTE *)(a1 + 96);
          *((_BYTE *)v4 + 6) = *(_BYTE *)(a1 + 97);
          *((_BYTE *)v4 + 7) = *(_BYTE *)(a1 + 98);
        }
        sub_1C0008870(v2, (__int64)v4, v56 + 1104);
        v24 = (void *)(v20 + 664);
        KeInitializeEvent((PRKEVENT)(v20 + 664), NotificationEvent, 0);
        *(_QWORD *)(v20 + 656) = sub_1C00100B0;
        if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
          && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
          && BYTE1(off_1C0093070->Timer) )
        {
          sub_1C003F074(off_1C0093070->AttachedDevice, 29LL, &unk_1C0083530, v20, v4);
        }
        if ( *(_BYTE *)(v2 + 4306) )
          v26 = sub_1C0008DB8(v2, v20);
        else
          v26 = sub_1C0008E14(v2, (_QWORD *)v20, v25);
        v27 = v26;
        if ( v26 >= 0 )
        {
          KeWaitForSingleObject(v24, Executive, 0, 0, 0LL);
          v27 = sub_1C0008570(*((_BYTE *)v4 + 3));
        }
        if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
          && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
          && BYTE1(off_1C0093070->Timer) )
        {
          sub_1C003EE60(
            off_1C0093070->AttachedDevice,
            30LL,
            &unk_1C0083530,
            (unsigned int)v27,
            *((unsigned __int8 *)v4 + 3));
        }
        if ( v27 < 0 )
        {
          if ( !*(_BYTE *)(v2 + 4306) || (*(_DWORD *)(*(_QWORD *)(v2 + 568) + 184LL) & 0x1000) != 0 )
          {
            if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0 )
            {
              v39 = v51;
              if ( BYTE1(off_1C0093070->Timer) )
                sub_1C003EF50(off_1C0093070->AttachedDevice, 31LL, &unk_1C0083530, v51, v27);
              goto LABEL_87;
            }
            goto LABEL_86;
          }
          goto LABEL_47;
        }
        v28 = P;
        v29 = *((_DWORD *)P + 20);
        if ( v29 )
        {
          v52->ByteCount = v29;
          ByteCount = v28[20];
        }
        else
        {
          ByteCount = v52->ByteCount;
        }
        HIDWORD(MasterIrp->IoStatus.Information) = ByteCount;
        v52[1].StartVa = (PVOID)*((_QWORD *)v28 + 8);
        if ( *(_BYTE *)(v2 + 4306) )
        {
LABEL_46:
          *(_BYTE *)(a1 + 1781) = 1;
LABEL_47:
          v15 = v55;
          goto LABEL_48;
        }
        HIDWORD(v52->Process) = v28[18];
        LODWORD(v52->MappedSystemVa) = v28[19];
        v52->ByteOffset = v28[21];
        LODWORD(v52[1].Process) = v28[22];
        HIDWORD(v52[1].Process) = v28[23];
        v52[1].MappedSystemVa = (PVOID)*((_QWORD *)v28 + 12);
        LOBYTE(v52[1].ByteCount) = *((_BYTE *)v28 + 104);
        BYTE2(v52[2].Next) = *((_BYTE *)v28 + 105);
        HIBYTE(v52[2].Size) = *((_BYTE *)v28 + 106);
        BYTE1(v52[2].Process) = *((_BYTE *)v28 + 107);
        if ( *((_WORD *)v28 + 2) )
        {
          v27 = sub_1C001AE00(v5 + 1, 30LL, v28 + 1);
          if ( v27 >= 0 )
          {
            *(_QWORD *)&MasterIrp->RequestorMode = 0LL;
            MasterIrp->UserIosb = 0LL;
            MasterIrp->AssociatedIrp.IrpCount = v28[14];
            goto LABEL_46;
          }
        }
        else
        {
          v27 = -1073741637;
        }
      }
      else
      {
        v27 = -1073741670;
      }
LABEL_86:
      v39 = v51;
      goto LABEL_87;
    }
    v27 = -1073741670;
    v39 = 0LL;
LABEL_87:
    ExFreePoolWithTag(v52, 0x44436152u);
    if ( v55 )
      ExFreePoolWithTag(v55, 0x44436152u);
    if ( v5 )
    {
      v43 = (void *)v5[10];
      if ( v43 )
        ExFreePoolWithTag(v43, 0);
      ExFreePoolWithTag(v5, 0x44436152u);
    }
    v38 = a2;
    goto LABEL_65;
  }
LABEL_48:
  sub_1C0010EE0(*(_QWORD *)(v2 + 16), &String2);
  if ( *(_BYTE *)(v2 + 4306) != v31 )
  {
    sub_1C001AE00(v5 + 1, 30LL, L"%ws.sys", String2.Buffer);
    v32 = (*(_DWORD *)(v2 + 484) + 7) & 0xFFFFFFF8;
    if ( !v32 )
      v32 = 16;
    MasterIrp->AssociatedIrp.IrpCount = (*(_DWORD *)(v2 + 808) + 4095 + 16 * v32) & 0xFFFFF000;
    if ( !HIDWORD(MasterIrp->IoStatus.Information) )
      HIDWORD(MasterIrp->IoStatus.Information) = v52->ByteCount;
    *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)(v2 + 760);
    MasterIrp->UserIosb = (PIO_STATUS_BLOCK)(v2 + 832);
    if ( (*(_DWORD *)(v2 + 564) & 1) != 0 || (v45 = *(_DWORD *)(a1 + 3344), v45 == 10) || v45 == 1 )
      MasterIrp->IoStatus.Status |= 2u;
  }
  MasterIrp->IoStatus.Status |= 8u;
  RtlInitUnicodeString((PUNICODE_STRING)(v15 + 9), L"\\SystemRoot\\System32\\Drivers\\diskdump.sys");
  v33 = (USHORT *)(v5 + 9);
  v27 = 0;
  FullDriverPath = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 8LL), v5 + 9);
  if ( FullDriverPath >= 0 && !*(_BYTE *)(v2 + 4306) )
  {
    v61 = 0LL;
    *(_OWORD *)SourceString = 0LL;
    v62 = 0;
    v63 = 0;
    DestinationString = 0LL;
    FullDriverPath = sub_1C001AE00(SourceString, 30LL, L"%ws.sys", String2.Buffer);
    if ( FullDriverPath >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( *v33 > DestinationString.Length )
      {
        v46 = *v33 - (unsigned __int64)DestinationString.Length;
        String2 = 0LL;
        RtlInitUnicodeString(&String2, (PCWSTR)v5 + 4);
        if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
        {
          if ( DestinationString.Length < String2.Length )
          {
            v47 = (WCHAR *)sub_1C0007CF4(
                             64LL,
                             String2.Length + *((unsigned __int16 *)v5 + 37) - DestinationString.Length + 2LL,
                             1145266514LL,
                             *(_QWORD *)(a1 + 8));
            v48 = v47;
            if ( v47 )
            {
              memmove(v47, (const void *)v5[10], v46);
              memmove((char *)v48 + v46, String2.Buffer, String2.Length);
            }
            v49 = (void *)v5[10];
            v27 = 0;
            if ( v49 )
            {
              ExFreePoolWithTag(v49, 0);
              *(_OWORD *)v33 = 0LL;
            }
            if ( v48 )
              RtlInitUnicodeString((PUNICODE_STRING)(v5 + 9), v48);
            goto LABEL_57;
          }
          memset_0((void *)(v46 + v5[10]), 0, DestinationString.Length);
          memmove((void *)(v46 + v5[10]), String2.Buffer, String2.Length);
          *v33 = String2.Length + v46;
        }
        v27 = 0;
        goto LABEL_57;
      }
    }
    v50 = (void *)v5[10];
    if ( v50 )
    {
      ExFreePoolWithTag(v50, 0);
      *(_OWORD *)v33 = 0LL;
    }
  }
LABEL_57:
  if ( FullDriverPath >= 0 )
    v27 = FullDriverPath;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
    && BYTE1(off_1C0093070->Timer) )
  {
    sub_1C00642A8(off_1C0093070->AttachedDevice, v34, v35, v5 + 1);
  }
  v37 = *(unsigned int *)(v2 + 536);
  if ( (_DWORD)v37 )
    v27 = sub_1C0063D90(v2, &v52->Process);
  if ( v27 < 0 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
      && BYTE1(off_1C0093070->Timer) )
    {
      sub_1C003EE1C(off_1C0093070->AttachedDevice, 33LL, &unk_1C0083530, (unsigned int)v27);
    }
    goto LABEL_86;
  }
  v38 = a2;
  v39 = v51;
  a2->IoStatus.Information = 104LL;
LABEL_65:
  v40 = v56;
  if ( v56 )
  {
    sub_1C0008C44(v39, 0, v37);
    sub_1C00084E4(v2, v40);
  }
  if ( v4 )
  {
    if ( *((_BYTE *)v4 + 2) == 40 )
    {
      v41 = v58;
      if ( !v58 )
        v41 = v4;
      *((_QWORD *)v41 + 10) = 0LL;
      *((_QWORD *)v41 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)v4 + 6) = 0LL;
      *((_QWORD *)v4 + 7) = 0LL;
    }
    ExFreePoolWithTag(v4, 0x72536152u);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x44436152u);
  return sub_1C0003440(v38, 0, v27);
}
