/*
 * XREFs of McTemplateK0quuujjqzssszstuzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer @ 0x1C005BFD8
 * Callers:
 *     StorpTelemetrySendUnitIoSizeDistributionData @ 0x1C00635DC (StorpTelemetrySendUnitIoSizeDistributionData.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjqzssszstuzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        char a10,
        const wchar_t *a11,
        const char *a12,
        const char *a13,
        const char *a14,
        const wchar_t *a15,
        const char *a16,
        char a17,
        int a18,
        int a19,
        int a20,
        char a21,
        const char *a22,
        const char *a23,
        const char *a24,
        const char *a25,
        const char *a26,
        const char *a27,
        const char *a28,
        const char *a29,
        const char *a30,
        const char *a31,
        const char *a32,
        const char *a33,
        const char *a34,
        const char *a35,
        const char *a36,
        const char *a37,
        const char *a38,
        const char *a39,
        const char *a40,
        const char *a41,
        const char *a42,
        const char *a43,
        const char *a44,
        const char *a45,
        const char *a46,
        const char *a47,
        const char *a48,
        const char *a49,
        const char *a50,
        const char *a51,
        const char *a52,
        const char *a53,
        const char *a54,
        const char *a55,
        const char *a56,
        const char *a57)
{
  const wchar_t *v57; // rdx
  int v58; // r9d
  __int64 v59; // rax
  __int64 v60; // rcx
  int v61; // r8d
  const char *v62; // rdx
  __int64 v63; // rcx
  int v64; // ecx
  const char *v65; // rdx
  __int64 v66; // rcx
  int v67; // ecx
  const char *v68; // rdx
  __int64 v69; // rcx
  int v70; // ecx
  const wchar_t *v71; // rcx
  bool v72; // zf
  __int64 v73; // rdx
  const char *v74; // rdx
  __int64 v75; // rcx
  int v76; // ecx
  const char *v77; // rdx
  __int64 v78; // rcx
  int v79; // ecx
  const char *v80; // rdx
  __int64 v81; // rcx
  int v82; // ecx
  const char *v83; // rdx
  __int64 v84; // rcx
  int v85; // ecx
  const char *v86; // rdx
  __int64 v87; // rcx
  int v88; // ecx
  const char *v89; // rdx
  __int64 v90; // rcx
  int v91; // ecx
  const char *v92; // rdx
  __int64 v93; // rcx
  int v94; // ecx
  const char *v95; // rdx
  __int64 v96; // rcx
  int v97; // ecx
  const char *v98; // rdx
  __int64 v99; // rcx
  int v100; // ecx
  const char *v101; // rdx
  __int64 v102; // rcx
  int v103; // ecx
  const char *v104; // rdx
  __int64 v105; // rcx
  int v106; // ecx
  const char *v107; // rdx
  __int64 v108; // rcx
  int v109; // ecx
  const char *v110; // rdx
  __int64 v111; // rcx
  int v112; // ecx
  const char *v113; // rdx
  __int64 v114; // rcx
  int v115; // ecx
  const char *v116; // rdx
  __int64 v117; // rcx
  int v118; // ecx
  const char *v119; // rdx
  __int64 v120; // rcx
  int v121; // ecx
  const char *v122; // rdx
  __int64 v123; // rcx
  int v124; // ecx
  const char *v125; // rdx
  __int64 v126; // rcx
  int v127; // ecx
  const char *v128; // rdx
  __int64 v129; // rcx
  int v130; // ecx
  const char *v131; // rdx
  __int64 v132; // rcx
  int v133; // ecx
  const char *v134; // rdx
  __int64 v135; // rcx
  int v136; // ecx
  const char *v137; // rdx
  __int64 v138; // rcx
  int v139; // ecx
  const char *v140; // rdx
  __int64 v141; // rcx
  int v142; // ecx
  const char *v143; // rdx
  __int64 v144; // rcx
  int v145; // ecx
  const char *v146; // rdx
  __int64 v147; // rcx
  int v148; // ecx
  const char *v149; // rdx
  __int64 v150; // rcx
  int v151; // ecx
  const char *v152; // rdx
  __int64 v153; // rcx
  int v154; // ecx
  const char *v155; // rdx
  __int64 v156; // rcx
  int v157; // ecx
  const char *v158; // rdx
  __int64 v159; // rcx
  int v160; // ecx
  const char *v161; // rdx
  __int64 v162; // rcx
  int v163; // ecx
  const char *v164; // rdx
  __int64 v165; // rcx
  int v166; // ecx
  const char *v167; // rdx
  __int64 v168; // rcx
  int v169; // ecx
  const char *v170; // rdx
  __int64 v171; // rcx
  int v172; // ecx
  const char *v173; // rdx
  __int64 v174; // rcx
  int v175; // ecx
  const char *v176; // rdx
  __int64 v177; // rcx
  int v178; // ecx
  const char *v179; // rdx
  __int64 v180; // rcx
  int v181; // ecx
  const char *v182; // rcx
  int v183; // eax
  char v185; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v186; // [rsp+48h] [rbp-C0h] BYREF
  int *v187; // [rsp+58h] [rbp-B0h]
  __int64 v188; // [rsp+60h] [rbp-A8h]
  char *v189; // [rsp+68h] [rbp-A0h]
  __int64 v190; // [rsp+70h] [rbp-98h]
  char *v191; // [rsp+78h] [rbp-90h]
  __int64 v192; // [rsp+80h] [rbp-88h]
  char *v193; // [rsp+88h] [rbp-80h]
  __int64 v194; // [rsp+90h] [rbp-78h]
  __int64 v195; // [rsp+98h] [rbp-70h]
  __int64 v196; // [rsp+A0h] [rbp-68h]
  __int64 v197; // [rsp+A8h] [rbp-60h]
  __int64 v198; // [rsp+B0h] [rbp-58h]
  char *v199; // [rsp+B8h] [rbp-50h]
  __int64 v200; // [rsp+C0h] [rbp-48h]
  const wchar_t *v201; // [rsp+C8h] [rbp-40h]
  int v202; // [rsp+D0h] [rbp-38h]
  int v203; // [rsp+D4h] [rbp-34h]
  const char *v204; // [rsp+D8h] [rbp-30h]
  int v205; // [rsp+E0h] [rbp-28h]
  int v206; // [rsp+E4h] [rbp-24h]
  const char *v207; // [rsp+E8h] [rbp-20h]
  int v208; // [rsp+F0h] [rbp-18h]
  int v209; // [rsp+F4h] [rbp-14h]
  const char *v210; // [rsp+F8h] [rbp-10h]
  int v211; // [rsp+100h] [rbp-8h]
  int v212; // [rsp+104h] [rbp-4h]
  const wchar_t *v213; // [rsp+108h] [rbp+0h]
  int v214; // [rsp+110h] [rbp+8h]
  int v215; // [rsp+114h] [rbp+Ch]
  const char *v216; // [rsp+118h] [rbp+10h]
  int v217; // [rsp+120h] [rbp+18h]
  int v218; // [rsp+124h] [rbp+1Ch]
  char *v219; // [rsp+128h] [rbp+20h]
  __int64 v220; // [rsp+130h] [rbp+28h]
  char *v221; // [rsp+138h] [rbp+30h]
  __int64 v222; // [rsp+140h] [rbp+38h]
  const wchar_t *v223; // [rsp+148h] [rbp+40h]
  __int64 v224; // [rsp+150h] [rbp+48h]
  const wchar_t *v225; // [rsp+158h] [rbp+50h]
  __int64 v226; // [rsp+160h] [rbp+58h]
  char *v227; // [rsp+168h] [rbp+60h]
  __int64 v228; // [rsp+170h] [rbp+68h]
  const char *v229; // [rsp+178h] [rbp+70h]
  int v230; // [rsp+180h] [rbp+78h]
  int v231; // [rsp+184h] [rbp+7Ch]
  const char *v232; // [rsp+188h] [rbp+80h]
  int v233; // [rsp+190h] [rbp+88h]
  int v234; // [rsp+194h] [rbp+8Ch]
  const char *v235; // [rsp+198h] [rbp+90h]
  int v236; // [rsp+1A0h] [rbp+98h]
  int v237; // [rsp+1A4h] [rbp+9Ch]
  const char *v238; // [rsp+1A8h] [rbp+A0h]
  int v239; // [rsp+1B0h] [rbp+A8h]
  int v240; // [rsp+1B4h] [rbp+ACh]
  const char *v241; // [rsp+1B8h] [rbp+B0h]
  int v242; // [rsp+1C0h] [rbp+B8h]
  int v243; // [rsp+1C4h] [rbp+BCh]
  const char *v244; // [rsp+1C8h] [rbp+C0h]
  int v245; // [rsp+1D0h] [rbp+C8h]
  int v246; // [rsp+1D4h] [rbp+CCh]
  const char *v247; // [rsp+1D8h] [rbp+D0h]
  int v248; // [rsp+1E0h] [rbp+D8h]
  int v249; // [rsp+1E4h] [rbp+DCh]
  const char *v250; // [rsp+1E8h] [rbp+E0h]
  int v251; // [rsp+1F0h] [rbp+E8h]
  int v252; // [rsp+1F4h] [rbp+ECh]
  const char *v253; // [rsp+1F8h] [rbp+F0h]
  int v254; // [rsp+200h] [rbp+F8h]
  int v255; // [rsp+204h] [rbp+FCh]
  const char *v256; // [rsp+208h] [rbp+100h]
  int v257; // [rsp+210h] [rbp+108h]
  int v258; // [rsp+214h] [rbp+10Ch]
  const char *v259; // [rsp+218h] [rbp+110h]
  int v260; // [rsp+220h] [rbp+118h]
  int v261; // [rsp+224h] [rbp+11Ch]
  const char *v262; // [rsp+228h] [rbp+120h]
  int v263; // [rsp+230h] [rbp+128h]
  int v264; // [rsp+234h] [rbp+12Ch]
  const char *v265; // [rsp+238h] [rbp+130h]
  int v266; // [rsp+240h] [rbp+138h]
  int v267; // [rsp+244h] [rbp+13Ch]
  const char *v268; // [rsp+248h] [rbp+140h]
  int v269; // [rsp+250h] [rbp+148h]
  int v270; // [rsp+254h] [rbp+14Ch]
  const char *v271; // [rsp+258h] [rbp+150h]
  int v272; // [rsp+260h] [rbp+158h]
  int v273; // [rsp+264h] [rbp+15Ch]
  const char *v274; // [rsp+268h] [rbp+160h]
  int v275; // [rsp+270h] [rbp+168h]
  int v276; // [rsp+274h] [rbp+16Ch]
  const char *v277; // [rsp+278h] [rbp+170h]
  int v278; // [rsp+280h] [rbp+178h]
  int v279; // [rsp+284h] [rbp+17Ch]
  const char *v280; // [rsp+288h] [rbp+180h]
  int v281; // [rsp+290h] [rbp+188h]
  int v282; // [rsp+294h] [rbp+18Ch]
  const char *v283; // [rsp+298h] [rbp+190h]
  int v284; // [rsp+2A0h] [rbp+198h]
  int v285; // [rsp+2A4h] [rbp+19Ch]
  const char *v286; // [rsp+2A8h] [rbp+1A0h]
  int v287; // [rsp+2B0h] [rbp+1A8h]
  int v288; // [rsp+2B4h] [rbp+1ACh]
  const char *v289; // [rsp+2B8h] [rbp+1B0h]
  int v290; // [rsp+2C0h] [rbp+1B8h]
  int v291; // [rsp+2C4h] [rbp+1BCh]
  const char *v292; // [rsp+2C8h] [rbp+1C0h]
  int v293; // [rsp+2D0h] [rbp+1C8h]
  int v294; // [rsp+2D4h] [rbp+1CCh]
  const char *v295; // [rsp+2D8h] [rbp+1D0h]
  int v296; // [rsp+2E0h] [rbp+1D8h]
  int v297; // [rsp+2E4h] [rbp+1DCh]
  const char *v298; // [rsp+2E8h] [rbp+1E0h]
  int v299; // [rsp+2F0h] [rbp+1E8h]
  int v300; // [rsp+2F4h] [rbp+1ECh]
  const char *v301; // [rsp+2F8h] [rbp+1F0h]
  int v302; // [rsp+300h] [rbp+1F8h]
  int v303; // [rsp+304h] [rbp+1FCh]
  const char *v304; // [rsp+308h] [rbp+200h]
  int v305; // [rsp+310h] [rbp+208h]
  int v306; // [rsp+314h] [rbp+20Ch]
  const char *v307; // [rsp+318h] [rbp+210h]
  int v308; // [rsp+320h] [rbp+218h]
  int v309; // [rsp+324h] [rbp+21Ch]
  const char *v310; // [rsp+328h] [rbp+220h]
  int v311; // [rsp+330h] [rbp+228h]
  int v312; // [rsp+334h] [rbp+22Ch]
  const char *v313; // [rsp+338h] [rbp+230h]
  int v314; // [rsp+340h] [rbp+238h]
  int v315; // [rsp+344h] [rbp+23Ch]
  const char *v316; // [rsp+348h] [rbp+240h]
  int v317; // [rsp+350h] [rbp+248h]
  int v318; // [rsp+354h] [rbp+24Ch]
  const char *v319; // [rsp+358h] [rbp+250h]
  int v320; // [rsp+360h] [rbp+258h]
  int v321; // [rsp+364h] [rbp+25Ch]
  const char *v322; // [rsp+368h] [rbp+260h]
  int v323; // [rsp+370h] [rbp+268h]
  int v324; // [rsp+374h] [rbp+26Ch]
  const char *v325; // [rsp+378h] [rbp+270h]
  int v326; // [rsp+380h] [rbp+278h]
  int v327; // [rsp+384h] [rbp+27Ch]
  const char *v328; // [rsp+388h] [rbp+280h]
  int v329; // [rsp+390h] [rbp+288h]
  int v330; // [rsp+394h] [rbp+28Ch]
  const char *v331; // [rsp+398h] [rbp+290h]
  int v332; // [rsp+3A0h] [rbp+298h]
  int v333; // [rsp+3A4h] [rbp+29Ch]
  const char *v334; // [rsp+3A8h] [rbp+2A0h]
  int v335; // [rsp+3B0h] [rbp+2A8h]
  int v336; // [rsp+3B4h] [rbp+2ACh]
  int v337; // [rsp+3F0h] [rbp+2E8h] BYREF

  v337 = a4;
  v57 = a11;
  v187 = &v337;
  v185 = 1;
  v189 = &a5;
  v188 = 4LL;
  v191 = &a6;
  v58 = 10;
  v190 = 1LL;
  v193 = &a7;
  v195 = a8;
  v197 = a9;
  v199 = &a10;
  v59 = -1LL;
  v192 = 1LL;
  v194 = 1LL;
  v196 = 16LL;
  v198 = 16LL;
  v200 = 4LL;
  if ( a11 )
  {
    v60 = -1LL;
    do
      ++v60;
    while ( a11[v60] );
    v61 = 2 * v60 + 2;
  }
  else
  {
    v61 = 10;
  }
  v202 = v61;
  v203 = 0;
  if ( !a11 )
    v57 = L"NULL";
  v201 = v57;
  v62 = a12;
  if ( a12 )
  {
    v63 = -1LL;
    do
      ++v63;
    while ( a12[v63] );
    v64 = v63 + 1;
  }
  else
  {
    v64 = 5;
  }
  v205 = v64;
  v206 = 0;
  if ( !a12 )
    v62 = "NULL";
  v204 = v62;
  v65 = a13;
  if ( a13 )
  {
    v66 = -1LL;
    do
      ++v66;
    while ( a13[v66] );
    v67 = v66 + 1;
  }
  else
  {
    v67 = 5;
  }
  v208 = v67;
  v209 = 0;
  if ( !a13 )
    v65 = "NULL";
  v207 = v65;
  v68 = a14;
  if ( a14 )
  {
    v69 = -1LL;
    do
      ++v69;
    while ( a14[v69] );
    v70 = v69 + 1;
  }
  else
  {
    v70 = 5;
  }
  v211 = v70;
  v71 = a15;
  if ( !a14 )
    v68 = "NULL";
  v212 = 0;
  v210 = v68;
  v72 = a15 == 0LL;
  if ( a15 )
  {
    v73 = -1LL;
    do
      ++v73;
    while ( a15[v73] );
    v58 = 2 * v73 + 2;
    v72 = a15 == 0LL;
  }
  v74 = a16;
  if ( v72 )
    v71 = L"NULL";
  v213 = v71;
  v214 = v58;
  v215 = 0;
  if ( a16 )
  {
    v75 = -1LL;
    do
      ++v75;
    while ( a16[v75] );
    v76 = v75 + 1;
  }
  else
  {
    v76 = 5;
  }
  v217 = v76;
  v218 = 0;
  v219 = &a17;
  if ( !a16 )
    v74 = "NULL";
  v216 = v74;
  v77 = a22;
  v221 = &v185;
  v223 = L"4K, 8K, 16K, 32K, 64K, 128K, 256K, 1M, 1M+";
  v225 = L"256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 2000ms, 6000ms, 10000ms, 20000ms, 20000+ms";
  v227 = &a21;
  v220 = 4LL;
  v222 = 1LL;
  v224 = 86LL;
  v226 = 172LL;
  v228 = 8LL;
  if ( a22 )
  {
    v78 = -1LL;
    do
      ++v78;
    while ( a22[v78] );
    v79 = v78 + 1;
  }
  else
  {
    v79 = 5;
  }
  v230 = v79;
  v231 = 0;
  if ( !a22 )
    v77 = "NULL";
  v229 = v77;
  v80 = a23;
  if ( a23 )
  {
    v81 = -1LL;
    do
      ++v81;
    while ( a23[v81] );
    v82 = v81 + 1;
  }
  else
  {
    v82 = 5;
  }
  v233 = v82;
  v234 = 0;
  if ( !a23 )
    v80 = "NULL";
  v232 = v80;
  v83 = a24;
  if ( a24 )
  {
    v84 = -1LL;
    do
      ++v84;
    while ( a24[v84] );
    v85 = v84 + 1;
  }
  else
  {
    v85 = 5;
  }
  v236 = v85;
  v237 = 0;
  if ( !a24 )
    v83 = "NULL";
  v235 = v83;
  v86 = a25;
  if ( a25 )
  {
    v87 = -1LL;
    do
      ++v87;
    while ( a25[v87] );
    v88 = v87 + 1;
  }
  else
  {
    v88 = 5;
  }
  v239 = v88;
  v240 = 0;
  if ( !a25 )
    v86 = "NULL";
  v238 = v86;
  v89 = a26;
  if ( a26 )
  {
    v90 = -1LL;
    do
      ++v90;
    while ( a26[v90] );
    v91 = v90 + 1;
  }
  else
  {
    v91 = 5;
  }
  v242 = v91;
  v243 = 0;
  if ( !a26 )
    v89 = "NULL";
  v241 = v89;
  v92 = a27;
  if ( a27 )
  {
    v93 = -1LL;
    do
      ++v93;
    while ( a27[v93] );
    v94 = v93 + 1;
  }
  else
  {
    v94 = 5;
  }
  v245 = v94;
  v246 = 0;
  if ( !a27 )
    v92 = "NULL";
  v244 = v92;
  v95 = a28;
  if ( a28 )
  {
    v96 = -1LL;
    do
      ++v96;
    while ( a28[v96] );
    v97 = v96 + 1;
  }
  else
  {
    v97 = 5;
  }
  v248 = v97;
  v249 = 0;
  if ( !a28 )
    v95 = "NULL";
  v247 = v95;
  v98 = a29;
  if ( a29 )
  {
    v99 = -1LL;
    do
      ++v99;
    while ( a29[v99] );
    v100 = v99 + 1;
  }
  else
  {
    v100 = 5;
  }
  v251 = v100;
  v252 = 0;
  if ( !a29 )
    v98 = "NULL";
  v250 = v98;
  v101 = a30;
  if ( a30 )
  {
    v102 = -1LL;
    do
      ++v102;
    while ( a30[v102] );
    v103 = v102 + 1;
  }
  else
  {
    v103 = 5;
  }
  v254 = v103;
  v255 = 0;
  if ( !a30 )
    v101 = "NULL";
  v253 = v101;
  v104 = a31;
  if ( a31 )
  {
    v105 = -1LL;
    do
      ++v105;
    while ( a31[v105] );
    v106 = v105 + 1;
  }
  else
  {
    v106 = 5;
  }
  v257 = v106;
  v258 = 0;
  if ( !a31 )
    v104 = "NULL";
  v256 = v104;
  v107 = a32;
  if ( a32 )
  {
    v108 = -1LL;
    do
      ++v108;
    while ( a32[v108] );
    v109 = v108 + 1;
  }
  else
  {
    v109 = 5;
  }
  v260 = v109;
  v261 = 0;
  if ( !a32 )
    v107 = "NULL";
  v259 = v107;
  v110 = a33;
  if ( a33 )
  {
    v111 = -1LL;
    do
      ++v111;
    while ( a33[v111] );
    v112 = v111 + 1;
  }
  else
  {
    v112 = 5;
  }
  v263 = v112;
  v264 = 0;
  if ( !a33 )
    v110 = "NULL";
  v262 = v110;
  v113 = a34;
  if ( a34 )
  {
    v114 = -1LL;
    do
      ++v114;
    while ( a34[v114] );
    v115 = v114 + 1;
  }
  else
  {
    v115 = 5;
  }
  v266 = v115;
  v267 = 0;
  if ( !a34 )
    v113 = "NULL";
  v265 = v113;
  v116 = a35;
  if ( a35 )
  {
    v117 = -1LL;
    do
      ++v117;
    while ( a35[v117] );
    v118 = v117 + 1;
  }
  else
  {
    v118 = 5;
  }
  v269 = v118;
  v270 = 0;
  if ( !a35 )
    v116 = "NULL";
  v268 = v116;
  v119 = a36;
  if ( a36 )
  {
    v120 = -1LL;
    do
      ++v120;
    while ( a36[v120] );
    v121 = v120 + 1;
  }
  else
  {
    v121 = 5;
  }
  v272 = v121;
  v273 = 0;
  if ( !a36 )
    v119 = "NULL";
  v271 = v119;
  v122 = a37;
  if ( a37 )
  {
    v123 = -1LL;
    do
      ++v123;
    while ( a37[v123] );
    v124 = v123 + 1;
  }
  else
  {
    v124 = 5;
  }
  v275 = v124;
  v276 = 0;
  if ( !a37 )
    v122 = "NULL";
  v274 = v122;
  v125 = a38;
  if ( a38 )
  {
    v126 = -1LL;
    do
      ++v126;
    while ( a38[v126] );
    v127 = v126 + 1;
  }
  else
  {
    v127 = 5;
  }
  v278 = v127;
  v279 = 0;
  if ( !a38 )
    v125 = "NULL";
  v277 = v125;
  v128 = a39;
  if ( a39 )
  {
    v129 = -1LL;
    do
      ++v129;
    while ( a39[v129] );
    v130 = v129 + 1;
  }
  else
  {
    v130 = 5;
  }
  v281 = v130;
  v282 = 0;
  if ( !a39 )
    v128 = "NULL";
  v280 = v128;
  v131 = a40;
  if ( a40 )
  {
    v132 = -1LL;
    do
      ++v132;
    while ( a40[v132] );
    v133 = v132 + 1;
  }
  else
  {
    v133 = 5;
  }
  v284 = v133;
  v285 = 0;
  if ( !a40 )
    v131 = "NULL";
  v283 = v131;
  v134 = a41;
  if ( a41 )
  {
    v135 = -1LL;
    do
      ++v135;
    while ( a41[v135] );
    v136 = v135 + 1;
  }
  else
  {
    v136 = 5;
  }
  v287 = v136;
  v288 = 0;
  if ( !a41 )
    v134 = "NULL";
  v286 = v134;
  v137 = a42;
  if ( a42 )
  {
    v138 = -1LL;
    do
      ++v138;
    while ( a42[v138] );
    v139 = v138 + 1;
  }
  else
  {
    v139 = 5;
  }
  v290 = v139;
  v291 = 0;
  if ( !a42 )
    v137 = "NULL";
  v289 = v137;
  v140 = a43;
  if ( a43 )
  {
    v141 = -1LL;
    do
      ++v141;
    while ( a43[v141] );
    v142 = v141 + 1;
  }
  else
  {
    v142 = 5;
  }
  v293 = v142;
  v294 = 0;
  if ( !a43 )
    v140 = "NULL";
  v292 = v140;
  v143 = a44;
  if ( a44 )
  {
    v144 = -1LL;
    do
      ++v144;
    while ( a44[v144] );
    v145 = v144 + 1;
  }
  else
  {
    v145 = 5;
  }
  v296 = v145;
  v297 = 0;
  if ( !a44 )
    v143 = "NULL";
  v295 = v143;
  v146 = a45;
  if ( a45 )
  {
    v147 = -1LL;
    do
      ++v147;
    while ( a45[v147] );
    v148 = v147 + 1;
  }
  else
  {
    v148 = 5;
  }
  v299 = v148;
  v300 = 0;
  if ( !a45 )
    v146 = "NULL";
  v298 = v146;
  v149 = a46;
  if ( a46 )
  {
    v150 = -1LL;
    do
      ++v150;
    while ( a46[v150] );
    v151 = v150 + 1;
  }
  else
  {
    v151 = 5;
  }
  v302 = v151;
  v303 = 0;
  if ( !a46 )
    v149 = "NULL";
  v301 = v149;
  v152 = a47;
  if ( a47 )
  {
    v153 = -1LL;
    do
      ++v153;
    while ( a47[v153] );
    v154 = v153 + 1;
  }
  else
  {
    v154 = 5;
  }
  v305 = v154;
  v306 = 0;
  if ( !a47 )
    v152 = "NULL";
  v304 = v152;
  v155 = a48;
  if ( a48 )
  {
    v156 = -1LL;
    do
      ++v156;
    while ( a48[v156] );
    v157 = v156 + 1;
  }
  else
  {
    v157 = 5;
  }
  v308 = v157;
  v309 = 0;
  if ( !a48 )
    v155 = "NULL";
  v307 = v155;
  v158 = a49;
  if ( a49 )
  {
    v159 = -1LL;
    do
      ++v159;
    while ( a49[v159] );
    v160 = v159 + 1;
  }
  else
  {
    v160 = 5;
  }
  v311 = v160;
  v312 = 0;
  if ( !a49 )
    v158 = "NULL";
  v310 = v158;
  v161 = a50;
  if ( a50 )
  {
    v162 = -1LL;
    do
      ++v162;
    while ( a50[v162] );
    v163 = v162 + 1;
  }
  else
  {
    v163 = 5;
  }
  v314 = v163;
  v315 = 0;
  if ( !a50 )
    v161 = "NULL";
  v313 = v161;
  v164 = a51;
  if ( a51 )
  {
    v165 = -1LL;
    do
      ++v165;
    while ( a51[v165] );
    v166 = v165 + 1;
  }
  else
  {
    v166 = 5;
  }
  v317 = v166;
  v318 = 0;
  if ( !a51 )
    v164 = "NULL";
  v316 = v164;
  v167 = a52;
  if ( a52 )
  {
    v168 = -1LL;
    do
      ++v168;
    while ( a52[v168] );
    v169 = v168 + 1;
  }
  else
  {
    v169 = 5;
  }
  v320 = v169;
  v321 = 0;
  if ( !a52 )
    v167 = "NULL";
  v319 = v167;
  v170 = a53;
  if ( a53 )
  {
    v171 = -1LL;
    do
      ++v171;
    while ( a53[v171] );
    v172 = v171 + 1;
  }
  else
  {
    v172 = 5;
  }
  v323 = v172;
  v324 = 0;
  if ( !a53 )
    v170 = "NULL";
  v322 = v170;
  v173 = a54;
  if ( a54 )
  {
    v174 = -1LL;
    do
      ++v174;
    while ( a54[v174] );
    v175 = v174 + 1;
  }
  else
  {
    v175 = 5;
  }
  v326 = v175;
  v327 = 0;
  if ( !a54 )
    v173 = "NULL";
  v325 = v173;
  v176 = a55;
  if ( a55 )
  {
    v177 = -1LL;
    do
      ++v177;
    while ( a55[v177] );
    v178 = v177 + 1;
  }
  else
  {
    v178 = 5;
  }
  v329 = v178;
  v330 = 0;
  if ( !a55 )
    v176 = "NULL";
  v328 = v176;
  v179 = a56;
  if ( a56 )
  {
    v180 = -1LL;
    do
      ++v180;
    while ( a56[v180] );
    v181 = v180 + 1;
  }
  else
  {
    v181 = 5;
  }
  v332 = v181;
  v182 = a57;
  if ( !a56 )
    v179 = "NULL";
  v333 = 0;
  v331 = v179;
  if ( a57 )
  {
    do
      ++v59;
    while ( a57[v59] );
    v183 = v59 + 1;
  }
  else
  {
    v183 = 5;
  }
  v335 = v183;
  v336 = 0;
  if ( !a57 )
    v182 = "NULL";
  v334 = v182;
  return McGenEventWrite_EtwWriteTransfer((__int64)v182, &IoSizeDistribution, 0LL, 0x37u, &v186);
}
