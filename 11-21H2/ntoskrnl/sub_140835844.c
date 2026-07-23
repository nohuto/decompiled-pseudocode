/*
 * XREFs of sub_140835844 @ 0x140835844
 * Callers:
 *     sub_1408357A0 @ 0x1408357A0 (sub_1408357A0.c)
 *     sub_140857F38 @ 0x140857F38 (sub_140857F38.c)
 *     sub_1409F8178 @ 0x1409F8178 (sub_1409F8178.c)
 *     sub_1409F8350 @ 0x1409F8350 (sub_1409F8350.c)
 *     sub_140A52E00 @ 0x140A52E00 (sub_140A52E00.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     RtlTimeFieldsToTime @ 0x14022D4D0 (RtlTimeFieldsToTime.c)
 *     ExLocalTimeToSystemTime @ 0x14022D7D0 (ExLocalTimeToSystemTime.c)
 *     RtlSetSystemGlobalData @ 0x14025D830 (RtlSetSystemGlobalData.c)
 *     RtlTimeToTimeFields @ 0x1402D1A30 (RtlTimeToTimeFields.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F1774 @ 0x1406F1774 (sub_1406F1774.c)
 *     sub_14077FDA0 @ 0x14077FDA0 (sub_14077FDA0.c)
 *     RtlGetPersistedStateLocation @ 0x140782DD0 (RtlGetPersistedStateLocation.c)
 *     sub_140835D14 @ 0x140835D14 (sub_140835D14.c)
 *     sub_140835E90 @ 0x140835E90 (sub_140835E90.c)
 *     sub_14083601C @ 0x14083601C (sub_14083601C.c)
 *     sub_140836228 @ 0x140836228 (sub_140836228.c)
 *     sub_1408364C4 @ 0x1408364C4 (sub_1408364C4.c)
 *     sub_14083656C @ 0x14083656C (sub_14083656C.c)
 *     sub_1408365B8 @ 0x1408365B8 (sub_1408365B8.c)
 *     sub_1408365F8 @ 0x1408365F8 (sub_1408365F8.c)
 *     sub_14083697C @ 0x14083697C (sub_14083697C.c)
 *     sub_1409BA71C @ 0x1409BA71C (sub_1409BA71C.c)
 *     sub_1409E2C3C @ 0x1409E2C3C (sub_1409E2C3C.c)
 *     sub_1409F7D30 @ 0x1409F7D30 (sub_1409F7D30.c)
 *     sub_1409F7F0C @ 0x1409F7F0C (sub_1409F7F0C.c)
 *     sub_1409F8018 @ 0x1409F8018 (sub_1409F8018.c)
 */

