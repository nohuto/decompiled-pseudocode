/*
 * XREFs of HvLoadHive @ 0x14074EF34
 * Callers:
 *     HvHiveStartFileBacked @ 0x140701414 (HvHiveStartFileBacked.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     SetFailureLocation @ 0x1402F6C80 (SetFailureLocation.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x14074EBE4 (CmpTraceHiveMountBaseFileMounted.c)
 *     HvpInitMap @ 0x14074EC60 (HvpInitMap.c)
 *     HvpGetHiveHeader @ 0x14074EDFC (HvpGetHiveHeader.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074F984 (HvpRemapAndEnlistHiveBins.c)
 *     HvpAdjustHiveFreeDisplay @ 0x140750084 (HvpAdjustHiveFreeDisplay.c)
 *     HvpViewMapStart @ 0x140750414 (HvpViewMapStart.c)
 *     HvpMapHiveImageFromViewMap @ 0x1407504C8 (HvpMapHiveImageFromViewMap.c)
 *     CmpFileFlush @ 0x140750F5C (CmpFileFlush.c)
 *     CmpInitializeActualFileSizes @ 0x140751218 (CmpInitializeActualFileSizes.c)
 *     HvAnalyzeLogFiles @ 0x1407FDDD8 (HvAnalyzeLogFiles.c)
 *     HvpPerformLogFileRecovery @ 0x14080055C (HvpPerformLogFileRecovery.c)
 *     HvpMapHiveImageFromFile @ 0x140A1E128 (HvpMapHiveImageFromFile.c)
 */

