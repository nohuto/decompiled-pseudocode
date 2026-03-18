/*
 * XREFs of UserPowerInfoCallout @ 0x1C007AEB8
 * Callers:
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     QueuePowerRequest @ 0x1C007C340 (QueuePowerRequest.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1C007CFEC (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     IsModerncoreUserPowerInfoCalloutSupported @ 0x1C007D100 (IsModerncoreUserPowerInfoCalloutSupported.c)
 *     EtwTraceDisplayReqChange @ 0x1C007DA08 (EtwTraceDisplayReqChange.c)
 *     CitDisplayRequestChange @ 0x1C007DA30 (CitDisplayRequestChange.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C007DB30 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C007E314 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     SetPendingInput @ 0x1C00D4440 (SetPendingInput.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     __chkstk_0 @ 0x1C00DD6B8 (__chkstk_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C0146A58 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@-$DomainSharedBase@$$.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0146C48 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0146EB0 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?lock@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@?$DomainSharedBase@$$V@@AEAAXXZ @ 0x1C0147CAC (-lock@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@-$DomainSharedBase.c)
 *     ?unlock@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@?$DomainSharedBase@$$V@@AEAAXXZ @ 0x1C0147D14 (-unlock@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@-$DomainSharedBa.c)
 *     SqmPowerState @ 0x1C0147FA0 (SqmPowerState.c)
 *     UserLogError @ 0x1C0166FA0 (UserLogError.c)
 *     ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x1C01DC4B4 (-OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserPowerInfoCallout(__int64 a1, __int64 a2, __int64 a3, int *a4, int a5, int *a6)
{
  int v6; // ebx
  __int64 v8; // r15
  int v9; // edi
  unsigned int v10; // r13d
  int v11; // edi
  int v12; // edi
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  struct tagTHREADINFO **v17; // rdi
  struct tagTHREADINFO *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 *v26; // rdi
  int v27; // esi
  int v28; // edi
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // r8
  LARGE_INTEGER *v45; // rdi
  char v46; // r15
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // r8
  struct tagTHREADINFO **v51; // rdi
  struct tagTHREADINFO *v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 *v58; // rdi
  bool v60; // zf
  bool v61; // sf
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rdx
  unsigned __int64 v68; // r8
  struct tagTHREADINFO **v69; // rdi
  struct tagTHREADINFO *v70; // rdi
  __int64 v71; // rax
  __int64 *v72; // rdi
  int v73; // edi
  int v74; // edi
  int v75; // edi
  __int64 v76; // rax
  __int64 v77; // rdx
  unsigned __int64 v78; // r8
  LARGE_INTEGER *v79; // rdi
  struct tagTHREADINFO **v80; // rdi
  struct tagTHREADINFO *v81; // rdi
  LARGE_INTEGER *v82; // rdi
  LARGE_INTEGER *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rdx
  unsigned __int64 v86; // r8
  LARGE_INTEGER *v87; // rdi
  struct tagTHREADINFO **v88; // rdi
  struct tagTHREADINFO *v89; // rdi
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rax
  __int64 v95; // rdx
  unsigned __int64 v96; // r8
  LARGE_INTEGER *v97; // rdi
  struct tagTHREADINFO **v98; // rdi
  struct tagTHREADINFO *v99; // rdi
  __int64 v100; // rax
  __int64 v101; // rdx
  unsigned __int64 v102; // r8
  LARGE_INTEGER *v103; // rdi
  struct tagTHREADINFO **v104; // rdi
  struct tagTHREADINFO *v105; // rdi
  __int64 v106; // rax
  __int64 v107; // rdx
  unsigned __int64 v108; // r8
  LARGE_INTEGER *v109; // rdi
  struct tagTHREADINFO **v110; // rdi
  struct tagTHREADINFO *v111; // rdi
  struct tagTHREADINFO **v112; // rdi
  struct tagTHREADINFO *v113; // rdi
  char v114; // si
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rdx
  unsigned __int64 v118; // r8
  LARGE_INTEGER *v119; // rdi
  struct tagTHREADINFO **v120; // rdi
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  LARGE_INTEGER *v125; // rdi
  __int64 v126; // rdi
  struct tagTHREADINFO *v127; // rdi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v129; // rdx
  unsigned __int64 v130; // r8
  LARGE_INTEGER *v131; // rsi
  struct tagTHREADINFO **v132; // rsi
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  struct tagTHREADINFO *v137; // rsi
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v139; // rax
  __int64 v140; // rcx
  __int64 *v141; // rsi
  int v142; // edi
  int v143; // edi
  unsigned int v144; // esi
  __int64 v145; // rax
  __int64 v146; // rdx
  unsigned __int64 v147; // r8
  LARGE_INTEGER *v148; // rdi
  struct tagTHREADINFO **v149; // rdi
  struct tagTHREADINFO *v150; // rdi
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // r8
  struct tagKERNELHANDLETABLEENTRY *v158; // rax
  __int64 v159; // rcx
  __int64 *v160; // rdi
  __int64 v161; // rax
  struct tagKERNELHANDLETABLEENTRY *v162; // rax
  __int64 v163; // rcx
  __int64 *v164; // rdi
  __int64 v165; // rax
  __int64 v166; // rdx
  unsigned __int64 v167; // r8
  LARGE_INTEGER *v168; // rdi
  struct tagTHREADINFO **v169; // rdi
  struct tagTHREADINFO *v170; // rdi
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // rax
  __int64 v174; // rdx
  struct tagKERNELHANDLETABLEENTRY *v175; // rax
  __int64 v176; // rcx
  __int64 *v177; // rdi
  __int64 v178; // rax
  struct tagKERNELHANDLETABLEENTRY *v179; // rax
  __int64 v180; // rcx
  __int64 *v181; // rdi
  struct tagKERNELHANDLETABLEENTRY *v182; // rax
  __int64 v183; // rcx
  struct tagKERNELHANDLETABLEENTRY *v184; // rax
  __int64 v185; // rcx
  struct tagKERNELHANDLETABLEENTRY *v186; // rax
  __int64 v187; // rcx
  __int64 v188; // rax
  __int64 v189; // rdx
  __int64 v190; // r8
  struct tagKERNELHANDLETABLEENTRY *v191; // rax
  __int64 v192; // rcx
  __int64 *v193; // rdi
  __int64 v194; // rax
  struct tagKERNELHANDLETABLEENTRY *v195; // rax
  __int64 v196; // rcx
  __int64 *v197; // rdi
  __int64 v198; // rax
  struct tagKERNELHANDLETABLEENTRY *v199; // rax
  __int64 v200; // rcx
  __int64 *v201; // rdi
  __int64 v202; // rax
  __int64 v203; // rdx
  unsigned __int64 v204; // r8
  LARGE_INTEGER *v205; // rdi
  struct tagTHREADINFO **v206; // rdi
  __int64 v207; // rdx
  struct tagTHREADINFO *v208; // rcx
  __int64 v209; // r8
  struct tagTHREADINFO *v210; // rdi
  __int64 v211; // r9
  __int64 v212; // rax
  struct tagKERNELHANDLETABLEENTRY *v213; // rax
  __int64 v214; // rcx
  __int64 *v215; // rdi
  __int64 v216; // rax
  __int64 v217; // rdx
  unsigned __int64 v218; // r8
  LARGE_INTEGER *v219; // rdi
  struct tagTHREADINFO **v220; // rdi
  struct tagTHREADINFO *v221; // rdi
  __int64 v222; // rax
  struct tagKERNELHANDLETABLEENTRY *v223; // rax
  __int64 v224; // rcx
  __int64 *v225; // rdi
  enum POWER_MONITOR_REQUEST_REASON v226; // ecx
  __int64 v227; // rax
  __int64 v228; // rdx
  unsigned __int64 v229; // r8
  LARGE_INTEGER *v230; // rdi
  struct tagTHREADINFO **v231; // rdi
  struct tagTHREADINFO *v232; // rdi
  __int64 v233; // rax
  struct tagKERNELHANDLETABLEENTRY *v234; // rax
  __int64 v235; // rcx
  __int64 *v236; // rdi
  __int64 v237; // rax
  __int64 v238; // rdx
  unsigned __int64 v239; // r8
  LARGE_INTEGER *v240; // rdi
  struct tagTHREADINFO **v241; // rdi
  struct tagTHREADINFO *v242; // rdi
  __int64 v243; // rax
  struct tagKERNELHANDLETABLEENTRY *v244; // rax
  __int64 v245; // rcx
  __int64 *v246; // rdi
  __int64 v247; // rax
  __int64 v248; // rdx
  unsigned __int64 v249; // r8
  LARGE_INTEGER *v250; // rdi
  struct tagTHREADINFO **v251; // rdi
  struct tagTHREADINFO *v252; // rdi
  __int64 v253; // rax
  struct tagKERNELHANDLETABLEENTRY *v254; // rax
  __int64 v255; // rcx
  __int64 *v256; // rdi
  __int64 v257; // rax
  __int64 v258; // rdx
  unsigned __int64 v259; // r8
  LARGE_INTEGER *v260; // rdi
  struct tagTHREADINFO **v261; // rdi
  struct tagTHREADINFO *v262; // rdi
  __int64 v263; // rax
  struct tagKERNELHANDLETABLEENTRY *v264; // rax
  __int64 v265; // rcx
  __int64 *v266; // rdi
  __int64 v267; // rax
  struct tagKERNELHANDLETABLEENTRY *v268; // rax
  __int64 v269; // rcx
  __int64 *v270; // rdi
  __int64 v271; // rax
  struct tagKERNELHANDLETABLEENTRY *v272; // rax
  __int64 v273; // rcx
  __int64 *v274; // rdi
  __int64 v275; // rcx
  __int64 v276; // rax
  __int64 v277; // rdx
  unsigned __int64 v278; // r8
  LARGE_INTEGER *v279; // rdi
  struct tagTHREADINFO **v280; // rdi
  struct tagTHREADINFO *v281; // rdi
  __int64 v282; // rax
  struct tagKERNELHANDLETABLEENTRY *v283; // rax
  __int64 v284; // rcx
  __int64 *v285; // rdi
  __int64 v286; // rcx
  __int64 v287; // rax
  __int64 v288; // rdx
  unsigned __int64 v289; // r8
  LARGE_INTEGER *v290; // rdi
  struct tagTHREADINFO **v291; // rdi
  struct tagTHREADINFO *v292; // rdi
  __int64 v293; // rdx
  __int64 v294; // rcx
  __int64 v295; // r8
  __int64 v296; // r9
  __int64 v297; // rax
  __int64 v298; // rdx
  __int64 v299; // r8
  struct tagKERNELHANDLETABLEENTRY *v300; // rax
  __int64 v301; // rcx
  __int64 *v302; // rdi
  __int64 v303; // rax
  __int64 v304; // rdx
  unsigned __int64 v305; // r8
  LARGE_INTEGER *v306; // rdi
  struct tagTHREADINFO **v307; // rdi
  struct tagTHREADINFO *v308; // rdi
  __int64 v309; // rcx
  __int64 v310; // rax
  struct tagKERNELHANDLETABLEENTRY *v311; // rax
  __int64 v312; // rcx
  __int64 *v313; // rdi
  bool v314; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v315; // [rsp+48h] [rbp-B8h] BYREF
  BOOL v316; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v317; // [rsp+5Ch] [rbp-A4h] BYREF
  BOOL v318; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v319; // [rsp+64h] [rbp-9Ch] BYREF
  BOOL v320; // [rsp+68h] [rbp-98h] BYREF
  BOOL v321; // [rsp+6Ch] [rbp-94h] BYREF
  BOOL v322; // [rsp+70h] [rbp-90h] BYREF
  BOOL v323; // [rsp+74h] [rbp-8Ch] BYREF
  BOOL v324; // [rsp+78h] [rbp-88h] BYREF
  BOOL v325; // [rsp+7Ch] [rbp-84h] BYREF
  BOOL v326; // [rsp+80h] [rbp-80h] BYREF
  BOOL v327; // [rsp+84h] [rbp-7Ch] BYREF
  BOOL v328; // [rsp+88h] [rbp-78h] BYREF
  BOOL v329; // [rsp+8Ch] [rbp-74h] BYREF
  BOOL v330; // [rsp+90h] [rbp-70h] BYREF
  BOOL v331; // [rsp+94h] [rbp-6Ch] BYREF
  BOOL v332; // [rsp+98h] [rbp-68h] BYREF
  BOOL v333; // [rsp+9Ch] [rbp-64h] BYREF
  BOOL v334; // [rsp+A0h] [rbp-60h] BYREF
  BOOL v335; // [rsp+A4h] [rbp-5Ch] BYREF
  BOOL v336; // [rsp+A8h] [rbp-58h] BYREF
  BOOL v337; // [rsp+ACh] [rbp-54h] BYREF
  BOOL v338; // [rsp+B0h] [rbp-50h] BYREF
  BOOL v339; // [rsp+B4h] [rbp-4Ch] BYREF
  BOOL v340; // [rsp+B8h] [rbp-48h] BYREF
  BOOL v341; // [rsp+BCh] [rbp-44h] BYREF
  BOOL v342; // [rsp+C0h] [rbp-40h] BYREF
  BOOL v343; // [rsp+C4h] [rbp-3Ch] BYREF
  BOOL v344; // [rsp+C8h] [rbp-38h] BYREF
  BOOL v345; // [rsp+CCh] [rbp-34h] BYREF
  BOOL v346; // [rsp+D0h] [rbp-30h] BYREF
  BOOL v347; // [rsp+D4h] [rbp-2Ch] BYREF
  BOOL v348; // [rsp+D8h] [rbp-28h] BYREF
  BOOL v349; // [rsp+DCh] [rbp-24h] BYREF
  BOOL v350; // [rsp+E0h] [rbp-20h] BYREF
  BOOL v351; // [rsp+E4h] [rbp-1Ch] BYREF
  BOOL v352; // [rsp+E8h] [rbp-18h] BYREF
  BOOL v353; // [rsp+ECh] [rbp-14h] BYREF
  BOOL v354; // [rsp+F0h] [rbp-10h] BYREF
  BOOL v355; // [rsp+F4h] [rbp-Ch] BYREF
  BOOL v356; // [rsp+F8h] [rbp-8h] BYREF
  BOOL v357; // [rsp+FCh] [rbp-4h] BYREF
  BOOL v358; // [rsp+100h] [rbp+0h] BYREF
  BOOL v359; // [rsp+104h] [rbp+4h] BYREF
  BOOL v360; // [rsp+108h] [rbp+8h] BYREF
  BOOL v361; // [rsp+10Ch] [rbp+Ch] BYREF
  BOOL v362; // [rsp+110h] [rbp+10h] BYREF
  BOOL v363; // [rsp+114h] [rbp+14h] BYREF
  BOOL v364; // [rsp+118h] [rbp+18h] BYREF
  BOOL v365; // [rsp+11Ch] [rbp+1Ch] BYREF
  BOOL v366; // [rsp+120h] [rbp+20h] BYREF
  BOOL v367; // [rsp+124h] [rbp+24h] BYREF
  BOOL v368; // [rsp+128h] [rbp+28h] BYREF
  BOOL v369; // [rsp+12Ch] [rbp+2Ch] BYREF
  BOOL v370; // [rsp+130h] [rbp+30h] BYREF
  BOOL v371; // [rsp+134h] [rbp+34h] BYREF
  BOOL v372; // [rsp+138h] [rbp+38h] BYREF
  BOOL v373; // [rsp+13Ch] [rbp+3Ch] BYREF
  BOOL v374; // [rsp+140h] [rbp+40h] BYREF
  BOOL v375; // [rsp+144h] [rbp+44h] BYREF
  BOOL v376; // [rsp+148h] [rbp+48h] BYREF
  BOOL v377; // [rsp+14Ch] [rbp+4Ch] BYREF
  BOOL v378; // [rsp+150h] [rbp+50h] BYREF
  BOOL v379; // [rsp+154h] [rbp+54h] BYREF
  BOOL v380; // [rsp+158h] [rbp+58h] BYREF
  BOOL v381; // [rsp+15Ch] [rbp+5Ch] BYREF
  __int64 v382; // [rsp+160h] [rbp+60h] BYREF
  int v383; // [rsp+168h] [rbp+68h]
  GUID ActivityId; // [rsp+16Ch] [rbp+6Ch] BYREF
  __int64 v385; // [rsp+180h] [rbp+80h] BYREF
  int v386; // [rsp+188h] [rbp+88h]
  GUID v387; // [rsp+18Ch] [rbp+8Ch] BYREF
  __int64 v388; // [rsp+1A0h] [rbp+A0h] BYREF
  int v389; // [rsp+1A8h] [rbp+A8h]
  GUID v390; // [rsp+1ACh] [rbp+ACh] BYREF
  __int64 v391; // [rsp+1C0h] [rbp+C0h] BYREF
  int v392; // [rsp+1C8h] [rbp+C8h]
  GUID v393; // [rsp+1CCh] [rbp+CCh] BYREF
  __int64 v394; // [rsp+1E0h] [rbp+E0h] BYREF
  int v395; // [rsp+1E8h] [rbp+E8h]
  GUID v396; // [rsp+1ECh] [rbp+ECh] BYREF
  __int64 v397; // [rsp+200h] [rbp+100h] BYREF
  int v398; // [rsp+208h] [rbp+108h]
  GUID v399; // [rsp+20Ch] [rbp+10Ch] BYREF
  __int64 v400; // [rsp+220h] [rbp+120h] BYREF
  int v401; // [rsp+228h] [rbp+128h]
  GUID v402; // [rsp+22Ch] [rbp+12Ch] BYREF
  __int64 v403; // [rsp+240h] [rbp+140h] BYREF
  int v404; // [rsp+248h] [rbp+148h]
  GUID v405; // [rsp+24Ch] [rbp+14Ch] BYREF
  __int64 v406; // [rsp+260h] [rbp+160h] BYREF
  int v407; // [rsp+268h] [rbp+168h]
  GUID v408; // [rsp+26Ch] [rbp+16Ch] BYREF
  __int64 v409; // [rsp+280h] [rbp+180h] BYREF
  int v410; // [rsp+288h] [rbp+188h]
  GUID v411; // [rsp+28Ch] [rbp+18Ch] BYREF
  __int64 v412; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v413; // [rsp+2A8h] [rbp+1A8h]
  GUID v414; // [rsp+2ACh] [rbp+1ACh] BYREF
  __int64 v415; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v416; // [rsp+2C8h] [rbp+1C8h]
  GUID v417; // [rsp+2CCh] [rbp+1CCh] BYREF
  __int64 v418; // [rsp+2E0h] [rbp+1E0h] BYREF
  int v419; // [rsp+2E8h] [rbp+1E8h]
  GUID v420; // [rsp+2ECh] [rbp+1ECh] BYREF
  __int64 v421; // [rsp+300h] [rbp+200h] BYREF
  int v422; // [rsp+308h] [rbp+208h]
  GUID v423; // [rsp+30Ch] [rbp+20Ch] BYREF
  __int64 v424; // [rsp+320h] [rbp+220h] BYREF
  int v425; // [rsp+328h] [rbp+228h]
  GUID v426; // [rsp+32Ch] [rbp+22Ch] BYREF
  __int64 v427; // [rsp+340h] [rbp+240h] BYREF
  int v428; // [rsp+348h] [rbp+248h]
  GUID v429; // [rsp+34Ch] [rbp+24Ch] BYREF
  __int64 v430; // [rsp+360h] [rbp+260h] BYREF
  int v431; // [rsp+368h] [rbp+268h]
  GUID v432; // [rsp+36Ch] [rbp+26Ch] BYREF
  __int64 v433; // [rsp+380h] [rbp+280h] BYREF
  int v434; // [rsp+388h] [rbp+288h]
  GUID v435; // [rsp+38Ch] [rbp+28Ch] BYREF
  __int64 v436; // [rsp+3A0h] [rbp+2A0h] BYREF
  int v437; // [rsp+3A8h] [rbp+2A8h]
  GUID v438; // [rsp+3ACh] [rbp+2ACh] BYREF
  __int64 v439; // [rsp+3C0h] [rbp+2C0h] BYREF
  int v440; // [rsp+3C8h] [rbp+2C8h]
  GUID v441; // [rsp+3CCh] [rbp+2CCh] BYREF
  __int64 v442; // [rsp+3E0h] [rbp+2E0h] BYREF
  int v443; // [rsp+3E8h] [rbp+2E8h]
  GUID v444; // [rsp+3ECh] [rbp+2ECh] BYREF
  __int64 v445; // [rsp+400h] [rbp+300h] BYREF
  int v446; // [rsp+408h] [rbp+308h]
  GUID v447; // [rsp+40Ch] [rbp+30Ch] BYREF
  _BYTE v448[48]; // [rsp+420h] [rbp+320h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v449; // [rsp+450h] [rbp+350h] BYREF
  BOOL *v450; // [rsp+470h] [rbp+370h]
  __int64 v451; // [rsp+478h] [rbp+378h]
  struct _EVENT_DATA_DESCRIPTOR v452; // [rsp+480h] [rbp+380h] BYREF
  BOOL *v453; // [rsp+4A0h] [rbp+3A0h]
  __int64 v454; // [rsp+4A8h] [rbp+3A8h]
  struct _EVENT_DATA_DESCRIPTOR v455; // [rsp+4B0h] [rbp+3B0h] BYREF
  BOOL *v456; // [rsp+4D0h] [rbp+3D0h]
  __int64 v457; // [rsp+4D8h] [rbp+3D8h]
  struct _EVENT_DATA_DESCRIPTOR v458; // [rsp+4E0h] [rbp+3E0h] BYREF
  BOOL *v459; // [rsp+500h] [rbp+400h]
  __int64 v460; // [rsp+508h] [rbp+408h]
  struct _EVENT_DATA_DESCRIPTOR v461; // [rsp+510h] [rbp+410h] BYREF
  BOOL *v462; // [rsp+530h] [rbp+430h]
  __int64 v463; // [rsp+538h] [rbp+438h]
  struct _EVENT_DATA_DESCRIPTOR v464; // [rsp+540h] [rbp+440h] BYREF
  BOOL *v465; // [rsp+560h] [rbp+460h]
  __int64 v466; // [rsp+568h] [rbp+468h]
  struct _EVENT_DATA_DESCRIPTOR v467; // [rsp+570h] [rbp+470h] BYREF
  BOOL *v468; // [rsp+590h] [rbp+490h]
  __int64 v469; // [rsp+598h] [rbp+498h]
  struct _EVENT_DATA_DESCRIPTOR v470; // [rsp+5A0h] [rbp+4A0h] BYREF
  BOOL *v471; // [rsp+5C0h] [rbp+4C0h]
  __int64 v472; // [rsp+5C8h] [rbp+4C8h]
  struct _EVENT_DATA_DESCRIPTOR v473; // [rsp+5D0h] [rbp+4D0h] BYREF
  BOOL *v474; // [rsp+5F0h] [rbp+4F0h]
  __int64 v475; // [rsp+5F8h] [rbp+4F8h]
  struct _EVENT_DATA_DESCRIPTOR v476; // [rsp+600h] [rbp+500h] BYREF
  BOOL *v477; // [rsp+620h] [rbp+520h]
  __int64 v478; // [rsp+628h] [rbp+528h]
  struct _EVENT_DATA_DESCRIPTOR v479; // [rsp+630h] [rbp+530h] BYREF
  BOOL *v480; // [rsp+650h] [rbp+550h]
  __int64 v481; // [rsp+658h] [rbp+558h]
  struct _EVENT_DATA_DESCRIPTOR v482; // [rsp+660h] [rbp+560h] BYREF
  BOOL *v483; // [rsp+680h] [rbp+580h]
  __int64 v484; // [rsp+688h] [rbp+588h]
  struct _EVENT_DATA_DESCRIPTOR v485; // [rsp+690h] [rbp+590h] BYREF
  BOOL *v486; // [rsp+6B0h] [rbp+5B0h]
  __int64 v487; // [rsp+6B8h] [rbp+5B8h]
  struct _EVENT_DATA_DESCRIPTOR v488; // [rsp+6C0h] [rbp+5C0h] BYREF
  BOOL *v489; // [rsp+6E0h] [rbp+5E0h]
  __int64 v490; // [rsp+6E8h] [rbp+5E8h]
  struct _EVENT_DATA_DESCRIPTOR v491; // [rsp+6F0h] [rbp+5F0h] BYREF
  BOOL *v492; // [rsp+710h] [rbp+610h]
  __int64 v493; // [rsp+718h] [rbp+618h]
  struct _EVENT_DATA_DESCRIPTOR v494; // [rsp+720h] [rbp+620h] BYREF
  BOOL *v495; // [rsp+740h] [rbp+640h]
  __int64 v496; // [rsp+748h] [rbp+648h]
  struct _EVENT_DATA_DESCRIPTOR v497; // [rsp+750h] [rbp+650h] BYREF
  BOOL *v498; // [rsp+770h] [rbp+670h]
  __int64 v499; // [rsp+778h] [rbp+678h]
  struct _EVENT_DATA_DESCRIPTOR v500; // [rsp+780h] [rbp+680h] BYREF
  BOOL *v501; // [rsp+7A0h] [rbp+6A0h]
  __int64 v502; // [rsp+7A8h] [rbp+6A8h]
  struct _EVENT_DATA_DESCRIPTOR v503; // [rsp+7B0h] [rbp+6B0h] BYREF
  BOOL *v504; // [rsp+7D0h] [rbp+6D0h]
  __int64 v505; // [rsp+7D8h] [rbp+6D8h]
  struct _EVENT_DATA_DESCRIPTOR v506; // [rsp+7E0h] [rbp+6E0h] BYREF
  BOOL *v507; // [rsp+800h] [rbp+700h]
  __int64 v508; // [rsp+808h] [rbp+708h]
  struct _EVENT_DATA_DESCRIPTOR v509; // [rsp+810h] [rbp+710h] BYREF
  BOOL *v510; // [rsp+830h] [rbp+730h]
  __int64 v511; // [rsp+838h] [rbp+738h]
  struct _EVENT_DATA_DESCRIPTOR v512; // [rsp+840h] [rbp+740h] BYREF
  BOOL *v513; // [rsp+860h] [rbp+760h]
  __int64 v514; // [rsp+868h] [rbp+768h]
  struct _EVENT_DATA_DESCRIPTOR v515; // [rsp+870h] [rbp+770h] BYREF
  BOOL *v516; // [rsp+890h] [rbp+790h]
  __int64 v517; // [rsp+898h] [rbp+798h]
  struct _EVENT_DATA_DESCRIPTOR v518; // [rsp+8A0h] [rbp+7A0h] BYREF
  BOOL *v519; // [rsp+8C0h] [rbp+7C0h]
  __int64 v520; // [rsp+8C8h] [rbp+7C8h]
  struct _EVENT_DATA_DESCRIPTOR v521; // [rsp+8D0h] [rbp+7D0h] BYREF
  BOOL *v522; // [rsp+8F0h] [rbp+7F0h]
  __int64 v523; // [rsp+8F8h] [rbp+7F8h]
  struct _EVENT_DATA_DESCRIPTOR v524; // [rsp+900h] [rbp+800h] BYREF
  BOOL *v525; // [rsp+920h] [rbp+820h]
  __int64 v526; // [rsp+928h] [rbp+828h]
  struct _EVENT_DATA_DESCRIPTOR v527; // [rsp+930h] [rbp+830h] BYREF
  BOOL *v528; // [rsp+950h] [rbp+850h]
  __int64 v529; // [rsp+958h] [rbp+858h]
  struct _EVENT_DATA_DESCRIPTOR v530; // [rsp+960h] [rbp+860h] BYREF
  BOOL *v531; // [rsp+980h] [rbp+880h]
  __int64 v532; // [rsp+988h] [rbp+888h]
  struct _EVENT_DATA_DESCRIPTOR v533; // [rsp+990h] [rbp+890h] BYREF
  BOOL *v534; // [rsp+9B0h] [rbp+8B0h]
  __int64 v535; // [rsp+9B8h] [rbp+8B8h]
  struct _EVENT_DATA_DESCRIPTOR v536; // [rsp+9C0h] [rbp+8C0h] BYREF
  BOOL *v537; // [rsp+9E0h] [rbp+8E0h]
  __int64 v538; // [rsp+9E8h] [rbp+8E8h]
  struct _EVENT_DATA_DESCRIPTOR v539; // [rsp+9F0h] [rbp+8F0h] BYREF
  BOOL *v540; // [rsp+A10h] [rbp+910h]
  __int64 v541; // [rsp+A18h] [rbp+918h]
  struct _EVENT_DATA_DESCRIPTOR v542; // [rsp+A20h] [rbp+920h] BYREF
  BOOL *v543; // [rsp+A40h] [rbp+940h]
  __int64 v544; // [rsp+A48h] [rbp+948h]
  struct _EVENT_DATA_DESCRIPTOR v545; // [rsp+A50h] [rbp+950h] BYREF
  BOOL *v546; // [rsp+A70h] [rbp+970h]
  __int64 v547; // [rsp+A78h] [rbp+978h]
  struct _EVENT_DATA_DESCRIPTOR v548; // [rsp+A80h] [rbp+980h] BYREF
  BOOL *v549; // [rsp+AA0h] [rbp+9A0h]
  __int64 v550; // [rsp+AA8h] [rbp+9A8h]
  struct _EVENT_DATA_DESCRIPTOR v551; // [rsp+AB0h] [rbp+9B0h] BYREF
  BOOL *v552; // [rsp+AD0h] [rbp+9D0h]
  __int64 v553; // [rsp+AD8h] [rbp+9D8h]
  struct _EVENT_DATA_DESCRIPTOR v554; // [rsp+AE0h] [rbp+9E0h] BYREF
  BOOL *v555; // [rsp+B00h] [rbp+A00h]
  __int64 v556; // [rsp+B08h] [rbp+A08h]
  struct _EVENT_DATA_DESCRIPTOR v557; // [rsp+B10h] [rbp+A10h] BYREF
  BOOL *v558; // [rsp+B30h] [rbp+A30h]
  __int64 v559; // [rsp+B38h] [rbp+A38h]
  struct _EVENT_DATA_DESCRIPTOR v560; // [rsp+B40h] [rbp+A40h] BYREF
  BOOL *v561; // [rsp+B60h] [rbp+A60h]
  __int64 v562; // [rsp+B68h] [rbp+A68h]
  struct _EVENT_DATA_DESCRIPTOR v563; // [rsp+B70h] [rbp+A70h] BYREF
  BOOL *v564; // [rsp+B90h] [rbp+A90h]
  __int64 v565; // [rsp+B98h] [rbp+A98h]
  struct _EVENT_DATA_DESCRIPTOR v566; // [rsp+BA0h] [rbp+AA0h] BYREF
  BOOL *v567; // [rsp+BC0h] [rbp+AC0h]
  __int64 v568; // [rsp+BC8h] [rbp+AC8h]
  struct _EVENT_DATA_DESCRIPTOR v569; // [rsp+BD0h] [rbp+AD0h] BYREF
  BOOL *v570; // [rsp+BF0h] [rbp+AF0h]
  __int64 v571; // [rsp+BF8h] [rbp+AF8h]
  struct _EVENT_DATA_DESCRIPTOR v572; // [rsp+C00h] [rbp+B00h] BYREF
  BOOL *v573; // [rsp+C20h] [rbp+B20h]
  __int64 v574; // [rsp+C28h] [rbp+B28h]
  struct _EVENT_DATA_DESCRIPTOR v575; // [rsp+C30h] [rbp+B30h] BYREF
  BOOL *v576; // [rsp+C50h] [rbp+B50h]
  __int64 v577; // [rsp+C58h] [rbp+B58h]
  struct _EVENT_DATA_DESCRIPTOR v578; // [rsp+C60h] [rbp+B60h] BYREF
  BOOL *v579; // [rsp+C80h] [rbp+B80h]
  __int64 v580; // [rsp+C88h] [rbp+B88h]
  struct _EVENT_DATA_DESCRIPTOR v581; // [rsp+C90h] [rbp+B90h] BYREF
  BOOL *v582; // [rsp+CB0h] [rbp+BB0h]
  __int64 v583; // [rsp+CB8h] [rbp+BB8h]
  struct _EVENT_DATA_DESCRIPTOR v584; // [rsp+CC0h] [rbp+BC0h] BYREF
  BOOL *v585; // [rsp+CE0h] [rbp+BE0h]
  __int64 v586; // [rsp+CE8h] [rbp+BE8h]
  struct _EVENT_DATA_DESCRIPTOR v587; // [rsp+CF0h] [rbp+BF0h] BYREF
  BOOL *v588; // [rsp+D10h] [rbp+C10h]
  __int64 v589; // [rsp+D18h] [rbp+C18h]
  struct _EVENT_DATA_DESCRIPTOR v590; // [rsp+D20h] [rbp+C20h] BYREF
  BOOL *v591; // [rsp+D40h] [rbp+C40h]
  __int64 v592; // [rsp+D48h] [rbp+C48h]
  struct _EVENT_DATA_DESCRIPTOR v593; // [rsp+D50h] [rbp+C50h] BYREF
  BOOL *v594; // [rsp+D70h] [rbp+C70h]
  __int64 v595; // [rsp+D78h] [rbp+C78h]
  struct _EVENT_DATA_DESCRIPTOR v596; // [rsp+D80h] [rbp+C80h] BYREF
  BOOL *v597; // [rsp+DA0h] [rbp+CA0h]
  __int64 v598; // [rsp+DA8h] [rbp+CA8h]
  struct _EVENT_DATA_DESCRIPTOR v599; // [rsp+DB0h] [rbp+CB0h] BYREF
  BOOL *v600; // [rsp+DD0h] [rbp+CD0h]
  __int64 v601; // [rsp+DD8h] [rbp+CD8h]
  struct _EVENT_DATA_DESCRIPTOR v602; // [rsp+DE0h] [rbp+CE0h] BYREF
  BOOL *v603; // [rsp+E00h] [rbp+D00h]
  __int64 v604; // [rsp+E08h] [rbp+D08h]
  struct _EVENT_DATA_DESCRIPTOR v605; // [rsp+E10h] [rbp+D10h] BYREF
  BOOL *v606; // [rsp+E30h] [rbp+D30h]
  __int64 v607; // [rsp+E38h] [rbp+D38h]
  struct _EVENT_DATA_DESCRIPTOR v608; // [rsp+E40h] [rbp+D40h] BYREF
  BOOL *v609; // [rsp+E60h] [rbp+D60h]
  __int64 v610; // [rsp+E68h] [rbp+D68h]
  struct _EVENT_DATA_DESCRIPTOR v611; // [rsp+E70h] [rbp+D70h] BYREF
  BOOL *v612; // [rsp+E90h] [rbp+D90h]
  __int64 v613; // [rsp+E98h] [rbp+D98h]
  struct _EVENT_DATA_DESCRIPTOR v614; // [rsp+EA0h] [rbp+DA0h] BYREF
  BOOL *v615; // [rsp+EC0h] [rbp+DC0h]
  __int64 v616; // [rsp+EC8h] [rbp+DC8h]
  struct _EVENT_DATA_DESCRIPTOR v617; // [rsp+ED0h] [rbp+DD0h] BYREF
  BOOL *v618; // [rsp+EF0h] [rbp+DF0h]
  __int64 v619; // [rsp+EF8h] [rbp+DF8h]
  struct _EVENT_DATA_DESCRIPTOR v620; // [rsp+F00h] [rbp+E00h] BYREF
  BOOL *v621; // [rsp+F20h] [rbp+E20h]
  __int64 v622; // [rsp+F28h] [rbp+E28h]
  struct _EVENT_DATA_DESCRIPTOR v623; // [rsp+F30h] [rbp+E30h] BYREF
  BOOL *v624; // [rsp+F50h] [rbp+E50h]
  __int64 v625; // [rsp+F58h] [rbp+E58h]
  struct _EVENT_DATA_DESCRIPTOR v626; // [rsp+F60h] [rbp+E60h] BYREF
  BOOL *v627; // [rsp+F80h] [rbp+E80h]
  __int64 v628; // [rsp+F88h] [rbp+E88h]
  struct _EVENT_DATA_DESCRIPTOR v629; // [rsp+F90h] [rbp+E90h] BYREF
  BOOL *v630; // [rsp+FB0h] [rbp+EB0h]
  __int64 v631; // [rsp+FB8h] [rbp+EB8h]
  struct _EVENT_DATA_DESCRIPTOR v632; // [rsp+FC0h] [rbp+EC0h] BYREF
  BOOL *v633; // [rsp+FE0h] [rbp+EE0h]
  __int64 v634; // [rsp+FE8h] [rbp+EE8h]
  struct _EVENT_DATA_DESCRIPTOR v635; // [rsp+FF0h] [rbp+EF0h] BYREF
  BOOL *v636; // [rsp+1010h] [rbp+F10h]
  __int64 v637; // [rsp+1018h] [rbp+F18h]
  struct _EVENT_DATA_DESCRIPTOR v638; // [rsp+1020h] [rbp+F20h] BYREF
  BOOL *v639; // [rsp+1040h] [rbp+F40h]
  __int64 v640; // [rsp+1048h] [rbp+F48h]
  struct _EVENT_DATA_DESCRIPTOR v641; // [rsp+1050h] [rbp+F50h] BYREF
  BOOL *v642; // [rsp+1070h] [rbp+F70h]
  __int64 v643; // [rsp+1078h] [rbp+F78h]
  struct _EVENT_DATA_DESCRIPTOR v644; // [rsp+1080h] [rbp+F80h] BYREF
  BOOL *v645; // [rsp+10A0h] [rbp+FA0h]
  __int64 v646; // [rsp+10A8h] [rbp+FA8h]

  v6 = 0;
  v8 = (unsigned int)a3;
  v9 = a1;
  v10 = 0;
  v315 = 0LL;
  if ( !gbPowerCalloutsReady )
    return (unsigned int)-1073741823;
  if ( !(_DWORD)a1 )
  {
    if ( gbVideoInitialized )
      goto LABEL_35;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
      v382 = CurrentThreadWin32Thread;
    }
    else
    {
      CurrentThreadWin32Thread = 0LL;
      v382 = 0LL;
    }
    v383 = 1;
    if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v382 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v451 = 4LL;
        v365 = v383 == 1;
        v450 = &v365;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD79,
          &ActivityId,
          0LL,
          3u,
          &v449);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v129 = W32kEtwEnabledKeyword,
          v130 = 0x8000002010000000uLL,
          (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v130 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v131 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v129, v130);
      if ( v131 )
        v131[1] = KeQueryPerformanceCounter(0LL);
    }
    v132 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v132 )
    {
      v137 = *v132;
      if ( IsThreadCrossSessionAttached() )
        v137 = 0LL;
      if ( v382 )
      {
        v134 = *(unsigned int *)(v382 + 24);
        if ( *(_DWORD *)(v382 + 48) || (int)v134 > 0 )
        {
          *(_DWORD *)(v382 + 44) = 1;
          *(GUID *)(v382 + 28) = ActivityId;
          v135 = (unsigned int)dword_1C028EE70;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v454 = 4LL;
              v316 = v383 == 1;
              v453 = &v316;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                &ActivityId,
                0LL,
                3u,
                &v452);
              v135 = (unsigned int)dword_1C028EE70;
            }
            if ( (unsigned int)v135 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v457 = 4LL;
              v317 = v383 == 1;
              v456 = &v317;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD4F,
                &ActivityId,
                0LL,
                3u,
                &v455);
            }
          }
        }
      }
      gptiCurrent = v137;
      if ( v137 )
      {
        *((_DWORD *)v137 + 377) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v134, v133, v135, v136);
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            v134 = (__int64)gptiCurrent;
            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v141 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                v139 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                v140 = *v141;
                gpSharedUserCritDeferredUnlockListHead = v139;
                if ( !*(_DWORD *)(v140 + 8) )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v140, v133, v135);
                  v140 = *v141;
                }
                HMUnlockObject(v140);
              }
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v382);
      gptiCurrent = 0LL;
    }
    UserSessionSwitchLeaveCrit(v134, v133, v135, v136);
  }
  if ( !gbVideoInitialized )
    return (unsigned int)-1073741823;
  if ( !v9 )
  {
LABEL_35:
    if ( (_DWORD)v8 != 20 || !a4 )
      return (unsigned int)-1073741823;
    v29 = *(_QWORD *)&GUID_ADAPTIVE_SESSION_STATE_CHANGED.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_ADAPTIVE_SESSION_STATE_CHANGED.Data1 == *(_QWORD *)a4 )
      v29 = *(_QWORD *)GUID_ADAPTIVE_SESSION_STATE_CHANGED.Data4 - *((_QWORD *)a4 + 1);
    if ( !v29 )
    {
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v66 = PsGetCurrentThreadWin32Thread(0LL, a2, a3);
        v403 = v66;
      }
      else
      {
        v66 = 0LL;
        v403 = 0LL;
      }
      v404 = 1;
      if ( v66 && (*(int *)(v66 + 24) > 0 || *(_DWORD *)(v403 + 48)) )
      {
        EtwActivityIdControl(3u, &v405);
        if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v514 = 4LL;
          v336 = v404 == 1;
          v513 = &v336;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD79,
            &v405,
            0LL,
            3u,
            &v512);
        }
      }
      if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
        || (v67 = W32kEtwEnabledKeyword,
            v68 = 0x8000002010000000uLL,
            (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
        && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
        || (v68 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
      {
        v125 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v29, v67, v68);
        if ( v125 )
          v125[1] = KeQueryPerformanceCounter(0LL);
      }
      v69 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      EtwTraceAcquiredExclusiveUserCrit();
      if ( v69 )
      {
        v70 = *v69;
        if ( IsThreadCrossSessionAttached() )
          v70 = 0LL;
        if ( v403 )
        {
          v54 = *(unsigned int *)(v403 + 24);
          if ( *(_DWORD *)(v403 + 48) || (int)v54 > 0 )
          {
            *(_DWORD *)(v403 + 44) = 1;
            *(GUID *)(v403 + 28) = v405;
            v55 = (unsigned int)dword_1C028EE70;
            if ( (unsigned int)dword_1C028EE70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v517 = 4LL;
                v337 = v404 == 1;
                v516 = &v337;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD22,
                  &v405,
                  0LL,
                  3u,
                  &v515);
                v55 = (unsigned int)dword_1C028EE70;
              }
              if ( (unsigned int)v55 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v520 = 4LL;
                v338 = v404 == 1;
                v519 = &v338;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD4F,
                  &v405,
                  0LL,
                  3u,
                  &v518);
              }
            }
          }
        }
        gptiCurrent = v70;
        if ( v70 )
        {
          *((_DWORD *)v70 + 377) = 1;
          v71 = PsGetCurrentProcessWin32Process(v54, v53, v55, v56);
          if ( v71 )
          {
            if ( (*(_DWORD *)(v71 + 12) & 0x8000) != 0 )
            {
              v54 = (__int64)gptiCurrent;
              if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
              {
                while ( 1 )
                {
                  v72 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( !gpSharedUserCritDeferredUnlockListHead )
                    break;
                  v186 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                  *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                  v187 = *v72;
                  gpSharedUserCritDeferredUnlockListHead = v186;
                  if ( !*(_DWORD *)(v187 + 8) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v187, v53, v55);
                    v187 = *v72;
                  }
                  HMUnlockObject(v187);
                }
              }
            }
          }
        }
      }
      else
      {
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v403);
        gptiCurrent = 0LL;
      }
      if ( !gProtocolType || dword_1C02950FC )
        UpdateAdaptiveSessionState();
      goto LABEL_111;
    }
    v30 = *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 == *(_QWORD *)a4 )
      v30 = *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
    if ( !v30 )
    {
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v84 = PsGetCurrentThreadWin32Thread(0LL, a2, a3);
        v406 = v84;
      }
      else
      {
        v84 = 0LL;
        v406 = 0LL;
      }
      v407 = 1;
      if ( v84 && (*(int *)(v84 + 24) > 0 || *(_DWORD *)(v406 + 48)) )
      {
        EtwActivityIdControl(3u, &v408);
        if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v523 = 4LL;
          v339 = v407 == 1;
          v522 = &v339;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD79,
            &v408,
            0LL,
            3u,
            &v521);
        }
      }
      if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
        || (v85 = W32kEtwEnabledKeyword,
            v86 = 0x8000002010000000uLL,
            (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
        && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
        || (v86 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
      {
        v87 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v30, v85, v86);
        if ( v87 )
          v87[1] = KeQueryPerformanceCounter(0LL);
      }
      v88 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      EtwTraceAcquiredExclusiveUserCrit();
      if ( v88 )
      {
        v89 = *v88;
        if ( IsThreadCrossSessionAttached() )
          v89 = 0LL;
        if ( v406 )
        {
          v91 = *(unsigned int *)(v406 + 24);
          if ( *(_DWORD *)(v406 + 48) || (int)v91 > 0 )
          {
            *(_DWORD *)(v406 + 44) = 1;
            *(GUID *)(v406 + 28) = v408;
            v92 = (unsigned int)dword_1C028EE70;
            if ( (unsigned int)dword_1C028EE70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v526 = 4LL;
                v340 = v407 == 1;
                v525 = &v340;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD22,
                  &v408,
                  0LL,
                  3u,
                  &v524);
                v92 = (unsigned int)dword_1C028EE70;
              }
              if ( (unsigned int)v92 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v529 = 4LL;
                v341 = v407 == 1;
                v528 = &v341;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD4F,
                  &v408,
                  0LL,
                  3u,
                  &v527);
              }
            }
          }
        }
        gptiCurrent = v89;
        if ( v89 )
        {
          *((_DWORD *)v89 + 377) = 1;
          v188 = PsGetCurrentProcessWin32Process(v91, v90, v92, v93);
          if ( v188 )
          {
            if ( (*(_DWORD *)(v188 + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v193 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                v191 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                v192 = *v193;
                gpSharedUserCritDeferredUnlockListHead = v191;
                if ( !*(_DWORD *)(v192 + 8) )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v192, v189, v190);
                  v192 = *v193;
                }
                HMUnlockObject(v192);
              }
            }
          }
        }
      }
      else
      {
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v406);
        gptiCurrent = 0LL;
      }
      giDimTimeOutMs = 1000 * a4[4];
      if ( (int)IsModerncoreUserPowerInfoCalloutSupported() >= 0 && qword_1C029C398 )
        qword_1C029C398();
      goto LABEL_111;
    }
    v31 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
      v31 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
    if ( !v31 )
    {
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v94 = PsGetCurrentThreadWin32Thread(0LL, a2, a3);
        v409 = v94;
      }
      else
      {
        v94 = 0LL;
        v409 = 0LL;
      }
      v410 = 1;
      if ( v94 && (*(int *)(v94 + 24) > 0 || *(_DWORD *)(v409 + 48)) )
      {
        EtwActivityIdControl(3u, &v411);
        if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v532 = 4LL;
          v342 = v410 == 1;
          v531 = &v342;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD79,
            &v411,
            0LL,
            3u,
            &v530);
        }
      }
      if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
        || (v95 = W32kEtwEnabledKeyword,
            v96 = 0x8000002010000000uLL,
            (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
        && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
        || (v96 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
      {
        v97 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v31, v95, v96);
        if ( v97 )
          v97[1] = KeQueryPerformanceCounter(0LL);
      }
      v98 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      EtwTraceAcquiredExclusiveUserCrit();
      if ( v98 )
      {
        v99 = *v98;
        if ( IsThreadCrossSessionAttached() )
          v99 = 0LL;
        if ( v409 )
        {
          v54 = *(unsigned int *)(v409 + 24);
          if ( *(_DWORD *)(v409 + 48) || (int)v54 > 0 )
          {
            *(_DWORD *)(v409 + 44) = 1;
            *(GUID *)(v409 + 28) = v411;
            v55 = (unsigned int)dword_1C028EE70;
            if ( (unsigned int)dword_1C028EE70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v589 = 4LL;
                v343 = v410 == 1;
                v588 = &v343;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD22,
                  &v411,
                  0LL,
                  3u,
                  &v587);
                v55 = (unsigned int)dword_1C028EE70;
              }
              if ( (unsigned int)v55 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v535 = 4LL;
                v344 = v410 == 1;
                v534 = &v344;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD4F,
                  &v411,
                  0LL,
                  3u,
                  &v533);
              }
            }
          }
        }
        gptiCurrent = v99;
        if ( v99 )
        {
          *((_DWORD *)v99 + 377) = 1;
          v194 = PsGetCurrentProcessWin32Process(v54, v53, v55, v56);
          if ( v194 )
          {
            if ( (*(_DWORD *)(v194 + 12) & 0x8000) != 0 )
            {
              v54 = (__int64)gptiCurrent;
              if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
              {
                while ( 1 )
                {
                  v197 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( !gpSharedUserCritDeferredUnlockListHead )
                    break;
                  v195 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                  *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                  v196 = *v197;
                  gpSharedUserCritDeferredUnlockListHead = v195;
                  if ( !*(_DWORD *)(v196 + 8) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v196, v53, v55);
                    v196 = *v197;
                  }
                  HMUnlockObject(v196);
                }
              }
            }
          }
        }
      }
      else
      {
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v409);
        gptiCurrent = 0LL;
      }
      dword_1C0296F80 = a4[4];
      goto LABEL_111;
    }
    v32 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
      v32 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
    if ( !v32 )
    {
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v100 = PsGetCurrentThreadWin32Thread(0LL, a2, a3);
        v412 = v100;
      }
      else
      {
        v100 = 0LL;
        v412 = 0LL;
      }
      v413 = 1;
      if ( v100 && (*(int *)(v100 + 24) > 0 || *(_DWORD *)(v412 + 48)) )
      {
        EtwActivityIdControl(3u, &v414);
        if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v538 = 4LL;
          v345 = v413 == 1;
          v537 = &v345;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD79,
            &v414,
            0LL,
            3u,
            &v536);
        }
      }
      if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
        || (v101 = W32kEtwEnabledKeyword,
            v102 = 0x8000002010000000uLL,
            (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
        && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
        || (v102 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
      {
        v103 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v32, v101, v102);
        if ( v103 )
          v103[1] = KeQueryPerformanceCounter(0LL);
      }
      v104 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      EtwTraceAcquiredExclusiveUserCrit();
      if ( v104 )
      {
        v105 = *v104;
        if ( IsThreadCrossSessionAttached() )
          v105 = 0LL;
        if ( v412 )
        {
          v54 = *(unsigned int *)(v412 + 24);
          if ( *(_DWORD *)(v412 + 48) || (int)v54 > 0 )
          {
            *(_DWORD *)(v412 + 44) = 1;
            *(GUID *)(v412 + 28) = v414;
            v55 = (unsigned int)dword_1C028EE70;
            if ( (unsigned int)dword_1C028EE70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v541 = 4LL;
                v346 = v413 == 1;
                v540 = &v346;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD22,
                  &v414,
                  0LL,
                  3u,
                  &v539);
                v55 = (unsigned int)dword_1C028EE70;
              }
              if ( (unsigned int)v55 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v544 = 4LL;
                v347 = v413 == 1;
                v543 = &v347;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD4F,
                  &v414,
                  0LL,
                  3u,
                  &v542);
              }
            }
          }
        }
        gptiCurrent = v105;
        if ( v105 )
        {
          *((_DWORD *)v105 + 377) = 1;
          v198 = PsGetCurrentProcessWin32Process(v54, v53, v55, v56);
          if ( v198 )
          {
            if ( (*(_DWORD *)(v198 + 12) & 0x8000) != 0 )
            {
              v54 = (__int64)gptiCurrent;
              if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
              {
                while ( 1 )
                {
                  v201 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( !gpSharedUserCritDeferredUnlockListHead )
                    break;
                  v199 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                  *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                  v200 = *v201;
                  gpSharedUserCritDeferredUnlockListHead = v199;
                  if ( !*(_DWORD *)(v200 + 8) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v200, v53, v55);
                    v200 = *v201;
                  }
                  HMUnlockObject(v200);
                }
              }
            }
          }
        }
      }
      else
      {
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v412);
        gptiCurrent = 0LL;
      }
      dword_1C0296F78 = a4[4];
      goto LABEL_111;
    }
    v33 = *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == *(_QWORD *)a4 )
      v33 = *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 - *((_QWORD *)a4 + 1);
    if ( !v33 )
    {
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v202 = PsGetCurrentThreadWin32Thread(0LL, a2, a3);
        v415 = v202;
      }
      else
      {
        v202 = 0LL;
        v415 = 0LL;
      }
      v416 = 1;
      if ( v202 && (*(int *)(v202 + 24) > 0 || *(_DWORD *)(v415 + 48)) )
      {
        EtwActivityIdControl(3u, &v417);
        if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v547 = 4LL;
          v348 = v416 == 1;
          v546 = &v348;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD79,
            &v417,
            0LL,
            3u,
            &v545);
        }
      }
      if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
        || (v203 = W32kEtwEnabledKeyword,
            v204 = 0x8000002010000000uLL,
            (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
        && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
        || (v204 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
      {
        v205 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v33, v203, v204);
        if ( v205 )
          v205[1] = KeQueryPerformanceCounter(0LL);
      }
      v206 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      EtwTraceAcquiredExclusiveUserCrit();
      if ( v206 )
      {
        v210 = *v206;
        if ( IsThreadCrossSessionAttached() )
          v210 = 0LL;
        if ( v415 )
        {
          v208 = (struct tagTHREADINFO *)*(unsigned int *)(v415 + 24);
          if ( *(_DWORD *)(v415 + 48) || (int)v208 > 0 )
          {
            *(_DWORD *)(v415 + 44) = 1;
            *(GUID *)(v415 + 28) = v417;
            v209 = (unsigned int)dword_1C028EE70;
            if ( (unsigned int)dword_1C028EE70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v550 = 4LL;
                v349 = v416 == 1;
                v549 = &v349;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD22,
                  &v417,
                  0LL,
                  3u,
                  &v548);
                v209 = (unsigned int)dword_1C028EE70;
              }
              if ( (unsigned int)v209 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v553 = 4LL;
                v350 = v416 == 1;
                v552 = &v350;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD4F,
                  &v417,
                  0LL,
                  3u,
                  &v551);
              }
            }
          }
        }
        gptiCurrent = v210;
        if ( v210 )
        {
          *((_DWORD *)v210 + 377) = 1;
          v212 = PsGetCurrentProcessWin32Process(v208, v207, v209, v211);
          if ( v212 )
          {
            if ( (*(_DWORD *)(v212 + 12) & 0x8000) != 0 )
            {
              v208 = gptiCurrent;
              if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
              {
                while ( 1 )
                {
                  v215 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( !gpSharedUserCritDeferredUnlockListHead )
                    break;
                  v213 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                  *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                  v214 = *v215;
                  gpSharedUserCritDeferredUnlockListHead = v213;
                  if ( !*(_DWORD *)(v214 + 8) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v214, v207, v209);
                    v214 = *v215;
                  }
                  HMUnlockObject(v214);
                }
              }
            }
          }
        }
      }
      else
      {
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v415);
        gptiCurrent = 0LL;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v208, v207, v209);
      dword_1C0296F88 = a4[4];
      goto LABEL_111;
    }
    v34 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)a4 )
      v34 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - *((_QWORD *)a4 + 1);
    if ( !v34 )
      goto LABEL_1133;
    v34 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4 )
      v34 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)a4 + 1);
    if ( v34 )
    {
      v35 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - *(_QWORD *)a4;
      if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 == *(_QWORD *)a4 )
        v35 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - *((_QWORD *)a4 + 1);
      if ( v35 )
      {
        v36 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)a4 )
          v36 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - *((_QWORD *)a4 + 1);
        if ( !v36 )
        {
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v227 = PsGetCurrentThreadWin32Thread(0LL, a2, a3);
            v421 = v227;
          }
          else
          {
            v227 = 0LL;
            v421 = 0LL;
          }
          v422 = 1;
          if ( v227 && (*(int *)(v227 + 24) > 0 || *(_DWORD *)(v421 + 48)) )
          {
            EtwActivityIdControl(3u, &v423);
            if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v565 = 4LL;
              v354 = v422 == 1;
              v564 = &v354;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD79,
                &v423,
                0LL,
                3u,
                &v563);
            }
          }
          if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
            || (v228 = W32kEtwEnabledKeyword,
                v229 = 0x8000002010000000uLL,
                (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
            && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
            || (v229 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x200000010000000LL) != 0
            && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
          {
            v230 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v36, v228, v229);
            if ( v230 )
              v230[1] = KeQueryPerformanceCounter(0LL);
          }
          v231 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          EtwTraceAcquiredExclusiveUserCrit();
          if ( v231 )
          {
            v232 = *v231;
            if ( IsThreadCrossSessionAttached() )
              v232 = 0LL;
            if ( v421 )
            {
              v54 = *(unsigned int *)(v421 + 24);
              if ( *(_DWORD *)(v421 + 48) || (int)v54 > 0 )
              {
                *(_DWORD *)(v421 + 44) = 1;
                *(GUID *)(v421 + 28) = v423;
                v55 = (unsigned int)dword_1C028EE70;
                if ( (unsigned int)dword_1C028EE70 > 6 )
                {
                  if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v568 = 4LL;
                    v355 = v422 == 1;
                    v567 = &v355;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD22,
                      &v423,
                      0LL,
                      3u,
                      &v566);
                    v55 = (unsigned int)dword_1C028EE70;
                  }
                  if ( (unsigned int)v55 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v571 = 4LL;
                    v356 = v422 == 1;
                    v570 = &v356;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD4F,
                      &v423,
                      0LL,
                      3u,
                      &v569);
                  }
                }
              }
            }
            gptiCurrent = v232;
            if ( v232 )
            {
              *((_DWORD *)v232 + 377) = 1;
              v233 = PsGetCurrentProcessWin32Process(v54, v53, v55, v56);
              if ( v233 )
              {
                if ( (*(_DWORD *)(v233 + 12) & 0x8000) != 0 )
                {
                  v54 = (__int64)gptiCurrent;
                  if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                  {
                    while ( 1 )
                    {
                      v236 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      if ( !gpSharedUserCritDeferredUnlockListHead )
                        break;
                      v234 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                      *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                      v235 = *v236;
                      gpSharedUserCritDeferredUnlockListHead = v234;
                      if ( !*(_DWORD *)(v235 + 8) )
                      {
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v235, v53, v55);
                        v235 = *v236;
                      }
                      HMUnlockObject(v235);
                    }
                  }
                }
              }
            }
          }
          else
          {
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v421);
            gptiCurrent = 0LL;
          }
          LOBYTE(v6) = a4[4] != 0;
          dword_1C0296FF4 = v6;
          goto LABEL_111;
        }
        v37 = *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 == *(_QWORD *)a4 )
          v37 = *(_QWORD *)GUID_LIDSWITCH_STATE_RELIABILITY.Data4 - *((_QWORD *)a4 + 1);
        if ( !v37 )
        {
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v237 = PsGetCurrentThreadWin32Thread(0LL, a2, a3);
            v424 = v237;
          }
          else
          {
            v237 = 0LL;
            v424 = 0LL;
          }
          v425 = 1;
          if ( v237 && (*(int *)(v237 + 24) > 0 || *(_DWORD *)(v424 + 48)) )
          {
            EtwActivityIdControl(3u, &v426);
            if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v574 = 4LL;
              v357 = v425 == 1;
              v573 = &v357;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD79,
                &v426,
                0LL,
                3u,
                &v572);
            }
          }
          if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
            || (v238 = W32kEtwEnabledKeyword,
                v239 = 0x8000002010000000uLL,
                (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
            && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
            || (v239 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x200000010000000LL) != 0
            && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
          {
            v240 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v37, v238, v239);
            if ( v240 )
              v240[1] = KeQueryPerformanceCounter(0LL);
          }
          v241 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          EtwTraceAcquiredExclusiveUserCrit();
          if ( v241 )
          {
            v242 = *v241;
            if ( IsThreadCrossSessionAttached() )
              v242 = 0LL;
            if ( v424 )
            {
              v54 = *(unsigned int *)(v424 + 24);
              if ( *(_DWORD *)(v424 + 48) || (int)v54 > 0 )
              {
                *(_DWORD *)(v424 + 44) = 1;
                *(GUID *)(v424 + 28) = v426;
                v55 = (unsigned int)dword_1C028EE70;
                if ( (unsigned int)dword_1C028EE70 > 6 )
                {
                  if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v577 = 4LL;
                    v358 = v425 == 1;
                    v576 = &v358;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD22,
                      &v426,
                      0LL,
                      3u,
                      &v575);
                    v55 = (unsigned int)dword_1C028EE70;
                  }
                  if ( (unsigned int)v55 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v580 = 4LL;
                    v359 = v425 == 1;
                    v579 = &v359;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD4F,
                      &v426,
                      0LL,
                      3u,
                      &v578);
                  }
                }
              }
            }
            gptiCurrent = v242;
            if ( v242 )
            {
              *((_DWORD *)v242 + 377) = 1;
              v243 = PsGetCurrentProcessWin32Process(v54, v53, v55, v56);
              if ( v243 )
              {
                if ( (*(_DWORD *)(v243 + 12) & 0x8000) != 0 )
                {
                  v54 = (__int64)gptiCurrent;
                  if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                  {
                    while ( 1 )
                    {
                      v246 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      if ( !gpSharedUserCritDeferredUnlockListHead )
                        break;
                      v244 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                      *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                      v245 = *v246;
                      gpSharedUserCritDeferredUnlockListHead = v244;
                      if ( !*(_DWORD *)(v245 + 8) )
                      {
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v245, v53, v55);
                        v245 = *v246;
                      }
                      HMUnlockObject(v245);
                    }
                  }
                }
              }
            }
          }
          else
          {
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v424);
            gptiCurrent = 0LL;
          }
          LOBYTE(v6) = a4[4] != 0;
          dword_1C0296FFC = v6;
          goto LABEL_111;
        }
        v38 = *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 == *(_QWORD *)a4 )
          v38 = *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 - *((_QWORD *)a4 + 1);
        if ( !v38 )
        {
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v247 = PsGetCurrentThreadWin32Thread(0LL, a2, a3);
            v427 = v247;
          }
          else
          {
            v247 = 0LL;
            v427 = 0LL;
          }
          v428 = 1;
          if ( v247 && (*(int *)(v247 + 24) > 0 || *(_DWORD *)(v427 + 48)) )
          {
            EtwActivityIdControl(3u, &v429);
            if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v583 = 4LL;
              v360 = v428 == 1;
              v582 = &v360;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD79,
                &v429,
                0LL,
                3u,
                &v581);
            }
          }
          if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
            || (v248 = W32kEtwEnabledKeyword,
                v249 = 0x8000002010000000uLL,
                (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
            && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
            || (v249 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x200000010000000LL) != 0
            && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
          {
            v250 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v38, v248, v249);
            if ( v250 )
              v250[1] = KeQueryPerformanceCounter(0LL);
          }
          v251 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          EtwTraceAcquiredExclusiveUserCrit();
          if ( v251 )
          {
            v252 = *v251;
            if ( IsThreadCrossSessionAttached() )
              v252 = 0LL;
            if ( v427 )
            {
              v54 = *(unsigned int *)(v427 + 24);
              if ( *(_DWORD *)(v427 + 48) || (int)v54 > 0 )
              {
                *(_DWORD *)(v427 + 44) = 1;
                *(GUID *)(v427 + 28) = v429;
                v55 = (unsigned int)dword_1C028EE70;
                if ( (unsigned int)dword_1C028EE70 > 6 )
                {
                  if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v586 = 4LL;
                    v361 = v428 == 1;
                    v585 = &v361;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD22,
                      &v429,
                      0LL,
                      3u,
                      &v584);
                    v55 = (unsigned int)dword_1C028EE70;
                  }
                  if ( (unsigned int)v55 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v646 = 4LL;
                    v362 = v428 == 1;
                    v645 = &v362;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD4F,
                      &v429,
                      0LL,
                      3u,
                      &v644);
                  }
                }
              }
            }
            gptiCurrent = v252;
            if ( v252 )
            {
              *((_DWORD *)v252 + 377) = 1;
              v253 = PsGetCurrentProcessWin32Process(v54, v53, v55, v56);
              if ( v253 )
              {
                if ( (*(_DWORD *)(v253 + 12) & 0x8000) != 0 )
                {
                  v54 = (__int64)gptiCurrent;
                  if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                  {
                    while ( 1 )
                    {
                      v256 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      if ( !gpSharedUserCritDeferredUnlockListHead )
                        break;
                      v254 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                      *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                      v255 = *v256;
                      gpSharedUserCritDeferredUnlockListHead = v254;
                      if ( !*(_DWORD *)(v255 + 8) )
                      {
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v255, v53, v55);
                        v255 = *v256;
                      }
                      HMUnlockObject(v255);
                    }
                  }
                }
              }
            }
          }
          else
          {
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v427);
            gptiCurrent = 0LL;
          }
          if ( !a4[4] )
          {
            dword_1C0296FC4 = 0;
            goto LABEL_111;
          }
          if ( gbTtmEnabled )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v54, v53, v55);
          dword_1C0296FC4 = 1;
          LODWORD(v315) = 5;
          *((_QWORD *)&v315 + 1) = 13LL;
          goto LABEL_110;
        }
        v39 = *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)a4 )
          v39 = *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 - *((_QWORD *)a4 + 1);
        if ( !v39 )
        {
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v257 = PsGetCurrentThreadWin32Thread(0LL, a2, a3);
            v430 = v257;
          }
          else
          {
            v257 = 0LL;
            v430 = 0LL;
          }
          v431 = 1;
          if ( v257 && (*(int *)(v257 + 24) > 0 || *(_DWORD *)(v430 + 48)) )
          {
            EtwActivityIdControl(3u, &v432);
            if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v592 = 4LL;
              v363 = v431 == 1;
              v591 = &v363;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD79,
                &v432,
                0LL,
                3u,
                &v590);
            }
          }
          if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
            || (v258 = W32kEtwEnabledKeyword,
                v259 = 0x8000002010000000uLL,
                (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
            && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
            || (v259 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x200000010000000LL) != 0
            && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
          {
            v260 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v39, v258, v259);
            if ( v260 )
              v260[1] = KeQueryPerformanceCounter(0LL);
          }
          v261 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          EtwTraceAcquiredExclusiveUserCrit();
          if ( v261 )
          {
            v262 = *v261;
            if ( IsThreadCrossSessionAttached() )
              v262 = 0LL;
            if ( v430 )
            {
              v54 = *(unsigned int *)(v430 + 24);
              if ( *(_DWORD *)(v430 + 48) || (int)v54 > 0 )
              {
                *(_DWORD *)(v430 + 44) = 1;
                *(GUID *)(v430 + 28) = v432;
                v55 = (unsigned int)dword_1C028EE70;
                if ( (unsigned int)dword_1C028EE70 > 6 )
                {
                  if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v595 = 4LL;
                    v364 = v431 == 1;
                    v594 = &v364;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD22,
                      &v432,
                      0LL,
                      3u,
                      &v593);
                    v55 = (unsigned int)dword_1C028EE70;
                  }
                  if ( (unsigned int)v55 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v598 = 4LL;
                    v373 = v431 == 1;
                    v597 = &v373;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD4F,
                      &v432,
                      0LL,
                      3u,
                      &v596);
                  }
                }
              }
            }
            gptiCurrent = v262;
            if ( v262 )
            {
              *((_DWORD *)v262 + 377) = 1;
              v263 = PsGetCurrentProcessWin32Process(v54, v53, v55, v56);
              if ( v263 )
              {
                if ( (*(_DWORD *)(v263 + 12) & 0x8000) != 0 )
                {
                  v54 = (__int64)gptiCurrent;
                  if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                  {
                    while ( 1 )
                    {
                      v266 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      if ( !gpSharedUserCritDeferredUnlockListHead )
                        break;
                      v264 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                      *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                      v265 = *v266;
                      gpSharedUserCritDeferredUnlockListHead = v264;
                      if ( !*(_DWORD *)(v265 + 8) )
                      {
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v265, v53, v55);
                        v265 = *v266;
                      }
                      HMUnlockObject(v265);
                    }
                  }
                }
              }
            }
          }
          else
          {
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v430);
            gptiCurrent = 0LL;
          }
          dword_1C0296FEC = a4[4];
          goto LABEL_111;
        }
        v40 = *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
          v40 = *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
        if ( !v40 )
        {
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v106 = PsGetCurrentThreadWin32Thread(0LL, a2, a3);
            v433 = v106;
          }
          else
          {
            v106 = 0LL;
            v433 = 0LL;
          }
          v434 = 1;
          if ( v106 && (*(int *)(v106 + 24) > 0 || *(_DWORD *)(v433 + 48)) )
          {
            EtwActivityIdControl(3u, &v435);
            if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v601 = 4LL;
              v366 = v434 == 1;
              v600 = &v366;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD79,
                &v435,
                0LL,
                3u,
                &v599);
            }
          }
          if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
            || (v107 = W32kEtwEnabledKeyword,
                v108 = 0x8000002010000000uLL,
                (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
            && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
            || (v108 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x200000010000000LL) != 0
            && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
          {
            v109 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v40, v107, v108);
            if ( v109 )
              v109[1] = KeQueryPerformanceCounter(0LL);
          }
          v110 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          EtwTraceAcquiredExclusiveUserCrit();
          if ( v110 )
          {
            v111 = *v110;
            if ( IsThreadCrossSessionAttached() )
              v111 = 0LL;
            if ( v433 )
            {
              v54 = *(unsigned int *)(v433 + 24);
              if ( *(_DWORD *)(v433 + 48) || (int)v54 > 0 )
              {
                *(_DWORD *)(v433 + 44) = 1;
                *(GUID *)(v433 + 28) = v435;
                v55 = (unsigned int)dword_1C028EE70;
                if ( (unsigned int)dword_1C028EE70 > 6 )
                {
                  if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v604 = 4LL;
                    v367 = v434 == 1;
                    v603 = &v367;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD22,
                      &v435,
                      0LL,
                      3u,
                      &v602);
                    v55 = (unsigned int)dword_1C028EE70;
                  }
                  if ( (unsigned int)v55 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v607 = 4LL;
                    v368 = v434 == 1;
                    v606 = &v368;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD4F,
                      &v435,
                      0LL,
                      3u,
                      &v605);
                  }
                }
              }
            }
            gptiCurrent = v111;
            if ( v111 )
            {
              *((_DWORD *)v111 + 377) = 1;
              v267 = PsGetCurrentProcessWin32Process(v54, v53, v55, v56);
              if ( v267 )
              {
                if ( (*(_DWORD *)(v267 + 12) & 0x8000) != 0 )
                {
                  v54 = (__int64)gptiCurrent;
                  if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                  {
                    while ( 1 )
                    {
                      v270 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      if ( !gpSharedUserCritDeferredUnlockListHead )
                        break;
                      v268 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                      *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                      v269 = *v270;
                      gpSharedUserCritDeferredUnlockListHead = v268;
                      if ( !*(_DWORD *)(v269 + 8) )
                      {
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v269, v53, v55);
                        v269 = *v270;
                      }
                      HMUnlockObject(v269);
                    }
                  }
                }
              }
            }
          }
          else
          {
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v433);
            gptiCurrent = 0LL;
          }
          dword_1C0296F8C = a4[4];
          goto LABEL_111;
        }
        v41 = *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
          v41 = *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
        if ( !v41 )
        {
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v42 = PsGetCurrentThreadWin32Thread(0LL, a2, a3);
            v436 = v42;
          }
          else
          {
            v42 = 0LL;
            v436 = 0LL;
          }
          v437 = 1;
          if ( v42 && (*(int *)(v42 + 24) > 0 || *(_DWORD *)(v436 + 48)) )
          {
            EtwActivityIdControl(3u, &v438);
            if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v610 = 4LL;
              v369 = v437 == 1;
              v609 = &v369;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD79,
                &v438,
                0LL,
                3u,
                &v608);
            }
          }
          if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
            || (v43 = W32kEtwEnabledKeyword,
                v44 = 0x8000002010000000uLL,
                (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
            && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
            || (v44 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x200000010000000LL) != 0
            && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
          {
            v45 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v41, v43, v44);
            if ( v45 )
              v45[1] = KeQueryPerformanceCounter(0LL);
          }
          v112 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          EtwTraceAcquiredExclusiveUserCrit();
          if ( v112 )
          {
            v113 = *v112;
            if ( IsThreadCrossSessionAttached() )
              v113 = 0LL;
            if ( v436 )
            {
              v54 = *(unsigned int *)(v436 + 24);
              if ( *(_DWORD *)(v436 + 48) || (int)v54 > 0 )
              {
                *(_DWORD *)(v436 + 44) = 1;
                *(GUID *)(v436 + 28) = v438;
                v55 = (unsigned int)dword_1C028EE70;
                if ( (unsigned int)dword_1C028EE70 > 6 )
                {
                  if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v613 = 4LL;
                    v370 = v437 == 1;
                    v612 = &v370;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD22,
                      &v438,
                      0LL,
                      3u,
                      &v611);
                    v55 = (unsigned int)dword_1C028EE70;
                  }
                  if ( (unsigned int)v55 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v616 = 4LL;
                    v371 = v437 == 1;
                    v615 = &v371;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD4F,
                      &v438,
                      0LL,
                      3u,
                      &v614);
                  }
                }
              }
            }
            gptiCurrent = v113;
            if ( v113 )
            {
              *((_DWORD *)v113 + 377) = 1;
              v271 = PsGetCurrentProcessWin32Process(v54, v53, v55, v56);
              if ( v271 )
              {
                if ( (*(_DWORD *)(v271 + 12) & 0x8000) != 0 )
                {
                  v54 = (__int64)gptiCurrent;
                  if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                  {
                    while ( 1 )
                    {
                      v274 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      if ( !gpSharedUserCritDeferredUnlockListHead )
                        break;
                      v272 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                      *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                      v273 = *v274;
                      gpSharedUserCritDeferredUnlockListHead = v272;
                      if ( !*(_DWORD *)(v273 + 8) )
                      {
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v273, v53, v55);
                        v273 = *v274;
                      }
                      HMUnlockObject(v273);
                    }
                  }
                }
              }
            }
          }
          else
          {
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v436);
            gptiCurrent = 0LL;
          }
          dword_1C0296FF0 = a4[4];
          goto LABEL_111;
        }
        v275 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)a4 )
          v275 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *((_QWORD *)a4 + 1);
        if ( !v275 )
        {
          if ( !a4[4] )
            return v10;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v276 = PsGetCurrentThreadWin32Thread(0LL, a2, a3);
            v439 = v276;
          }
          else
          {
            v276 = 0LL;
            v439 = 0LL;
          }
          v440 = 1;
          if ( v276 && (*(int *)(v276 + 24) > 0 || *(_DWORD *)(v439 + 48)) )
          {
            EtwActivityIdControl(3u, &v441);
            if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v619 = 4LL;
              v372 = v440 == 1;
              v618 = &v372;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD79,
                &v441,
                0LL,
                3u,
                &v617);
            }
          }
          if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
            || (v277 = W32kEtwEnabledKeyword,
                v278 = 0x8000002010000000uLL,
                (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
            && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
            || (v278 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x200000010000000LL) != 0
            && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
          {
            v279 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v275, v277, v278);
            if ( v279 )
              v279[1] = KeQueryPerformanceCounter(0LL);
          }
          v280 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          EtwTraceAcquiredExclusiveUserCrit();
          if ( v280 )
          {
            v281 = *v280;
            if ( IsThreadCrossSessionAttached() )
              v281 = 0LL;
            if ( v439 )
            {
              v54 = *(unsigned int *)(v439 + 24);
              if ( *(_DWORD *)(v439 + 48) || (int)v54 > 0 )
              {
                *(_DWORD *)(v439 + 44) = 1;
                *(GUID *)(v439 + 28) = v441;
                v55 = (unsigned int)dword_1C028EE70;
                if ( (unsigned int)dword_1C028EE70 > 6 )
                {
                  if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v622 = 4LL;
                    v381 = v440 == 1;
                    v621 = &v381;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD22,
                      &v441,
                      0LL,
                      3u,
                      &v620);
                    v55 = (unsigned int)dword_1C028EE70;
                  }
                  if ( (unsigned int)v55 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v625 = 4LL;
                    v374 = v440 == 1;
                    v624 = &v374;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD4F,
                      &v441,
                      0LL,
                      3u,
                      &v623);
                  }
                }
              }
            }
            gptiCurrent = v281;
            if ( v281 )
            {
              *((_DWORD *)v281 + 377) = 1;
              v282 = PsGetCurrentProcessWin32Process(v54, v53, v55, v56);
              if ( v282 )
              {
                if ( (*(_DWORD *)(v282 + 12) & 0x8000) != 0 )
                {
                  v54 = (__int64)gptiCurrent;
                  if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                  {
                    while ( 1 )
                    {
                      v285 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      if ( !gpSharedUserCritDeferredUnlockListHead )
                        break;
                      v283 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                      *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                      v284 = *v285;
                      gpSharedUserCritDeferredUnlockListHead = v283;
                      if ( !*(_DWORD *)(v284 + 8) )
                      {
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v284, v53, v55);
                        v284 = *v285;
                      }
                      HMUnlockObject(v284);
                    }
                  }
                }
              }
            }
          }
          else
          {
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v439);
            gptiCurrent = 0LL;
          }
          gdwUpdateKeyboard |= 2u;
          goto LABEL_111;
        }
        v286 = *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 == *(_QWORD *)a4 )
          v286 = *(_QWORD *)GUID_INPUT_SUPPRESS_REQUESTED.Data4 - *((_QWORD *)a4 + 1);
        if ( !v286 )
        {
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v287 = PsGetCurrentThreadWin32Thread(0LL, a2, a3);
            v442 = v287;
          }
          else
          {
            v287 = 0LL;
            v442 = 0LL;
          }
          v443 = 1;
          if ( v287 && (*(int *)(v287 + 24) > 0 || *(_DWORD *)(v442 + 48)) )
          {
            EtwActivityIdControl(3u, &v444);
            if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v628 = 4LL;
              v375 = v443 == 1;
              v627 = &v375;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD79,
                &v444,
                0LL,
                3u,
                &v626);
            }
          }
          if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
            || (v288 = W32kEtwEnabledKeyword,
                v289 = 0x8000002010000000uLL,
                (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
            && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
            || (v289 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
            && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
            && (qword_1C028DB20 & 0x200000010000000LL) != 0
            && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
          {
            v290 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v286, v288, v289);
            if ( v290 )
              v290[1] = KeQueryPerformanceCounter(0LL);
          }
          v291 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          EtwTraceAcquiredExclusiveUserCrit();
          if ( v291 )
          {
            v292 = *v291;
            if ( IsThreadCrossSessionAttached() )
              v292 = 0LL;
            if ( v442 )
            {
              v294 = *(unsigned int *)(v442 + 24);
              if ( *(_DWORD *)(v442 + 48) || (int)v294 > 0 )
              {
                *(_DWORD *)(v442 + 44) = 1;
                *(GUID *)(v442 + 28) = v444;
                v295 = (unsigned int)dword_1C028EE70;
                if ( (unsigned int)dword_1C028EE70 > 6 )
                {
                  if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v631 = 4LL;
                    v376 = v443 == 1;
                    v630 = &v376;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD22,
                      &v444,
                      0LL,
                      3u,
                      &v629);
                    v295 = (unsigned int)dword_1C028EE70;
                  }
                  if ( (unsigned int)v295 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v634 = 4LL;
                    v377 = v443 == 1;
                    v633 = &v377;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD4F,
                      &v444,
                      0LL,
                      3u,
                      &v632);
                  }
                }
              }
            }
            gptiCurrent = v292;
            if ( v292 )
            {
              *((_DWORD *)v292 + 377) = 1;
              v297 = PsGetCurrentProcessWin32Process(v294, v293, v295, v296);
              if ( v297 )
              {
                if ( (*(_DWORD *)(v297 + 12) & 0x8000) != 0
                  && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                  && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                {
                  while ( 1 )
                  {
                    v302 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    if ( !gpSharedUserCritDeferredUnlockListHead )
                      break;
                    v300 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                    *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                    v301 = *v302;
                    gpSharedUserCritDeferredUnlockListHead = v300;
                    if ( !*(_DWORD *)(v301 + 8) )
                    {
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v301, v298, v299);
                      v301 = *v302;
                    }
                    HMUnlockObject(v301);
                  }
                }
              }
            }
          }
          else
          {
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v442);
            gptiCurrent = 0LL;
          }
          DomainSharedBase<>::DomainExclusiveBase<DLT_POWERTRANSITIONSSTATE>::ObjectLockBase<>::ObjectLockBase<>(v448);
          DomainSharedBase<>::DomainExclusiveBase<DLT_POWERTRANSITIONSSTATE>::ObjectLockBase<>::lock(v448);
          dword_1C0296FF8 = a4[4] != 0;
          UserLogError((unsigned int)(-(unsigned __int8)dword_1C0296FF8 - 2147482947));
          CBaseInput::OnInputSuppressedValueChanged(a4[4] != 0);
          DomainSharedBase<>::DomainExclusiveBase<DLT_POWERTRANSITIONSSTATE>::ObjectLockBase<>::unlock(v448);
          goto LABEL_111;
        }
        return (unsigned int)-1073741823;
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v216 = PsGetCurrentThreadWin32Thread(0LL, a2, a3);
        v418 = v216;
      }
      else
      {
        v216 = 0LL;
        v418 = 0LL;
      }
      v419 = 1;
      if ( v216 && (*(int *)(v216 + 24) > 0 || *(_DWORD *)(v418 + 48)) )
      {
        EtwActivityIdControl(3u, &v420);
        if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v556 = 4LL;
          v351 = v419 == 1;
          v555 = &v351;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD79,
            &v420,
            0LL,
            3u,
            &v554);
        }
      }
      if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
        || (v217 = W32kEtwEnabledKeyword,
            v218 = 0x8000002010000000uLL,
            (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
        && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
        || (v218 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
      {
        v219 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v35, v217, v218);
        if ( v219 )
          v219[1] = KeQueryPerformanceCounter(0LL);
      }
      v220 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      EtwTraceAcquiredExclusiveUserCrit();
      if ( v220 )
      {
        v221 = *v220;
        if ( IsThreadCrossSessionAttached() )
          v221 = 0LL;
        if ( v418 )
        {
          v54 = *(unsigned int *)(v418 + 24);
          if ( *(_DWORD *)(v418 + 48) || (int)v54 > 0 )
          {
            *(_DWORD *)(v418 + 44) = 1;
            *(GUID *)(v418 + 28) = v420;
            v55 = (unsigned int)dword_1C028EE70;
            if ( (unsigned int)dword_1C028EE70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v559 = 4LL;
                v352 = v419 == 1;
                v558 = &v352;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD22,
                  &v420,
                  0LL,
                  3u,
                  &v557);
                v55 = (unsigned int)dword_1C028EE70;
              }
              if ( (unsigned int)v55 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v562 = 4LL;
                v353 = v419 == 1;
                v561 = &v353;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD4F,
                  &v420,
                  0LL,
                  3u,
                  &v560);
              }
            }
          }
        }
        gptiCurrent = v221;
        if ( v221 )
        {
          *((_DWORD *)v221 + 377) = 1;
          v222 = PsGetCurrentProcessWin32Process(v54, v53, v55, v56);
          if ( v222 )
          {
            if ( (*(_DWORD *)(v222 + 12) & 0x8000) != 0 )
            {
              v54 = (__int64)gptiCurrent;
              if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
              {
                while ( 1 )
                {
                  v225 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( !gpSharedUserCritDeferredUnlockListHead )
                    break;
                  v223 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                  *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                  v224 = *v225;
                  gpSharedUserCritDeferredUnlockListHead = v223;
                  if ( !*(_DWORD *)(v224 + 8) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v224, v53, v55);
                    v224 = *v225;
                  }
                  HMUnlockObject(v224);
                }
              }
            }
          }
        }
      }
      else
      {
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v418);
        gptiCurrent = 0LL;
      }
      if ( gbTtmEnabled || gProtocolType || dword_1C0296FD0 )
        goto LABEL_111;
      v226 = MonitorRequestReasonBatteryCountChange;
    }
    else
    {
LABEL_1133:
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v303 = PsGetCurrentThreadWin32Thread(v34, a2, a3);
        v445 = v303;
      }
      else
      {
        v303 = 0LL;
        v445 = 0LL;
      }
      v446 = 1;
      if ( v303 && (*(int *)(v303 + 24) > 0 || *(_DWORD *)(v445 + 48)) )
      {
        EtwActivityIdControl(3u, &v447);
        if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v637 = 4LL;
          v378 = v446 == 1;
          v636 = &v378;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD79,
            &v447,
            0LL,
            3u,
            &v635);
        }
      }
      if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
        || (v304 = W32kEtwEnabledKeyword,
            v305 = 0x8000002010000000uLL,
            (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
        && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
        || (v305 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
      {
        v306 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v34, v304, v305);
        if ( v306 )
          v306[1] = KeQueryPerformanceCounter(0LL);
      }
      v307 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      EtwTraceAcquiredExclusiveUserCrit();
      if ( v307 )
      {
        v308 = *v307;
        if ( IsThreadCrossSessionAttached() )
          v308 = 0LL;
        if ( v445 )
        {
          v309 = *(unsigned int *)(v445 + 24);
          if ( *(_DWORD *)(v445 + 48) || (int)v309 > 0 )
          {
            *(_DWORD *)(v445 + 44) = 1;
            *(GUID *)(v445 + 28) = v447;
            v55 = (unsigned int)dword_1C028EE70;
            if ( (unsigned int)dword_1C028EE70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v640 = 4LL;
                v379 = v446 == 1;
                v639 = &v379;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD22,
                  &v447,
                  0LL,
                  3u,
                  &v638);
                v55 = (unsigned int)dword_1C028EE70;
              }
              if ( (unsigned int)v55 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v643 = 4LL;
                v380 = v446 == 1;
                v642 = &v380;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD4F,
                  &v447,
                  0LL,
                  3u,
                  &v641);
              }
            }
          }
        }
        gptiCurrent = v308;
        if ( v308 )
        {
          *((_DWORD *)v308 + 377) = 1;
          v310 = PsGetCurrentProcessWin32Process(v309, v53, v55, v56);
          if ( v310 )
          {
            if ( (*(_DWORD *)(v310 + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v313 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                v311 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                v312 = *v313;
                gpSharedUserCritDeferredUnlockListHead = v311;
                if ( !*(_DWORD *)(v312 + 8) )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v312, v53, v55);
                  v312 = *v313;
                }
                HMUnlockObject(v312);
              }
            }
          }
        }
      }
      else
      {
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v445);
        gptiCurrent = 0LL;
      }
      if ( gSqmIsOptedIn && !gProtocolType )
        SqmPowerState();
      dword_1C0296FD0 = a4[4] == 0;
      v54 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)a4;
      if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4 )
        v54 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)a4 + 1);
      if ( !v54 || gbTtmEnabled || gProtocolType )
        goto LABEL_111;
      v226 = MonitorRequestReasonAcDcDisplayBurst;
    }
    PowerDisplayBurst(v226);
    goto LABEL_111;
  }
  v11 = v9 - 1;
  if ( !v11 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( (_DWORD)v8 != 8 || !a4 )
      return (unsigned int)-1073741823;
    v46 = *(_BYTE *)a4;
    v47 = a4[1];
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v48 = PsGetCurrentThreadWin32Thread(a1, a2, a3);
      v400 = v48;
    }
    else
    {
      v48 = 0LL;
      v400 = 0LL;
    }
    v401 = 1;
    if ( v48 && (*(int *)(v48 + 24) > 0 || *(_DWORD *)(v400 + 48)) )
    {
      EtwActivityIdControl(3u, &v402);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v505 = 4LL;
        v333 = v401 == 1;
        v504 = &v333;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD79,
          &v402,
          0LL,
          3u,
          &v503);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v49 = W32kEtwEnabledKeyword, v50 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v50 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v83 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v49, v50);
      if ( v83 )
        v83[1] = KeQueryPerformanceCounter(0LL);
    }
    v51 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v51 )
    {
      v52 = *v51;
      if ( IsThreadCrossSessionAttached() )
        v52 = 0LL;
      if ( v400 )
      {
        v54 = *(unsigned int *)(v400 + 24);
        if ( *(_DWORD *)(v400 + 48) || (int)v54 > 0 )
        {
          *(_DWORD *)(v400 + 44) = 1;
          *(GUID *)(v400 + 28) = v402;
          v55 = (unsigned int)dword_1C028EE70;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v508 = 4LL;
              v334 = v401 == 1;
              v507 = &v334;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                &v402,
                0LL,
                3u,
                &v506);
              v55 = (unsigned int)dword_1C028EE70;
            }
            if ( (unsigned int)v55 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v511 = 4LL;
              v335 = v401 == 1;
              v510 = &v335;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD4F,
                &v402,
                0LL,
                3u,
                &v509);
            }
          }
        }
      }
      gptiCurrent = v52;
      if ( v52 )
      {
        *((_DWORD *)v52 + 377) = 1;
        v57 = PsGetCurrentProcessWin32Process(v54, v53, v55, v56);
        if ( v57 )
        {
          if ( (*(_DWORD *)(v57 + 12) & 0x8000) != 0 )
          {
            v54 = (__int64)gptiCurrent;
            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v58 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                v184 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                v185 = *v58;
                gpSharedUserCritDeferredUnlockListHead = v184;
                if ( !*(_DWORD *)(v185 + 8) )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v185, v53, v55);
                  v185 = *v58;
                }
                HMUnlockObject(v185);
              }
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v400);
      gptiCurrent = 0LL;
    }
    if ( v46 && gbBlockSendInputResets )
      goto LABEL_111;
    if ( dword_1C0296FC8 )
    {
      LOBYTE(v53) = *(_BYTE *)gpbIgnoreSleepInput;
      if ( !*(_BYTE *)gpbIgnoreSleepInput )
        SetPendingInput((unsigned int)v47);
      goto LABEL_111;
    }
    LODWORD(v315) = 16;
    *((_QWORD *)&v315 + 1) = v47;
    goto LABEL_110;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( (_DWORD)v8 == 4 && a4 && a5 == 4 && a6 )
    {
      v13 = *a4;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v14 = PsGetCurrentThreadWin32Thread(a1, a2, a3);
        v397 = v14;
      }
      else
      {
        v14 = 0LL;
        v397 = 0LL;
      }
      v398 = 1;
      if ( v14 && (*(int *)(v14 + 24) > 0 || *(_DWORD *)(v397 + 48)) )
      {
        EtwActivityIdControl(3u, &v399);
        if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
        {
          v496 = v8;
          v330 = v398 == 1;
          v495 = &v330;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C028EE70,
            (unsigned __int8 *)dword_1C025AD79,
            &v399,
            0LL,
            3u,
            &v494);
        }
      }
      if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
        || (v15 = W32kEtwEnabledKeyword,
            v16 = 0x8000002010000000uLL,
            (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
        && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
        || (v16 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
      {
        v82 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v15, v16);
        if ( v82 )
          v82[1] = KeQueryPerformanceCounter(0LL);
      }
      v17 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      EtwTraceAcquiredExclusiveUserCrit();
      if ( v17 )
      {
        v18 = *v17;
        if ( IsThreadCrossSessionAttached() )
          v18 = 0LL;
        if ( v397 )
        {
          v20 = *(unsigned int *)(v397 + 24);
          if ( *(_DWORD *)(v397 + 48) || (int)v20 > 0 )
          {
            *(_DWORD *)(v397 + 44) = 1;
            *(GUID *)(v397 + 28) = v399;
            v21 = (unsigned int)dword_1C028EE70;
            if ( (unsigned int)dword_1C028EE70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v499 = v8;
                v331 = v398 == 1;
                v498 = &v331;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD22,
                  &v399,
                  0LL,
                  3u,
                  &v497);
                v21 = (unsigned int)dword_1C028EE70;
              }
              if ( (unsigned int)v21 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v502 = v8;
                v332 = v398 == 1;
                v501 = &v332;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD4F,
                  &v399,
                  0LL,
                  3u,
                  &v500);
              }
            }
          }
        }
        gptiCurrent = v18;
        if ( v18 )
        {
          *((_DWORD *)v18 + 377) = 1;
          v23 = PsGetCurrentProcessWin32Process(v20, v19, v21, v22);
          if ( v23 )
          {
            if ( (*(_DWORD *)(v23 + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v26 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                v182 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                v183 = *v26;
                gpSharedUserCritDeferredUnlockListHead = v182;
                if ( !*(_DWORD *)(v183 + 8) )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v183, v24, v25);
                  v183 = *v26;
                }
                HMUnlockObject(v183);
              }
            }
          }
        }
      }
      else
      {
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v397);
        gptiCurrent = 0LL;
      }
      v27 = dword_1C0296F68;
      v28 = dword_1C0296F68 + v13;
      dword_1C0296F68 += v13;
      if ( v27 == 1 )
      {
        v60 = v28 == 0;
        v61 = v28 < 0;
        if ( v28 )
        {
LABEL_117:
          v314 = !v61 && !v60;
          ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, &v314, 1LL, 0LL, &gSessionId);
          UserSessionSwitchLeaveCrit(v63, v62, v64, v65);
          if ( v27 || v28 != 1 )
          {
            if ( v28 < 0 )
              goto LABEL_122;
          }
          else if ( dword_1C0296F70 == 2 )
          {
            LODWORD(v315) = 4;
            *((_QWORD *)&v315 + 1) = 48LL;
            QueuePowerRequest(&v315, 0LL);
          }
          v6 = v28;
LABEL_122:
          *a6 = v6;
          return v10;
        }
        CitDisplayRequestChange(0);
        EtwTraceDisplayReqChange(0LL);
        if ( !gbBlockSendInputResets )
          CInputGlobals::UpdateLastInputTime(
            gpInputGlobals,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            10LL);
      }
      else if ( !v27 && v28 == 1 )
      {
        CitDisplayRequestChange(1u);
        EtwTraceDisplayReqChange(1LL);
      }
      v60 = v28 == 0;
      v61 = v28 < 0;
      goto LABEL_117;
    }
    return (unsigned int)-1073741811;
  }
  v73 = v12 - 1;
  if ( v73 )
  {
    v74 = v73 - 1;
    if ( v74 )
    {
      v75 = v74 - 1;
      if ( !v75 )
      {
        if ( gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v76 = PsGetCurrentThreadWin32Thread(a1, a2, a3);
          v388 = v76;
        }
        else
        {
          v76 = 0LL;
          v388 = 0LL;
        }
        v389 = 1;
        if ( v76 && (*(int *)(v76 + 24) > 0 || *(_DWORD *)(v388 + 48)) )
        {
          EtwActivityIdControl(3u, &v390);
          if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v469 = 4LL;
            v321 = v389 == 1;
            v468 = &v321;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD79,
              &v390,
              0LL,
              3u,
              &v467);
          }
        }
        if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
          || (v77 = W32kEtwEnabledKeyword,
              v78 = 0x8000002010000000uLL,
              (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
          && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
          && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
          && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
          || (v78 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
          && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
          && (qword_1C028DB20 & 0x200000010000000LL) != 0
          && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
        {
          v79 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v77, v78);
          if ( v79 )
            v79[1] = KeQueryPerformanceCounter(0LL);
        }
        v80 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        EtwTraceAcquiredExclusiveUserCrit();
        if ( v80 )
        {
          v81 = *v80;
          if ( IsThreadCrossSessionAttached() )
            v81 = 0LL;
          if ( v388 )
          {
            v54 = *(unsigned int *)(v388 + 24);
            if ( *(_DWORD *)(v388 + 48) || (int)v54 > 0 )
            {
              *(_DWORD *)(v388 + 44) = 1;
              *(GUID *)(v388 + 28) = v390;
              v55 = (unsigned int)dword_1C028EE70;
              if ( (unsigned int)dword_1C028EE70 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                {
                  v472 = 4LL;
                  v322 = v389 == 1;
                  v471 = &v322;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C028EE70,
                    (unsigned __int8 *)dword_1C025AD22,
                    &v390,
                    0LL,
                    3u,
                    &v470);
                  v55 = (unsigned int)dword_1C028EE70;
                }
                if ( (unsigned int)v55 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                {
                  v475 = 4LL;
                  v323 = v389 == 1;
                  v474 = &v323;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C028EE70,
                    (unsigned __int8 *)dword_1C025AD4F,
                    &v390,
                    0LL,
                    3u,
                    &v473);
                }
              }
            }
          }
          gptiCurrent = v81;
          if ( v81 )
          {
            *((_DWORD *)v81 + 377) = 1;
            v161 = PsGetCurrentProcessWin32Process(v54, v53, v55, v56);
            if ( v161 )
            {
              if ( (*(_DWORD *)(v161 + 12) & 0x8000) != 0 )
              {
                v54 = (__int64)gptiCurrent;
                if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                {
                  while ( 1 )
                  {
                    v164 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    if ( !gpSharedUserCritDeferredUnlockListHead )
                      break;
                    v162 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                    *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                    v163 = *v164;
                    gpSharedUserCritDeferredUnlockListHead = v162;
                    if ( !*(_DWORD *)(v163 + 8) )
                    {
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v163, v53, v55);
                      v163 = *v164;
                    }
                    HMUnlockObject(v163);
                  }
                }
              }
            }
          }
        }
        else
        {
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v388);
          gptiCurrent = 0LL;
        }
        if ( !gWakeInProgress )
          goto LABEL_111;
        v126 = gWakeInProgressReason;
        gWakeInProgressReason = MonitorRequestReasonUnknown;
        gWakeInProgress = 0;
        if ( gnPoSessionSwitchBlockCount < 2 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v54, v53, v55);
        LODWORD(v315) = 12;
        *((_QWORD *)&v315 + 1) = v126;
        goto LABEL_110;
      }
      v142 = v75 - 1;
      if ( v142 )
      {
        v143 = v142 - 1;
        if ( v143 )
        {
          if ( v143 == 1 )
          {
            if ( !gbTtmEnabled )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
            if ( (_DWORD)v8 != 1 || !a4 || a5 || a6 )
              return (unsigned int)-1073741811;
            v144 = *(_BYTE *)a4 != 0;
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
            {
              v145 = PsGetCurrentThreadWin32Thread(a1, a2, a3);
              v385 = v145;
            }
            else
            {
              v145 = 0LL;
              v385 = 0LL;
            }
            v386 = 1;
            if ( v145 && (*(int *)(v145 + 24) > 0 || *(_DWORD *)(v385 + 48)) )
            {
              EtwActivityIdControl(3u, &v387);
              if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
              {
                v460 = 4LL;
                v318 = v386 == 1;
                v459 = &v318;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C028EE70,
                  (unsigned __int8 *)dword_1C025AD79,
                  &v387,
                  0LL,
                  3u,
                  &v458);
              }
            }
            if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
              || (v146 = W32kEtwEnabledKeyword,
                  v147 = 0x8000002010000000uLL,
                  (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
              && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
              && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
              && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
              || (v147 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
              && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
              && (qword_1C028DB20 & 0x200000010000000LL) != 0
              && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
            {
              v148 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v146, v147);
              if ( v148 )
                v148[1] = KeQueryPerformanceCounter(0LL);
            }
            v149 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            EtwTraceAcquiredExclusiveUserCrit();
            if ( v149 )
            {
              v150 = *v149;
              if ( IsThreadCrossSessionAttached() )
                v150 = 0LL;
              if ( v385 )
              {
                v152 = *(unsigned int *)(v385 + 24);
                if ( *(_DWORD *)(v385 + 48) || (int)v152 > 0 )
                {
                  *(_DWORD *)(v385 + 44) = 1;
                  *(GUID *)(v385 + 28) = v387;
                  v153 = (unsigned int)dword_1C028EE70;
                  if ( (unsigned int)dword_1C028EE70 > 6 )
                  {
                    if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                    {
                      v463 = 4LL;
                      v319 = v386 == 1;
                      v462 = &v319;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_1C028EE70,
                        (unsigned __int8 *)dword_1C025AD22,
                        &v387,
                        0LL,
                        3u,
                        &v461);
                      v153 = (unsigned int)dword_1C028EE70;
                    }
                    if ( (unsigned int)v153 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                    {
                      v466 = 4LL;
                      v320 = v386 == 1;
                      v465 = &v320;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_1C028EE70,
                        (unsigned __int8 *)dword_1C025AD4F,
                        &v387,
                        0LL,
                        3u,
                        &v464);
                    }
                  }
                }
              }
              gptiCurrent = v150;
              if ( v150 )
              {
                *((_DWORD *)v150 + 377) = 1;
                v155 = PsGetCurrentProcessWin32Process(v152, v151, v153, v154);
                if ( v155 )
                {
                  if ( (*(_DWORD *)(v155 + 12) & 0x8000) != 0
                    && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                  {
                    while ( 1 )
                    {
                      v160 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      if ( !gpSharedUserCritDeferredUnlockListHead )
                        break;
                      v158 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                      *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                      v159 = *v160;
                      gpSharedUserCritDeferredUnlockListHead = v158;
                      if ( !*(_DWORD *)(v159 + 8) )
                      {
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v159, v156, v157);
                        v159 = *v160;
                      }
                      HMUnlockObject(v159);
                    }
                  }
                }
              }
            }
            else
            {
              InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v385);
              gptiCurrent = 0LL;
            }
            CitDisplayRequestChange(v144);
            EtwTraceDisplayReqChange(v144);
            goto LABEL_111;
          }
          return (unsigned int)-1073741823;
        }
        if ( !gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
        if ( (_DWORD)v8 != 4 || !a4 )
          return (unsigned int)-1073741823;
        LOBYTE(a2) = 1;
        *((_QWORD *)&v315 + 1) = *a4;
        LODWORD(v315) = 15;
LABEL_262:
        QueuePowerRequest(&v315, a2);
        return v10;
      }
      if ( !gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      if ( (_DWORD)v8 != 8 || !a4 )
        return (unsigned int)-1073741823;
      UserSessionSwitchBlock_Start();
      *((_QWORD *)&v315 + 1) = a4[1];
      LODWORD(v315) = 14;
      if ( *(_BYTE *)a4 )
        LODWORD(v315) = 13;
LABEL_261:
      a2 = 0LL;
      goto LABEL_262;
    }
    if ( (_DWORD)v8 != 32 || !a4 )
      return (unsigned int)-1073741811;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v165 = PsGetCurrentThreadWin32Thread(a1, a2, a3);
      v391 = v165;
    }
    else
    {
      v165 = 0LL;
      v391 = 0LL;
    }
    v392 = 1;
    if ( v165 && (*(int *)(v165 + 24) > 0 || *(_DWORD *)(v391 + 48)) )
    {
      EtwActivityIdControl(3u, &v393);
      if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        v478 = 4LL;
        v324 = v392 == 1;
        v477 = &v324;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD79,
          &v393,
          0LL,
          3u,
          &v476);
      }
    }
    if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
      || (v166 = W32kEtwEnabledKeyword,
          v167 = 0x8000002010000000uLL,
          (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
      && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
      || (v167 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
      && (qword_1C028DB20 & 0x200000010000000LL) != 0
      && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
    {
      v168 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v166, v167);
      if ( v168 )
        v168[1] = KeQueryPerformanceCounter(0LL);
    }
    v169 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    EtwTraceAcquiredExclusiveUserCrit();
    if ( v169 )
    {
      v170 = *v169;
      if ( IsThreadCrossSessionAttached() )
        v170 = 0LL;
      if ( v391 )
      {
        v172 = *(unsigned int *)(v391 + 24);
        if ( *(_DWORD *)(v391 + 48) || (int)v172 > 0 )
        {
          *(_DWORD *)(v391 + 44) = 1;
          *(GUID *)(v391 + 28) = v393;
          v55 = (unsigned int)dword_1C028EE70;
          if ( (unsigned int)dword_1C028EE70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v481 = 4LL;
              v325 = v392 == 1;
              v480 = &v325;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD22,
                &v393,
                0LL,
                3u,
                &v479);
              v55 = (unsigned int)dword_1C028EE70;
            }
            if ( (unsigned int)v55 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
            {
              v484 = 4LL;
              v326 = v392 == 1;
              v483 = &v326;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C028EE70,
                (unsigned __int8 *)dword_1C025AD4F,
                &v393,
                0LL,
                3u,
                &v482);
            }
          }
        }
      }
      gptiCurrent = v170;
      if ( v170 )
      {
        *((_DWORD *)v170 + 377) = 1;
        v173 = PsGetCurrentProcessWin32Process(v172, v171, v55, v56);
        if ( v173 )
        {
          if ( (*(_DWORD *)(v173 + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v177 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v175 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              v176 = *v177;
              gpSharedUserCritDeferredUnlockListHead = v175;
              if ( !*(_DWORD *)(v176 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v176, v174, v55);
                v176 = *v177;
              }
              HMUnlockObject(v176);
            }
          }
        }
      }
    }
    else
    {
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v391);
      gptiCurrent = 0LL;
    }
    v53 = (unsigned int)*a4;
    dword_1C0296F94 = v53;
    dword_1C0296F98 = a4[1];
    dword_1C0296F9C = a4[2];
    dword_1C0296FA0 = a4[3];
    v54 = (unsigned int)a4[4];
    dword_1C0296FA4 = v54;
    dword_1C0296FA8 = a4[5];
    dword_1C0296FAC = a4[6];
    dword_1C0296FB0 = a4[7];
    dword_1C0296F78 = v53;
    dword_1C0296F7C = v53;
    dword_1C0296F80 = v54;
    dword_1C0296F84 = v54;
    if ( dword_1C0296F70 == 1 )
    {
      if ( dword_1C0296F90 == (_DWORD)v53 )
        goto LABEL_111;
      LODWORD(v315) = 11;
      *((_QWORD *)&v315 + 1) = 1LL;
      QueuePowerRequest(&v315, 0LL);
    }
    if ( dword_1C0296F70 != 2 || dword_1C0296F90 == dword_1C0296FA4 )
      goto LABEL_111;
    LODWORD(v315) = 11;
    *((_QWORD *)&v315 + 1) = 2LL;
LABEL_110:
    QueuePowerRequest(&v315, 0LL);
LABEL_111:
    UserSessionSwitchLeaveCrit(v54, v53, v55, v56);
    return v10;
  }
  if ( gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (_DWORD)v8 != 8 || !a4 )
    return (unsigned int)-1073741823;
  v114 = 0;
  if ( !*a4 )
  {
    if ( gSystemIsAoAc )
    {
      if ( !gPowerTransitionsState && !qword_1C0296FD4 )
        return v10;
      SetInputMode(1LL);
    }
    LODWORD(v315) = 5;
    goto LABEL_260;
  }
  v115 = (unsigned int)(*a4 - 1);
  if ( *a4 == 1 )
    goto LABEL_259;
  if ( *a4 != 2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v115, a2, a3);
    return v10;
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v116 = PsGetCurrentThreadWin32Thread(v115, a2, a3);
    v394 = v116;
  }
  else
  {
    v116 = 0LL;
    v394 = 0LL;
  }
  v395 = 1;
  if ( v116 && (*(int *)(v116 + 24) > 0 || *(_DWORD *)(v394 + 48)) )
  {
    EtwActivityIdControl(3u, &v396);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v487 = 4LL;
      v327 = v395 == 1;
      v486 = &v327;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &v396,
        0LL,
        3u,
        &v485);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v117 = W32kEtwEnabledKeyword, v118 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v118 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v119 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v115, v117, v118);
    if ( v119 )
      v119[1] = KeQueryPerformanceCounter(0LL);
  }
  v120 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v120 )
  {
    v127 = *v120;
    if ( IsThreadCrossSessionAttached() )
      v127 = 0LL;
    if ( v394 )
    {
      v122 = *(unsigned int *)(v394 + 24);
      if ( *(_DWORD *)(v394 + 48) || (int)v122 > 0 )
      {
        *(_DWORD *)(v394 + 44) = 1;
        *(GUID *)(v394 + 28) = v396;
        v123 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v490 = 4LL;
            v328 = v395 == 1;
            v489 = &v328;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &v396,
              0LL,
              3u,
              &v488);
            v123 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v123 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v493 = 4LL;
            v329 = v395 == 1;
            v492 = &v329;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &v396,
              0LL,
              3u,
              &v491);
          }
        }
      }
    }
    gptiCurrent = v127;
    if ( v127 )
    {
      *((_DWORD *)v127 + 377) = 1;
      v178 = PsGetCurrentProcessWin32Process(v122, v121, v123, v124);
      if ( v178 )
      {
        if ( (*(_DWORD *)(v178 + 12) & 0x8000) != 0 )
        {
          v122 = (__int64)gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v181 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              v179 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
              *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
              v180 = *v181;
              gpSharedUserCritDeferredUnlockListHead = v179;
              if ( !*(_DWORD *)(v180 + 8) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v180, v121, v123);
                v180 = *v181;
              }
              HMUnlockObject(v180);
            }
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v394);
    gptiCurrent = 0LL;
  }
  if ( gPowerTransitionsState )
    v10 = 255;
  else
    v114 = 1;
  UserSessionSwitchLeaveCrit(v122, v121, v123, v124);
  if ( v114 )
  {
LABEL_259:
    CInputGlobals::UpdateLastInputTime(
      gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      5LL);
    LODWORD(v315) = 4;
LABEL_260:
    *((_QWORD *)&v315 + 1) = a4[1];
    goto LABEL_261;
  }
  return v10;
}