char __fastcall sub_140835844(char a1)
{
  __int64 v2; // rdi
  char v3; // r12
  char v4; // r13
  __int64 CurrentServerSilo; // rax
  void *v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rsi
  LARGE_INTEGER v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rdx
  LARGE_INTEGER v14; // rdi
  char v15; // al
  __int64 v16; // rdx
  int v17; // ecx
  LARGE_INTEGER v18; // rbx
  int v19; // ecx
  _DWORD *v20; // r15
  int v21; // eax
  __int64 v22; // rdx
  _OWORD *v23; // rcx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  CSHORT Year; // di
  __int64 v28; // rdx
  int v29; // edx
  CSHORT v30; // bx
  int v31; // r9d
  char v33; // al
  _OWORD *v34; // rcx
  _OWORD *v35; // rax
  __int128 v36; // xmm1
  int v37; // r9d
  int v38; // ecx
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Time; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER v41; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v42; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+68h] [rbp-A0h]
  unsigned __int64 Buffer; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER v46; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER v47; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER v48; // [rsp+90h] [rbp-78h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+98h] [rbp-70h] BYREF
  ULONG BufferLengthOut[4]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD Buf2[54]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR TargetPath[264]; // [rsp+268h] [rbp+160h] BYREF

  memset(Buf2, 0, sizeof(Buf2));
  v46.QuadPart = 0LL;
  v2 = 0LL;
  v47.QuadPart = 0LL;
  v41.QuadPart = 0LL;
  v3 = 1;
  Buffer = 0LL;
  TimeFields = 0LL;
  v4 = 0;
  CurrentServerSilo = PsGetCurrentServerSilo();
  v7 = *((_QWORD *)sub_140204738(CurrentServerSilo) + 157);
  if ( *(_QWORD *)(v7 + 592) )
    v3 = 0;
  else
    sub_14083697C(v6);
  if ( a1 )
  {
    if ( !(unsigned __int8)sub_1409F8018() )
      v2 = PsAttachSiloToCurrentThread(0LL);
    v9 = sub_1406F1774((char *)Buf2, 0x1B0uLL);
    if ( v2 )
      PsDetachSiloFromCurrentThread(v2);
  }
  else if ( !PsIsCurrentThreadInServerSilo() || (v33 = sub_1409F8018(), v34 = Buf2, v33) )
  {
    v9 = sub_1406F1774((char *)Buf2, 0x1B0uLL);
  }
  else
  {
    v35 = (_OWORD *)v7;
    v8 = 3LL;
    do
    {
      *v34 = *v35;
      v34[1] = v35[1];
      v34[2] = v35[2];
      v34[3] = v35[3];
      v34[4] = v35[4];
      v34[5] = v35[5];
      v34[6] = v35[6];
      v34 += 8;
      v36 = v35[7];
      v35 += 8;
      *(v34 - 1) = v36;
      --v8;
    }
    while ( v8 );
    v9 = 0;
    *v34 = *v35;
    v34[1] = v35[1];
    v34[2] = v35[2];
  }
  if ( v9 < 0 )
  {
    LOBYTE(v8) = v3;
    ++*(_DWORD *)(v7 + 1000);
    byte_140C0B228 = 1;
    sub_1409F7F0C((unsigned int)v9, v8);
    v37 = 0;
    v38 = 1;
LABEL_49:
    sub_140835E90(v38, *(_DWORD *)(v7 + 436), *(_DWORD *)(v7 + 432), v37, v3);
    return 0;
  }
  v10 = MEMORY[0xFFFFF78000000014];
  v11.QuadPart = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v7 + 440);
  Time = v11;
  if ( !BYTE4(Buf2[53]) )
  {
    if ( WORD2(Buf2[21]) )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( (unsigned __int8)sub_1408365F8(Buf2) )
      {
        v4 = 1;
LABEL_56:
        sub_1409BA71C(Buf2);
        goto LABEL_12;
      }
    }
  }
  if ( v3
    && RtlGetPersistedStateLocation(
         L"TimeZoneInformationSettings",
         L"TargetNtPath",
         0LL,
         LocationTypeRegistry,
         TargetPath,
         0x208u,
         BufferLengthOut) >= 0 )
  {
    Handle = 0LL;
    if ( (unsigned int)sub_14077FDA0(0, TargetPath, 0, &Handle) == -1073741772 )
      v4 = 1;
    if ( Handle )
      ZwClose(Handle);
    if ( v4 )
      goto LABEL_56;
  }
LABEL_12:
  v12 = Buf2[0];
  v42.QuadPart = -1LL;
  v48.QuadPart = -1LL;
  LODWORD(v43) = Buf2[0];
  if ( !HIWORD(Buf2[8]) || !WORD1(Buf2[19]) )
  {
    KeCancelTimer((PKTIMER)(v7 + 512));
    v20 = (_DWORD *)(v7 + 432);
    *(_DWORD *)(v7 + 432) = 0;
    v18.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    goto LABEL_24;
  }
  if ( !(unsigned __int8)sub_140835D14((PTIME_FIELDS)((char *)&Buf2[8] + 4), &v46, &Time) )
  {
    ++*(_DWORD *)(v7 + 1000);
    LOBYTE(v13) = v3;
    byte_140C0B228 = 1;
    sub_1409F7D30(Buf2, v13, &v42, 2LL);
    LOBYTE(v37) = v4;
    v38 = 2;
    goto LABEL_49;
  }
  v14 = v46;
  v42 = v46;
  v15 = sub_140835D14((PTIME_FIELDS)&Buf2[19], &v47, &Time);
  v17 = 0;
  if ( !v15 )
  {
    ++*(_DWORD *)(v7 + 1000);
    byte_140C0B228 = 1;
    LOBYTE(v16) = v3;
    sub_1409F7D30(Buf2, v16, &v42, 3LL);
    LOBYTE(v37) = v4;
    v38 = 3;
    goto LABEL_49;
  }
  v48 = v47;
  if ( v11.QuadPart < v14.QuadPart || v11.QuadPart < v47.QuadPart )
  {
    if ( v47.QuadPart >= v14.QuadPart )
    {
      if ( v11.QuadPart < v14.QuadPart || v11.QuadPart >= v47.QuadPart )
      {
        v18 = v14;
        LocalTime = v14;
        v20 = (_DWORD *)(v7 + 432);
        *(_DWORD *)(v7 + 432) = 2;
        goto LABEL_22;
      }
      v18 = v47;
      LocalTime = v47;
      v20 = (_DWORD *)(v7 + 432);
      *(_DWORD *)(v7 + 432) = 1;
LABEL_64:
      v21 = HIDWORD(Buf2[10]);
      goto LABEL_23;
    }
    if ( v11.QuadPart < v47.QuadPart || v11.QuadPart >= v14.QuadPart )
    {
      v18 = v47;
      LocalTime = v47;
      v19 = 1;
    }
    else
    {
      v18 = v14;
      v19 = 2;
      LocalTime = v14;
    }
  }
  else
  {
    LocalTime.QuadPart = 0LL;
    v18.QuadPart = 0LL;
    LOBYTE(v17) = v14.QuadPart <= v47.QuadPart;
    v19 = v17 + 1;
  }
  v20 = (_DWORD *)(v7 + 432);
  *(_DWORD *)(v7 + 432) = v19;
  if ( v19 != 2 )
    goto LABEL_64;