__int64 __fastcall HvLoadHive(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // r13
  char v6; // r12
  int HiveHeader; // eax
  __int64 v9; // rdx
  int v10; // r15d
  __int64 v11; // r8
  char *v12; // r14
  char *v13; // rax
  int inited; // eax
  __int64 v15; // rdx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // edx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v25; // eax
  int v26; // ebx
  _DWORD *v27; // rax
  int v28; // ecx
  ULONG v29; // r9d
  int v30; // r9d
  int v31; // r12d
  int v32; // r9d
  int v33; // r9d
  int v34; // [rsp+20h] [rbp-E0h]
  int v35; // [rsp+20h] [rbp-E0h]
  char *v36; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  int v39; // [rsp+60h] [rbp-A0h]
  __int128 v40; // [rsp+68h] [rbp-98h] BYREF
  __int128 v41; // [rsp+78h] [rbp-88h]
  __int128 v42; // [rsp+88h] [rbp-78h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  PPRIVILEGE_SET v44[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-50h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+C0h] [rbp-40h]
  _DWORD v47[24]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48[2]; // [rsp+130h] [rbp+30h] BYREF
  char **v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  __int64 *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]
  __int64 *v53; // [rsp+170h] [rbp+70h]
  __int64 v54; // [rsp+178h] [rbp+78h]

  v38 = 0LL;
  v37 = 0;
  v36 = 0LL;
  v39 = a3;
  v43 = a2;
  v5 = 0LL;
  v6 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  *(_OWORD *)v44 = 0LL;
  v45 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  memset(v47, 0, 0x5CuLL);
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
  {
    v25 = CmpFileFlush(BugCheckParameter2, 0LL);
    if ( v25 < 0 )
      SetFailureLocation(a4, 0, 6, v25, 8);
  }
  HiveHeader = HvpGetHiveHeader(BugCheckParameter2, &v36, &v38);
  v9 = 2LL;
  v10 = HiveHeader;
  switch ( HiveHeader )
  {
    case 2:
      v34 = 0;
      v30 = -1073741670;
LABEL_60:
      v16 = v30;
LABEL_63:
      SetFailureLocation(a4, 0, 6, v30, v34);
      v12 = v36;
      goto LABEL_26;
    case 7:
      v16 = -1073741491;
      v34 = 8;
LABEL_62:
      v30 = v16;
      goto LABEL_63;
    case 0:
      v16 = -1073741476;
      v34 = 16;
      goto LABEL_62;
  }
  v11 = 4LL;
  if ( (unsigned int)(HiveHeader - 4) > 1 )
  {
    v12 = v36;
    goto LABEL_7;
  }
  if ( !*(_DWORD *)(BugCheckParameter2 + 168) )
  {
    v30 = -1073741492;
    v34 = 32;
    goto LABEL_60;
  }
  v12 = v36;
  if ( HiveHeader == 5 )
  {
    v31 = *((_DWORD *)v36 + 2);
  }
  else
  {
    if ( HiveHeader != 4 )
      goto LABEL_7;
    v31 = 0;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 168) == 1 )
  {
    v44[0] = (PPRIVILEGE_SET)BugCheckParameter2;
    *((_QWORD *)&v40 + 1) = HvpRecoverDataReadRoutine;
    v26 = 1;
    DWORD1(v45) = 1;
    *(_QWORD *)&v41 = v44;
    LODWORD(v40) = 1;
  }
  else
  {
    v26 = 2;
    v27 = (_DWORD *)&v45 + 1;
    v28 = 4;
    do
    {
      *(_QWORD *)(v27 - 5) = BugCheckParameter2;
      *v27 = v28++;
      v27 += 6;
      --v9;
    }
    while ( v9 );
    LODWORD(v40) = 4;
    *((_QWORD *)&v40 + 1) = HvpRecoverDataReadRoutine;
    *(_QWORD *)&v42 = HvpRecoverDataReadRoutine;
    *((_QWORD *)&v42 + 1) = (char *)&v45 + 8;
    *(_QWORD *)&v41 = v44;
    DWORD2(v41) = 5;
  }
  if ( v10 == 4 )
  {
    LOBYTE(v9) = 1;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(4096LL, v9, 875777347LL);
    if ( !v5 )
    {
      v32 = -1073741670;
      v35 = 48;
LABEL_89:
      v16 = v32;
      goto LABEL_90;
    }
    LOBYTE(v11) = 1;
  }
  else
  {
    LOBYTE(v11) = 0;
  }
  inited = HvAnalyzeLogFiles((unsigned int)&v38, v31, v11, (unsigned int)&v40, v26, (__int64)v47, v5);
  v16 = inited;
  if ( inited < 0 )
  {
    v35 = 56;
LABEL_71:
    v32 = inited;
LABEL_90:
    SetFailureLocation(a4, 0, 6, v32, v35);
    goto LABEL_26;
  }
  if ( v10 == 4 )
  {
    *(_WORD *)(BugCheckParameter2 + 208) |= 0x40u;
    v12 = (char *)v5;
    v5 = 0LL;
  }
  if ( (unsigned int)dword_140C04390 > 5 && tlgKeywordOn((__int64)&dword_140C04390, 0x200000000000LL) )
  {
    v49 = &v36;
    v50 = v29;
    v51 = &v38;
    LODWORD(v36) = v10;
    v38 = 0x1000000LL;
    v52 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C04390,
      (unsigned __int8 *)&dword_140037AFC + 3,
      0LL,
      0LL,
      v29,
      v48);
  }
  v6 = 0;
