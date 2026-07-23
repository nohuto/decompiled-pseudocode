/*
 * XREFs of sub_140AFBDF4 @ 0x140AFBDF4
 * Callers:
 *     sub_14084C160 @ 0x14084C160 (sub_14084C160.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x14022D4D0 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x14022D770 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x14022D7D0 (ExLocalTimeToSystemTime.c)
 *     FsRtlSendModernAppTermination @ 0x14024C440 (FsRtlSendModernAppTermination.c)
 *     sub_140250C50 @ 0x140250C50 (sub_140250C50.c)
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     sub_1402A1054 @ 0x1402A1054 (sub_1402A1054.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     RtlTimeToTimeFields @ 0x1402D1A30 (RtlTimeToTimeFields.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1403B65EC @ 0x1403B65EC (sub_1403B65EC.c)
 *     sub_1403B6B94 @ 0x1403B6B94 (sub_1403B6B94.c)
 *     InbvDisplayString @ 0x1403BF7D0 (InbvDisplayString.c)
 *     sub_1403BF7F4 @ 0x1403BF7F4 (sub_1403BF7F4.c)
 *     sub_1403C205C @ 0x1403C205C (sub_1403C205C.c)
 *     sub_1403C2DB8 @ 0x1403C2DB8 (sub_1403C2DB8.c)
 *     sub_1403D8274 @ 0x1403D8274 (sub_1403D8274.c)
 *     sub_1403DAC1C @ 0x1403DAC1C (sub_1403DAC1C.c)
 *     sub_1403DF0F4 @ 0x1403DF0F4 (sub_1403DF0F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _strupr @ 0x1403E03F0 (_strupr.c)
 *     sub_1403E08C8 @ 0x1403E08C8 (sub_1403E08C8.c)
 *     strncmp @ 0x1403E0910 (strncmp.c)
 *     _strtoui64 @ 0x1403E0C10 (_strtoui64.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     atol @ 0x1403E0CE0 (atol.c)
 *     ZwQueryLicenseValue @ 0x14041E2C0 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x14041EE40 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140502744 @ 0x140502744 (sub_140502744.c)
 *     ExInitializePagedLookasideList @ 0x1406DA090 (ExInitializePagedLookasideList.c)
 *     RtlFindMessage @ 0x140758920 (RtlFindMessage.c)
 *     sub_1407D6CBC @ 0x1407D6CBC (sub_1407D6CBC.c)
 *     sub_1407D6F54 @ 0x1407D6F54 (sub_1407D6F54.c)
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 *     sub_1408365B8 @ 0x1408365B8 (sub_1408365B8.c)
 *     sub_140857D34 @ 0x140857D34 (sub_140857D34.c)
 *     sub_14085C5A8 @ 0x14085C5A8 (sub_14085C5A8.c)
 *     sub_1408644E0 @ 0x1408644E0 (sub_1408644E0.c)
 *     sub_140864CD4 @ 0x140864CD4 (sub_140864CD4.c)
 *     sub_140864D14 @ 0x140864D14 (sub_140864D14.c)
 *     sub_1409346B0 @ 0x1409346B0 (sub_1409346B0.c)
 *     HalInitSystem @ 0x140A56BD0 (HalInitSystem.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 *     sub_140AAB028 @ 0x140AAB028 (sub_140AAB028.c)
 *     sub_140AAD188 @ 0x140AAD188 (sub_140AAD188.c)
 *     sub_140AAED40 @ 0x140AAED40 (sub_140AAED40.c)
 *     HalAllProcessorsStarted @ 0x140AFB130 (HalAllProcessorsStarted.c)
 *     HalReportResourceUsage @ 0x140AFC970 (HalReportResourceUsage.c)
 *     sub_140AFC9DC @ 0x140AFC9DC (sub_140AFC9DC.c)
 *     sub_140AFD20C @ 0x140AFD20C (sub_140AFD20C.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 *     sub_140B0610C @ 0x140B0610C (sub_140B0610C.c)
 *     sub_140B07AB0 @ 0x140B07AB0 (sub_140B07AB0.c)
 *     sub_140B0AA3C @ 0x140B0AA3C (sub_140B0AA3C.c)
 *     sub_140B0B630 @ 0x140B0B630 (sub_140B0B630.c)
 *     sub_140B0E000 @ 0x140B0E000 (sub_140B0E000.c)
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 *     sub_140B1BBE4 @ 0x140B1BBE4 (sub_140B1BBE4.c)
 *     sub_140B1E0A8 @ 0x140B1E0A8 (sub_140B1E0A8.c)
 *     sub_140B1E13C @ 0x140B1E13C (sub_140B1E13C.c)
 *     sub_140B1E5EC @ 0x140B1E5EC (sub_140B1E5EC.c)
 *     sub_140B233CC @ 0x140B233CC (sub_140B233CC.c)
 *     sub_140B23A48 @ 0x140B23A48 (sub_140B23A48.c)
 *     sub_140B24BE4 @ 0x140B24BE4 (sub_140B24BE4.c)
 *     sub_140B255E4 @ 0x140B255E4 (sub_140B255E4.c)
 *     sub_140B25898 @ 0x140B25898 (sub_140B25898.c)
 *     sub_140B25C04 @ 0x140B25C04 (sub_140B25C04.c)
 *     sub_140B27884 @ 0x140B27884 (sub_140B27884.c)
 *     sub_140B27AFC @ 0x140B27AFC (sub_140B27AFC.c)
 *     sub_140B2B2EC @ 0x140B2B2EC (sub_140B2B2EC.c)
 *     sub_140B2BE4C @ 0x140B2BE4C (sub_140B2BE4C.c)
 *     sub_140B2E6EC @ 0x140B2E6EC (sub_140B2E6EC.c)
 *     sub_140B2EBF4 @ 0x140B2EBF4 (sub_140B2EBF4.c)
 *     sub_140B2F780 @ 0x140B2F780 (sub_140B2F780.c)
 *     sub_140B308F0 @ 0x140B308F0 (sub_140B308F0.c)
 *     sub_140B30BB0 @ 0x140B30BB0 (sub_140B30BB0.c)
 *     sub_140B30D14 @ 0x140B30D14 (sub_140B30D14.c)
 *     sub_140B4B5E0 @ 0x140B4B5E0 (sub_140B4B5E0.c)
 */

