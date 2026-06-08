/*
 * XREFs of AcpiEval_CPC @ 0x1C0026D7C
 * Callers:
 *     InitAcpiCpc @ 0x1C0024C48 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00025DC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     AcpiEvaluateMethod @ 0x1C00293BC (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0029A00 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C002AC3C (AcpiTranslateAccessSize.c)
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
  __int64 v14; // rdx
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v18; // [rsp+50h] [rbp-B0h]
  _BYTE v19[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v20; // [rsp+62h] [rbp-9Eh]
  const char *v21; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v22)(); // [rsp+70h] [rbp-90h]
  char v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ah] [rbp-86h]
  const char *v25; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v26)(); // [rsp+88h] [rbp-78h]
  char v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+92h] [rbp-6Eh]
  const char *v29; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall *v30)(); // [rsp+A0h] [rbp-60h]
  char v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+AAh] [rbp-56h]
  const char *v33; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v34)(); // [rsp+B8h] [rbp-48h]
  char v35; // [rsp+C0h] [rbp-40h]
  int v36; // [rsp+C2h] [rbp-3Eh]
  const char *v37; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v38)(); // [rsp+D0h] [rbp-30h]
  char v39; // [rsp+D8h] [rbp-28h]
  int v40; // [rsp+DAh] [rbp-26h]
  const char *v41; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v42)(); // [rsp+E8h] [rbp-18h]
  char v43; // [rsp+F0h] [rbp-10h]
  int v44; // [rsp+F2h] [rbp-Eh]
  const char *v45; // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v46)(); // [rsp+100h] [rbp+0h]
  char v47; // [rsp+108h] [rbp+8h]
  int v48; // [rsp+10Ah] [rbp+Ah]
  const char *v49; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v50)(); // [rsp+118h] [rbp+18h]
  char v51; // [rsp+120h] [rbp+20h]
  int v52; // [rsp+122h] [rbp+22h]
  const char *v53; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v54)(); // [rsp+130h] [rbp+30h]
  char v55; // [rsp+138h] [rbp+38h]
  int v56; // [rsp+13Ah] [rbp+3Ah]
  const char *v57; // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v58)(); // [rsp+148h] [rbp+48h]
  char v59; // [rsp+150h] [rbp+50h]
  int v60; // [rsp+152h] [rbp+52h]
  const char *v61; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v62)(); // [rsp+160h] [rbp+60h]
  char v63; // [rsp+168h] [rbp+68h]
  int v64; // [rsp+16Ah] [rbp+6Ah]
  const char *v65; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v66)(); // [rsp+178h] [rbp+78h]
  char v67; // [rsp+180h] [rbp+80h]
  int v68; // [rsp+182h] [rbp+82h]
  const char *v69; // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v70)(); // [rsp+190h] [rbp+90h]
  char v71; // [rsp+198h] [rbp+98h]
  int v72; // [rsp+19Ah] [rbp+9Ah]
  const char *v73; // [rsp+1A0h] [rbp+A0h]
  __int64 (__fastcall *v74)(); // [rsp+1A8h] [rbp+A8h]
  char v75; // [rsp+1B0h] [rbp+B0h]
  int v76; // [rsp+1B2h] [rbp+B2h]
  const char *v77; // [rsp+1B8h] [rbp+B8h]
  __int64 (__fastcall *v78)(); // [rsp+1C0h] [rbp+C0h]
  char v79; // [rsp+1C8h] [rbp+C8h]
  int v80; // [rsp+1CAh] [rbp+CAh]
  const char *v81; // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v82)(); // [rsp+1D8h] [rbp+D8h]
  char v83; // [rsp+1E0h] [rbp+E0h]
  int v84; // [rsp+1E2h] [rbp+E2h]
  const char *v85; // [rsp+1E8h] [rbp+E8h]
  __int64 (__fastcall *v86)(); // [rsp+1F0h] [rbp+F0h]
  char v87; // [rsp+1F8h] [rbp+F8h]
  int v88; // [rsp+1FAh] [rbp+FAh]
  const char *v89; // [rsp+200h] [rbp+100h]
  __int64 (__fastcall *v90)(); // [rsp+208h] [rbp+108h]
  char v91; // [rsp+210h] [rbp+110h]
  int v92; // [rsp+212h] [rbp+112h]
  const char *v93; // [rsp+218h] [rbp+118h]
  __int64 (__fastcall *v94)(); // [rsp+220h] [rbp+120h]
  char v95; // [rsp+228h] [rbp+128h]
  int v96; // [rsp+22Ah] [rbp+12Ah]
  const char *v97; // [rsp+230h] [rbp+130h]
  __int64 (__fastcall *v98)(); // [rsp+238h] [rbp+138h]
  char v99; // [rsp+240h] [rbp+140h]
  int v100; // [rsp+242h] [rbp+142h]
  const char *v101; // [rsp+248h] [rbp+148h]
  __int64 (__fastcall *v102)(); // [rsp+250h] [rbp+150h]
  char v103; // [rsp+258h] [rbp+158h]
  int v104; // [rsp+25Ah] [rbp+15Ah]
  const char *v105; // [rsp+260h] [rbp+160h]
  __int64 (__fastcall *v106)(); // [rsp+268h] [rbp+168h]
  char v107; // [rsp+270h] [rbp+170h]
  int v108; // [rsp+272h] [rbp+172h]
  const char *v109; // [rsp+278h] [rbp+178h]
  __int64 (__fastcall *v110)(); // [rsp+280h] [rbp+180h]
  char v111; // [rsp+288h] [rbp+188h]
  int v112; // [rsp+28Ah] [rbp+18Ah]
  const char *v113; // [rsp+290h] [rbp+190h]
  __int64 (__fastcall *v114)(); // [rsp+298h] [rbp+198h]
  char v115; // [rsp+2A0h] [rbp+1A0h]
  int v116; // [rsp+2A2h] [rbp+1A2h]
  const char *v117; // [rsp+2A8h] [rbp+1A8h]
  __int64 (__fastcall *v118)(); // [rsp+2B0h] [rbp+1B0h]
  char v119; // [rsp+2B8h] [rbp+1B8h]
  int v120; // [rsp+2BAh] [rbp+1BAh]
  const char *v121; // [rsp+2C0h] [rbp+1C0h]
  __int64 (__fastcall *v122)(); // [rsp+2C8h] [rbp+1C8h]
  char v123; // [rsp+2D0h] [rbp+1D0h]
  int v124; // [rsp+2D2h] [rbp+1D2h]
  const char *v125; // [rsp+2D8h] [rbp+1D8h]
  __int64 (__fastcall *v126)(); // [rsp+2E0h] [rbp+1E0h]
  char v127; // [rsp+2E8h] [rbp+1E8h]
  int v128; // [rsp+2EAh] [rbp+1EAh]
  const char *v129; // [rsp+2F0h] [rbp+1F0h]
  __int64 (__fastcall *v130)(); // [rsp+2F8h] [rbp+1F8h]
  char v131; // [rsp+300h] [rbp+200h]
  int v132; // [rsp+302h] [rbp+202h]
  const char *v133; // [rsp+308h] [rbp+208h]
  __int64 (__fastcall *v134)(); // [rsp+310h] [rbp+210h]
  char v135; // [rsp+318h] [rbp+218h]
  int v136; // [rsp+31Ah] [rbp+21Ah]
  const char *v137; // [rsp+320h] [rbp+220h]
  __int64 (__fastcall *v138)(); // [rsp+328h] [rbp+228h]
  char v139; // [rsp+330h] [rbp+230h]
  int v140; // [rsp+332h] [rbp+232h]
  const char *v141; // [rsp+338h] [rbp+238h]
  __int64 (__fastcall *v142)(); // [rsp+340h] [rbp+240h]

  v18 = a2;
  v23 = 1;
  v16 = 0;
  v19[0] = 0;
  v21 = "NumEntries";
  v20 = 0;
  v25 = "Revision";
  v22 = AcpiParseULong;
  v29 = "HighestPerformance";
  v33 = "HighestPerformance";
  v24 = 0x40000;
  v37 = "NominalPerformance";
  v41 = "NominalPerformance";
  v45 = "LowestNonlinearPerformance";
  v49 = "LowestNonlinearPerformance";
  v53 = "LowestPerformance";
  v57 = "LowestPerformance";
  v61 = "GuaranteedPerformance";
  v65 = "DesiredPerformance";
  v69 = "MinimumPerformance";
  v73 = "MaximumPerformance";
  v77 = "PerformanceReductionTolerance";
  v26 = AcpiParseULong;
  v27 = 2;
  v28 = 0x80000;
  v30 = AcpiParseStaticRegister;
  v31 = 2;
  v32 = 524290;
  v34 = AcpiParseRegister;
  v35 = 3;
  v36 = 0x200000;
  v38 = AcpiParseStaticRegister;
  v39 = 3;
  v40 = 2097154;
  v42 = AcpiParseRegister;
  v43 = 4;
  v44 = 3670016;
  v46 = AcpiParseStaticRegister;
  v47 = 4;
  v48 = 3670018;
  v50 = AcpiParseRegister;
  v51 = 5;
  v52 = 5242880;
  v54 = AcpiParseStaticRegister;
  v55 = 5;
  v56 = 5242882;
  v58 = AcpiParseRegister;
  v59 = 6;
  v60 = 6815746;
  v62 = AcpiParseRegister;
  v63 = 7;
  v64 = 8388610;
  v66 = AcpiParseRegister;
  v67 = 8;
  v68 = 9961474;
  v70 = AcpiParseRegister;
  v71 = 9;
  v72 = 11534338;
  v74 = AcpiParseRegister;
  v75 = 10;
  v76 = 13107202;
  v78 = AcpiParseRegister;
  v79 = 11;
  v81 = "TimeWindow";
  v3 = 21LL;
  v80 = 14680066;
  v85 = "CounterWraparound";
  Pool2 = 0LL;
  v82 = AcpiParseRegister;
  v89 = "ReferenceCounter";
  v93 = "DeliveredCounter";
  v97 = "PerformanceLimited";
  v101 = "Enable";
  v105 = "AutonomousEnable";
  v109 = "AutonomousEnable";
  v113 = "AutonomousActivityWindow";
  v117 = "EnergyPerformancePreference";
  v121 = "ReferencePerformance";
  v125 = "ReferencePerformance";
  v129 = "LowestFrequency";
  v133 = "LowestFrequency";
  v137 = "NominalFrequency";
  v141 = "NominalFrequency";
  v83 = 12;
  v84 = 16252930;
  v86 = AcpiParseRegister;
  v87 = 13;
  v88 = 17825794;
  v90 = AcpiParseRegister;
  v91 = 14;
  v92 = 19398658;
  v94 = AcpiParseRegister;
  v95 = 15;
  v96 = 20971522;
  v98 = AcpiParseRegister;
  v99 = 16;
  v100 = 22544386;
  v102 = AcpiParseRegister;
  v103 = 17;
  v104 = 24117248;
  v106 = AcpiParseStaticRegister;
  v107 = 17;
  v108 = 24117250;
  v110 = AcpiParseRegister;
  v111 = 18;
  v112 = 25690114;
  v114 = AcpiParseRegister;
  v115 = 19;
  v116 = 27262978;
  v118 = AcpiParseRegister;
  v119 = 20;
  v120 = 28835840;
  v122 = AcpiParseStaticRegister;
  v123 = 20;
  v124 = 28835842;
  v126 = AcpiParseRegister;
  v127 = 21;
  v128 = 30408704;
  v130 = AcpiParseStaticRegister;
  v131 = 21;
  v132 = 30408706;
  v134 = AcpiParseRegister;
  v135 = 22;
  v136 = 31981568;
  v138 = AcpiParseStaticRegister;
  v139 = 22;
  v140 = 31981570;
  v142 = AcpiParseRegister;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x40000u);
  v5 = AcpiEvaluateMethod(a1, 1129333599, 0, (unsigned int)&P, (__int64)&v16);
  if ( v5 < 0 )
    goto LABEL_26;
  *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x8000000;
  if ( !v16 )
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
         (unsigned int)v19,
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
  v5 = AcpiParseCore((unsigned int)v19, v11, (int)v6 + 12, v6[1] - 12, (__int64)Pool2, 512, (__int64)"_CPC", v12);
  if ( v5 >= 0 )
  {
    do
    {
      AcpiTranslateAccessSize((char *)Pool2 + *v13, v14);
      v13 += 6;
      --v3;
    }
    while ( v3 );
    *v18 = Pool2;
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