LABEL_7:
  v13 = v12;
  *(_QWORD *)(BugCheckParameter2 + 64) = v12;
  v12 = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 220) = *((_DWORD *)v13 + 6) - 4096 + (*((_DWORD *)v13 + 5) << 12);
  inited = CmpInitializeActualFileSizes(BugCheckParameter2, &v37, v11);
  v16 = inited;
  if ( inited < 0 )
  {
    v35 = 128;
    goto LABEL_71;
  }
  v17 = v37;
  if ( v37 < *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) + 4096
    && (v39 & 0x20000) == 0
    && (BYTE2(NlsMbOemCodePageTag) || (CmpBootType & 6) != 0) )
  {
    if ( (unsigned int)dword_140C04390 > 5 && tlgKeywordOn((__int64)&dword_140C04390, 0x200000000000LL) )
    {
      LODWORD(v36) = v33;
      v49 = &v36;
      v50 = 4LL;
      v51 = (__int64 *)&v37;
      v37 = v17;
      v53 = &v38;
      v52 = 4LL;
      v38 = 0x1000000LL;
      v54 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04390, (unsigned __int8 *)byte_140037A99, 0LL, 0LL, 5u, v48);
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = (v17 - 4096) & 0xFFFFF000;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) - 1) > 0x7FFFDFFF )
  {
    v32 = -1073741492;
    v35 = 112;
    goto LABEL_89;
  }
  inited = HvpInitMap(BugCheckParameter2, v15);
  v16 = inited;
  if ( inited < 0 )
  {
    v35 = 132;
    goto LABEL_71;
  }
  v18 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v18 & 0x20000) != 0 )
  {
    v19 = (v18 >> 22) & 2;
    v20 = v19 | 1;
    if ( (v18 & 0x8001) == 0 )
      v20 = v19;
    v21 = HvpViewMapStart(
            (int)BugCheckParameter2 + 224,
            *(_QWORD *)(BugCheckParameter2 + 1544),
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL),
            v43,
            v20);
    v16 = v21;
    if ( v21 < 0 )
    {
      SetFailureLocation(a4, 0, 6, v21, 136);
      goto LABEL_26;
    }
    inited = HvpMapHiveImageFromViewMap(
               BugCheckParameter2,
               0LL,
               *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL));
    v16 = inited;
    if ( inited < 0 )
    {
      v35 = 140;
      goto LABEL_71;
    }
  }
  else
  {
    inited = HvpMapHiveImageFromFile(BugCheckParameter2);
    v16 = inited;
    if ( inited < 0 )
    {
      v35 = 144;
      goto LABEL_71;
    }
  }
  CmpTraceHiveMountBaseFileMounted(
    *(void **)(BugCheckParameter2 + 1544),
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL));
  if ( v47[15] )
  {
    inited = HvpPerformLogFileRecovery(BugCheckParameter2, a4);
    v16 = inited;
    if ( inited < 0 )
    {
      v35 = 160;
      goto LABEL_71;
    }
    v6 = 1;
  }
  else
  {
    v22 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4LL);
    *(_DWORD *)(BugCheckParameter2 + 172) = v22;
    *(_DWORD *)(BugCheckParameter2 + 184) = v22;
    *(_DWORD *)(BugCheckParameter2 + 176) = v22;
    *(_BYTE *)(BugCheckParameter2 + 194) = 1;
  }
  inited = HvpAdjustHiveFreeDisplay(
             BugCheckParameter2,
             *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL),
             0LL);
  v16 = inited;
  if ( inited < 0 )
  {
    v35 = 176;
    goto LABEL_71;
  }
  inited = HvpRemapAndEnlistHiveBins(BugCheckParameter2);
  v16 = inited;
  if ( inited == 1073741833 )
  {
    v6 = 1;
    goto LABEL_21;
  }
  if ( inited < 0 )
  {
    v35 = 192;
    goto LABEL_71;
  }
LABEL_21:
  v23 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v23 & 0x20000) == 0 )
    *(_DWORD *)(BugCheckParameter2 + 160) = v23 | 0x10000;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = 0;
  if ( v10 == 4 || v6 )
    v16 = 1073741833;
  else
    v16 = 0;
LABEL_26:
  if ( v44[1] )
    CmSiFreeMemory(v44[1]);
  if ( Privileges[0] )
    CmSiFreeMemory(Privileges[0]);
  if ( v5 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v5, *(unsigned int *)(BugCheckParameter2 + 132));
  if ( v12 )
    (*(void (__fastcall **)(char *, _QWORD))(BugCheckParameter2 + 32))(v12, *(unsigned int *)(BugCheckParameter2 + 132));
  return v16;
}
