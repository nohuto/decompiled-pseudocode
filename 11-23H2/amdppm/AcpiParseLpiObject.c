/*
 * XREFs of AcpiParseLpiObject @ 0x1C0029CE0
 * Callers:
 *     AcpiEval_LPI @ 0x1C0027BB0 (AcpiEval_LPI.c)
 *     AcpiParseProcessorContainer @ 0x1C002A6A8 (AcpiParseProcessorContainer.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_S @ 0x1C00059E8 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1C0006AC0 (WPP_RECORDER_SF_SD.c)
 *     WPP_RECORDER_SF_SDD @ 0x1C0006C14 (WPP_RECORDER_SF_SDD.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0006D90 (WPP_RECORDER_SF_Sd.c)
 *     memmove @ 0x1C000C580 (memmove.c)
 *     AcpiParseCore @ 0x1C0029A00 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C002AC3C (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall AcpiParseLpiObject(__int64 a1, const wchar_t *a2, char a3, _QWORD *a4)
{
  __int64 v6; // r9
  unsigned int v7; // ebx
  unsigned __int16 v8; // r9
  unsigned int v9; // ecx
  int v10; // r13d
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned __int16 *v14; // rsi
  __int64 v15; // rdx
  size_t v16; // r14
  __int64 v17; // rcx
  int v18; // r12d
  unsigned __int16 v19; // r9
  unsigned int v20; // ebx
  __int64 v21; // rax
  char *v22; // r14
  __int64 v23; // rcx
  int v24; // r12d
  __int64 Pool2; // rax
  _DWORD *v26; // rsi
  __int64 v27; // rdx
  unsigned __int16 v28; // cx
  unsigned int v29; // ebx
  __int64 v30; // rax
  char *v31; // r13
  unsigned int v32; // r14d
  __int64 v33; // rcx
  unsigned __int8 *v34; // rcx
  __int64 v35; // r12
  __int64 v36; // rdx
  __int64 v37; // r8
  _BYTE *v38; // rcx
  _BYTE *v39; // rcx
  _BYTE *v40; // rcx
  unsigned __int16 v41; // cx
  __int64 v42; // rax
  unsigned __int16 v43; // r9
  unsigned __int16 v44; // r9
  unsigned int i; // edi
  __int64 v46; // rcx
  int v48; // [rsp+20h] [rbp-E0h]
  __int64 v49; // [rsp+30h] [rbp-D0h]
  int v51; // [rsp+44h] [rbp-BCh]
  __int64 v52; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v53; // [rsp+50h] [rbp-B0h]
  char v54; // [rsp+60h] [rbp-A0h] BYREF
  int v55; // [rsp+62h] [rbp-9Eh]
  const char *v56; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v57)(); // [rsp+70h] [rbp-90h]
  char v58; // [rsp+78h] [rbp-88h]
  int v59; // [rsp+7Ah] [rbp-86h]
  const char *v60; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v61)(); // [rsp+88h] [rbp-78h]
  char v62; // [rsp+90h] [rbp-70h]
  int v63; // [rsp+92h] [rbp-6Eh]
  const char *v64; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall *v65)(); // [rsp+A0h] [rbp-60h]
  char v66; // [rsp+A8h] [rbp-58h]
  int v67; // [rsp+AAh] [rbp-56h]
  const char *v68; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v69)(); // [rsp+B8h] [rbp-48h]
  char v70; // [rsp+C0h] [rbp-40h]
  int v71; // [rsp+C2h] [rbp-3Eh]
  const char *v72; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v73)(); // [rsp+D0h] [rbp-30h]
  char v74; // [rsp+D8h] [rbp-28h]
  int v75; // [rsp+DAh] [rbp-26h]
  const char *v76; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v77)(); // [rsp+E8h] [rbp-18h]
  char v78; // [rsp+F0h] [rbp-10h]
  int v79; // [rsp+F2h] [rbp-Eh]
  const char *v80; // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v81)(); // [rsp+100h] [rbp+0h]
  char v82; // [rsp+108h] [rbp+8h]
  int v83; // [rsp+10Ah] [rbp+Ah]
  const char *v84; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v85)(); // [rsp+118h] [rbp+18h]
  char v86; // [rsp+120h] [rbp+20h]
  int v87; // [rsp+122h] [rbp+22h]
  const char *v88; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v89)(); // [rsp+130h] [rbp+30h]
  char v90; // [rsp+138h] [rbp+38h]
  int v91; // [rsp+13Ah] [rbp+3Ah]
  const char *v92; // [rsp+140h] [rbp+40h]
  NTSTATUS (__fastcall *v93)(__int64, struct _UNICODE_STRING *, unsigned int); // [rsp+148h] [rbp+48h]
  char v94; // [rsp+150h] [rbp+50h] BYREF
  int v95; // [rsp+152h] [rbp+52h]
  const char *v96; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v97)(); // [rsp+160h] [rbp+60h]
  char v98; // [rsp+168h] [rbp+68h]
  int v99; // [rsp+16Ah] [rbp+6Ah]
  const char *v100; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v101)(); // [rsp+178h] [rbp+78h]
  char v102; // [rsp+180h] [rbp+80h]
  int v103; // [rsp+182h] [rbp+82h]
  const char *v104; // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v105)(); // [rsp+190h] [rbp+90h]
  char v106; // [rsp+198h] [rbp+98h]
  int v107; // [rsp+19Ah] [rbp+9Ah]
  const char *v108; // [rsp+1A0h] [rbp+A0h]
  __int64 (__fastcall *v109)(); // [rsp+1A8h] [rbp+A8h]
  char v110; // [rsp+1B0h] [rbp+B0h]
  int v111; // [rsp+1B2h] [rbp+B2h]
  const char *v112; // [rsp+1B8h] [rbp+B8h]
  __int64 (__fastcall *v113)(); // [rsp+1C0h] [rbp+C0h]
  char v114; // [rsp+1C8h] [rbp+C8h]
  int v115; // [rsp+1CAh] [rbp+CAh]
  const char *v116; // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v117)(); // [rsp+1D8h] [rbp+D8h]
  char v118; // [rsp+1E0h] [rbp+E0h]
  int v119; // [rsp+1E2h] [rbp+E2h]
  const char *v120; // [rsp+1E8h] [rbp+E8h]
  __int64 (__fastcall *v121)(); // [rsp+1F0h] [rbp+F0h]
  char v122; // [rsp+1F8h] [rbp+F8h]
  int v123; // [rsp+1FAh] [rbp+FAh]
  const char *v124; // [rsp+200h] [rbp+100h]
  __int64 (__fastcall *v125)(); // [rsp+208h] [rbp+108h]
  char v126; // [rsp+210h] [rbp+110h]
  int v127; // [rsp+212h] [rbp+112h]
  const char *v128; // [rsp+218h] [rbp+118h]
  __int64 (__fastcall *v129)(); // [rsp+220h] [rbp+120h]
  char v130; // [rsp+228h] [rbp+128h]
  int v131; // [rsp+22Ah] [rbp+12Ah]
  const char *v132; // [rsp+230h] [rbp+130h]
  __int64 (__fastcall *v133)(); // [rsp+238h] [rbp+138h]
  char v134; // [rsp+240h] [rbp+140h]
  int v135; // [rsp+242h] [rbp+142h]
  const char *v136; // [rsp+248h] [rbp+148h]
  NTSTATUS (__fastcall *v137)(__int64, struct _UNICODE_STRING *, unsigned int); // [rsp+250h] [rbp+150h]

  v56 = "MinimumResidency";
  v53 = a4;
  v54 = 0;
  v55 = 0;
  v57 = AcpiParseULong;
  v58 = 1;
  v61 = AcpiParseULong;
  v65 = AcpiParseULong;
  v68 = "ArchitectureFlags";
  v60 = "WakeupLatency";
  v94 = 0;
  v95 = 0;
  v69 = AcpiParseULong;
  v96 = "MinimumResidency";
  v70 = 4;
  v97 = AcpiParseULong;
  v73 = AcpiParseULong;
  v100 = "WakeupLatency";
  v77 = AcpiParseULong;
  v101 = AcpiParseULong;
  v64 = "Flags";
  v81 = AcpiParseRegister;
  v85 = AcpiParseRegister;
  v86 = 8;
  v89 = AcpiParseRegister;
  v104 = "Flags";
  v59 = 0x40000;
  v62 = 2;
  v63 = 0x80000;
  v66 = 3;
  v67 = 786432;
  v71 = 0x100000;
  v72 = "ResidencyCounterFrequency";
  v74 = 5;
  v75 = 1310720;
  v76 = "EnabledParentState";
  v78 = 6;
  v79 = 1572866;
  v80 = "EntryMethod";
  v82 = 7;
  v83 = 2359298;
  v84 = "ResidencyCounter";
  v87 = 3145730;
  v88 = "UsageCounter";
  v90 = 9;
  v91 = 4194305;
  v92 = "StateName";
  v93 = AcpiParseAnsiString;
  v98 = 1;
  v99 = 0x40000;
  v102 = 2;
  v103 = 0x80000;
  v116 = "EnabledParentState";
  v105 = AcpiParseULong;
  v121 = AcpiParseRegisterOrQword;
  v108 = "ArchitectureFlags";
  v128 = "ResidencyCounter";
  v6 = *(unsigned int *)(a1 + 4);
  v125 = AcpiParseStaticRegister;
  v120 = "EntryMethod";
  v124 = "EntryMethod";
  v109 = AcpiParseULong;
  v113 = AcpiParseULong;
  v117 = AcpiParseULong;
  v112 = "ResidencyCounterFrequency";
  v129 = AcpiParseRegister;
  v133 = AcpiParseRegister;
  v106 = 3;
  v107 = 786432;
  v110 = 4;
  v111 = 0x100000;
  v114 = 5;
  v115 = 1310720;
  v118 = 6;
  v119 = 1572866;
  v122 = 6;
  v123 = 1572864;
  v126 = 7;
  v127 = 2359298;
  v130 = 8;
  v131 = 3145730;
  v132 = "UsageCounter";
  v134 = 9;
  v135 = 4194305;
  v136 = "StateName";
  v137 = AcpiParseAnsiString;
  if ( !*(_DWORD *)(a1 + 8) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x33u,
        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
        a2);
    return (unsigned int)-1073741275;
  }
  if ( *(_WORD *)(a1 + 12) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v8 = 52;
LABEL_8:
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v8,
      (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
      a2);
    return (unsigned int)-1072431096;
  }
  v9 = *(unsigned __int16 *)(a1 + 14);
  v10 = *(_DWORD *)(a1 + 16);
  v11 = 4LL;
  if ( (unsigned __int16)v9 >= 4u )
    v11 = v9;
  v12 = -4 - v11 + v6 - 12;
  v13 = 4LL;
  if ( (unsigned __int16)v9 >= 4u )
    v13 = *(unsigned __int16 *)(a1 + 14);
  v14 = (unsigned __int16 *)(v13 + a1 + 16);
  if ( v12 < 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Sd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v11,
        4LL,
        0x35u,
        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
        a2,
        -4 - v11 + v6 - 12);
    return (unsigned int)-1072431096;
  }
  if ( (unsigned __int64)v14 >= a1 + v6 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v8 = 54;
    goto LABEL_8;
  }
  v15 = *v14;
  if ( (v15 & 0xFFFD) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v8 = 55;
    goto LABEL_8;
  }
  v16 = v14[1];
  v17 = 4LL;
  if ( (unsigned __int16)v16 >= 4u )
    v17 = v14[1];
  v18 = v14[1];
  if ( v12 < (unsigned __int64)(v17 + 4) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v19 = 56;
LABEL_28:
    WPP_RECORDER_SF_SD((__int64)WPP_GLOBAL_Control->DeviceExtension, v15, 4LL, v19, v48, a2);
    return (unsigned int)-1072431096;
  }
  if ( (_WORD)v15 )
  {
    if ( (unsigned __int16)v16 > 8u )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1072431096;
      v8 = 57;
      goto LABEL_8;
    }
    v52 = 0LL;
    memmove(&v52, v14 + 2, v16);
  }
  else
  {
    v52 = *((unsigned int *)v14 + 1);
  }
  if ( (unsigned __int16)v16 < 4u )
    v18 = 4;
  v20 = -4 - v18 + v12;
  if ( (unsigned __int16)v16 >= 4u )
  {
    _mm_lfence();
    v21 = v14[1];
  }
  else
  {
    v21 = 4LL;
  }
  v22 = (char *)v14 + v21 + 4;
  if ( v20 < 8 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v19 = 58;
    goto LABEL_28;
  }
  if ( (unsigned __int64)v22 >= a1 + (unsigned __int64)*(unsigned int *)(a1 + 4) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v8 = 59;
    goto LABEL_8;
  }
  if ( *(_WORD *)v22 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v8 = 60;
    goto LABEL_8;
  }
  v23 = 4LL;
  if ( *((_WORD *)v22 + 1) >= 4u )
    v23 = *((unsigned __int16 *)v22 + 1);
  if ( v20 < (unsigned __int64)(v23 + 4) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v19 = 61;
    goto LABEL_28;
  }
  _mm_lfence();
  v24 = *((_DWORD *)v22 + 1);
  v51 = v24;
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(80 * v24 + 24), 1919119952LL);
  v26 = (_DWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_DWORD *)Pool2 = v10;
  v27 = 4LL;
  *(_QWORD *)(Pool2 + 8) = v52;
  *(_DWORD *)(Pool2 + 16) = v24;
  v28 = *((_WORD *)v22 + 1);
  if ( v28 >= 4u )
    v27 = *((unsigned __int16 *)v22 + 1);
  v29 = -4 - v27 + v20;
  if ( v28 >= 4u )
  {
    _mm_lfence();
    v30 = *((unsigned __int16 *)v22 + 1);
  }
  else
  {
    v30 = 4LL;
  }
  v31 = &v22[v30 + 4];
  v32 = 0;
  if ( (unsigned __int64)v31 >= a1 + (unsigned __int64)*(unsigned int *)(a1 + 4) )
  {
LABEL_82:
    if ( v32 == v24 )
    {
      if ( v32 )
      {
        v7 = 0;
        *v53 = v26;
        return v7;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_101;
      v43 = 68;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_101;
      v43 = 67;
    }
  }
  else
  {
    while ( v32 != v24 )
    {
      if ( v29 < 8 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v44 = 63;
LABEL_90:
          WPP_RECORDER_SF_SDD((__int64)WPP_GLOBAL_Control->DeviceExtension, v27, 4LL, v44, v48, a2);
          goto LABEL_101;
        }
        goto LABEL_101;
      }
      if ( *(_WORD *)v31 != 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_SD((__int64)WPP_GLOBAL_Control->DeviceExtension, v27, 4LL, 0x40u, v48, a2);
        goto LABEL_101;
      }
      v27 = *((unsigned __int16 *)v31 + 1);
      v33 = 4LL;
      if ( (unsigned __int16)v27 >= 4u )
        v33 = *((unsigned __int16 *)v31 + 1);
      if ( v29 < (unsigned __int64)(v33 + 4) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_101;
        v44 = 65;
        goto LABEL_90;
      }
      v34 = (unsigned __int8 *)&v94;
      v35 = 20LL * v32;
      if ( !a3 )
        v34 = (unsigned __int8 *)&v54;
      if ( (int)AcpiParseCore(
                  v34,
                  (unsigned int)(a3 != 0) + 10,
                  (__int64)(v31 + 4),
                  *((unsigned __int16 *)v31 + 1),
                  (__int64)&v26[v35 + 6],
                  80,
                  "_LPI",
                  1) < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v49) = v32 + 3;
          WPP_RECORDER_SF_Sd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v36,
            v37,
            0x42u,
            (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
            a2,
            v49);
        }
        v7 = -1072431089;
        goto LABEL_102;
      }
      v38 = &v26[v35 + 12];
      if ( *v38 != 127 )
        AcpiTranslateAccessSize(v38, v36);
      v39 = &v26[v35 + 15];
      if ( *v39 != 127 )
        AcpiTranslateAccessSize(v39, v36);
      v40 = &v26[v35 + 18];
      if ( *v40 != 127 )
        AcpiTranslateAccessSize(v40, v36);
      v41 = *((_WORD *)v31 + 1);
      v27 = 4LL;
      if ( v41 >= 4u )
        v27 = *((unsigned __int16 *)v31 + 1);
      v29 += -4 - v27;
      v42 = 4LL;
      if ( v41 >= 4u )
        v42 = *((unsigned __int16 *)v31 + 1);
      v24 = v51;
      v31 += v42 + 4;
      ++v32;
      if ( (unsigned __int64)v31 >= a1 + (unsigned __int64)*(unsigned int *)(a1 + 4) )
        goto LABEL_82;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_101;
    v43 = 62;
  }
  WPP_RECORDER_SF_S(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    1u,
    v43,
    (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
    a2);
LABEL_101:
  v7 = -1072431096;
LABEL_102:
  for ( i = 0; i < v26[4]; ++i )
  {
    v46 = 20LL * i;
    if ( *(_QWORD *)&v26[v46 + 24] )
      RtlFreeUnicodeString((PUNICODE_STRING)&v26[v46 + 22]);
  }
  ExFreePoolWithTag(v26, (ULONG)0);
  return v7;
}
