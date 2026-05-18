/*
 * XREFs of ?LoadDefaults@Configuration@Engine@Spectre@@YAXAEAVIConfigurationManager@Utils@3@W4LoadPolicy@453@@Z @ 0x1800748CC
 * Callers:
 *     ?OnInitialize@Engine@1Spectre@@MEAAXAEBUEngineDescription@12@@Z @ 0x1800352A0 (-OnInitialize@Engine@1Spectre@@MEAAXAEBUEngineDescription@12@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     _alloca_probe @ 0x1800E3880 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=293
__int64 __fastcall Spectre::Engine::Configuration::LoadDefaults(__int64 a1)
{
  void (__fastcall *v2)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v3)(__int64, _QWORD *, __int64); // rbx
  __int64 v4; // r8
  void (__fastcall *v5)(__int64, _QWORD *, __int64); // rbx
  __int64 v6; // r8
  void (__fastcall *v7)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v8)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v9)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v10; // r8
  void (__fastcall *v11)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v12; // r8
  void (__fastcall *v13)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v14; // r8
  void (__fastcall *v15)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v16)(__int64, _QWORD *, __int64); // rbx
  __int64 v17; // r8
  void (__fastcall *v18)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v19; // r8
  void (__fastcall *v20)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v21)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v22)(__int64, _QWORD *, __int64); // rbx
  __int64 v23; // r8
  void (__fastcall *v24)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v25)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v26)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v27)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v28)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v29)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v30)(__int64, _QWORD *, __int64); // rbx
  __int64 v31; // r8
  void (__fastcall *v32)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v33)(__int64, _QWORD *, __int64); // rbx
  void (__fastcall *v34)(__int64, _QWORD *, _QWORD *, __int64); // rdi
  _QWORD *v35; // rbx
  void (__fastcall *v36)(__int64, _QWORD *, _QWORD *, __int64); // rdi
  _QWORD *v37; // rbx
  void (__fastcall *v38)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v39)(__int64, _QWORD *, __int64, __int64); // rbx
  void (__fastcall *v40)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v41; // r8
  void (__fastcall *v42)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v43; // r8
  void (__fastcall *v44)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v45; // r8
  void (__fastcall *v46)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v47; // r8
  void (__fastcall *v48)(__int64, _QWORD *, __int64); // rbx
  __int64 v49; // r8
  void (__fastcall *v50)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v51; // r8
  void (__fastcall *v52)(__int64, _QWORD *, __int64); // rbx
  __int64 v53; // r8
  void (__fastcall *v54)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v55; // r8
  void (__fastcall *v56)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v57)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v58)(__int64, _QWORD *, __int64); // rbx
  __int64 v59; // r8
  void (__fastcall *v60)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v61; // r8
  void (__fastcall *v62)(__int64, _QWORD *, __int64); // rbx
  __int64 v63; // r8
  void (__fastcall *v64)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v65; // r8
  void (__fastcall *v66)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v67)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v68)(__int64, _QWORD *, __int64); // rbx
  void (__fastcall *v69)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v70; // r8
  void (__fastcall *v71)(__int64, _QWORD *, __int64); // rbx
  __int64 v72; // r8
  void (__fastcall *v73)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v74; // r8
  void (__fastcall *v75)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v76)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v77)(__int64, _QWORD *, __int64); // rbx
  void (__fastcall *v78)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v79)(__int64, _QWORD *, __int64); // rbx
  __int64 v80; // r8
  void (__fastcall *v81)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v82; // r8
  void (__fastcall *v83)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v84; // r8
  void (__fastcall *v85)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v86; // r8
  void (__fastcall *v87)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v88)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v89)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v90)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v91; // r8
  void (__fastcall *v92)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v93; // r8
  void (__fastcall *v94)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v95; // r8
  void (__fastcall *v96)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v97; // r8
  void (__fastcall *v98)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v99)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v100; // r8
  void (__fastcall *v101)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v102)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v103)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v104; // r8
  void (__fastcall *v105)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v106; // r8
  void (__fastcall *v107)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v108)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v109; // r8
  void (__fastcall *v110)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v111; // r8
  void (__fastcall *v112)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v113; // r8
  void (__fastcall *v114)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v115; // r8
  void (__fastcall *v116)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v117)(__int64, _QWORD *, __int64, __int64); // rbx
  void (__fastcall *v118)(__int64, _QWORD *, __int64); // rbx
  __int64 v119; // r8
  void (__fastcall *v120)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v121)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v122)(__int64, _QWORD *, __int64); // rbx
  void (__fastcall *v123)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v124)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v125)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v126)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v127)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v128)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v129)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v130)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v131)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v132)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v133)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v134)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v135)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v136)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v137)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v138)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v139)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v140)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v141)(__int64, _QWORD *, __int64); // rbx
  void (__fastcall *v142)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v143)(__int64, _QWORD *, __int64); // rbx
  void (__fastcall *v144)(__int64, _QWORD *, __int64); // rbx
  void (__fastcall *v145)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v146)(__int64, _QWORD *, __int64); // rbx
  __int64 v147; // r8
  void (__fastcall *v148)(__int64, _QWORD *, __int64); // rbx
  __int64 v149; // r8
  void (__fastcall *v150)(__int64, _QWORD *, __int64); // rbx
  __int64 v151; // r8
  void (__fastcall *v152)(__int64, _QWORD *, __int64); // rbx
  __int64 v153; // r8
  void (__fastcall *v154)(__int64, _QWORD *, __int64); // rbx
  void (__fastcall *v155)(__int64, _QWORD *, __int64); // rbx
  void (__fastcall *v156)(__int64, _QWORD *, __int64); // rbx
  void (__fastcall *v157)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v158)(__int64, _QWORD *, __int64); // rbx
  __int64 v159; // r8
  void (__fastcall *v160)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v161)(__int64, _QWORD *, __int64); // rbx
  __int64 v162; // r8
  void (__fastcall *v163)(__int64, _QWORD *, __int64); // rbx
  __int64 v164; // r8
  void (__fastcall *v165)(__int64, _QWORD *, __int64); // rbx
  __int64 v166; // r8
  void (__fastcall *v167)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v168; // r8
  void (__fastcall *v169)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v170; // r8
  void (__fastcall *v171)(__int64, _QWORD *, __int64); // rbx
  void (__fastcall *v172)(__int64, _QWORD *, __int64); // rbx
  void (__fastcall *v173)(__int64, _QWORD *, __int64); // rbx
  __int64 v174; // r8
  void (__fastcall *v175)(__int64, _QWORD *, __int64); // rbx
  __int64 v176; // r8
  void (__fastcall *v177)(__int64, _QWORD *, __int64); // rbx
  __int64 v178; // r8
  void (__fastcall *v179)(__int64, _QWORD *, __int64); // rbx
  __int64 v180; // r8
  void (__fastcall *v181)(__int64, _QWORD *, __int64); // rbx
  __int64 v182; // r8
  void (__fastcall *v183)(__int64, _QWORD *, __int64); // rbx
  __int64 v184; // r8
  void (__fastcall *v185)(__int64, _QWORD *, __int64); // rbx
  __int64 v186; // r8
  void (__fastcall *v187)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v188)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v189)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v190)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v191; // r8
  void (__fastcall *v192)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v193; // r8
  void (__fastcall *v194)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v195)(__int64, _QWORD *, __int64); // rbx
  __int64 v196; // r8
  void (__fastcall *v197)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v198; // r8
  void (__fastcall *v199)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v200; // r8
  void (__fastcall *v201)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v202; // r8
  void (__fastcall *v203)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v204; // r8
  void (__fastcall *v205)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v206; // r8
  void (__fastcall *v207)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v208; // r8
  void (__fastcall *v209)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v210; // r8
  void (__fastcall *v211)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v212; // r8
  void (__fastcall *v213)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v214; // r8
  void (__fastcall *v215)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v216; // r8
  void (__fastcall *v217)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v218; // r8
  void (__fastcall *v219)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v220; // r8
  void (__fastcall *v221)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v222; // r8
  void (__fastcall *v223)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v224; // r8
  void (__fastcall *v225)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v226; // r8
  void (__fastcall *v227)(__int64, _QWORD *, _QWORD *, __int64); // rdi
  _QWORD *v228; // rbx
  void (__fastcall *v229)(__int64, _QWORD *, _QWORD *, __int64); // rdi
  _QWORD *v230; // rbx
  void (__fastcall *v231)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v232; // r8
  void (__fastcall *v233)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v234; // r8
  void (__fastcall *v235)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v236; // r8
  void (__fastcall *v237)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v238; // r8
  void (__fastcall *v239)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v240; // r8
  void (__fastcall *v241)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v242; // r8
  void (__fastcall *v243)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v244; // r8
  void (__fastcall *v245)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v246; // r8
  void (__fastcall *v247)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v248; // r8
  void (__fastcall *v249)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v250; // r8
  void (__fastcall *v251)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v252; // r8
  void (__fastcall *v253)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v254; // r8
  void (__fastcall *v255)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v256; // r8
  void (__fastcall *v257)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v258; // r8
  void (__fastcall *v259)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v260; // r8
  void (__fastcall *v261)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v262; // r8
  void (__fastcall *v263)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v264; // r8
  void (__fastcall *v265)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v266; // r8
  void (__fastcall *v267)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v268; // r8
  void (__fastcall *v269)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v270; // r8
  void (__fastcall *v271)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v272; // r8
  void (__fastcall *v273)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v274)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v275; // r8
  void (__fastcall *v276)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v277; // r8
  void (__fastcall *v278)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v279; // r8
  void (__fastcall *v280)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v281; // r8
  void (__fastcall *v282)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v283; // r8
  void (__fastcall *v284)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v285; // r8
  void (__fastcall *v286)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v287; // r8
  void (__fastcall *v288)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v289; // r8
  void (__fastcall *v290)(__int64, _QWORD *, __int64); // rbx
  void (__fastcall *v291)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v292; // r8
  void (__fastcall *v293)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v294; // r8
  void (__fastcall *v295)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v296; // r8
  void (__fastcall *v297)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v298; // r8
  void (__fastcall *v299)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v300; // r8
  void (__fastcall *v301)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v302; // r8
  void (__fastcall *v303)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v304; // r8
  void (__fastcall *v305)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v306)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v307; // r8
  void (__fastcall *v308)(__int64, _QWORD *, __int64); // rbx
  __int64 v309; // r8
  void (__fastcall *v310)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v311)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v312; // r8
  void (__fastcall *v313)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v314; // r8
  void (__fastcall *v315)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v316; // r8
  void (__fastcall *v317)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v318; // r8
  void (__fastcall *v319)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v320; // r8
  void (__fastcall *v321)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v322; // r8
  void (__fastcall *v323)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v324; // r8
  void (__fastcall *v325)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v326; // r8
  void (__fastcall *v327)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v328; // r8
  void (__fastcall *v329)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v330; // r8
  void (__fastcall *v331)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v332; // r8
  void (__fastcall *v333)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v334; // r8
  void (__fastcall *v335)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v336; // r8
  void (__fastcall *v337)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v338; // r8
  void (__fastcall *v339)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v340; // r8
  void (__fastcall *v341)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v342; // r8
  void (__fastcall *v343)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v344; // r8
  void (__fastcall *v345)(__int64, _QWORD *, __int64); // rbx
  __int64 v346; // r8
  void (__fastcall *v347)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v348)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v349; // r8
  void (__fastcall *v350)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v351; // r8
  void (__fastcall *v352)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v353; // r8
  void (__fastcall *v354)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v355; // r8
  void (__fastcall *v356)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v357; // r8
  void (__fastcall *v358)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v359; // r8
  void (__fastcall *v360)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v361; // r8
  void (__fastcall *v362)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v363; // r8
  void (__fastcall *v364)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v365; // r8
  void (__fastcall *v366)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v367; // r8
  void (__fastcall *v368)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v369; // r8
  void (__fastcall *v370)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v371; // r8
  void (__fastcall *v372)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v373; // r8
  void (__fastcall *v374)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v375; // r8
  void (__fastcall *v376)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v377; // r8
  void (__fastcall *v378)(__int64, _QWORD *, _QWORD *, __int64); // rdi
  _QWORD *v379; // rbx
  void (__fastcall *v380)(__int64, _QWORD *, _QWORD *, __int64); // rdi
  _QWORD *v381; // rbx
  void (__fastcall *v382)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v383; // r8
  void (__fastcall *v384)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v385; // r8
  void (__fastcall *v386)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v387)(__int64, _QWORD *, __int64); // rbx
  __int64 v388; // r8
  void (__fastcall *v389)(__int64, _QWORD *, __int64); // rbx
  void (__fastcall *v390)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v391; // r8
  void (__fastcall *v392)(__int64, _QWORD *, __int64); // rbx
  __int64 v393; // r8
  void (__fastcall *v394)(__int64, _QWORD *, __int64); // rbx
  __int64 v395; // r8
  void (__fastcall *v396)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v397)(__int64, _QWORD *, __int64); // rbx
  __int64 v398; // r8
  void (__fastcall *v399)(__int64, _QWORD *, __int64); // rbx
  void (__fastcall *v400)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v401; // r8
  void (__fastcall *v402)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v403)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v404; // r8
  void (__fastcall *v405)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v406; // r8
  void (__fastcall *v407)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v408; // r8
  void (__fastcall *v409)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v410; // r8
  void (__fastcall *v411)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v412; // r8
  void (__fastcall *v413)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v414; // r8
  void (__fastcall *v415)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v416; // r8
  void (__fastcall *v417)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v418; // r8
  void (__fastcall *v419)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v420; // r8
  void (__fastcall *v421)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v422; // r8
  void (__fastcall *v423)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v424; // r8
  void (__fastcall *v425)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v426; // r8
  void (__fastcall *v427)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v428; // r8
  void (__fastcall *v429)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v430; // r8
  void (__fastcall *v431)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v432; // r8
  void (__fastcall *v433)(__int64, _QWORD *, __int64); // rbx
  __int64 v434; // r8
  void (__fastcall *v435)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v436; // r8
  void (__fastcall *v437)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v438; // r8
  void (__fastcall *v439)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v440; // r8
  void (__fastcall *v441)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v442; // r8
  void (__fastcall *v443)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v444; // r8
  void (__fastcall *v445)(__int64, _QWORD *, __int64); // rbx
  __int64 v446; // r8
  void (__fastcall *v447)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v448)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v449; // r8
  void (__fastcall *v450)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v451; // r8
  void (__fastcall *v452)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v453)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v454)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v455; // r8
  void (__fastcall *v456)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v457; // r8
  void (__fastcall *v458)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v459; // r8
  void (__fastcall *v460)(__int64, _QWORD *, __int64); // rbx
  __int64 v461; // r8
  void (__fastcall *v462)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v463; // r8
  void (__fastcall *v464)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v465; // r8
  void (__fastcall *v466)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v467)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v468; // r8
  void (__fastcall *v469)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v470; // r8
  void (__fastcall *v471)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v472; // r8
  void (__fastcall *v473)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v474; // r8
  void (__fastcall *v475)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v476; // r8
  void (__fastcall *v477)(__int64, _QWORD *, __int64); // rbx
  __int64 v478; // r8
  void (__fastcall *v479)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v480; // r8
  void (__fastcall *v481)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v482; // r8
  void (__fastcall *v483)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v484; // r8
  void (__fastcall *v485)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v486; // r8
  void (__fastcall *v487)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v488; // r8
  void (__fastcall *v489)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v490; // r8
  void (__fastcall *v491)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v492; // r8
  void (__fastcall *v493)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v494; // r8
  void (__fastcall *v495)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v496)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v497)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v498)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v499; // r8
  void (__fastcall *v500)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v501; // r8
  void (__fastcall *v502)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v503; // r8
  void (__fastcall *v504)(__int64, _QWORD *, __int64); // rbx
  __int64 v505; // r8
  void (__fastcall *v506)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v507; // r8
  void (__fastcall *v508)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v509; // r8
  void (__fastcall *v510)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v511)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v512; // r8
  void (__fastcall *v513)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v514; // r8
  void (__fastcall *v515)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v516; // r8
  void (__fastcall *v517)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v518; // r8
  void (__fastcall *v519)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v520; // r8
  void (__fastcall *v521)(__int64, _QWORD *, __int64); // rbx
  __int64 v522; // r8
  void (__fastcall *v523)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v524; // r8
  void (__fastcall *v525)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v526; // r8
  void (__fastcall *v527)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v528; // r8
  void (__fastcall *v529)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v530; // r8
  void (__fastcall *v531)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v532; // r8
  void (__fastcall *v533)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v534; // r8
  void (__fastcall *v535)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v536; // r8
  void (__fastcall *v537)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v538; // r8
  void (__fastcall *v539)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v540)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v541)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v542)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v543; // r8
  void (__fastcall *v544)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v545; // r8
  void (__fastcall *v546)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v547; // r8
  void (__fastcall *v548)(__int64, _QWORD *, __int64); // rbx
  __int64 v549; // r8
  void (__fastcall *v550)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v551; // r8
  void (__fastcall *v552)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v553; // r8
  void (__fastcall *v554)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v555)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v556; // r8
  void (__fastcall *v557)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v558; // r8
  void (__fastcall *v559)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v560; // r8
  void (__fastcall *v561)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v562; // r8
  void (__fastcall *v563)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v564; // r8
  void (__fastcall *v565)(__int64, _QWORD *, __int64); // rbx
  __int64 v566; // r8
  void (__fastcall *v567)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v568; // r8
  void (__fastcall *v569)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v570; // r8
  void (__fastcall *v571)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v572; // r8
  void (__fastcall *v573)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v574; // r8
  void (__fastcall *v575)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v576; // r8
  void (__fastcall *v577)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v578; // r8
  void (__fastcall *v579)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v580; // r8
  void (__fastcall *v581)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v582; // r8
  void (__fastcall *v583)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v584)(__int64, _QWORD *, __int64); // rbx
  __int64 v585; // r8
  void (__fastcall *v586)(__int64, _QWORD *, __int64); // rbx
  __int64 v587; // r8
  void (__fastcall *v588)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v589; // r8
  void (__fastcall *v590)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v591; // r8
  void (__fastcall *v592)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v593; // r8
  void (__fastcall *v594)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v595; // r8
  void (__fastcall *v596)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v597; // r8
  void (__fastcall *v598)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v599; // r8
  void (__fastcall *v600)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v601; // r8
  void (__fastcall *v602)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v603; // r8
  void (__fastcall *v604)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v605; // r8
  void (__fastcall *v606)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v607; // r8
  void (__fastcall *v608)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v609; // r8
  void (__fastcall *v610)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v611)(__int64, _QWORD *, __int64, __int64); // rbx
  __int64 v612; // r8
  void (__fastcall *v613)(__int64, _QWORD *, _QWORD, __int64); // rbx
  void (__fastcall *v614)(__int64, _QWORD *, _QWORD, __int64); // rbx
  _QWORD v616[4]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v617[4]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v618[4]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v619[4]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v620[4]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v621[4]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v622[4]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v623[4]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v624[4]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v625[4]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v626[4]; // [rsp+178h] [rbp+78h] BYREF
  _QWORD v627[4]; // [rsp+198h] [rbp+98h] BYREF
  _QWORD v628[4]; // [rsp+1B8h] [rbp+B8h] BYREF
  _QWORD v629[4]; // [rsp+1D8h] [rbp+D8h] BYREF
  _QWORD v630[4]; // [rsp+1F8h] [rbp+F8h] BYREF
  _QWORD v631[4]; // [rsp+218h] [rbp+118h] BYREF
  _QWORD v632[4]; // [rsp+238h] [rbp+138h] BYREF
  _QWORD v633[4]; // [rsp+258h] [rbp+158h] BYREF
  _QWORD v634[4]; // [rsp+278h] [rbp+178h] BYREF
  _QWORD v635[4]; // [rsp+298h] [rbp+198h] BYREF
  _QWORD v636[4]; // [rsp+2B8h] [rbp+1B8h] BYREF
  _QWORD v637[4]; // [rsp+2D8h] [rbp+1D8h] BYREF
  _QWORD v638[4]; // [rsp+2F8h] [rbp+1F8h] BYREF
  _QWORD v639[4]; // [rsp+318h] [rbp+218h] BYREF
  _QWORD v640[4]; // [rsp+338h] [rbp+238h] BYREF
  _QWORD v641[4]; // [rsp+358h] [rbp+258h] BYREF
  _QWORD v642[4]; // [rsp+378h] [rbp+278h] BYREF
  _QWORD v643[4]; // [rsp+398h] [rbp+298h] BYREF
  _QWORD v644[4]; // [rsp+3B8h] [rbp+2B8h] BYREF
  _QWORD v645[4]; // [rsp+3D8h] [rbp+2D8h] BYREF
  _QWORD v646[4]; // [rsp+3F8h] [rbp+2F8h] BYREF
  _QWORD v647[4]; // [rsp+418h] [rbp+318h] BYREF
  _QWORD v648[4]; // [rsp+438h] [rbp+338h] BYREF
  _QWORD v649[4]; // [rsp+458h] [rbp+358h] BYREF
  _QWORD v650[4]; // [rsp+478h] [rbp+378h] BYREF
  _QWORD v651[4]; // [rsp+498h] [rbp+398h] BYREF
  _QWORD v652[4]; // [rsp+4B8h] [rbp+3B8h] BYREF
  _QWORD v653[4]; // [rsp+4D8h] [rbp+3D8h] BYREF
  _QWORD v654[4]; // [rsp+4F8h] [rbp+3F8h] BYREF
  _QWORD v655[4]; // [rsp+518h] [rbp+418h] BYREF
  _QWORD v656[4]; // [rsp+538h] [rbp+438h] BYREF
  _QWORD v657[4]; // [rsp+558h] [rbp+458h] BYREF
  _QWORD v658[4]; // [rsp+578h] [rbp+478h] BYREF
  _QWORD v659[4]; // [rsp+598h] [rbp+498h] BYREF
  _QWORD v660[4]; // [rsp+5B8h] [rbp+4B8h] BYREF
  _QWORD v661[4]; // [rsp+5D8h] [rbp+4D8h] BYREF
  _QWORD v662[4]; // [rsp+5F8h] [rbp+4F8h] BYREF
  _QWORD v663[4]; // [rsp+618h] [rbp+518h] BYREF
  _QWORD v664[4]; // [rsp+638h] [rbp+538h] BYREF
  _QWORD v665[4]; // [rsp+658h] [rbp+558h] BYREF
  _QWORD v666[4]; // [rsp+678h] [rbp+578h] BYREF
  _QWORD v667[4]; // [rsp+698h] [rbp+598h] BYREF
  _QWORD v668[4]; // [rsp+6B8h] [rbp+5B8h] BYREF
  _QWORD v669[4]; // [rsp+6D8h] [rbp+5D8h] BYREF
  _QWORD v670[4]; // [rsp+6F8h] [rbp+5F8h] BYREF
  _QWORD v671[4]; // [rsp+718h] [rbp+618h] BYREF
  _QWORD v672[4]; // [rsp+738h] [rbp+638h] BYREF
  _QWORD v673[4]; // [rsp+758h] [rbp+658h] BYREF
  _QWORD v674[4]; // [rsp+778h] [rbp+678h] BYREF
  _QWORD v675[4]; // [rsp+798h] [rbp+698h] BYREF
  _QWORD v676[4]; // [rsp+7B8h] [rbp+6B8h] BYREF
  _QWORD v677[4]; // [rsp+7D8h] [rbp+6D8h] BYREF
  _QWORD v678[4]; // [rsp+7F8h] [rbp+6F8h] BYREF
  _QWORD v679[4]; // [rsp+818h] [rbp+718h] BYREF
  _QWORD v680[4]; // [rsp+838h] [rbp+738h] BYREF
  _QWORD v681[4]; // [rsp+858h] [rbp+758h] BYREF
  _QWORD v682[4]; // [rsp+878h] [rbp+778h] BYREF
  _QWORD v683[4]; // [rsp+898h] [rbp+798h] BYREF
  _QWORD v684[4]; // [rsp+8B8h] [rbp+7B8h] BYREF
  _QWORD v685[4]; // [rsp+8D8h] [rbp+7D8h] BYREF
  _QWORD v686[4]; // [rsp+8F8h] [rbp+7F8h] BYREF
  _QWORD v687[4]; // [rsp+918h] [rbp+818h] BYREF
  _QWORD v688[4]; // [rsp+938h] [rbp+838h] BYREF
  _QWORD v689[4]; // [rsp+958h] [rbp+858h] BYREF
  _QWORD v690[4]; // [rsp+978h] [rbp+878h] BYREF
  _QWORD v691[4]; // [rsp+998h] [rbp+898h] BYREF
  _QWORD v692[4]; // [rsp+9B8h] [rbp+8B8h] BYREF
  _QWORD v693[4]; // [rsp+9D8h] [rbp+8D8h] BYREF
  _QWORD v694[4]; // [rsp+9F8h] [rbp+8F8h] BYREF
  _QWORD v695[4]; // [rsp+A18h] [rbp+918h] BYREF
  _QWORD v696[4]; // [rsp+A38h] [rbp+938h] BYREF
  _QWORD v697[4]; // [rsp+A58h] [rbp+958h] BYREF
  _QWORD v698[4]; // [rsp+A78h] [rbp+978h] BYREF
  _QWORD v699[4]; // [rsp+A98h] [rbp+998h] BYREF
  _QWORD v700[4]; // [rsp+AB8h] [rbp+9B8h] BYREF
  _QWORD v701[4]; // [rsp+AD8h] [rbp+9D8h] BYREF
  _QWORD v702[4]; // [rsp+AF8h] [rbp+9F8h] BYREF
  _QWORD v703[4]; // [rsp+B18h] [rbp+A18h] BYREF
  _QWORD v704[4]; // [rsp+B38h] [rbp+A38h] BYREF
  _QWORD v705[4]; // [rsp+B58h] [rbp+A58h] BYREF
  _QWORD v706[4]; // [rsp+B78h] [rbp+A78h] BYREF
  _QWORD v707[4]; // [rsp+B98h] [rbp+A98h] BYREF
  _QWORD v708[4]; // [rsp+BB8h] [rbp+AB8h] BYREF
  _QWORD v709[4]; // [rsp+BD8h] [rbp+AD8h] BYREF
  _QWORD v710[4]; // [rsp+BF8h] [rbp+AF8h] BYREF
  _QWORD v711[4]; // [rsp+C18h] [rbp+B18h] BYREF
  _QWORD v712[4]; // [rsp+C38h] [rbp+B38h] BYREF
  _QWORD v713[4]; // [rsp+C58h] [rbp+B58h] BYREF
  _QWORD v714[4]; // [rsp+C78h] [rbp+B78h] BYREF
  _QWORD v715[4]; // [rsp+C98h] [rbp+B98h] BYREF
  _QWORD v716[4]; // [rsp+CB8h] [rbp+BB8h] BYREF
  _QWORD v717[4]; // [rsp+CD8h] [rbp+BD8h] BYREF
  _QWORD v718[4]; // [rsp+CF8h] [rbp+BF8h] BYREF
  _QWORD v719[4]; // [rsp+D18h] [rbp+C18h] BYREF
  _QWORD v720[4]; // [rsp+D38h] [rbp+C38h] BYREF
  _QWORD v721[4]; // [rsp+D58h] [rbp+C58h] BYREF
  _QWORD v722[4]; // [rsp+D78h] [rbp+C78h] BYREF
  _QWORD v723[4]; // [rsp+D98h] [rbp+C98h] BYREF
  _QWORD v724[4]; // [rsp+DB8h] [rbp+CB8h] BYREF
  _QWORD v725[4]; // [rsp+DD8h] [rbp+CD8h] BYREF
  _QWORD v726[4]; // [rsp+DF8h] [rbp+CF8h] BYREF
  _QWORD v727[4]; // [rsp+E18h] [rbp+D18h] BYREF
  _QWORD v728[4]; // [rsp+E38h] [rbp+D38h] BYREF
  _QWORD v729[4]; // [rsp+E58h] [rbp+D58h] BYREF
  _QWORD v730[4]; // [rsp+E78h] [rbp+D78h] BYREF
  _QWORD v731[4]; // [rsp+E98h] [rbp+D98h] BYREF
  _QWORD v732[4]; // [rsp+EB8h] [rbp+DB8h] BYREF
  _QWORD v733[4]; // [rsp+ED8h] [rbp+DD8h] BYREF
  _QWORD v734[4]; // [rsp+EF8h] [rbp+DF8h] BYREF
  _QWORD v735[4]; // [rsp+F18h] [rbp+E18h] BYREF
  _QWORD v736[4]; // [rsp+F38h] [rbp+E38h] BYREF
  _QWORD v737[4]; // [rsp+F58h] [rbp+E58h] BYREF
  _QWORD v738[4]; // [rsp+F78h] [rbp+E78h] BYREF
  _QWORD v739[4]; // [rsp+F98h] [rbp+E98h] BYREF
  _QWORD v740[4]; // [rsp+FB8h] [rbp+EB8h] BYREF
  _QWORD v741[4]; // [rsp+FD8h] [rbp+ED8h] BYREF
  _QWORD v742[4]; // [rsp+FF8h] [rbp+EF8h] BYREF
  _QWORD v743[4]; // [rsp+1018h] [rbp+F18h] BYREF
  _QWORD v744[4]; // [rsp+1038h] [rbp+F38h] BYREF
  _QWORD v745[4]; // [rsp+1058h] [rbp+F58h] BYREF
  _QWORD v746[4]; // [rsp+1078h] [rbp+F78h] BYREF
  _QWORD v747[4]; // [rsp+1098h] [rbp+F98h] BYREF
  _QWORD v748[4]; // [rsp+10B8h] [rbp+FB8h] BYREF
  _QWORD v749[4]; // [rsp+10D8h] [rbp+FD8h] BYREF
  _QWORD v750[4]; // [rsp+10F8h] [rbp+FF8h] BYREF
  _QWORD v751[4]; // [rsp+1118h] [rbp+1018h] BYREF
  _QWORD v752[4]; // [rsp+1138h] [rbp+1038h] BYREF
  _QWORD v753[4]; // [rsp+1158h] [rbp+1058h] BYREF
  _QWORD v754[4]; // [rsp+1178h] [rbp+1078h] BYREF
  _QWORD v755[4]; // [rsp+1198h] [rbp+1098h] BYREF
  _QWORD v756[4]; // [rsp+11B8h] [rbp+10B8h] BYREF
  _QWORD v757[4]; // [rsp+11D8h] [rbp+10D8h] BYREF
  _QWORD v758[4]; // [rsp+11F8h] [rbp+10F8h] BYREF
  _QWORD v759[4]; // [rsp+1218h] [rbp+1118h] BYREF
  _QWORD v760[4]; // [rsp+1238h] [rbp+1138h] BYREF
  _QWORD v761[4]; // [rsp+1258h] [rbp+1158h] BYREF
  _QWORD v762[4]; // [rsp+1278h] [rbp+1178h] BYREF
  _QWORD v763[4]; // [rsp+1298h] [rbp+1198h] BYREF
  _QWORD v764[4]; // [rsp+12B8h] [rbp+11B8h] BYREF
  _QWORD v765[4]; // [rsp+12D8h] [rbp+11D8h] BYREF
  _QWORD v766[4]; // [rsp+12F8h] [rbp+11F8h] BYREF
  _QWORD v767[4]; // [rsp+1318h] [rbp+1218h] BYREF
  _QWORD v768[4]; // [rsp+1338h] [rbp+1238h] BYREF
  _QWORD v769[4]; // [rsp+1358h] [rbp+1258h] BYREF
  _QWORD v770[4]; // [rsp+1378h] [rbp+1278h] BYREF
  _QWORD v771[4]; // [rsp+1398h] [rbp+1298h] BYREF
  _QWORD v772[4]; // [rsp+13B8h] [rbp+12B8h] BYREF
  _QWORD v773[4]; // [rsp+13D8h] [rbp+12D8h] BYREF
  _QWORD v774[4]; // [rsp+13F8h] [rbp+12F8h] BYREF
  _QWORD v775[4]; // [rsp+1418h] [rbp+1318h] BYREF
  _QWORD v776[4]; // [rsp+1438h] [rbp+1338h] BYREF
  _QWORD v777[4]; // [rsp+1458h] [rbp+1358h] BYREF
  _QWORD v778[4]; // [rsp+1478h] [rbp+1378h] BYREF
  _QWORD v779[4]; // [rsp+1498h] [rbp+1398h] BYREF
  _QWORD v780[4]; // [rsp+14B8h] [rbp+13B8h] BYREF
  _QWORD v781[4]; // [rsp+14D8h] [rbp+13D8h] BYREF
  _QWORD v782[4]; // [rsp+14F8h] [rbp+13F8h] BYREF
  _QWORD v783[4]; // [rsp+1518h] [rbp+1418h] BYREF
  _QWORD v784[4]; // [rsp+1538h] [rbp+1438h] BYREF
  _QWORD v785[4]; // [rsp+1558h] [rbp+1458h] BYREF
  _QWORD v786[4]; // [rsp+1578h] [rbp+1478h] BYREF
  _QWORD v787[4]; // [rsp+1598h] [rbp+1498h] BYREF
  _QWORD v788[4]; // [rsp+15B8h] [rbp+14B8h] BYREF
  _QWORD v789[4]; // [rsp+15D8h] [rbp+14D8h] BYREF
  _QWORD v790[4]; // [rsp+15F8h] [rbp+14F8h] BYREF
  _QWORD v791[4]; // [rsp+1618h] [rbp+1518h] BYREF
  _QWORD v792[4]; // [rsp+1638h] [rbp+1538h] BYREF
  _QWORD v793[4]; // [rsp+1658h] [rbp+1558h] BYREF
  _QWORD v794[4]; // [rsp+1678h] [rbp+1578h] BYREF
  _QWORD v795[4]; // [rsp+1698h] [rbp+1598h] BYREF
  _QWORD v796[4]; // [rsp+16B8h] [rbp+15B8h] BYREF
  _QWORD v797[4]; // [rsp+16D8h] [rbp+15D8h] BYREF
  _QWORD v798[4]; // [rsp+16F8h] [rbp+15F8h] BYREF
  _QWORD v799[4]; // [rsp+1718h] [rbp+1618h] BYREF
  _QWORD v800[4]; // [rsp+1738h] [rbp+1638h] BYREF
  _QWORD v801[4]; // [rsp+1758h] [rbp+1658h] BYREF
  _QWORD v802[4]; // [rsp+1778h] [rbp+1678h] BYREF
  _QWORD v803[4]; // [rsp+1798h] [rbp+1698h] BYREF
  _QWORD v804[4]; // [rsp+17B8h] [rbp+16B8h] BYREF
  _QWORD v805[4]; // [rsp+17D8h] [rbp+16D8h] BYREF
  _QWORD v806[4]; // [rsp+17F8h] [rbp+16F8h] BYREF
  _QWORD v807[4]; // [rsp+1818h] [rbp+1718h] BYREF
  _QWORD v808[4]; // [rsp+1838h] [rbp+1738h] BYREF
  _QWORD v809[4]; // [rsp+1858h] [rbp+1758h] BYREF
  _QWORD v810[4]; // [rsp+1878h] [rbp+1778h] BYREF
  _QWORD v811[4]; // [rsp+1898h] [rbp+1798h] BYREF
  _QWORD v812[4]; // [rsp+18B8h] [rbp+17B8h] BYREF
  _QWORD v813[4]; // [rsp+18D8h] [rbp+17D8h] BYREF
  _QWORD v814[4]; // [rsp+18F8h] [rbp+17F8h] BYREF
  _QWORD v815[4]; // [rsp+1918h] [rbp+1818h] BYREF
  _QWORD v816[4]; // [rsp+1938h] [rbp+1838h] BYREF
  _QWORD v817[4]; // [rsp+1958h] [rbp+1858h] BYREF
  _QWORD v818[4]; // [rsp+1978h] [rbp+1878h] BYREF
  _QWORD v819[4]; // [rsp+1998h] [rbp+1898h] BYREF
  _QWORD v820[4]; // [rsp+19B8h] [rbp+18B8h] BYREF
  _QWORD v821[4]; // [rsp+19D8h] [rbp+18D8h] BYREF
  _QWORD v822[4]; // [rsp+19F8h] [rbp+18F8h] BYREF
  _QWORD v823[4]; // [rsp+1A18h] [rbp+1918h] BYREF
  _QWORD v824[4]; // [rsp+1A38h] [rbp+1938h] BYREF
  _QWORD v825[4]; // [rsp+1A58h] [rbp+1958h] BYREF
  _QWORD v826[4]; // [rsp+1A78h] [rbp+1978h] BYREF
  _QWORD v827[4]; // [rsp+1A98h] [rbp+1998h] BYREF
  _QWORD v828[4]; // [rsp+1AB8h] [rbp+19B8h] BYREF
  _QWORD v829[4]; // [rsp+1AD8h] [rbp+19D8h] BYREF
  _QWORD v830[4]; // [rsp+1AF8h] [rbp+19F8h] BYREF
  _QWORD v831[4]; // [rsp+1B18h] [rbp+1A18h] BYREF
  _QWORD v832[4]; // [rsp+1B38h] [rbp+1A38h] BYREF
  _QWORD v833[4]; // [rsp+1B58h] [rbp+1A58h] BYREF
  _QWORD v834[4]; // [rsp+1B78h] [rbp+1A78h] BYREF
  _QWORD v835[4]; // [rsp+1B98h] [rbp+1A98h] BYREF
  _QWORD v836[4]; // [rsp+1BB8h] [rbp+1AB8h] BYREF
  _QWORD v837[4]; // [rsp+1BD8h] [rbp+1AD8h] BYREF
  _QWORD v838[4]; // [rsp+1BF8h] [rbp+1AF8h] BYREF
  _QWORD v839[4]; // [rsp+1C18h] [rbp+1B18h] BYREF
  _QWORD v840[4]; // [rsp+1C38h] [rbp+1B38h] BYREF
  _QWORD v841[4]; // [rsp+1C58h] [rbp+1B58h] BYREF
  _QWORD v842[4]; // [rsp+1C78h] [rbp+1B78h] BYREF
  _QWORD v843[4]; // [rsp+1C98h] [rbp+1B98h] BYREF
  _QWORD v844[4]; // [rsp+1CB8h] [rbp+1BB8h] BYREF
  _QWORD v845[4]; // [rsp+1CD8h] [rbp+1BD8h] BYREF
  _QWORD v846[4]; // [rsp+1CF8h] [rbp+1BF8h] BYREF
  _QWORD v847[4]; // [rsp+1D18h] [rbp+1C18h] BYREF
  _QWORD v848[4]; // [rsp+1D38h] [rbp+1C38h] BYREF
  _QWORD v849[4]; // [rsp+1D58h] [rbp+1C58h] BYREF
  _QWORD v850[4]; // [rsp+1D78h] [rbp+1C78h] BYREF
  _QWORD v851[4]; // [rsp+1D98h] [rbp+1C98h] BYREF
  _QWORD v852[4]; // [rsp+1DB8h] [rbp+1CB8h] BYREF
  _QWORD v853[4]; // [rsp+1DD8h] [rbp+1CD8h] BYREF
  _QWORD v854[4]; // [rsp+1DF8h] [rbp+1CF8h] BYREF
  _QWORD v855[4]; // [rsp+1E18h] [rbp+1D18h] BYREF
  _QWORD v856[4]; // [rsp+1E38h] [rbp+1D38h] BYREF
  _QWORD v857[4]; // [rsp+1E58h] [rbp+1D58h] BYREF
  _QWORD v858[4]; // [rsp+1E78h] [rbp+1D78h] BYREF
  _QWORD v859[4]; // [rsp+1E98h] [rbp+1D98h] BYREF
  _QWORD v860[4]; // [rsp+1EB8h] [rbp+1DB8h] BYREF
  _QWORD v861[4]; // [rsp+1ED8h] [rbp+1DD8h] BYREF
  _QWORD v862[4]; // [rsp+1EF8h] [rbp+1DF8h] BYREF
  _QWORD v863[4]; // [rsp+1F18h] [rbp+1E18h] BYREF
  _QWORD v864[4]; // [rsp+1F38h] [rbp+1E38h] BYREF
  _QWORD v865[4]; // [rsp+1F58h] [rbp+1E58h] BYREF
  _QWORD v866[4]; // [rsp+1F78h] [rbp+1E78h] BYREF
  _QWORD v867[4]; // [rsp+1F98h] [rbp+1E98h] BYREF
  _QWORD v868[4]; // [rsp+1FB8h] [rbp+1EB8h] BYREF
  _QWORD v869[4]; // [rsp+1FD8h] [rbp+1ED8h] BYREF
  _QWORD v870[4]; // [rsp+1FF8h] [rbp+1EF8h] BYREF
  _QWORD v871[4]; // [rsp+2018h] [rbp+1F18h] BYREF
  _QWORD v872[4]; // [rsp+2038h] [rbp+1F38h] BYREF
  _QWORD v873[4]; // [rsp+2058h] [rbp+1F58h] BYREF
  _QWORD v874[4]; // [rsp+2078h] [rbp+1F78h] BYREF
  _QWORD v875[4]; // [rsp+2098h] [rbp+1F98h] BYREF
  _QWORD v876[4]; // [rsp+20B8h] [rbp+1FB8h] BYREF
  _QWORD v877[4]; // [rsp+20D8h] [rbp+1FD8h] BYREF
  _QWORD v878[4]; // [rsp+20F8h] [rbp+1FF8h] BYREF
  _QWORD v879[4]; // [rsp+2118h] [rbp+2018h] BYREF
  _QWORD v880[4]; // [rsp+2138h] [rbp+2038h] BYREF
  _QWORD v881[4]; // [rsp+2158h] [rbp+2058h] BYREF
  _QWORD v882[4]; // [rsp+2178h] [rbp+2078h] BYREF
  _QWORD v883[4]; // [rsp+2198h] [rbp+2098h] BYREF
  _QWORD v884[4]; // [rsp+21B8h] [rbp+20B8h] BYREF
  _QWORD v885[4]; // [rsp+21D8h] [rbp+20D8h] BYREF
  _QWORD v886[4]; // [rsp+21F8h] [rbp+20F8h] BYREF
  _QWORD v887[4]; // [rsp+2218h] [rbp+2118h] BYREF
  _QWORD v888[4]; // [rsp+2238h] [rbp+2138h] BYREF
  _QWORD v889[4]; // [rsp+2258h] [rbp+2158h] BYREF
  _QWORD v890[4]; // [rsp+2278h] [rbp+2178h] BYREF
  _QWORD v891[4]; // [rsp+2298h] [rbp+2198h] BYREF
  _QWORD v892[4]; // [rsp+22B8h] [rbp+21B8h] BYREF
  _QWORD v893[4]; // [rsp+22D8h] [rbp+21D8h] BYREF
  _QWORD v894[4]; // [rsp+22F8h] [rbp+21F8h] BYREF
  _QWORD v895[4]; // [rsp+2318h] [rbp+2218h] BYREF
  _QWORD v896[4]; // [rsp+2338h] [rbp+2238h] BYREF
  _QWORD v897[4]; // [rsp+2358h] [rbp+2258h] BYREF
  _QWORD v898[4]; // [rsp+2378h] [rbp+2278h] BYREF
  _QWORD v899[4]; // [rsp+2398h] [rbp+2298h] BYREF
  _QWORD v900[4]; // [rsp+23B8h] [rbp+22B8h] BYREF
  _QWORD v901[4]; // [rsp+23D8h] [rbp+22D8h] BYREF
  _QWORD v902[4]; // [rsp+23F8h] [rbp+22F8h] BYREF
  _QWORD v903[4]; // [rsp+2418h] [rbp+2318h] BYREF
  _QWORD v904[4]; // [rsp+2438h] [rbp+2338h] BYREF
  _QWORD v905[4]; // [rsp+2458h] [rbp+2358h] BYREF
  _QWORD v906[4]; // [rsp+2478h] [rbp+2378h] BYREF
  _QWORD v907[4]; // [rsp+2498h] [rbp+2398h] BYREF
  _QWORD v908[4]; // [rsp+24B8h] [rbp+23B8h] BYREF
  _QWORD v909[4]; // [rsp+24D8h] [rbp+23D8h] BYREF

  v2 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Application.KeyboardDeveloperMode");
  v2(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v3 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Background.EnableBackgroundCube");
  LOBYTE(v4) = 1;
  v3(a1, v621, v4);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v5 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Background.ImageProcessing.Enabled");
  LOBYTE(v6) = 1;
  v5(a1, v621, v6);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v7 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(
    v621,
    (__int64)L"/Internal/BugWorkaroundOverride.MetalDepthOnlyAlphaToCoverage.ForceWorkaroundOff");
  v7(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v8 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/BugWorkaroundOverride.MetalIntelIrisDepthPrepass.ForceWorkaroundOff");
  v8(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v9 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Camera.Distance");
  v9(a1, v621, v10, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v11 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Camera.Elevation (degrees)");
  v11(a1, v621, v12, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v13 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Camera.Rotation (degrees)");
  v13(a1, v621, v14, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v15 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/CpuProfiling.DisplayFrameTimings");
  v15(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v16 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/CpuProfiling.Enabled");
  LOBYTE(v17) = 1;
  v16(a1, v621, v17);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v18 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Debug.Value");
  v18(a1, v621, v19, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v20 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/GpuProfiling.DisplayClippingPrimitivesEmitted");
  v20(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v21 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/GpuProfiling.DisplayClippingPrimitivesInvoked");
  v21(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v22 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/GpuProfiling.DisplayDetailFrameTimings");
  LOBYTE(v23) = 1;
  v22(a1, v621, v23);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v24 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/GpuProfiling.DisplayFrameTimings");
  v24(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v25 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/GpuProfiling.DisplayPixelShaderInvocations");
  v25(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v26 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/GpuProfiling.DisplaySceneTiming");
  v26(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v27 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/GpuProfiling.DisplaySubmittedPrimitives");
  v27(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v28 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/GpuProfiling.DisplaySubmittedVertices");
  v28(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v29 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/GpuProfiling.DisplayVertexShaderInvocations");
  v29(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v30 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/GpuProfiling.Enabled");
  LOBYTE(v31) = 1;
  v30(a1, v621, v31);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v32 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/GpuProfiling.HighFidelity");
  v32(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v33 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/ImageProcessing.BloomBlurBlendMode");
  v33(a1, v621, 14LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v34 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD *, __int64))(*(_QWORD *)a1 + 176LL);
  v35 = std::wstring::wstring(v616, (__int64)L"MainCamera");
  std::wstring::wstring(v621, (__int64)L"/Internal/ImageProcessing.PlanarReflectionCameraComponentName");
  v34(a1, v621, v35, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v36 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD *, __int64))(*(_QWORD *)a1 + 176LL);
  v37 = std::wstring::wstring(v616, (__int64)L"PlanarReflection");
  std::wstring::wstring(v621, (__int64)L"/Internal/ImageProcessing.PlanarReflectionPlaneNodeName");
  v36(a1, v621, v37, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v38 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Input.CaptureInput");
  v38(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v39 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Input.DepthStencilEvictionWindowInMs");
  v39(a1, v621, 60000LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v40 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.EnvironmentDisplay");
  v40(a1, v621, v41, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v42 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.EnvironmentDisplayLOD");
  v42(a1, v621, v43, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v44 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.EnvironmentFilterOffset");
  v44(a1, v621, v45, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v46 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.EnvironmentFilterScale");
  v46(a1, v621, v47, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v48 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light0_CalculateNearFarClipEnabled");
  LOBYTE(v49) = 1;
  v48(a1, v621, v49);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v50 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light0_ShadowBias");
  v50(a1, v621, v51, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v52 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light0_ShadowBlurEnabled");
  LOBYTE(v53) = 1;
  v52(a1, v621, v53);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v54 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light0_ShadowJitterFactor");
  v54(a1, v621, v55, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v56 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light0_ShadowTechnique");
  v56(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v57 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light0_ShadowTechniqueCSSMFormat");
  v57(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v58 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light1_CalculateNearFarClipEnabled");
  LOBYTE(v59) = 1;
  v58(a1, v621, v59);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v60 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light1_ShadowBias");
  v60(a1, v621, v61, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v62 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light1_ShadowBlurEnabled");
  LOBYTE(v63) = 1;
  v62(a1, v621, v63);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v64 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light1_ShadowJitterFactor");
  v64(a1, v621, v65, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v66 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light1_ShadowTechnique");
  v66(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v67 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light1_ShadowTechniqueCSSMFormat");
  v67(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v68 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light2_CalculateNearFarClipEnabled");
  v68(a1, v621, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v69 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light2_ShadowBias");
  v69(a1, v621, v70, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v71 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light2_ShadowBlurEnabled");
  LOBYTE(v72) = 1;
  v71(a1, v621, v72);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v73 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light2_ShadowJitterFactor");
  v73(a1, v621, v74, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v75 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light2_ShadowTechnique");
  v75(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v76 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.Light2_ShadowTechniqueCSSMFormat");
  v76(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v77 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.ShadowZDirection");
  v77(a1, v621, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v78 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.ReceiverSlopePlaneBiasEnabled");
  v78(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v79 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.ShadowBiasingMasterToggle");
  LOBYTE(v80) = 1;
  v79(a1, v621, v80);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v81 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.ShadowBufferCreationDepthBias");
  v81(a1, v621, v82, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v83 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.ShadowBufferCreationDepthBiasClamp");
  v83(a1, v621, v84, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v85 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Lighting.ShadowBufferCreationSlopedDepthBias");
  v85(a1, v621, v86, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v87 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Loading.EnableAnimationLoading");
  v87(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v88 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Loading.ForceMinecraftBlendMaterialsToMask");
  v88(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v89 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/Loading.ForceTranscoding");
  v89(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v90 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/MaterialOverride.DiffuseColorH");
  v90(a1, v621, v91, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v92 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/MaterialOverride.DiffuseColorS");
  v92(a1, v621, v93, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v94 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/MaterialOverride.DiffuseColorV");
  v94(a1, v621, v95, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v96 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/MaterialOverride.DiffuseMode");
  v96(a1, v621, v97, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v98 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v621, (__int64)L"/Internal/MaterialOverride.DiffuseOverride");
  v98(a1, v621, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v621);
  v99 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v777, (__int64)L"/Internal/MaterialOverride.Opacity");
  v99(a1, v777, v100, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v777);
  v101 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v837, (__int64)L"/Internal/MaterialOverride.OpacityFresnel");
  v101(a1, v837, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v837);
  v102 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v905, (__int64)L"/Internal/MaterialOverride.OpacityOverride");
  v102(a1, v905, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v905);
  v103 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v906, (__int64)L"/Internal/MaterialOverride.Smoothness");
  v103(a1, v906, v104, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v906);
  v105 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v907, (__int64)L"/Internal/MaterialOverride.SmoothnessMode");
  v105(a1, v907, v106, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v907);
  v107 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v908, (__int64)L"/Internal/MaterialOverride.SmoothnessOverride");
  v107(a1, v908, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v908);
  v108 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v624, (__int64)L"/Internal/MaterialOverride.SpecularColorH");
  v108(a1, v624, v109, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v624);
  v110 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v625, (__int64)L"/Internal/MaterialOverride.SpecularColorS");
  v110(a1, v625, v111, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v625);
  v112 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v626, (__int64)L"/Internal/MaterialOverride.SpecularColorV");
  v112(a1, v626, v113, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v626);
  v114 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v627, (__int64)L"/Internal/MaterialOverride.SpecularMode");
  v114(a1, v627, v115, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v627);
  v116 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v628, (__int64)L"/Internal/MaterialOverride.SpecularOverride");
  v116(a1, v628, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v628);
  v117 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v629, (__int64)L"/Internal/Metal.PsoEvictionWindowInMs");
  v117(a1, v629, 60000LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v629);
  v118 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v630, (__int64)L"/Internal/Model.TransformEnabled");
  LOBYTE(v119) = 1;
  v118(a1, v630, v119);
  std::wstring::_Tidy_deallocate((__int64)v630);
  v120 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v631, (__int64)L"/Internal/Renderer.AlphaCompositingOutputMode");
  v120(a1, v631, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v631);
  v121 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v632, (__int64)L"/Internal/Renderer.Antialiasing");
  v121(a1, v632, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v632);
  v122 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v633, (__int64)L"/Internal/Renderer.BufferFormat.Render");
  v122(a1, v633, 2LL);
  std::wstring::_Tidy_deallocate((__int64)v633);
  v123 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v634, (__int64)L"/Internal/Renderer.CameraEffect.ColorSwatchMode");
  v123(a1, v634, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v634);
  v124 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v635, (__int64)L"/Internal/Renderer.CameraEffect.DisplayDepth");
  v124(a1, v635, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v635);
  v125 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v636, (__int64)L"/Internal/Renderer.CameraEffect.DisplayDepthGrid");
  v125(a1, v636, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v636);
  v126 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v637, (__int64)L"/Internal/Renderer.Compatibility.SmoothnessMode");
  v126(a1, v637, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v637);
  v127 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v638, (__int64)L"/Internal/Renderer.Compatibility.WorkflowStandard");
  v127(a1, v638, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v638);
  v128 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v639, (__int64)L"/Internal/Renderer.Concurrent");
  v128(a1, v639, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v639);
  v129 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v640, (__int64)L"/Internal/Renderer.DisplayPerformanceStats");
  v129(a1, v640, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v640);
  v130 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v641, (__int64)L"/Internal/Renderer.DisplaySymbols");
  v130(a1, v641, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v641);
  v131 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v642, (__int64)L"/Internal/Renderer.DisplaySymbolsBound");
  v131(a1, v642, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v642);
  v132 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v643, (__int64)L"/Internal/Renderer.DisplaySymbolsCamera");
  v132(a1, v643, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v643);
  v133 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v644, (__int64)L"/Internal/Renderer.DisplaySymbolsLight");
  v133(a1, v644, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v644);
  v134 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v645, (__int64)L"/Internal/Renderer.DisplaySymbolsMesh");
  v134(a1, v645, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v645);
  v135 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v646, (__int64)L"/Internal/Renderer.DisplaySymbolsNode");
  v135(a1, v646, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v646);
  v136 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v647, (__int64)L"/Internal/Renderer.DisplaySymbolsNodeScale");
  v136(a1, v647, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v647);
  v137 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v648, (__int64)L"/Internal/Renderer.DisplaySymbolsNodeTree");
  v137(a1, v648, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v648);
  v138 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v649, (__int64)L"/Internal/Renderer.DisplaySymbolsSkeleton");
  v138(a1, v649, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v649);
  v139 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v650, (__int64)L"/Internal/Renderer.DisplaySymbolsAnimBBox");
  v139(a1, v650, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v650);
  v140 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v651, (__int64)L"/Internal/Renderer.DynamicResolutionScalingEnabled");
  v140(a1, v651, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v651);
  v141 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v652, (__int64)L"/Internal/Renderer.FrameLatencyMaximum");
  v141(a1, v652, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v652);
  v142 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v653, (__int64)L"/Internal/Renderer.GeometryDisplayMode");
  v142(a1, v653, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v653);
  v143 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v654, (__int64)L"/Internal/Renderer.GeometryLOD");
  v143(a1, v654, 2LL);
  std::wstring::_Tidy_deallocate((__int64)v654);
  v144 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v655, (__int64)L"/Internal/Renderer.GeometryNormalMode");
  v144(a1, v655, 2LL);
  std::wstring::_Tidy_deallocate((__int64)v655);
  v145 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v656, (__int64)L"/Internal/Renderer.Grid");
  v145(a1, v656, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v656);
  v146 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v657, (__int64)L"/Internal/Renderer.LayerBackground");
  LOBYTE(v147) = 1;
  v146(a1, v657, v147);
  std::wstring::_Tidy_deallocate((__int64)v657);
  v148 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v658, (__int64)L"/Internal/Renderer.LayerForeground");
  LOBYTE(v149) = 1;
  v148(a1, v658, v149);
  std::wstring::_Tidy_deallocate((__int64)v658);
  v150 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v659, (__int64)L"/Internal/Renderer.MaterialPrimary");
  LOBYTE(v151) = 1;
  v150(a1, v659, v151);
  std::wstring::_Tidy_deallocate((__int64)v659);
  v152 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v660, (__int64)L"/Internal/Renderer.MaterialSecondary");
  LOBYTE(v153) = 1;
  v152(a1, v660, v153);
  std::wstring::_Tidy_deallocate((__int64)v660);
  v154 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v661, (__int64)L"/Internal/Renderer.RenderingModeOverride_Blend");
  v154(a1, v661, 3LL);
  std::wstring::_Tidy_deallocate((__int64)v661);
  v155 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v662, (__int64)L"/Internal/Renderer.RenderingModeOverride_Mask");
  v155(a1, v662, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v662);
  v156 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v663, (__int64)L"/Internal/Renderer.RenderingModeOverride_MaskBlend");
  v156(a1, v663, 2LL);
  std::wstring::_Tidy_deallocate((__int64)v663);
  v157 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v664, (__int64)L"/Internal/Renderer.RenderingModeOverride_Opaque");
  v157(a1, v664, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v664);
  v158 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v665, (__int64)L"/Internal/Renderer.RenderPasses.DepthPrepass");
  LOBYTE(v159) = 1;
  v158(a1, v665, v159);
  std::wstring::_Tidy_deallocate((__int64)v665);
  v160 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v666, (__int64)L"/Internal/Renderer.RenderPasses.DepthPrepassReadable");
  v160(a1, v666, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v666);
  v161 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v667, (__int64)L"/Internal/Renderer.RenderPasses.Opaque");
  LOBYTE(v162) = 1;
  v161(a1, v667, v162);
  std::wstring::_Tidy_deallocate((__int64)v667);
  v163 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v668, (__int64)L"/Internal/Renderer.RenderPasses.OpaqueMasked");
  LOBYTE(v164) = 1;
  v163(a1, v668, v164);
  std::wstring::_Tidy_deallocate((__int64)v668);
  v165 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v669, (__int64)L"/Internal/Renderer.RenderPasses.Transparent");
  LOBYTE(v166) = 1;
  v165(a1, v669, v166);
  std::wstring::_Tidy_deallocate((__int64)v669);
  v167 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v670, (__int64)L"/Internal/Renderer.ResolutionScalingX");
  v167(a1, v670, v168, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v670);
  v169 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v671, (__int64)L"/Internal/Renderer.ResolutionScalingY");
  v169(a1, v671, v170, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v671);
  v171 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v672, (__int64)L"/Internal/Renderer.SyncInterval");
  v171(a1, v672, 2LL);
  std::wstring::_Tidy_deallocate((__int64)v672);
  v172 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v673, (__int64)L"/Internal/Renderer.TextureLOD");
  v172(a1, v673, 2LL);
  std::wstring::_Tidy_deallocate((__int64)v673);
  v173 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v674, (__int64)L"/Internal/Renderer.Textures");
  LOBYTE(v174) = 1;
  v173(a1, v674, v174);
  std::wstring::_Tidy_deallocate((__int64)v674);
  v175 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v675, (__int64)L"/Internal/Renderer.TexturesDiffuse");
  LOBYTE(v176) = 1;
  v175(a1, v675, v176);
  std::wstring::_Tidy_deallocate((__int64)v675);
  v177 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v676, (__int64)L"/Internal/Renderer.TexturesEmissive");
  LOBYTE(v178) = 1;
  v177(a1, v676, v178);
  std::wstring::_Tidy_deallocate((__int64)v676);
  v179 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v677, (__int64)L"/Internal/Renderer.TexturesNormal");
  LOBYTE(v180) = 1;
  v179(a1, v677, v180);
  std::wstring::_Tidy_deallocate((__int64)v677);
  v181 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v678, (__int64)L"/Internal/Renderer.TexturesOcclusion");
  LOBYTE(v182) = 1;
  v181(a1, v678, v182);
  std::wstring::_Tidy_deallocate((__int64)v678);
  v183 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v679, (__int64)L"/Internal/Renderer.TexturesOpacity");
  LOBYTE(v184) = 1;
  v183(a1, v679, v184);
  std::wstring::_Tidy_deallocate((__int64)v679);
  v185 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v680, (__int64)L"/Internal/Renderer.TexturesSpecular");
  LOBYTE(v186) = 1;
  v185(a1, v680, v186);
  std::wstring::_Tidy_deallocate((__int64)v680);
  v187 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v681, (__int64)L"/Internal/Renderer.Wireframe");
  v187(a1, v681, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v681);
  v188 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v682, (__int64)L"/Internal/Shader.DiagnosticsEnabled");
  v188(a1, v682, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v682);
  v189 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v683, (__int64)L"/Internal/SkinnedAnimation.Behaviour");
  v189(a1, v683, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v683);
  v190 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v684, (__int64)L"Background.Camera.Contrast");
  v190(a1, v684, v191, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v684);
  v192 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v685, (__int64)L"Background.Camera.ExposureValue");
  v192(a1, v685, v193, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v685);
  v194 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v686, (__int64)L"Background.Camera.ExposureValueIsBrightness");
  v194(a1, v686, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v686);
  v195 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v687, (__int64)L"Background.Camera.ToneMappingEnabled");
  LOBYTE(v196) = 1;
  v195(a1, v687, v196);
  std::wstring::_Tidy_deallocate((__int64)v687);
  v197 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v688, (__int64)L"Background.ColorGrading.ColorFilterDensityGlobal");
  v197(a1, v688, v198, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v688);
  v199 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v689, (__int64)L"Background.ColorGrading.ColorFilterDensityHighlights");
  v199(a1, v689, v200, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v689);
  v201 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v690, (__int64)L"Background.ColorGrading.ColorFilterDensityMidtones");
  v201(a1, v690, v202, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v690);
  v203 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v691, (__int64)L"Background.ColorGrading.ColorFilterDensityShadows");
  v203(a1, v691, v204, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v691);
  v205 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v692, (__int64)L"Background.ColorGrading.ColorFilterHueGlobal");
  v205(a1, v692, v206, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v692);
  v207 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v693, (__int64)L"Background.ColorGrading.ColorFilterHueHighlights");
  v207(a1, v693, v208, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v693);
  v209 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v694, (__int64)L"Background.ColorGrading.ColorFilterHueMidtones");
  v209(a1, v694, v210, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v694);
  v211 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v695, (__int64)L"Background.ColorGrading.ColorFilterHueShadows");
  v211(a1, v695, v212, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v695);
  v213 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v696, (__int64)L"Background.ColorGrading.ExposureHighlights");
  v213(a1, v696, v214, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v696);
  v215 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v697, (__int64)L"Background.ColorGrading.ExposureMidtones");
  v215(a1, v697, v216, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v697);
  v217 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v698, (__int64)L"Background.ColorGrading.ExposureShadows");
  v217(a1, v698, v218, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v698);
  v219 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v699, (__int64)L"Background.ColorGrading.SaturationGlobal");
  v219(a1, v699, v220, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v699);
  v221 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v700, (__int64)L"Background.ColorGrading.SaturationHighlights");
  v221(a1, v700, v222, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v700);
  v223 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v701, (__int64)L"Background.ColorGrading.SaturationMidtones");
  v223(a1, v701, v224, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v701);
  v225 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v622, (__int64)L"Background.ColorGrading.SaturationShadows");
  v225(a1, v622, v226, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v622);
  v227 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD *, __int64))(*(_QWORD *)a1 + 176LL);
  v228 = std::wstring::wstring(v618, (__int64)&unk_180106A04);
  std::wstring::wstring(v622, (__int64)L"Background.ColorGrading.TransformData");
  v227(a1, v622, v228, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v622);
  v229 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD *, __int64))(*(_QWORD *)a1 + 176LL);
  v230 = std::wstring::wstring(v619, (__int64)&unk_180106A04);
  std::wstring::wstring(v622, (__int64)L"Background.ColorGrading.TransformDataFormat");
  v229(a1, v622, v230, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v622);
  v231 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v702, (__int64)L"Background.ColorGrading.TransformWeight");
  v231(a1, v702, v232, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v702);
  v233 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v703, (__int64)L"Background.GroundPlane.GradientOriginColorA");
  v233(a1, v703, v234, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v703);
  v235 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v704, (__int64)L"Background.GroundPlane.GradientOriginColorB");
  v235(a1, v704, v236, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v704);
  v237 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v705, (__int64)L"Background.GroundPlane.GradientOriginColorG");
  v237(a1, v705, v238, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v705);
  v239 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v706, (__int64)L"Background.GroundPlane.GradientOriginColorR");
  v239(a1, v706, v240, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v706);
  v241 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v707, (__int64)L"Background.GroundPlane.GradientRing1ColorA");
  v241(a1, v707, v242, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v707);
  v243 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v708, (__int64)L"Background.GroundPlane.GradientRing1ColorB");
  v243(a1, v708, v244, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v708);
  v245 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v709, (__int64)L"Background.GroundPlane.GradientRing1ColorG");
  v245(a1, v709, v246, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v709);
  v247 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v710, (__int64)L"Background.GroundPlane.GradientRing1ColorR");
  v247(a1, v710, v248, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v710);
  v249 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v711, (__int64)L"Background.GroundPlane.GradientRing1Width");
  v249(a1, v711, v250, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v711);
  v251 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v712, (__int64)L"Background.GroundPlane.GradientRing2ColorA");
  v251(a1, v712, v252, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v712);
  v253 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v713, (__int64)L"Background.GroundPlane.GradientRing2ColorB");
  v253(a1, v713, v254, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v713);
  v255 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v714, (__int64)L"Background.GroundPlane.GradientRing2ColorG");
  v255(a1, v714, v256, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v714);
  v257 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v715, (__int64)L"Background.GroundPlane.GradientRing2ColorR");
  v257(a1, v715, v258, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v715);
  v259 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v716, (__int64)L"Background.GroundPlane.GradientRing2Width");
  v259(a1, v716, v260, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v716);
  v261 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v717, (__int64)L"Background.GroundPlane.GradientRing3ColorA");
  v261(a1, v717, v262, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v717);
  v263 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v718, (__int64)L"Background.GroundPlane.GradientRing3ColorB");
  v263(a1, v718, v264, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v718);
  v265 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v719, (__int64)L"Background.GroundPlane.GradientRing3ColorG");
  v265(a1, v719, v266, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v719);
  v267 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v720, (__int64)L"Background.GroundPlane.GradientRing3ColorR");
  v267(a1, v720, v268, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v720);
  v269 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v721, (__int64)L"Background.GroundPlane.GradientRing3Width");
  v269(a1, v721, v270, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v721);
  v271 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v722, (__int64)L"Background.GroundPlane.ShadowWeight");
  v271(a1, v722, v272, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v722);
  v273 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v723, (__int64)L"Background.ImageProcessing.VignetteBlendMode");
  v273(a1, v723, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v723);
  v274 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v724, (__int64)L"Background.ImageProcessing.VignetteCentreX");
  v274(a1, v724, v275, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v724);
  v276 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v725, (__int64)L"Background.ImageProcessing.VignetteCentreY");
  v276(a1, v725, v277, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v725);
  v278 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v726, (__int64)L"Background.ImageProcessing.VignetteColorA");
  v278(a1, v726, v279, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v726);
  v280 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v727, (__int64)L"Background.ImageProcessing.VignetteColorB");
  v280(a1, v727, v281, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v727);
  v282 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v728, (__int64)L"Background.ImageProcessing.VignetteColorG");
  v282(a1, v728, v283, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v728);
  v284 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v729, (__int64)L"Background.ImageProcessing.VignetteColorR");
  v284(a1, v729, v285, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v729);
  v286 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v730, (__int64)L"Background.ImageProcessing.VignetteStretch");
  v286(a1, v730, v287, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v730);
  v288 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v731, (__int64)L"Background.ImageProcessing.VignetteWeight");
  v288(a1, v731, v289, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v731);
  v290 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v732, (__int64)L"Camera.Behaviour");
  v290(a1, v732, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v732);
  v291 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v733, (__int64)L"Camera.Contrast");
  v291(a1, v733, v292, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v733);
  v293 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v734, (__int64)L"Camera.DefaultElevation");
  v293(a1, v734, v294, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v734);
  v295 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v735, (__int64)L"Camera.ElevationLowerLimit (degrees)");
  v295(a1, v735, v296, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v735);
  v297 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v736, (__int64)L"Camera.ElevationReturnTime (s)");
  v297(a1, v736, v298, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v736);
  v299 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v737, (__int64)L"Camera.ElevationReturnWaitTime (s)");
  v299(a1, v737, v300, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v737);
  v301 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v738, (__int64)L"Camera.ElevationUpperLimit (degrees)");
  v301(a1, v738, v302, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v738);
  v303 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v739, (__int64)L"Camera.ExposureValue");
  v303(a1, v739, v304, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v739);
  v305 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v740, (__int64)L"Camera.ExposureValueIsBrightness");
  v305(a1, v740, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v740);
  v306 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v741, (__int64)L"Camera.FieldOfView (Degrees)");
  v306(a1, v741, v307, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v741);
  v308 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v742, (__int64)L"Camera.FrameOnModelLoad");
  LOBYTE(v309) = 1;
  v308(a1, v742, v309);
  std::wstring::_Tidy_deallocate((__int64)v742);
  v310 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v743, (__int64)L"Camera.FramingBehaviour");
  v310(a1, v743, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v743);
  v311 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v744, (__int64)L"Camera.FramingElevation");
  v311(a1, v744, v312, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v744);
  v313 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v745, (__int64)L"Camera.FramingPositionY");
  v313(a1, v745, v314, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v745);
  v315 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v746, (__int64)L"Camera.FramingRadius");
  v315(a1, v746, v316, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v746);
  v317 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v747, (__int64)L"Camera.FramingRotation");
  v317(a1, v747, v318, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v747);
  v319 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v748, (__int64)L"Camera.FramingTime");
  v319(a1, v748, v320, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v748);
  v321 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v749, (__int64)L"Camera.IdleRotationSpeed (degrees/s)");
  v321(a1, v749, v322, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v749);
  v323 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v750, (__int64)L"Camera.IdleRotationSpinupTime (s)");
  v323(a1, v750, v324, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v750);
  v325 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v751, (__int64)L"Camera.IdleRotationWaitTime (s)");
  v325(a1, v751, v326, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v751);
  v327 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v752, (__int64)L"Camera.MaxDistance");
  v327(a1, v752, v328, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v752);
  v329 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v753, (__int64)L"Camera.MinDistance");
  v329(a1, v753, v330, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v753);
  v331 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v754, (__int64)L"Camera.State.Position.X");
  v331(a1, v754, v332, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v754);
  v333 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v755, (__int64)L"Camera.State.Position.Y");
  v333(a1, v755, v334, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v755);
  v335 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v756, (__int64)L"Camera.State.Position.Z");
  v335(a1, v756, v336, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v756);
  v337 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v757, (__int64)L"Camera.State.Rotation.W");
  v337(a1, v757, v338, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v757);
  v339 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v758, (__int64)L"Camera.State.Rotation.X");
  v339(a1, v758, v340, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v758);
  v341 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v759, (__int64)L"Camera.State.Rotation.Y");
  v341(a1, v759, v342, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v759);
  v343 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v760, (__int64)L"Camera.State.Rotation.Z");
  v343(a1, v760, v344, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v760);
  v345 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v761, (__int64)L"Camera.ToneMappingEnabled");
  LOBYTE(v346) = 1;
  v345(a1, v761, v346);
  std::wstring::_Tidy_deallocate((__int64)v761);
  v347 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v762, (__int64)L"Camera.ZoomStopsAnimation");
  v347(a1, v762, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v762);
  v348 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v763, (__int64)L"ColorGrading.ColorFilterDensityGlobal");
  v348(a1, v763, v349, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v763);
  v350 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v764, (__int64)L"ColorGrading.ColorFilterDensityHighlights");
  v350(a1, v764, v351, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v764);
  v352 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v765, (__int64)L"ColorGrading.ColorFilterDensityMidtones");
  v352(a1, v765, v353, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v765);
  v354 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v766, (__int64)L"ColorGrading.ColorFilterDensityShadows");
  v354(a1, v766, v355, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v766);
  v356 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v767, (__int64)L"ColorGrading.ColorFilterHueGlobal");
  v356(a1, v767, v357, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v767);
  v358 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v768, (__int64)L"ColorGrading.ColorFilterHueHighlights");
  v358(a1, v768, v359, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v768);
  v360 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v769, (__int64)L"ColorGrading.ColorFilterHueMidtones");
  v360(a1, v769, v361, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v769);
  v362 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v770, (__int64)L"ColorGrading.ColorFilterHueShadows");
  v362(a1, v770, v363, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v770);
  v364 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v771, (__int64)L"ColorGrading.ExposureHighlights");
  v364(a1, v771, v365, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v771);
  v366 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v772, (__int64)L"ColorGrading.ExposureMidtones");
  v366(a1, v772, v367, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v772);
  v368 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v773, (__int64)L"ColorGrading.ExposureShadows");
  v368(a1, v773, v369, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v773);
  v370 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v774, (__int64)L"ColorGrading.SaturationGlobal");
  v370(a1, v774, v371, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v774);
  v372 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v775, (__int64)L"ColorGrading.SaturationHighlights");
  v372(a1, v775, v373, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v775);
  v374 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v776, (__int64)L"ColorGrading.SaturationMidtones");
  v374(a1, v776, v375, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v776);
  v376 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v623, (__int64)L"ColorGrading.SaturationShadows");
  v376(a1, v623, v377, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v623);
  v378 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD *, __int64))(*(_QWORD *)a1 + 176LL);
  v379 = std::wstring::wstring(v620, (__int64)&unk_180106A04);
  std::wstring::wstring(v623, (__int64)L"ColorGrading.TransformData");
  v378(a1, v623, v379, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v623);
  v380 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD *, __int64))(*(_QWORD *)a1 + 176LL);
  v381 = std::wstring::wstring(v617, (__int64)&unk_180106A04);
  std::wstring::wstring(v623, (__int64)L"ColorGrading.TransformDataFormat");
  v380(a1, v623, v381, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v623);
  v382 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v778, (__int64)L"ColorGrading.TransformWeight");
  v382(a1, v778, v383, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v778);
  v384 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v779, (__int64)L"GroundPlane.BottomGridOpacity");
  v384(a1, v779, v385, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v779);
  v386 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v780, (__int64)L"GroundPlane.BottomVisible");
  v386(a1, v780, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v780);
  v387 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v781, (__int64)L"ImageProcessing.BloomEnabled");
  LOBYTE(v388) = 1;
  v387(a1, v781, v388);
  std::wstring::_Tidy_deallocate((__int64)v781);
  v389 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v782, (__int64)L"ImageProcessing.BloomQuality");
  v389(a1, v782, 2LL);
  std::wstring::_Tidy_deallocate((__int64)v782);
  v390 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v783, (__int64)L"ImageProcessing.BloomWeight");
  v390(a1, v783, v391, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v783);
  v392 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v784, (__int64)L"ImageProcessing.Enabled");
  LOBYTE(v393) = 1;
  v392(a1, v784, v393);
  std::wstring::_Tidy_deallocate((__int64)v784);
  v394 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v785, (__int64)L"ImageProcessing.PlanarReflectionBlur");
  LOBYTE(v395) = 1;
  v394(a1, v785, v395);
  std::wstring::_Tidy_deallocate((__int64)v785);
  v396 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v786, (__int64)L"ImageProcessing.PlanarReflectionDirect");
  v396(a1, v786, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v786);
  v397 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v787, (__int64)L"ImageProcessing.PlanarReflectionEnabled");
  LOBYTE(v398) = 1;
  v397(a1, v787, v398);
  std::wstring::_Tidy_deallocate((__int64)v787);
  v399 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v788, (__int64)L"ImageProcessing.PlanarReflectionQuality");
  v399(a1, v788, 2LL);
  std::wstring::_Tidy_deallocate((__int64)v788);
  v400 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v789, (__int64)L"ImageProcessing.PlanarReflectionWeight");
  v400(a1, v789, v401, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v789);
  v402 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v790, (__int64)L"ImageProcessing.VignetteBlendMode");
  v402(a1, v790, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v790);
  v403 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v791, (__int64)L"ImageProcessing.VignetteCentreX");
  v403(a1, v791, v404, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v791);
  v405 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v792, (__int64)L"ImageProcessing.VignetteCentreY");
  v405(a1, v792, v406, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v792);
  v407 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v793, (__int64)L"ImageProcessing.VignetteColorA");
  v407(a1, v793, v408, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v793);
  v409 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v794, (__int64)L"ImageProcessing.VignetteColorB");
  v409(a1, v794, v410, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v794);
  v411 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v795, (__int64)L"ImageProcessing.VignetteColorG");
  v411(a1, v795, v412, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v795);
  v413 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v796, (__int64)L"ImageProcessing.VignetteColorR");
  v413(a1, v796, v414, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v796);
  v415 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v797, (__int64)L"ImageProcessing.VignetteStretch");
  v415(a1, v797, v416, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v797);
  v417 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v798, (__int64)L"ImageProcessing.VignetteWeight");
  v417(a1, v798, v418, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v798);
  v419 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v799, (__int64)L"Lighting.BackgroundColorAmount");
  v419(a1, v799, v420, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v799);
  v421 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v800, (__int64)L"Lighting.BackgroundColorB");
  v421(a1, v800, v422, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v800);
  v423 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v801, (__int64)L"Lighting.BackgroundColorG");
  v423(a1, v801, v424, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v801);
  v425 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v802, (__int64)L"Lighting.BackgroundColorR");
  v425(a1, v802, v426, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v802);
  v427 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v803, (__int64)L"Lighting.BackgroundLighting");
  v427(a1, v803, v428, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v803);
  v429 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v804, (__int64)L"Lighting.BackgroundShadowAmount");
  v429(a1, v804, v430, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v804);
  v431 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v805, (__int64)L"Lighting.BackgroundShadowFalloff");
  v431(a1, v805, v432, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v805);
  v433 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v806, (__int64)L"Lighting.DirectEnabled");
  LOBYTE(v434) = 1;
  v433(a1, v806, v434);
  std::wstring::_Tidy_deallocate((__int64)v806);
  v435 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v807, (__int64)L"Lighting.DirectIntensity");
  v435(a1, v807, v436, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v807);
  v437 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v808, (__int64)L"Lighting.EmissiveIntensity");
  v437(a1, v808, v438, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v808);
  v439 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v809, (__int64)L"Lighting.EnvironmentColorB");
  v439(a1, v809, v440, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v809);
  v441 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v810, (__int64)L"Lighting.EnvironmentColorG");
  v441(a1, v810, v442, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v810);
  v443 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v811, (__int64)L"Lighting.EnvironmentColorR");
  v443(a1, v811, v444, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v811);
  v445 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v812, (__int64)L"Lighting.EnvironmentEnabled");
  LOBYTE(v446) = 1;
  v445(a1, v812, v446);
  std::wstring::_Tidy_deallocate((__int64)v812);
  v447 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v813, (__int64)L"Lighting.EnvironmentIndex");
  v447(a1, v813, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v813);
  v448 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v814, (__int64)L"Lighting.EnvironmentIntensity");
  v448(a1, v814, v449, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v814);
  v450 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v815, (__int64)L"Lighting.EnvironmentRotation");
  v450(a1, v815, v451, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v815);
  v452 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v816, (__int64)L"Lighting.Light0_CameraOrientationTracking");
  v452(a1, v816, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v816);
  v453 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v817, (__int64)L"Lighting.Light0_CameraRelative");
  v453(a1, v817, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v817);
  v454 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v818, (__int64)L"Lighting.Light0_ColorB");
  v454(a1, v818, v455, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v818);
  v456 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v819, (__int64)L"Lighting.Light0_ColorG");
  v456(a1, v819, v457, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v819);
  v458 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v820, (__int64)L"Lighting.Light0_ColorR");
  v458(a1, v820, v459, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v820);
  v460 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v821, (__int64)L"Lighting.Light0_Enabled");
  LOBYTE(v461) = 1;
  v460(a1, v821, v461);
  std::wstring::_Tidy_deallocate((__int64)v821);
  v462 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v822, (__int64)L"Lighting.Light0_FrustumEdgeFalloff");
  v462(a1, v822, v463, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v822);
  v464 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v823, (__int64)L"Lighting.Light0_Intensity");
  v464(a1, v823, v465, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v823);
  v466 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v824, (__int64)L"Lighting.Light0_IntensityMode");
  v466(a1, v824, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v824);
  v467 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v825, (__int64)L"Lighting.Light0_PositionX");
  v467(a1, v825, v468, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v825);
  v469 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v826, (__int64)L"Lighting.Light0_PositionY");
  v469(a1, v826, v470, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v826);
  v471 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v827, (__int64)L"Lighting.Light0_PositionZ");
  v471(a1, v827, v472, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v827);
  v473 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v828, (__int64)L"Lighting.Light0_Radius");
  v473(a1, v828, v474, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v828);
  v475 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v829, (__int64)L"Lighting.Light0_ShadowBufferSize");
  v475(a1, v829, v476, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v829);
  v477 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v830, (__int64)L"Lighting.Light0_ShadowEnabled");
  LOBYTE(v478) = 1;
  v477(a1, v830, v478);
  std::wstring::_Tidy_deallocate((__int64)v830);
  v479 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v831, (__int64)L"Lighting.Light0_ShadowFarClip");
  v479(a1, v831, v480, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v831);
  v481 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v832, (__int64)L"Lighting.Light0_ShadowFieldOfView");
  v481(a1, v832, v482, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v832);
  v483 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v833, (__int64)L"Lighting.Light0_ShadowFrustumSize");
  v483(a1, v833, v484, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v833);
  v485 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v834, (__int64)L"Lighting.Light0_ShadowNearClip");
  v485(a1, v834, v486, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v834);
  v487 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v835, (__int64)L"Lighting.Light0_SpotAngle");
  v487(a1, v835, v488, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v835);
  v489 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v836, (__int64)L"Lighting.Light0_TargetX");
  v489(a1, v836, v490, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v836);
  v491 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v873, (__int64)L"Lighting.Light0_TargetY");
  v491(a1, v873, v492, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v873);
  v493 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v838, (__int64)L"Lighting.Light0_TargetZ");
  v493(a1, v838, v494, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v838);
  v495 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v839, (__int64)L"Lighting.Light0_Type");
  v495(a1, v839, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v839);
  v496 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v840, (__int64)L"Lighting.Light1_CameraOrientationTracking");
  v496(a1, v840, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v840);
  v497 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v841, (__int64)L"Lighting.Light1_CameraRelative");
  v497(a1, v841, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v841);
  v498 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v842, (__int64)L"Lighting.Light1_ColorB");
  v498(a1, v842, v499, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v842);
  v500 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v843, (__int64)L"Lighting.Light1_ColorG");
  v500(a1, v843, v501, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v843);
  v502 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v844, (__int64)L"Lighting.Light1_ColorR");
  v502(a1, v844, v503, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v844);
  v504 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v845, (__int64)L"Lighting.Light1_Enabled");
  LOBYTE(v505) = 1;
  v504(a1, v845, v505);
  std::wstring::_Tidy_deallocate((__int64)v845);
  v506 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v846, (__int64)L"Lighting.Light1_FrustumEdgeFalloff");
  v506(a1, v846, v507, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v846);
  v508 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v847, (__int64)L"Lighting.Light1_Intensity");
  v508(a1, v847, v509, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v847);
  v510 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v848, (__int64)L"Lighting.Light1_IntensityMode");
  v510(a1, v848, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v848);
  v511 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v849, (__int64)L"Lighting.Light1_PositionX");
  v511(a1, v849, v512, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v849);
  v513 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v850, (__int64)L"Lighting.Light1_PositionY");
  v513(a1, v850, v514, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v850);
  v515 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v851, (__int64)L"Lighting.Light1_PositionZ");
  v515(a1, v851, v516, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v851);
  v517 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v852, (__int64)L"Lighting.Light1_Radius");
  v517(a1, v852, v518, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v852);
  v519 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v853, (__int64)L"Lighting.Light1_ShadowBufferSize");
  v519(a1, v853, v520, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v853);
  v521 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v854, (__int64)L"Lighting.Light1_ShadowEnabled");
  LOBYTE(v522) = 1;
  v521(a1, v854, v522);
  std::wstring::_Tidy_deallocate((__int64)v854);
  v523 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v855, (__int64)L"Lighting.Light1_ShadowFarClip");
  v523(a1, v855, v524, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v855);
  v525 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v856, (__int64)L"Lighting.Light1_ShadowFieldOfView");
  v525(a1, v856, v526, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v856);
  v527 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v857, (__int64)L"Lighting.Light1_ShadowFrustumSize");
  v527(a1, v857, v528, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v857);
  v529 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v858, (__int64)L"Lighting.Light1_ShadowNearClip");
  v529(a1, v858, v530, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v858);
  v531 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v859, (__int64)L"Lighting.Light1_SpotAngle");
  v531(a1, v859, v532, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v859);
  v533 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v860, (__int64)L"Lighting.Light1_TargetX");
  v533(a1, v860, v534, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v860);
  v535 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v861, (__int64)L"Lighting.Light1_TargetY");
  v535(a1, v861, v536, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v861);
  v537 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v862, (__int64)L"Lighting.Light1_TargetZ");
  v537(a1, v862, v538, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v862);
  v539 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v863, (__int64)L"Lighting.Light1_Type");
  v539(a1, v863, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v863);
  v540 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v864, (__int64)L"Lighting.Light2_CameraOrientationTracking");
  v540(a1, v864, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v864);
  v541 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v865, (__int64)L"Lighting.Light2_CameraRelative");
  v541(a1, v865, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v865);
  v542 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v866, (__int64)L"Lighting.Light2_ColorB");
  v542(a1, v866, v543, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v866);
  v544 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v867, (__int64)L"Lighting.Light2_ColorG");
  v544(a1, v867, v545, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v867);
  v546 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v868, (__int64)L"Lighting.Light2_ColorR");
  v546(a1, v868, v547, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v868);
  v548 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v869, (__int64)L"Lighting.Light2_Enabled");
  LOBYTE(v549) = 1;
  v548(a1, v869, v549);
  std::wstring::_Tidy_deallocate((__int64)v869);
  v550 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v870, (__int64)L"Lighting.Light2_FrustumEdgeFalloff");
  v550(a1, v870, v551, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v870);
  v552 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v871, (__int64)L"Lighting.Light2_Intensity");
  v552(a1, v871, v553, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v871);
  v554 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v872, (__int64)L"Lighting.Light2_IntensityMode");
  v554(a1, v872, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v872);
  v555 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v909, (__int64)L"Lighting.Light2_PositionX");
  v555(a1, v909, v556, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v909);
  v557 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v874, (__int64)L"Lighting.Light2_PositionY");
  v557(a1, v874, v558, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v874);
  v559 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v875, (__int64)L"Lighting.Light2_PositionZ");
  v559(a1, v875, v560, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v875);
  v561 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v876, (__int64)L"Lighting.Light2_Radius");
  v561(a1, v876, v562, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v876);
  v563 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v877, (__int64)L"Lighting.Light2_ShadowBufferSize");
  v563(a1, v877, v564, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v877);
  v565 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v878, (__int64)L"Lighting.Light2_ShadowEnabled");
  LOBYTE(v566) = 1;
  v565(a1, v878, v566);
  std::wstring::_Tidy_deallocate((__int64)v878);
  v567 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v879, (__int64)L"Lighting.Light2_ShadowFarClip");
  v567(a1, v879, v568, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v879);
  v569 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v880, (__int64)L"Lighting.Light2_ShadowFieldOfView");
  v569(a1, v880, v570, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v880);
  v571 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v881, (__int64)L"Lighting.Light2_ShadowFrustumSize");
  v571(a1, v881, v572, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v881);
  v573 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v882, (__int64)L"Lighting.Light2_ShadowNearClip");
  v573(a1, v882, v574, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v882);
  v575 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v883, (__int64)L"Lighting.Light2_SpotAngle");
  v575(a1, v883, v576, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v883);
  v577 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v884, (__int64)L"Lighting.Light2_TargetX");
  v577(a1, v884, v578, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v884);
  v579 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v885, (__int64)L"Lighting.Light2_TargetY");
  v579(a1, v885, v580, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v885);
  v581 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v886, (__int64)L"Lighting.Light2_TargetZ");
  v581(a1, v886, v582, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v886);
  v583 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 152LL);
  std::wstring::wstring(v887, (__int64)L"Lighting.Light2_Type");
  v583(a1, v887, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v887);
  v584 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v888, (__int64)L"Lighting.MasterEnabled");
  LOBYTE(v585) = 1;
  v584(a1, v888, v585);
  std::wstring::_Tidy_deallocate((__int64)v888);
  v586 = *(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v889, (__int64)L"Model.PositionAlignBase");
  LOBYTE(v587) = 1;
  v586(a1, v889, v587);
  std::wstring::_Tidy_deallocate((__int64)v889);
  v588 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v890, (__int64)L"Model.PositionOffsetX");
  v588(a1, v890, v589, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v890);
  v590 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v891, (__int64)L"Model.PositionOffsetY");
  v590(a1, v891, v591, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v891);
  v592 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v892, (__int64)L"Model.PositionOffsetZ");
  v592(a1, v892, v593, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v892);
  v594 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v893, (__int64)L"Model.RelativeModelLoadScale");
  v594(a1, v893, v595, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v893);
  v596 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v894, (__int64)L"Model.RotationOffsetAngle");
  v596(a1, v894, v597, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v894);
  v598 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v895, (__int64)L"Model.RotationOffsetAxisX");
  v598(a1, v895, v599, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v895);
  v600 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v896, (__int64)L"Model.RotationOffsetAxisY");
  v600(a1, v896, v601, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v896);
  v602 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v897, (__int64)L"Model.RotationOffsetAxisZ");
  v602(a1, v897, v603, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v897);
  v604 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v898, (__int64)L"Renderer.ClearColorA");
  v604(a1, v898, v605, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v898);
  v606 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v899, (__int64)L"Renderer.ClearColorB");
  v606(a1, v899, v607, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v899);
  v608 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v900, (__int64)L"Renderer.ClearColorG");
  v608(a1, v900, v609, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v900);
  v610 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v901, (__int64)L"Renderer.ClearColorOverride");
  v610(a1, v901, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v901);
  v611 = *(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)a1 + 168LL);
  std::wstring::wstring(v902, (__int64)L"Renderer.ClearColorR");
  v611(a1, v902, v612, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v902);
  v613 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v903, (__int64)L"Renderer.Compatibility.GLTFComplianceEnabled");
  v613(a1, v903, 0LL, 1LL);
  std::wstring::_Tidy_deallocate((__int64)v903);
  v614 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 144LL);
  std::wstring::wstring(v904, (__int64)L"Shader.ForceNormalsForward");
  v614(a1, v904, 0LL, 1LL);
  return std::wstring::_Tidy_deallocate((__int64)v904);
}
