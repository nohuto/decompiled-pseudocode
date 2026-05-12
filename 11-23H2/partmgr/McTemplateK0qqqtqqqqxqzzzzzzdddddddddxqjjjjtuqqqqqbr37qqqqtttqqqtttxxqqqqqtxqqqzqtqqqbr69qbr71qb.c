/*
 * XREFs of McTemplateK0qqqtqqqqxqzzzzzzdddddddddxqjjjjtuqqqqqbr37qqqqtttqqqtttxxqqqqqtxqqqzqtqqqbr69qbr71qbr73qbr75qbr77qbr79_EtwWriteTransfer @ 0x1C0007BB4
 * Callers:
 *     PmSendTelemetry @ 0x1C0020134 (PmSendTelemetry.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0008518 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0qqqtqqqqxqzzzzzzdddddddddxqjjjjtuqqqqqbr37qqqqtttqqqtttxxqqqqqtxqqqzqtqqqbr69qbr71qbr73qbr75qbr77qbr79_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        const wchar_t *a14,
        const wchar_t *a15,
        const wchar_t *a16,
        const wchar_t *a17,
        const wchar_t *a18,
        const wchar_t *a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        char a35,
        char a36,
        char a37,
        char a38,
        char a39,
        char a40,
        int a41,
        __int64 a42,
        char a43,
        char a44,
        char a45,
        char a46,
        char a47,
        char a48,
        char a49,
        char a50,
        char a51,
        char a52,
        char a53,
        char a54,
        char a55,
        char a56,
        char a57,
        char a58,
        char a59,
        char a60,
        char a61,
        char a62,
        char a63)
{
  char a64; // [rsp+798h] [rbp+698h] BYREF
  const wchar_t *v64; // r8
  const wchar_t *v65; // rdi
  const wchar_t *v66; // rsi
  const wchar_t *v68; // r11
  const wchar_t *v69; // r10
  const wchar_t *v70; // r9
  int v71; // edx
  const wchar_t *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rbx
  int v75; // ebx
  __int64 v76; // r8
  int v77; // r8d
  __int64 v78; // rax
  int v79; // r8d
  int v80; // r8d
  __int64 v81; // rax
  int v82; // r8d
  __int64 v83; // rax
  int v84; // r8d
  bool v85; // zf
  __int64 v87; // rax
  _BYTE v88[16]; // [rsp+30h] [rbp-D0h] BYREF
  int *v89; // [rsp+40h] [rbp-C0h]
  __int64 v90; // [rsp+48h] [rbp-B8h]
  char *v91; // [rsp+50h] [rbp-B0h]
  __int64 v92; // [rsp+58h] [rbp-A8h]
  char *v93; // [rsp+60h] [rbp-A0h]
  __int64 v94; // [rsp+68h] [rbp-98h]
  char *v95; // [rsp+70h] [rbp-90h]
  __int64 v96; // [rsp+78h] [rbp-88h]
  char *v97; // [rsp+80h] [rbp-80h]
  __int64 v98; // [rsp+88h] [rbp-78h]
  char *v99; // [rsp+90h] [rbp-70h]
  __int64 v100; // [rsp+98h] [rbp-68h]
  char *v101; // [rsp+A0h] [rbp-60h]
  __int64 v102; // [rsp+A8h] [rbp-58h]
  char *v103; // [rsp+B0h] [rbp-50h]
  __int64 v104; // [rsp+B8h] [rbp-48h]
  char *v105; // [rsp+C0h] [rbp-40h]
  __int64 v106; // [rsp+C8h] [rbp-38h]
  char *v107; // [rsp+D0h] [rbp-30h]
  __int64 v108; // [rsp+D8h] [rbp-28h]
  const wchar_t *v109; // [rsp+E0h] [rbp-20h]
  int v110; // [rsp+E8h] [rbp-18h]
  int v111; // [rsp+ECh] [rbp-14h]
  const wchar_t *v112; // [rsp+F0h] [rbp-10h]
  int v113; // [rsp+F8h] [rbp-8h]
  int v114; // [rsp+FCh] [rbp-4h]
  const wchar_t *v115; // [rsp+100h] [rbp+0h]
  int v116; // [rsp+108h] [rbp+8h]
  int v117; // [rsp+10Ch] [rbp+Ch]
  const wchar_t *v118; // [rsp+110h] [rbp+10h]
  int v119; // [rsp+118h] [rbp+18h]
  int v120; // [rsp+11Ch] [rbp+1Ch]
  const wchar_t *v121; // [rsp+120h] [rbp+20h]
  int v122; // [rsp+128h] [rbp+28h]
  int v123; // [rsp+12Ch] [rbp+2Ch]
  const wchar_t *v124; // [rsp+130h] [rbp+30h]
  int v125; // [rsp+138h] [rbp+38h]
  int v126; // [rsp+13Ch] [rbp+3Ch]
  char *v127; // [rsp+140h] [rbp+40h]
  __int64 v128; // [rsp+148h] [rbp+48h]
  char *v129; // [rsp+150h] [rbp+50h]
  __int64 v130; // [rsp+158h] [rbp+58h]
  char *v131; // [rsp+160h] [rbp+60h]
  __int64 v132; // [rsp+168h] [rbp+68h]
  char *v133; // [rsp+170h] [rbp+70h]
  __int64 v134; // [rsp+178h] [rbp+78h]
  char *v135; // [rsp+180h] [rbp+80h]
  __int64 v136; // [rsp+188h] [rbp+88h]
  char *v137; // [rsp+190h] [rbp+90h]
  __int64 v138; // [rsp+198h] [rbp+98h]
  char *v139; // [rsp+1A0h] [rbp+A0h]
  __int64 v140; // [rsp+1A8h] [rbp+A8h]
  char *v141; // [rsp+1B0h] [rbp+B0h]
  __int64 v142; // [rsp+1B8h] [rbp+B8h]
  char *v143; // [rsp+1C0h] [rbp+C0h]
  __int64 v144; // [rsp+1C8h] [rbp+C8h]
  char *v145; // [rsp+1D0h] [rbp+D0h]
  __int64 v146; // [rsp+1D8h] [rbp+D8h]
  char *v147; // [rsp+1E0h] [rbp+E0h]
  __int64 v148; // [rsp+1E8h] [rbp+E8h]
  __int64 v149; // [rsp+1F0h] [rbp+F0h]
  __int64 v150; // [rsp+1F8h] [rbp+F8h]
  __int64 v151; // [rsp+200h] [rbp+100h]
  __int64 v152; // [rsp+208h] [rbp+108h]
  __int64 v153; // [rsp+210h] [rbp+110h]
  __int64 v154; // [rsp+218h] [rbp+118h]
  __int64 v155; // [rsp+220h] [rbp+120h]
  __int64 v156; // [rsp+228h] [rbp+128h]
  char *v157; // [rsp+230h] [rbp+130h]
  __int64 v158; // [rsp+238h] [rbp+138h]
  char *v159; // [rsp+240h] [rbp+140h]
  __int64 v160; // [rsp+248h] [rbp+148h]
  char *v161; // [rsp+250h] [rbp+150h]
  __int64 v162; // [rsp+258h] [rbp+158h]
  char *v163; // [rsp+260h] [rbp+160h]
  __int64 v164; // [rsp+268h] [rbp+168h]
  char *v165; // [rsp+270h] [rbp+170h]
  __int64 v166; // [rsp+278h] [rbp+178h]
  char *v167; // [rsp+280h] [rbp+180h]
  __int64 v168; // [rsp+288h] [rbp+188h]
  int *v169; // [rsp+290h] [rbp+190h]
  __int64 v170; // [rsp+298h] [rbp+198h]
  __int64 v171; // [rsp+2A0h] [rbp+1A0h]
  int v172; // [rsp+2A8h] [rbp+1A8h]
  int v173; // [rsp+2ACh] [rbp+1ACh]
  char *v174; // [rsp+2B0h] [rbp+1B0h]
  __int64 v175; // [rsp+2B8h] [rbp+1B8h]
  char *v176; // [rsp+2C0h] [rbp+1C0h]
  __int64 v177; // [rsp+2C8h] [rbp+1C8h]
  char *v178; // [rsp+2D0h] [rbp+1D0h]
  __int64 v179; // [rsp+2D8h] [rbp+1D8h]
  char *v180; // [rsp+2E0h] [rbp+1E0h]
  __int64 v181; // [rsp+2E8h] [rbp+1E8h]
  char *v182; // [rsp+2F0h] [rbp+1F0h]
  __int64 v183; // [rsp+2F8h] [rbp+1F8h]
  char *v184; // [rsp+300h] [rbp+200h]
  __int64 v185; // [rsp+308h] [rbp+208h]
  char *v186; // [rsp+310h] [rbp+210h]
  __int64 v187; // [rsp+318h] [rbp+218h]
  char *v188; // [rsp+320h] [rbp+220h]
  __int64 v189; // [rsp+328h] [rbp+228h]
  char *v190; // [rsp+330h] [rbp+230h]
  __int64 v191; // [rsp+338h] [rbp+238h]
  char *v192; // [rsp+340h] [rbp+240h]
  __int64 v193; // [rsp+348h] [rbp+248h]
  char *v194; // [rsp+350h] [rbp+250h]
  __int64 v195; // [rsp+358h] [rbp+258h]
  char *v196; // [rsp+360h] [rbp+260h]
  __int64 v197; // [rsp+368h] [rbp+268h]
  char *v198; // [rsp+370h] [rbp+270h]
  __int64 v199; // [rsp+378h] [rbp+278h]
  char *v200; // [rsp+380h] [rbp+280h]
  __int64 v201; // [rsp+388h] [rbp+288h]
  char *v202; // [rsp+390h] [rbp+290h]
  __int64 v203; // [rsp+398h] [rbp+298h]
  char *v204; // [rsp+3A0h] [rbp+2A0h]
  __int64 v205; // [rsp+3A8h] [rbp+2A8h]
  char *v206; // [rsp+3B0h] [rbp+2B0h]
  __int64 v207; // [rsp+3B8h] [rbp+2B8h]
  char *v208; // [rsp+3C0h] [rbp+2C0h]
  __int64 v209; // [rsp+3C8h] [rbp+2C8h]
  char *v210; // [rsp+3D0h] [rbp+2D0h]
  __int64 v211; // [rsp+3D8h] [rbp+2D8h]
  char *v212; // [rsp+3E0h] [rbp+2E0h]
  __int64 v213; // [rsp+3E8h] [rbp+2E8h]
  char *v214; // [rsp+3F0h] [rbp+2F0h]
  __int64 v215; // [rsp+3F8h] [rbp+2F8h]
  char *v216; // [rsp+400h] [rbp+300h]
  __int64 v217; // [rsp+408h] [rbp+308h]
  unsigned __int64 *v218; // [rsp+410h] [rbp+310h]
  __int64 v219; // [rsp+418h] [rbp+318h]
  unsigned __int64 *v220; // [rsp+420h] [rbp+320h]
  __int64 v221; // [rsp+428h] [rbp+328h]
  unsigned __int64 *v222; // [rsp+430h] [rbp+330h]
  __int64 v223; // [rsp+438h] [rbp+338h]
  const wchar_t *v224; // [rsp+440h] [rbp+340h]
  int v225; // [rsp+448h] [rbp+348h]
  int v226; // [rsp+44Ch] [rbp+34Ch]
  unsigned __int64 *v227; // [rsp+450h] [rbp+350h]
  __int64 v228; // [rsp+458h] [rbp+358h]
  unsigned __int64 *v229; // [rsp+460h] [rbp+360h]
  __int64 v230; // [rsp+468h] [rbp+368h]
  unsigned __int64 *v231; // [rsp+470h] [rbp+370h]
  __int64 v232; // [rsp+478h] [rbp+378h]
  unsigned __int64 *v233; // [rsp+480h] [rbp+380h]
  __int64 v234; // [rsp+488h] [rbp+388h]
  unsigned __int64 *v235; // [rsp+490h] [rbp+390h]
  __int64 v236; // [rsp+498h] [rbp+398h]
  unsigned __int64 v237; // [rsp+4A0h] [rbp+3A0h]
  int v238; // [rsp+4A8h] [rbp+3A8h]
  int v239; // [rsp+4ACh] [rbp+3ACh]
  unsigned __int64 *v240; // [rsp+4B0h] [rbp+3B0h]
  __int64 v241; // [rsp+4B8h] [rbp+3B8h]
  unsigned __int64 v242; // [rsp+4C0h] [rbp+3C0h]
  int v243; // [rsp+4C8h] [rbp+3C8h]
  int v244; // [rsp+4CCh] [rbp+3CCh]
  unsigned __int64 *v245; // [rsp+4D0h] [rbp+3D0h]
  __int64 v246; // [rsp+4D8h] [rbp+3D8h]
  unsigned __int64 v247; // [rsp+4E0h] [rbp+3E0h]
  int v248; // [rsp+4E8h] [rbp+3E8h]
  int v249; // [rsp+4ECh] [rbp+3ECh]
  unsigned __int64 *v250; // [rsp+4F0h] [rbp+3F0h]
  __int64 v251; // [rsp+4F8h] [rbp+3F8h]
  unsigned __int64 v252; // [rsp+500h] [rbp+400h]
  int v253; // [rsp+508h] [rbp+408h]
  int v254; // [rsp+50Ch] [rbp+40Ch]
  unsigned __int64 *v255; // [rsp+510h] [rbp+410h]
  __int64 v256; // [rsp+518h] [rbp+418h]
  unsigned __int64 v257; // [rsp+520h] [rbp+420h]
  int v258; // [rsp+528h] [rbp+428h]
  int v259; // [rsp+52Ch] [rbp+42Ch]
  unsigned __int64 *v260; // [rsp+530h] [rbp+430h]
  __int64 v261; // [rsp+538h] [rbp+438h]
  unsigned __int64 v262; // [rsp+540h] [rbp+440h]
  int v263; // [rsp+548h] [rbp+448h]
  int v264; // [rsp+54Ch] [rbp+44Ch]
  int v265; // [rsp+5B8h] [rbp+4B8h] BYREF

  v265 = a4;
  v64 = a14;
  v65 = (const wchar_t *)STACK[0x7B8];
  v66 = a19;
  v68 = a18;
  v69 = a17;
  v70 = a16;
  v71 = 10;
  v72 = a15;
  v89 = &v265;
  v91 = &a5;
  v93 = &a6;
  v95 = &a7;
  v97 = &a8;
  v99 = &a9;
  v101 = &a10;
  v103 = &a11;
  v105 = &a12;
  v107 = &a13;
  v73 = -1LL;
  v90 = 4LL;
  v92 = 4LL;
  v94 = 4LL;
  v96 = 4LL;
  v98 = 4LL;
  v100 = 4LL;
  v102 = 4LL;
  v104 = 4LL;
  v106 = 8LL;
  v108 = 4LL;
  if ( a14 )
  {
    v74 = -1LL;
    do
      ++v74;
    while ( a14[v74] );
    v75 = 2 * v74 + 2;
  }
  else
  {
    v75 = 10;
  }
  v110 = v75;
  v111 = 0;
  if ( !a14 )
    v64 = L"NULL";
  v109 = v64;
  if ( a15 )
  {
    v76 = -1LL;
    do
      ++v76;
    while ( a15[v76] );
    v77 = 2 * v76 + 2;
  }
  else
  {
    v77 = 10;
  }
  v113 = v77;
  v114 = 0;
  if ( !a15 )
    v72 = L"NULL";
  v112 = v72;
  if ( a16 )
  {
    v78 = -1LL;
    do
      ++v78;
    while ( a16[v78] );
    v79 = 2 * v78 + 2;
  }
  else
  {
    v79 = 10;
  }
  v116 = v79;
  v117 = 0;
  if ( !a16 )
    v70 = L"NULL";
  v115 = v70;
  if ( a17 )
  {
    v87 = -1LL;
    do
      ++v87;
    while ( a17[v87] );
    v80 = 2 * v87 + 2;
  }
  else
  {
    v80 = 10;
  }
  v119 = v80;
  v120 = 0;
  if ( !a17 )
    v69 = L"NULL";
  v118 = v69;
  if ( a18 )
  {
    v81 = -1LL;
    do
      ++v81;
    while ( a18[v81] );
    v82 = 2 * v81 + 2;
  }
  else
  {
    v82 = 10;
  }
  v122 = v82;
  v123 = 0;
  if ( !a18 )
    v68 = L"NULL";
  v121 = v68;
  if ( a19 )
  {
    v83 = -1LL;
    do
      ++v83;
    while ( a19[v83] );
    v84 = 2 * v83 + 2;
  }
  else
  {
    v84 = 10;
  }
  v125 = v84;
  v127 = &a20;
  v126 = 0;
  v129 = &a21;
  if ( !a19 )
    v66 = L"NULL";
  v124 = v66;
  v131 = &a22;
  v133 = &a23;
  v135 = &a24;
  v137 = &a25;
  v139 = &a26;
  v141 = &a27;
  v143 = &a28;
  v145 = &a29;
  v147 = &a30;
  v149 = a31;
  v151 = a32;
  v153 = a33;
  v155 = a34;
  v157 = &a35;
  v159 = &a36;
  v161 = &a37;
  v163 = &a38;
  v165 = &a39;
  v167 = &a40;
  v169 = &a41;
  v171 = a42;
  v172 = a41;
  v174 = &a43;
  v176 = &a44;
  v128 = 4LL;
  v130 = 4LL;
  v132 = 4LL;
  v134 = 4LL;
  v136 = 4LL;
  v138 = 4LL;
  v140 = 4LL;
  v142 = 4LL;
  v144 = 4LL;
  v146 = 8LL;
  v148 = 4LL;
  v150 = 16LL;
  v152 = 16LL;
  v154 = 16LL;
  v156 = 16LL;
  v158 = 4LL;
  v160 = 1LL;
  v162 = 4LL;
  v164 = 4LL;
  v166 = 4LL;
  v168 = 4LL;
  v170 = 4LL;
  v173 = 0;
  v175 = 4LL;
  v177 = 4LL;
  v178 = &a45;
  v180 = &a46;
  v182 = &a47;
  v184 = &a48;
  v186 = &a49;
  v188 = &a50;
  v190 = &a51;
  v192 = &a52;
  v194 = &a53;
  v196 = &a54;
  v198 = &a55;
  v200 = &a56;
  v202 = &a57;
  v204 = &a58;
  v206 = &a59;
  v208 = &a60;
  v210 = &a61;
  v212 = &a62;
  v214 = &a63;
  v216 = &a64;
  v218 = &STACK[0x7A0];
  v220 = &STACK[0x7A8];
  v222 = &STACK[0x7B0];
  v179 = 4LL;
  v181 = 4LL;
  v183 = 4LL;
  v185 = 4LL;
  v187 = 4LL;
  v189 = 4LL;
  v191 = 4LL;
  v193 = 4LL;
  v195 = 4LL;
  v197 = 4LL;
  v199 = 4LL;
  v201 = 8LL;
  v203 = 8LL;
  v205 = 4LL;
  v207 = 4LL;
  v209 = 4LL;
  v211 = 4LL;
  v213 = 4LL;
  v215 = 4LL;
  v217 = 8LL;
  v219 = 4LL;
  v221 = 4LL;
  v223 = 4LL;
  v85 = v65 == 0LL;
  if ( v65 )
  {
    do
      ++v73;
    while ( v65[v73] );
    v71 = 2 * v73 + 2;
    v85 = v65 == 0LL;
  }
  v225 = v71;
  v227 = &STACK[0x7C0];
  if ( v85 )
    v65 = L"NULL";
  v224 = v65;
  v229 = &STACK[0x7C8];
  v226 = 0;
  v231 = &STACK[0x7D0];
  v228 = 4LL;
  v233 = &STACK[0x7D8];
  v230 = 4LL;
  v235 = &STACK[0x7E0];
  v237 = STACK[0x7E8];
  v238 = STACK[0x7E0];
  v240 = &STACK[0x7F0];
  v242 = STACK[0x7F8];
  v243 = STACK[0x7F0];
  v245 = &STACK[0x800];
  v247 = STACK[0x808];
  v248 = STACK[0x800];
  v250 = &STACK[0x810];
  v252 = STACK[0x818];
  v253 = STACK[0x810];
  v255 = &STACK[0x820];
  v257 = STACK[0x828];
  v258 = STACK[0x820];
  v260 = &STACK[0x830];
  v262 = STACK[0x838];
  v263 = STACK[0x830];
  v232 = 4LL;
  v234 = 4LL;
  v236 = 4LL;
  v239 = 0;
  v241 = 4LL;
  v244 = 0;
  v246 = 4LL;
  v249 = 0;
  v251 = 4LL;
  v254 = 0;
  v256 = 4LL;
  v259 = 0;
  v261 = 4LL;
  v264 = 0;
  return McGenEventWrite_EtwWriteTransfer(v73, a2, 0LL, 82LL, v88);
}