char __fastcall sub_140AFBDF4(ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // r12
  char *PoolWithTag; // rax
  char *v4; // r13
  struct _KTHREAD *CurrentThread; // rcx
  char *v6; // rcx
  char *v7; // rax
  const char *v8; // rbx
  const char *v9; // rdi
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  ULONG_PTR v15; // rcx
  char v16; // al
  char v17; // cl
  int v18; // eax
  char v19; // cl
  bool v20; // sf
  int v21; // eax
  char v22; // cl
  NTSTATUS Message; // eax
  char *v24; // rbx
  int v25; // r15d
  __int64 v26; // rsi
  char *v27; // rbx
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r15
  _OWORD *v32; // rax
  char *v33; // rcx
  __int64 v34; // rdx
  __int128 v35; // xmm1
  int v36; // eax
  char *v37; // rax
  _QWORD *v38; // rax
  char *v39; // rax
  char *v40; // rax
  char *v41; // rax
  char *v42; // rax
  char *v43; // rax
  const CHAR *v44; // rbx
  ULONG v45; // r9d
  NTSTATUS v46; // eax
  __int64 v47; // r9
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  int inited; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  __int128 *v58; // rax
  ULONG_PTR v59; // rbx
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // ebx
  __int64 v64; // r9
  char *v65; // rax
  char *v66; // r15
  int v67; // eax
  int v68; // eax
  __int64 v69; // r8
  char *v71; // rax
  char *v72; // rsi
  __int16 v73; // ax
  int v74; // edx
  char v75; // al
  char *v76; // rax
  unsigned __int8 *v77; // rbx
  __int64 v78; // rsi
  bool v79; // zf
  unsigned __int8 v80; // al
  int v81; // eax
  int v82; // eax
  char *v83; // rax
  CSHORT v84; // bx
  char *v85; // rax
  char *v86; // rax
  char *v87; // rax
  char *v88; // rax
  char *v89; // rax
  const char *v90; // rdi
  __int64 v91; // rax
  int v92; // eax
  int v93; // ecx
  ULONG v94; // r9d
  __int64 v95; // rdx
  __int64 v96; // rdx
  PMESSAGE_RESOURCE_ENTRY *MessageEntry; // [rsp+20h] [rbp-E0h]
  int Tag; // [rsp+28h] [rbp-D8h]
  char v99; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER SystemTime; // [rsp+48h] [rbp-B8h] BYREF
  int v101; // [rsp+50h] [rbp-B0h]
  PMESSAGE_RESOURCE_ENTRY v102; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ResultDataSize; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Type; // [rsp+64h] [rbp-9Ch] BYREF
  LARGE_INTEGER LocalTime; // [rsp+68h] [rbp-98h] BYREF
  PMESSAGE_RESOURCE_ENTRY v106; // [rsp+70h] [rbp-90h] BYREF
  char *v107; // [rsp+78h] [rbp-88h]
  int Buffer; // [rsp+80h] [rbp-80h] BYREF
  char *EndPtr; // [rsp+88h] [rbp-78h] BYREF
  __int64 v110; // [rsp+90h] [rbp-70h] BYREF
  char *v111; // [rsp+98h] [rbp-68h] BYREF
  __int64 v112; // [rsp+A0h] [rbp-60h] BYREF
  _STRING v113; // [rsp+A8h] [rbp-58h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v116[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v117[24]; // [rsp+160h] [rbp+60h] BYREF

  SystemTime.QuadPart = 0LL;
  LocalTime.QuadPart = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  v102 = 0LL;
  v106 = 0LL;
  TimeFields = 0LL;
  LOBYTE(v101) = 0;
  ResultDataSize = 0;
  Type = 0;
  DestinationString = 0LL;
  DWORD1(v116[0]) = 0;
  v2 = *((_QWORD *)sub_140347DB0() + 157);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x200uLL, 0x74696E49u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  v99 = 0;
  v107 = PoolWithTag + 256;
  LODWORD(dword_140C4E560) = 1;
  KeSetPriorityThread(CurrentThread, 31);
  v6 = *(char **)(BugCheckParameter3 + 216);
  if ( v6 )
  {
    v7 = strupr(v6);
    v8 = v7;
    v9 = v7;
    if ( v7 )
    {
      v10 = strstr(v7, " HYPERVISORROOTPROC=");
      if ( v10 )
      {
        v71 = strstr(v10, "=");
        if ( v71 )
          dword_140D069A0 = atol(v71 + 1);
      }
      v11 = strstr(v8, " HYPERVISORROOTPROCNUMANODES=");
      if ( v11 )
      {
        v72 = strstr(v11, "=");
        if ( v72 )
        {
          while ( (unsigned int)dword_140D06980 < 0x40 )
          {
            v73 = atol(++v72);
            v74 = dword_140D06980;
            word_140D073E0[dword_140D06980] = v73;
            dword_140D06980 = v74 + 1;
            while ( 1 )
            {
              v75 = *v72;
              if ( *v72 == 44 )
                break;
              if ( v75 == 32 || !v75 )
                goto LABEL_6;
              ++v72;
            }
          }
        }
      }
LABEL_6:
      v12 = strstr(v9, " HYPERVISORROOTPROCNUMANODELPS=");
      if ( v12 )
      {
        v76 = strstr(v12, "=");
        byte_140D068E4 = 1;
        v77 = (unsigned __int8 *)v76;
        dword_140D06980 = 0;
        dword_140D069A0 = 0;
        if ( v76 )
        {
          do
          {
            ++v77;
            EndPtr = 0LL;
            v78 = (unsigned int)sub_1403E08C8(v77, (unsigned __int8 **)&EndPtr, 0xAu);
            if ( v77 != (unsigned __int8 *)EndPtr && *EndPtr == 61 && (unsigned int)v78 < 0x40 )
            {
              v77 = (unsigned __int8 *)(EndPtr + 1);
              qword_140D0C8C0[v78] = strtoui64(EndPtr + 1, &EndPtr, 16);
            }
            while ( 1 )
            {
              v80 = *v77;
              if ( *v77 == 44 )
                break;
              if ( v80 == 32 )
                goto LABEL_7;
              v79 = v80 == 0;
              if ( !v80 )
                goto LABEL_125;
              ++v77;
            }
            v79 = 0;
LABEL_125:
            ;
          }
          while ( !v79 );
        }
      }
    }
  }
  else
  {
    v9 = 0LL;
  }
LABEL_7:
  v13 = qword_140C2B0F8;
  word_140C54EDC = 0;
  *(_BYTE *)(qword_140C2B0F8 + 5) &= 0xFCu;
  *(_BYTE *)(v13 + 4) = 0;
  sub_140B0610C(BugCheckParameter3);
  v14 = qword_140C2B0F8;
  sub_1403C2DB8(*(_WORD *)(qword_140C2B0F8 + 6));
  v15 = (unsigned int)dword_140C4E560;
  *(_QWORD *)(v14 + 16) |= 1uLL;
  if ( !(unsigned __int8)HalInitSystem(v15, BugCheckParameter3) )
    goto LABEL_207;
  sub_140B27884((unsigned int)dword_140C4E560);
  if ( v9 && strstr(v9, "NOGUIBOOT") )
    goto LABEL_210;
  v16 = byte_140C54D48;
  byte_140C54D0C = 0;
  if ( byte_140C54D48 )
  {
    v17 = byte_140C54D49;
    if ( byte_140C54D49 )
    {
      v18 = sub_140AAD188(1);
      v19 = byte_140C54905;
      v20 = v18 < 0;
      v16 = byte_140C54D48;
      if ( !v20 )
        v19 = 1;
      byte_140C54905 = v19;
      v17 = byte_140C54D49;
    }
    if ( v16 && v17 )
    {
      v21 = sub_140AAED40(1);
      v22 = byte_140C54904;
      if ( v21 >= 0 )
        v22 = 1;
      byte_140C54904 = v22;
    }
  }
  qword_140C54D18 = (__int64)sub_140502630;
  sub_140B25898(1LL, BugCheckParameter3, 7LL);
  sub_1403D8274(0);
  if ( v9 )
  {
LABEL_210:
    if ( strstr(v9, "MININT") )
    {
      byte_140C4E508 = 1;
      if ( strstr(v9, "INRAM") )
        dword_140D010C0 |= 0x80000000;
      else
        dword_140D010C0 |= 1u;
    }
  }
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x4000007Eu, &v102);
  v110 = 256LL;
  v24 = v4;
  v25 = Message;
  v111 = v4;
  if ( stru_140C4E570.Length )
  {
    v81 = sub_140502744(v4, 0xFFuLL, &v111, (unsigned __int64 *)&v110, 0, ": %wZ");
    if ( v81 < 0 )
      KeBugCheckEx(0x32u, v81, 7uLL, 0LL, 0LL);
    v24 = v111;
    v26 = v110;
  }
  else
  {
    v26 = 255LL;
    v110 = 255LL;
  }
  *v24 = 0;
  v27 = v24 + 1;
  v111 = v27;
  v28 = sub_1403BF7F4(v117, 24LL, (__int64)"%u.%u", 10, 0);
  if ( v28 < 0 )
    KeBugCheckEx(0x32u, v28, 7uLL, 1uLL, 0LL);
  if ( v25 < 0 )
  {
    v82 = sub_1402A1054(v27, v26, (__int64)"MICROSOFT (R) WINDOWS (TM)\n");
    if ( v82 < 0 )
      KeBugCheckEx(0x32u, v82, 7uLL, 3uLL, 0LL);
  }
  else
  {
    Tag = (int)v4;
    LODWORD(MessageEntry) = (unsigned __int16)NtBuildNumber;
    v29 = sub_1403BF7F4(v27, v26, (__int64)v102->Text, v117, MessageEntry);
    if ( v29 < 0 )
      KeBugCheckEx(0x32u, v29, 7uLL, 2uLL, 0LL);
  }
  InbvDisplayString((__int64)v27, v30);
  v31 = (__int64)(v4 + 256);
  v32 = v4 + 256;
  v33 = v4;
  v34 = 2LL;
  do
  {
    *v32 = *(_OWORD *)v33;
    v32[1] = *((_OWORD *)v33 + 1);
    v32[2] = *((_OWORD *)v33 + 2);
    v32[3] = *((_OWORD *)v33 + 3);
    v32[4] = *((_OWORD *)v33 + 4);
    v32[5] = *((_OWORD *)v33 + 5);
    v32[6] = *((_OWORD *)v33 + 6);
    v32 += 8;
    v35 = *((_OWORD *)v33 + 7);
    v33 += 128;
    *(v32 - 1) = v35;
    --v34;
  }
  while ( v34 );
  if ( !(unsigned __int8)sub_140B026CC(0LL, BugCheckParameter3, 128LL) )