LABEL_22:
  v21 = Buf2[21];
LABEL_23:
  v12 = v21 + v43;
LABEL_24:
  if ( *(_DWORD *)(v7 + 436) != v12 )
  {
    Buffer = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData(&stru_1400377D8, &Buffer, 8u, 0LL, 0LL, 0, 0);
    sub_1409E2C3C(v12, *(unsigned int *)(v7 + 436));
  }
  v22 = 3LL;
  *(_DWORD *)(v7 + 436) = v12;
  v23 = Buf2;
  *(_QWORD *)(v7 + 440) = 10000000LL * (int)(60 * v12);
  v24 = (_OWORD *)v7;
  do
  {
    *v24 = *v23;
    v24[1] = v23[1];
    v24[2] = v23[2];
    v24[3] = v23[3];
    v24[4] = v23[4];
    v24[5] = v23[5];
    v24[6] = v23[6];
    v24 += 8;
    v25 = v23[7];
    v23 += 8;
    *(v24 - 1) = v25;
    --v22;
  }
  while ( v22 );
  v26 = *v23;
  byte_140C0B228 = 0;
  *v24 = v26;
  v24[1] = v23[1];
  v24[2] = v23[2];
  RtlSetSystemGlobalData(GlobalDataIdTimeZoneId, v20, 4u);
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v18.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, (PLARGE_INTEGER)(v7 + 992));
    sub_1402E2D20(v7 + 512, *(_QWORD *)(v7 + 992), 0, 0, v7 + 448);
  }
  Year = TimeFields.Year;
  *(_WORD *)(v7 + 944) = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime((PTIME_FIELDS)(v7 + 944), &v41);
  ExLocalTimeToSystemTime(&v41, (PLARGE_INTEGER)(v7 + 936));
  sub_1402E2D20(v7 + 672, *(_QWORD *)(v7 + 936), 0, 0, v7 + 608);
  *(_WORD *)(v7 + 968) = Year + 1;
  RtlTimeFieldsToTime((PTIME_FIELDS)(v7 + 968), &v41);
  ExLocalTimeToSystemTime(&v41, (PLARGE_INTEGER)(v7 + 960));
  sub_1402E2D20(v7 + 832, *(_QWORD *)(v7 + 960), 0, 0, v7 + 768);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  sub_1408365B8(v7 + 440);
  if ( LocalTime.QuadPart )
    v28 = *(_QWORD *)(v7 + 992);
  else
    v28 = *(_QWORD *)(v7 + 960) - 10000LL;
  sub_14083656C(v10, v28);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  if ( !dword_140D01460 )
    sub_1408364C4(*(unsigned int *)(v7 + 436));
  v30 = TimeFields.Year;
  if ( TimeFields.Year != *(_WORD *)(v7 + 984) )
  {
    if ( (unsigned __int8)sub_140836228((unsigned __int16)TimeFields.Year) )
      *(_WORD *)(v7 + 984) = v30;
  }
  LOBYTE(v29) = v3;
  sub_14083601C((unsigned int)Buf2, v29, (unsigned int)&v42, (unsigned int)&v48, (__int64)&LocalTime);
  LOBYTE(v31) = v4;
  sub_140835E90(0, *(_DWORD *)(v7 + 436), *v20, v31, v3);
  return 1;
}
