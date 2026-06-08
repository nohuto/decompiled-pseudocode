/*
 * XREFs of AcpiEval_CPC @ 0x1C00264CC
 * Callers:
 *     InitAcpiCpc @ 0x1C0024398 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 *     AcpiEvaluateMethod @ 0x1C0028B0C (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0029150 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C002A38C (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall AcpiEval_CPC(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r15
  _DWORD *Pool2; // rdi
  int v5; // ebx
  _DWORD *v6; // r14
  unsigned __int16 v7; // r9
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // edx
  char v12; // al
  unsigned int *v13; // rsi
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v17; // [rsp+50h] [rbp-B0h]
  _BYTE v18[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v19; // [rsp+62h] [rbp-9Eh]
  const char *v20; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v21)(); // [rsp+70h] [rbp-90h]
  char v22; // [rsp+78h] [rbp-88h]
  int v23; // [rsp+7Ah] [rbp-86h]
  const char *v24; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v25)(); // [rsp+88h] [rbp-78h]
  char v26; // [rsp+90h] [rbp-70h]
  int v27; // [rsp+92h] [rbp-6Eh]
  const char *v28; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall *v29)(); // [rsp+A0h] [rbp-60h]
  char v30; // [rsp+A8h] [rbp-58h]
  int v31; // [rsp+AAh] [rbp-56h]
  const char *v32; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v33)(); // [rsp+B8h] [rbp-48h]
  char v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C2h] [rbp-3Eh]
  const char *v36; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v37)(); // [rsp+D0h] [rbp-30h]
  char v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+DAh] [rbp-26h]
  const char *v40; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v41)(); // [rsp+E8h] [rbp-18h]
  char v42; // [rsp+F0h] [rbp-10h]
  int v43; // [rsp+F2h] [rbp-Eh]
  const char *v44; // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v45)(); // [rsp+100h] [rbp+0h]
  char v46; // [rsp+108h] [rbp+8h]
  int v47; // [rsp+10Ah] [rbp+Ah]
  const char *v48; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v49)(); // [rsp+118h] [rbp+18h]
  char v50; // [rsp+120h] [rbp+20h]
  int v51; // [rsp+122h] [rbp+22h]
  const char *v52; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v53)(); // [rsp+130h] [rbp+30h]
  char v54; // [rsp+138h] [rbp+38h]
  int v55; // [rsp+13Ah] [rbp+3Ah]
  const char *v56; // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v57)(); // [rsp+148h] [rbp+48h]
  char v58; // [rsp+150h] [rbp+50h]
  int v59; // [rsp+152h] [rbp+52h]
  const char *v60; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v61)(); // [rsp+160h] [rbp+60h]
  char v62; // [rsp+168h] [rbp+68h]
  int v63; // [rsp+16Ah] [rbp+6Ah]
  const char *v64; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v65)(); // [rsp+178h] [rbp+78h]
  char v66; // [rsp+180h] [rbp+80h]
  int v67; // [rsp+182h] [rbp+82h]
  const char *v68; // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v69)(); // [rsp+190h] [rbp+90h]
  char v70; // [rsp+198h] [rbp+98h]
  int v71; // [rsp+19Ah] [rbp+9Ah]
  const char *v72; // [rsp+1A0h] [rbp+A0h]
  __int64 (__fastcall *v73)(); // [rsp+1A8h] [rbp+A8h]
  char v74; // [rsp+1B0h] [rbp+B0h]
  int v75; // [rsp+1B2h] [rbp+B2h]
  const char *v76; // [rsp+1B8h] [rbp+B8h]
  __int64 (__fastcall *v77)(); // [rsp+1C0h] [rbp+C0h]
  char v78; // [rsp+1C8h] [rbp+C8h]
  int v79; // [rsp+1CAh] [rbp+CAh]
  const char *v80; // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v81)(); // [rsp+1D8h] [rbp+D8h]
  char v82; // [rsp+1E0h] [rbp+E0h]
  int v83; // [rsp+1E2h] [rbp+E2h]
  const char *v84; // [rsp+1E8h] [rbp+E8h]
  __int64 (__fastcall *v85)(); // [rsp+1F0h] [rbp+F0h]
  char v86; // [rsp+1F8h] [rbp+F8h]
  int v87; // [rsp+1FAh] [rbp+FAh]
  const char *v88; // [rsp+200h] [rbp+100h]
  __int64 (__fastcall *v89)(); // [rsp+208h] [rbp+108h]
  char v90; // [rsp+210h] [rbp+110h]
  int v91; // [rsp+212h] [rbp+112h]
  const char *v92; // [rsp+218h] [rbp+118h]
  __int64 (__fastcall *v93)(); // [rsp+220h] [rbp+120h]
  char v94; // [rsp+228h] [rbp+128h]
  int v95; // [rsp+22Ah] [rbp+12Ah]
  const char *v96; // [rsp+230h] [rbp+130h]
  __int64 (__fastcall *v97)(); // [rsp+238h] [rbp+138h]
  char v98; // [rsp+240h] [rbp+140h]
  int v99; // [rsp+242h] [rbp+142h]
  const char *v100; // [rsp+248h] [rbp+148h]
  __int64 (__fastcall *v101)(); // [rsp+250h] [rbp+150h]
  char v102; // [rsp+258h] [rbp+158h]
  int v103; // [rsp+25Ah] [rbp+15Ah]
  const char *v104; // [rsp+260h] [rbp+160h]
  __int64 (__fastcall *v105)(); // [rsp+268h] [rbp+168h]
  char v106; // [rsp+270h] [rbp+170h]
  int v107; // [rsp+272h] [rbp+172h]
  const char *v108; // [rsp+278h] [rbp+178h]
  __int64 (__fastcall *v109)(); // [rsp+280h] [rbp+180h]
  char v110; // [rsp+288h] [rbp+188h]
  int v111; // [rsp+28Ah] [rbp+18Ah]
  const char *v112; // [rsp+290h] [rbp+190h]
  __int64 (__fastcall *v113)(); // [rsp+298h] [rbp+198h]
  char v114; // [rsp+2A0h] [rbp+1A0h]
  int v115; // [rsp+2A2h] [rbp+1A2h]
  const char *v116; // [rsp+2A8h] [rbp+1A8h]
  __int64 (__fastcall *v117)(); // [rsp+2B0h] [rbp+1B0h]
  char v118; // [rsp+2B8h] [rbp+1B8h]
  int v119; // [rsp+2BAh] [rbp+1BAh]
  const char *v120; // [rsp+2C0h] [rbp+1C0h]
  __int64 (__fastcall *v121)(); // [rsp+2C8h] [rbp+1C8h]
  char v122; // [rsp+2D0h] [rbp+1D0h]
  int v123; // [rsp+2D2h] [rbp+1D2h]
  const char *v124; // [rsp+2D8h] [rbp+1D8h]
  __int64 (__fastcall *v125)(); // [rsp+2E0h] [rbp+1E0h]
  char v126; // [rsp+2E8h] [rbp+1E8h]
  int v127; // [rsp+2EAh] [rbp+1EAh]
  const char *v128; // [rsp+2F0h] [rbp+1F0h]
  __int64 (__fastcall *v129)(); // [rsp+2F8h] [rbp+1F8h]
  char v130; // [rsp+300h] [rbp+200h]
  int v131; // [rsp+302h] [rbp+202h]
  const char *v132; // [rsp+308h] [rbp+208h]
  __int64 (__fastcall *v133)(); // [rsp+310h] [rbp+210h]
  char v134; // [rsp+318h] [rbp+218h]
  int v135; // [rsp+31Ah] [rbp+21Ah]
  const char *v136; // [rsp+320h] [rbp+220h]
  __int64 (__fastcall *v137)(); // [rsp+328h] [rbp+228h]
  char v138; // [rsp+330h] [rbp+230h]
  int v139; // [rsp+332h] [rbp+232h]
  const char *v140; // [rsp+338h] [rbp+238h]
  __int64 (__fastcall *v141)(); // [rsp+340h] [rbp+240h]

  v17 = a2;
  v22 = 1;
  v15 = 0;
  v18[0] = 0;
  v20 = "NumEntries";
  v19 = 0;
  v24 = "Revision";
  v21 = AcpiParseULong;
  v28 = "HighestPerformance";
  v32 = "HighestPerformance";
  v23 = 0x40000;
  v36 = "NominalPerformance";
  v40 = "NominalPerformance";
  v44 = "LowestNonlinearPerformance";
  v48 = "LowestNonlinearPerformance";
  v52 = "LowestPerformance";
  v56 = "LowestPerformance";
  v60 = "GuaranteedPerformance";
  v64 = "DesiredPerformance";
  v68 = "MinimumPerformance";
  v72 = "MaximumPerformance";
  v76 = "PerformanceReductionTolerance";
  v25 = AcpiParseULong;
  v26 = 2;
  v27 = 0x80000;
  v29 = AcpiParseStaticRegister;
  v30 = 2;
  v31 = 524290;
  v33 = AcpiParseRegister;
  v34 = 3;
  v35 = 0x200000;
  v37 = AcpiParseStaticRegister;
  v38 = 3;
  v39 = 2097154;
  v41 = AcpiParseRegister;
  v42 = 4;
  v43 = 3670016;
  v45 = AcpiParseStaticRegister;
  v46 = 4;
  v47 = 3670018;
  v49 = AcpiParseRegister;
  v50 = 5;
  v51 = 5242880;
  v53 = AcpiParseStaticRegister;
  v54 = 5;
  v55 = 5242882;
  v57 = AcpiParseRegister;
  v58 = 6;
  v59 = 6815746;
  v61 = AcpiParseRegister;
  v62 = 7;
  v63 = 8388610;
  v65 = AcpiParseRegister;
  v66 = 8;
  v67 = 9961474;
  v69 = AcpiParseRegister;
  v70 = 9;
  v71 = 11534338;
  v73 = AcpiParseRegister;
  v74 = 10;
  v75 = 13107202;
  v77 = AcpiParseRegister;
  v78 = 11;
  v80 = "TimeWindow";
  v3 = 21LL;
  v79 = 14680066;
  v84 = "CounterWraparound";
  Pool2 = 0LL;
  v81 = AcpiParseRegister;
  v88 = "ReferenceCounter";
  v92 = "DeliveredCounter";
  v96 = "PerformanceLimited";
  v100 = "Enable";
  v104 = "AutonomousEnable";
  v108 = "AutonomousEnable";
  v112 = "AutonomousActivityWindow";
  v116 = "EnergyPerformancePreference";
  v120 = "ReferencePerformance";
  v124 = "ReferencePerformance";
  v128 = "LowestFrequency";
  v132 = "LowestFrequency";
  v136 = "NominalFrequency";
  v140 = "NominalFrequency";
  v82 = 12;
  v83 = 16252930;
  v85 = AcpiParseRegister;
  v86 = 13;
  v87 = 17825794;
  v89 = AcpiParseRegister;
  v90 = 14;
  v91 = 19398658;
  v93 = AcpiParseRegister;
  v94 = 15;
  v95 = 20971522;
  v97 = AcpiParseRegister;
  v98 = 16;
  v99 = 22544386;
  v101 = AcpiParseRegister;
  v102 = 17;
  v103 = 24117248;
  v105 = AcpiParseStaticRegister;
  v106 = 17;
  v107 = 24117250;
  v109 = AcpiParseRegister;
  v110 = 18;
  v111 = 25690114;
  v113 = AcpiParseRegister;
  v114 = 19;
  v115 = 27262978;
  v117 = AcpiParseRegister;
  v118 = 20;
  v119 = 28835840;
  v121 = AcpiParseStaticRegister;
  v122 = 20;
  v123 = 28835842;
  v125 = AcpiParseRegister;
  v126 = 21;
  v127 = 30408704;
  v129 = AcpiParseStaticRegister;
  v130 = 21;
  v131 = 30408706;
  v133 = AcpiParseRegister;
  v134 = 22;
  v135 = 31981568;
  v137 = AcpiParseStaticRegister;
  v138 = 22;
  v139 = 31981570;
  v141 = AcpiParseRegister;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x40000u);
  v5 = AcpiEvaluateMethod(a1, 1129333599, 0, (unsigned int)&P, (__int64)&v15);
  if ( v5 < 0 )
    goto LABEL_26;
  *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x8000000;
  if ( !v15 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x2Fu,
        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
    v5 = -1073741275;
    goto LABEL_26;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 512LL, 1919119952LL);
  if ( !Pool2 )
  {
    v5 = -1073741670;
    goto LABEL_26;
  }
  v6 = P;
  v5 = AcpiParseCore(
         (unsigned int)v18,
         2,
         (int)P + 12,
         *((_DWORD *)P + 1) - 12,
         (__int64)Pool2,
         512,
         (__int64)"_CPC",
         1);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_26;
    v7 = 48;
LABEL_11:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v7,
      (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
    goto LABEL_26;
  }
  v8 = Pool2[1];
  if ( !v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x31u,
        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
    v5 = -1072431089;
    goto LABEL_26;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = 31;
      v12 = v10 != 1;
      v13 = (unsigned int *)&Cpc3RegisterTable;
    }
    else
    {
      v11 = 27;
      v12 = 0;
      v13 = (unsigned int *)&Cpc2RegisterTable;
      v3 = 19LL;
    }
  }
  else
  {
    v11 = 21;
    v12 = 0;
    v13 = (unsigned int *)&CpcRegisterTable;
    v3 = 15LL;
  }
  v5 = AcpiParseCore((unsigned int)v18, v11, (int)v6 + 12, v6[1] - 12, (__int64)Pool2, 512, (__int64)"_CPC", v12);
  if ( v5 >= 0 )
  {
    do
    {
      AcpiTranslateAccessSize((char *)Pool2 + *v13);
      v13 += 6;
      --v3;
    }
    while ( v3 );
    *v17 = Pool2;
    goto LABEL_29;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 50;
    goto LABEL_11;
  }
LABEL_26:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x40000u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)0);
  v6 = P;
LABEL_29:
  if ( v6 )
    ExFreePoolWithTag(v6, (ULONG)0);
  return (unsigned int)v5;
}