LABEL_206:
    KeBugCheck(0xA0u);
  if ( !dword_140D01460 )
  {
    v36 = *(_DWORD *)(v2 + 436);
    if ( v36 == -1 )
    {
      v36 = dword_140D3CD3C;
      *(_DWORD *)(v2 + 436) = dword_140D3CD3C;
      v99 = 1;
    }
    *(_QWORD *)(v2 + 440) = 600000000LL * v36;
    MEMORY[0xFFFFF7800000025C] = 0;
    sub_1408365B8((_DWORD *)(v2 + 440));
  }
  sub_140B2EBF4(*(_QWORD *)(BugCheckParameter3 + 240), &SystemTime);
  if ( v9 )
  {
    v37 = strstr(v9, "YEAR");
    if ( v37 )
    {
      v83 = strstr(v37, "=");
      if ( v83 )
      {
        v84 = atol(v83 + 1);
        RtlTimeToTimeFields(&SystemTime, &TimeFields);
        TimeFields.Year = v84;
        RtlTimeFieldsToTime(&TimeFields, &SystemTime);
      }
    }
  }
  if ( dword_140D01460 )
    LocalTime = SystemTime;
  else
    ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  sub_1403B6B94((__int64)&SystemTime, (__int64)&v112, 4);
  v38 = sub_140347DB0();
  sub_1403B65EC((__int64 *)&SystemTime, &v112, 0, (int)&LocalTime, *(_DWORD *)(v38[157] + 436LL), Tag, byte_140C0B228);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( ZwQueryLicenseValue(&DestinationString, &Type, &dword_140D06A14, 4u, &ResultDataSize) < 0
    || ResultDataSize != 4
    || Type != 4 )
  {
    dword_140D06A14 = 1;
  }
  if ( v9 )
  {
    v39 = strstr(v9, " BOOTPROC=");
    if ( v39 )
    {
      v85 = strstr(v39, "=");
      if ( v85 )
        dword_140D06ABC = atol(v85 + 1);
    }
    v40 = strstr(v9, " NUMPROC=");
    if ( v40 )
    {
      v86 = strstr(v40, "=");
      if ( v86 )
        dword_140D06A08 = atol(v86 + 1);
    }
    v41 = strstr(v9, " HYPERVISORNUMPROC=");
    if ( v41 )
    {
      v87 = strstr(v41, "=");
      if ( v87 )
        dword_140D06B88 = atol(v87 + 1);
    }
    if ( !byte_140D068E4 )
    {
      v42 = strstr(v9, " HYPERVISORROOTPROCPERNODE=");
      if ( v42 )
      {
        v88 = strstr(v42, "=");
        if ( v88 )
          dword_140D06A98 = atol(v88 + 1);
      }
      v43 = strstr(v9, " HYPERVISORROOTPROCPERCORE=");
      if ( v43 )
      {
        v89 = strstr(v43, "=");
        if ( v89 )
          dword_140D06A94 = atol(v89 + 1);
      }
    }
    if ( strstr(v9, " MAXPROC") )
      dword_140D068E8 = 2048;
  }
  qword_140D68788 = KeQueryPerformanceCounter(0LL).QuadPart;
  sub_140B03C68();
  qword_140D68790 = KeQueryPerformanceCounter(0LL).QuadPart;
  sub_1408644E0();
  sub_1403DAC1C(*((_QWORD *)KeGetCurrentThread() + 23), 0, (unsigned __int16 *)dword_140D06E40);
  sub_1403C205C();
  v44 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000089u, &v106) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const CHAR *)v106->Text;
  if ( !HalAllProcessorsStarted() )
LABEL_207:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v113, v44);
  if ( v113.Length >= 2u )
    v113.Length -= 2;
  v45 = 1073741960;
  if ( (unsigned int)dword_140D06884 > 1 )
    v45 = 1073741981;
  v46 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v45, &v102);
  v47 = 0LL;
  v48 = *(unsigned int *)qword_140D06950;
  if ( (_DWORD)v48 )
  {
    v49 = (char *)qword_140D06950 + 24;
    do
    {
      v47 += *v49;
      v49 += 2;
      --v48;
    }
    while ( v48 );
  }
  if ( v46 < 0 )
    v50 = sub_1403BF7F4(
            v4,
            256LL,
            (__int64)"%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)dword_140D06884,
            (unsigned __int64)(v47 + 255) >> 8,
            &v113);
  else
    v50 = sub_1403BF7F4(
            v4,
            256LL,
            (__int64)v102->Text,
            (unsigned int)dword_140D06884,
            (unsigned __int64)(v47 + 255) >> 8,
            &v113);
  if ( v50 < 0 )
    KeBugCheckEx(0x32u, v50, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)v4, v51);
  ExFreePoolWithTag(v4, 0);
  if ( !(unsigned __int8)sub_140AFE184(1LL) )
    KeBugCheck(0x62u);
  if ( !(unsigned __int8)sub_140B0AA3C(BugCheckParameter3) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 1uLL, 0LL);
  HalReportResourceUsage(0xFFFFFFFFLL);
  if ( !(unsigned __int8)sub_140AFD20C() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 4uLL, 0LL);
  if ( !(unsigned __int8)sub_140B03800(1LL) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  if ( !sub_140A70470(dword_140C4E560, 0LL, v52, v53) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem_0(
             &TmResourceManagerObjectType,
             &TmEnlistmentObjectType,
             &TmTransactionManagerObjectType,
             &TmTransactionObjectType);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v55 = sub_140B233CC();
  if ( v55 < 0 )
    KeBugCheckEx(0x32u, v55, 0LL, 0LL, 0LL);
  sub_140B308F0();
  sub_140B27AFC(0LL);
  if ( !(unsigned __int8)sub_140B1E13C() )
    KeBugCheck(0x63u);
  sub_140B1E0A8();
  sub_140864CD4();
  v56 = sub_140B2B2EC(BugCheckParameter3);
  if ( v56 < 0 )
    KeBugCheckEx(0x64u, v56, 0LL, 0LL, 0LL);
  qword_140D687A8 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned __int8)sub_140B07AB0(1LL, BugCheckParameter3) )
    KeBugCheck(0x65u);
  qword_140D687B0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned __int8)sub_140AFC9DC(1LL) )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)sub_140B15F88(BugCheckParameter3) )
    KeBugCheck(0x67u);
  v57 = sub_140857D34();
  if ( v57 < 0 )
    KeBugCheckEx(0x32u, v57, 0xCuLL, 0LL, 0LL);
  sub_140B2E6EC();
  qword_140D68778 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset(v116, 0, 0x78uLL);
  *((_QWORD *)&v116[0] + 1) = sub_1409680B0;
  *(_QWORD *)&v116[1] = sub_140968160;
  *((_QWORD *)&v116[1] + 1) = sub_14056D650;
  *(_QWORD *)&v116[2] = sub_140A6F360;
  *((_QWORD *)&v116[2] + 1) = sub_140AB4770;
  *(_QWORD *)&v116[3] = sub_14027E110;
  *((_QWORD *)&v116[3] + 1) = sub_14090E160;
  *(_QWORD *)&v116[4] = sub_14057F520;
  *((_QWORD *)&v116[4] + 1) = sub_14030B3F0;
  LODWORD(v116[0]) = 120;
  if ( byte_140D06888 )
  {
    qword_140D68748 = (__int64)sub_14054FD30;
    qword_140D68750 = (__int64)sub_140AF32C0;
  }
  v58 = sub_140AAB028();
  v59 = (int)KsrInitSystem(BugCheckParameter3, v116, v58);
  qword_140D68780 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v59 + 0x80000000) >= 0 && (_DWORD)v59 != -1073741637 )
    KeBugCheckEx(0x32u, v59, 0LL, 1uLL, 0LL);
  xmmword_140C15BA0 = v116[5];
  qword_140C15BC0 = *(_QWORD *)&v116[7];
  xmmword_140C15BB0 = v116[6];
  v60 = sub_140B0B630(0LL, BugCheckParameter3);
  if ( v60 < 0 )
    KeBugCheckEx(0x32u, v60, 8uLL, 0LL, 0LL);
  v61 = sub_140B30BB0(BugCheckParameter3);
  if ( v61 < 0 )
    KeBugCheckEx(0x32u, v61, 9uLL, 0LL, 0LL);
  sub_140B23A48();
  sub_140B255E4(0LL);
  v62 = sub_140B1E5EC(0LL);
  if ( v62 < 0 )
    KeBugCheckEx(0x32u, v62, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2656LL) & 2) == 0 || strstr(v9, "FORCETIMESYNC") )
    ZwUpdateWnfStateData(&stru_140014898, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( (dword_140D0688C & 2) != 0 )
    ZwUpdateWnfStateData(&stru_1400377E8, 0LL, 0, 0LL, 0LL, 0, 0);
  Buffer = 0;
  FsRtlSendModernAppTermination(&Buffer, 1u, 1);
  sub_140B0E000();
  sub_1407D6F54(1u);
  sub_140864D14(&LocalTime);
  v63 = *(_DWORD *)(v2 + 436);
  sub_140835844(0);
  sub_1407D6CBC();
  if ( v99 )
  {
    ExLocalTimeToSystemTime(&LocalTime, &SystemTime);
    sub_1403B6B94((__int64)&SystemTime, (__int64)&v112, 4);
  }
  else if ( v63 != *(_DWORD *)(v2 + 436) )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)sub_140B25C04() )
    KeBugCheck(0x68u);
  sub_140250C50((__int64)&unk_140CE1D40, 0LL, 0LL, 512, 88, 1667529324, 0, 0);
  ExInitializePagedLookasideList(&stru_140CF92C0, 0LL, 0LL, 0, 0x38uLL, 0x656C5252u, 0x10u);
  sub_1403DF0F4(BugCheckParameter3);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, BugCheckParameter3, &xmmword_140C31E60, v64);
  if ( !(unsigned __int8)sub_140B2F780() )
    KeBugCheck(0x90u);
  dword_140D05270 = 648;
  if ( (int)sub_14085C5A8() < 0 )
    KeBugCheck(0x6Au);
  LpcPortObjectType = qword_140D069D8;
  qword_140D05458 = (__int64)qword_140D069D8;
  if ( !v9 )
    goto LABEL_95;
  v65 = strstr(v9, "SAFEBOOT:");
  v66 = v65;
  if ( !v65 )
  {
LABEL_94:
    v31 = (__int64)v107;
    goto LABEL_95;
  }
  v90 = v65 + 9;
  if ( !strncmp(v65 + 9, "MINIMAL", 7uLL) )
  {
    LODWORD(InitSafeBootMode) = 1;
  }
  else
  {
    if ( strncmp(v90, "NETWORK", 7uLL) )
    {
      if ( !strncmp(v90, "DSREPAIR", 8uLL) )
      {
        LODWORD(InitSafeBootMode) = 3;
        v91 = 17LL;
      }
      else
      {
        LODWORD(InitSafeBootMode) = 0;
        v91 = 9LL;
      }
      goto LABEL_186;
    }
    LODWORD(InitSafeBootMode) = 2;
  }
  v91 = 16LL;
LABEL_186:
  if ( v66[v91] )
  {
    v92 = strncmp(&v66[v91], "(ALTERNATESHELL)", 0x10uLL);
    v93 = (unsigned __int8)v101;
    if ( !v92 )
      v93 = 1;
    v101 = v93;
  }
  if ( !(_DWORD)InitSafeBootMode )
    goto LABEL_94;
  v106 = 0LL;
  v94 = 0;
  switch ( (_DWORD)InitSafeBootMode )
  {
    case 1:
      v94 = 168;
      break;
    case 2:
      v94 = 169;
      break;
    case 3:
      v94 = 170;
      break;
  }
  if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v94, &v106) >= 0 )
    InbvDisplayString((__int64)v106->Text, v95);
  v31 = (__int64)v107;
LABEL_95:
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 240) + 132LL) & 0x800) != 0 )
  {
    if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0xB7u, &v102) >= 0 )
      InbvDisplayString((__int64)v102->Text, v96);
    sub_1409346B0(BugCheckParameter3, v31);
  }
  sub_140B1BBE4();
  MEMORY[0xFFFFF780000002D6] = sub_140B24BE4();
  if ( byte_140C4E508 )
    sub_140B4B5E0();
  v67 = sub_140B2BE4C(BugCheckParameter3);
  if ( v67 < 0 )
    KeBugCheckEx(0x32u, v67, 0x69436553uLL, 0LL, 0LL);
  dword_140C09800 = 0;
  v68 = sub_140B30D14();
  if ( v68 < 0 )
    KeBugCheckEx(0x32u, v68, 8uLL, 0LL, 0LL);
  if ( !(unsigned __int8)sub_140B026CC(1LL, BugCheckParameter3, v69) )
    goto LABEL_206;
  KeWaitForSingleObject(&stru_140C51E68, Executive, 0, 0, 0LL);
  return v101;
}
