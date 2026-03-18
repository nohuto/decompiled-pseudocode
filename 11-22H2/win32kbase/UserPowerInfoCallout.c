/*
 * XREFs of UserPowerInfoCallout @ 0x1C000FBD4
 * Callers:
 *     W32CalloutDispatch @ 0x1C00DE840 (W32CalloutDispatch.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C00108E0 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0010ADC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     EtwTraceDisplayReqChange @ 0x1C0010B84 (EtwTraceDisplayReqChange.c)
 *     CitDisplayRequestChange @ 0x1C0010BF4 (CitDisplayRequestChange.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1C001124C (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C00114C0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0059AE0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C005CD30 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     SetPendingInput @ 0x1C00CC580 (SetPendingInput.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0132650 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C01329F8 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     PowerUpdateBrightnessLevels @ 0x1C013428C (PowerUpdateBrightnessLevels.c)
 *     UserLogError @ 0x1C014F4C0 (UserLogError.c)
 *     ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x1C01DCE50 (-OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z.c)
 */

__int64 __fastcall UserPowerInfoCallout(__int64 a1, __int64 a2, __int64 a3, int *a4, int a5, __int64 a6)
{
  int v6; // edi
  unsigned int v7; // r15d
  int v9; // r12d
  int v10; // ebx
  bool v11; // r14
  int v12; // ebx
  int v13; // ebx
  _DWORD *v14; // r13
  int v15; // r12d
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rdx
  struct tagTHREADINFO *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  struct tagKERNELHANDLETABLEENTRY *v22; // rbx
  int v23; // esi
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  bool v33; // zf
  bool v34; // sf
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  struct tagTHREADINFO *v53; // rax
  __int64 v54; // rdx
  struct tagTHREADINFO *v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // ebx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  char v64; // r15
  __int64 v65; // rsi
  struct tagTHREADINFO *v66; // rax
  __int64 v67; // rdx
  struct tagTHREADINFO *v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  struct tagKERNELHANDLETABLEENTRY *v72; // rbx
  struct tagTHREADINFO *v73; // rax
  __int64 v74; // rdx
  struct tagTHREADINFO *v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // ebx
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rcx
  int v83; // ecx
  struct tagTHREADINFO *v84; // rax
  __int64 v85; // rdx
  struct tagTHREADINFO *v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  int v89; // ebx
  __int64 v90; // rdx
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v92; // rbx
  struct tagTHREADINFO *v93; // rax
  __int64 v94; // rdx
  struct tagTHREADINFO *v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  int v98; // ebx
  struct tagTHREADINFO *v99; // rax
  __int64 v100; // rdx
  struct tagTHREADINFO *v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  int v104; // ebx
  struct tagTHREADINFO *v105; // rax
  __int64 v106; // rdx
  struct tagTHREADINFO *v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  int v110; // ebx
  int v111; // ebx
  int v112; // ebx
  struct tagTHREADINFO *v113; // rax
  __int64 v114; // rdx
  struct tagTHREADINFO *v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rbx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  struct tagTHREADINFO *v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rax
  struct tagKERNELHANDLETABLEENTRY *v134; // r13
  __int64 v135; // rax
  int v136; // ebx
  int v137; // ebx
  unsigned int v138; // r12d
  struct tagTHREADINFO *v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rax
  struct tagKERNELHANDLETABLEENTRY *v142; // rbx
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  struct tagKERNELHANDLETABLEENTRY *v146; // rbx
  struct tagTHREADINFO *v147; // rax
  __int64 v148; // rdx
  struct tagTHREADINFO *v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rax
  struct tagKERNELHANDLETABLEENTRY *v153; // rbx
  __int64 v154; // rax
  int v155; // ebx
  int v156; // ebx
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  int v161; // ebx
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  int v166; // ebx
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  int v171; // ebx
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  int v176; // ebx
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  int v181; // ebx
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  int v186; // ebx
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // r9
  __int64 v199; // rbx
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // r9
  __int64 v208; // rbx
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // r8
  __int64 v212; // r9
  __int64 v213; // rax
  __int64 v214; // rax
  struct tagKERNELHANDLETABLEENTRY *v215; // rbx
  __int64 v216; // rdx
  __int64 v217; // rcx
  __int64 v218; // r8
  __int64 v219; // r9
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // r8
  __int64 v223; // r9
  __int64 v224; // rdx
  __int64 v225; // rcx
  __int64 v226; // r8
  __int64 v227; // r9
  __int64 v228; // rax
  __int64 v229; // rax
  __int64 v230; // rax
  __int64 v231; // rax
  struct tagKERNELHANDLETABLEENTRY *v232; // rbx
  __int64 v233; // rax
  __int64 v234; // rax
  struct tagKERNELHANDLETABLEENTRY *v235; // rbx
  __int64 v236; // rax
  struct tagTHREADINFO *v237; // rax
  __int64 v238; // rcx
  __int64 v239; // rax
  struct tagKERNELHANDLETABLEENTRY *v240; // rbx
  __int64 v241; // rax
  int v242; // ebx
  __int64 v243; // rdx
  __int64 v244; // rcx
  __int64 v245; // r8
  __int64 v246; // r9
  struct tagTHREADINFO *v247; // rax
  __int64 v248; // rcx
  __int64 v249; // rax
  struct tagKERNELHANDLETABLEENTRY *v250; // rbx
  __int64 v251; // rax
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // r9
  enum POWER_MONITOR_REQUEST_REASON v256; // ecx
  struct tagTHREADINFO *v257; // rax
  __int64 v258; // rcx
  __int64 v259; // rax
  struct tagKERNELHANDLETABLEENTRY *v260; // rbx
  __int64 v261; // rax
  __int64 v262; // rdx
  __int64 v263; // r8
  __int64 v264; // r9
  char *v265; // rbx
  int v266; // r12d
  tagDomLock *v267; // rcx
  struct tagTHREADINFO *v268; // rax
  __int64 v269; // rdx
  struct tagTHREADINFO *v270; // rcx
  __int64 v271; // r8
  __int64 v272; // r9
  __int64 v273; // rax
  struct tagKERNELHANDLETABLEENTRY *v274; // rbx
  __int64 v275; // rax
  struct tagTHREADINFO *v276; // rax
  __int64 v277; // rdx
  struct tagTHREADINFO *v278; // rcx
  __int64 v279; // r8
  __int64 v280; // r9
  __int64 v281; // rax
  struct tagKERNELHANDLETABLEENTRY *v282; // rbx
  __int64 v283; // rax
  __int64 v284; // rdx
  __int64 v285; // rcx
  __int64 v286; // r8
  __int64 v287; // r9
  struct tagTHREADINFO *v288; // rax
  __int64 v289; // rdx
  struct tagTHREADINFO *v290; // rcx
  __int64 v291; // r8
  __int64 v292; // r9
  __int64 v293; // rax
  struct tagKERNELHANDLETABLEENTRY *v294; // rbx
  __int64 v295; // rax
  int v296; // ebx
  __int64 v297; // rax
  struct tagKERNELHANDLETABLEENTRY *v298; // rbx
  __int64 v299; // rax
  __int64 v300; // rax
  struct tagKERNELHANDLETABLEENTRY *v301; // rbx
  __int64 v302; // rax
  __int64 v303; // rcx
  struct tagTHREADINFO *v304; // rax
  __int64 v305; // rdx
  struct tagTHREADINFO *v306; // rcx
  __int64 v307; // r8
  __int64 v308; // r9
  __int64 v309; // rax
  struct tagKERNELHANDLETABLEENTRY *v310; // rbx
  __int64 v311; // rax
  __int64 v312; // rax
  __int64 v313; // rcx
  struct tagTHREADINFO *v314; // rax
  __int64 v315; // rcx
  __int64 v316; // rax
  struct tagKERNELHANDLETABLEENTRY *v317; // rbx
  __int64 v318; // rax
  __int64 v319; // rdx
  __int64 v320; // r8
  __int64 v321; // r9
  char *v322; // rbx
  int v323; // r12d
  tagDomLock *v324; // rcx
  __int64 v325; // rax
  __int64 v326; // rcx
  __int64 v327; // rax
  struct tagTHREADINFO *v328; // rax
  __int64 v329; // rdx
  struct tagTHREADINFO *v330; // rcx
  __int64 v331; // r8
  __int64 v332; // r9
  __int64 v333; // rax
  struct tagKERNELHANDLETABLEENTRY *v334; // rbx
  __int64 v335; // rax
  __int64 v336; // rcx
  bool v337[8]; // [rsp+50h] [rbp-41h] BYREF
  __int128 v338; // [rsp+58h] [rbp-39h] BYREF
  int v339; // [rsp+68h] [rbp-29h]
  __int64 v340; // [rsp+70h] [rbp-21h]
  PERESOURCE *DomainLockRef; // [rsp+80h] [rbp-11h]
  char v342; // [rsp+88h] [rbp-9h] BYREF
  void *v343; // [rsp+90h] [rbp-1h]
  char v344; // [rsp+98h] [rbp+7h]
  __int64 v345; // [rsp+A0h] [rbp+Fh]
  char v346; // [rsp+A8h] [rbp+17h]

  v6 = 0;
  v340 = a6;
  v7 = 0;
  v338 = 0LL;
  v9 = a3;
  v10 = a1;
  if ( !*(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 2936) )
    return (unsigned int)-1073741823;
  v11 = 1;
  if ( !v10 )
  {
    if ( gbVideoInitialized )
    {
LABEL_32:
      if ( v9 == 20 && a4 )
      {
        v40 = *(_QWORD *)&GUID_ADAPTIVE_SESSION_STATE_CHANGED.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_ADAPTIVE_SESSION_STATE_CHANGED.Data1 == *(_QWORD *)a4 )
          v40 = *(_QWORD *)GUID_ADAPTIVE_SESSION_STATE_CHANGED.Data4 - *((_QWORD *)a4 + 1);
        if ( !v40 )
        {
          v73 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
          gptiCurrent = v73;
          if ( v73 )
          {
            *((_DWORD *)v73 + 387) = 1;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v75);
            if ( CurrentProcessWin32Process )
            {
              if ( *(_QWORD *)CurrentProcessWin32Process )
              {
                if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
                {
                  v75 = gptiCurrent;
                  if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                  {
                    v92 = gpSharedUserCritDeferredUnlockListHead;
                    if ( gpSharedUserCritDeferredUnlockListHead )
                    {
                      do
                      {
                        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v92 + 2);
                        v230 = *(_QWORD *)v92;
                        *((_QWORD *)v92 + 2) = 0LL;
                        if ( !*(_DWORD *)(v230 + 8) )
                          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                        HMUnlockObject(*(_QWORD *)v92);
                        v92 = gpSharedUserCritDeferredUnlockListHead;
                      }
                      while ( gpSharedUserCritDeferredUnlockListHead );
                      v7 = 0;
                    }
                  }
                }
              }
            }
          }
          if ( !gProtocolType || *(_DWORD *)(SGDGetUserSessionState(v75, v74, v76, v77) + 2948) )
            UpdateAdaptiveSessionState();
          goto LABEL_77;
        }
        v41 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
          v41 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
        if ( !v41 )
        {
          v93 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
          gptiCurrent = v93;
          if ( v93 )
          {
            *((_DWORD *)v93 + 387) = 1;
            v231 = PsGetCurrentProcessWin32Process(v95);
            if ( v231 )
            {
              if ( *(_QWORD *)v231 )
              {
                if ( (*(_DWORD *)(v231 + 12) & 0x8000) != 0 )
                {
                  v95 = gptiCurrent;
                  if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                  {
                    v232 = gpSharedUserCritDeferredUnlockListHead;
                    if ( gpSharedUserCritDeferredUnlockListHead )
                    {
                      do
                      {
                        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v232 + 2);
                        v233 = *(_QWORD *)v232;
                        *((_QWORD *)v232 + 2) = 0LL;
                        if ( !*(_DWORD *)(v233 + 8) )
                          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                        HMUnlockObject(*(_QWORD *)v232);
                        v232 = gpSharedUserCritDeferredUnlockListHead;
                      }
                      while ( gpSharedUserCritDeferredUnlockListHead );
                      v7 = 0;
                    }
                  }
                }
              }
            }
          }
          v98 = a4[4];
          *(_DWORD *)(SGDGetUserSessionState(v95, v94, v96, v97) + 3096) = v98;
          goto LABEL_77;
        }
        v42 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
          v42 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
        if ( !v42 )
        {
          v99 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
          gptiCurrent = v99;
          if ( v99 )
          {
            *((_DWORD *)v99 + 387) = 1;
            v234 = PsGetCurrentProcessWin32Process(v101);
            if ( v234 )
            {
              if ( *(_QWORD *)v234 )
              {
                if ( (*(_DWORD *)(v234 + 12) & 0x8000) != 0 )
                {
                  v101 = gptiCurrent;
                  if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                  {
                    v235 = gpSharedUserCritDeferredUnlockListHead;
                    if ( gpSharedUserCritDeferredUnlockListHead )
                    {
                      do
                      {
                        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v235 + 2);
                        v236 = *(_QWORD *)v235;
                        *((_QWORD *)v235 + 2) = 0LL;
                        if ( !*(_DWORD *)(v236 + 8) )
                          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                        HMUnlockObject(*(_QWORD *)v235);
                        v235 = gpSharedUserCritDeferredUnlockListHead;
                      }
                      while ( gpSharedUserCritDeferredUnlockListHead );
                      v7 = 0;
                    }
                  }
                }
              }
            }
          }
          v104 = a4[4];
          *(_DWORD *)(SGDGetUserSessionState(v101, v100, v102, v103) + 3088) = v104;
          goto LABEL_77;
        }
        v43 = *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == *(_QWORD *)a4 )
          v43 = *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 - *((_QWORD *)a4 + 1);
        if ( !v43 )
        {
          v237 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
          gptiCurrent = v237;
          if ( v237 )
          {
            *((_DWORD *)v237 + 387) = 1;
            v239 = PsGetCurrentProcessWin32Process(v238);
            if ( v239 )
            {
              if ( *(_QWORD *)v239 )
              {
                if ( (*(_DWORD *)(v239 + 12) & 0x8000) != 0
                  && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                  && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                {
                  v240 = gpSharedUserCritDeferredUnlockListHead;
                  if ( gpSharedUserCritDeferredUnlockListHead )
                  {
                    do
                    {
                      gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v240 + 2);
                      v241 = *(_QWORD *)v240;
                      *((_QWORD *)v240 + 2) = 0LL;
                      if ( !*(_DWORD *)(v241 + 8) )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                      HMUnlockObject(*(_QWORD *)v240);
                      v240 = gpSharedUserCritDeferredUnlockListHead;
                    }
                    while ( gpSharedUserCritDeferredUnlockListHead );
                    v7 = 0;
                  }
                }
              }
            }
          }
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5038LL);
          v242 = a4[4];
          *(_DWORD *)(SGDGetUserSessionState(v244, v243, v245, v246) + 3104) = v242;
          goto LABEL_77;
        }
        v44 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)a4 )
          v44 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - *((_QWORD *)a4 + 1);
        if ( !v44 )
          goto LABEL_421;
        v45 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4 )
          v45 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)a4 + 1);
        if ( v45 )
        {
          v46 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - *(_QWORD *)a4;
          if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 == *(_QWORD *)a4 )
            v46 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - *((_QWORD *)a4 + 1);
          if ( v46 )
          {
            v47 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)a4 )
              v47 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - *((_QWORD *)a4 + 1);
            if ( v47 )
            {
              v48 = *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 - *(_QWORD *)a4;
              if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 == *(_QWORD *)a4 )
                v48 = *(_QWORD *)GUID_LIDSWITCH_STATE_RELIABILITY.Data4 - *((_QWORD *)a4 + 1);
              if ( !v48 )
              {
                v268 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
                gptiCurrent = v268;
                if ( v268 )
                {
                  *((_DWORD *)v268 + 387) = 1;
                  v273 = PsGetCurrentProcessWin32Process(v270);
                  if ( v273 )
                  {
                    if ( *(_QWORD *)v273 )
                    {
                      if ( (*(_DWORD *)(v273 + 12) & 0x8000) != 0 )
                      {
                        v270 = gptiCurrent;
                        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                        {
                          v274 = gpSharedUserCritDeferredUnlockListHead;
                          if ( gpSharedUserCritDeferredUnlockListHead )
                          {
                            do
                            {
                              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v274 + 2);
                              v275 = *(_QWORD *)v274;
                              *((_QWORD *)v274 + 2) = 0LL;
                              if ( !*(_DWORD *)(v275 + 8) )
                                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                              HMUnlockObject(*(_QWORD *)v274);
                              v274 = gpSharedUserCritDeferredUnlockListHead;
                            }
                            while ( gpSharedUserCritDeferredUnlockListHead );
                            v7 = 0;
                          }
                        }
                      }
                    }
                  }
                }
                if ( a4[4] )
                  *(_DWORD *)(SGDGetUserSessionState(v270, v269, v271, v272) + 3012) = 1;
                else
                  *(_DWORD *)(SGDGetUserSessionState(v270, v269, v271, v272) + 3012) = 0;
                goto LABEL_77;
              }
              v49 = *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 - *(_QWORD *)a4;
              if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 == *(_QWORD *)a4 )
                v49 = *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 - *((_QWORD *)a4 + 1);
              if ( !v49 )
              {
                v276 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
                gptiCurrent = v276;
                if ( v276 )
                {
                  *((_DWORD *)v276 + 387) = 1;
                  v281 = PsGetCurrentProcessWin32Process(v278);
                  if ( v281 )
                  {
                    if ( *(_QWORD *)v281 )
                    {
                      if ( (*(_DWORD *)(v281 + 12) & 0x8000) != 0 )
                      {
                        v278 = gptiCurrent;
                        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                        {
                          v282 = gpSharedUserCritDeferredUnlockListHead;
                          if ( gpSharedUserCritDeferredUnlockListHead )
                          {
                            do
                            {
                              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v282 + 2);
                              v283 = *(_QWORD *)v282;
                              *((_QWORD *)v282 + 2) = 0LL;
                              if ( !*(_DWORD *)(v283 + 8) )
                                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                              HMUnlockObject(*(_QWORD *)v282);
                              v282 = gpSharedUserCritDeferredUnlockListHead;
                            }
                            while ( gpSharedUserCritDeferredUnlockListHead );
                            v7 = 0;
                          }
                        }
                      }
                    }
                  }
                }
                if ( !a4[4] )
                {
                  *(_DWORD *)(SGDGetUserSessionState(v278, v277, v279, v280) + 2956) = 0;
                  goto LABEL_77;
                }
                if ( *(_BYTE *)SGDGetUserGdiSessionState() )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5103LL);
                LODWORD(v338) = 5;
                *((_QWORD *)&v338 + 1) = 13LL;
                *(_DWORD *)(SGDGetUserSessionState(v285, v284, v286, v287) + 2956) = 1;
                goto LABEL_141;
              }
              v50 = *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 - *(_QWORD *)a4;
              if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)a4 )
                v50 = *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 - *((_QWORD *)a4 + 1);
              if ( !v50 )
              {
                v288 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
                gptiCurrent = v288;
                if ( v288 )
                {
                  *((_DWORD *)v288 + 387) = 1;
                  v293 = PsGetCurrentProcessWin32Process(v290);
                  if ( v293 )
                  {
                    if ( *(_QWORD *)v293 )
                    {
                      if ( (*(_DWORD *)(v293 + 12) & 0x8000) != 0 )
                      {
                        v290 = gptiCurrent;
                        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                        {
                          v294 = gpSharedUserCritDeferredUnlockListHead;
                          if ( gpSharedUserCritDeferredUnlockListHead )
                          {
                            do
                            {
                              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v294 + 2);
                              v295 = *(_QWORD *)v294;
                              *((_QWORD *)v294 + 2) = 0LL;
                              if ( !*(_DWORD *)(v295 + 8) )
                                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                              HMUnlockObject(*(_QWORD *)v294);
                              v294 = gpSharedUserCritDeferredUnlockListHead;
                            }
                            while ( gpSharedUserCritDeferredUnlockListHead );
                            v7 = 0;
                          }
                        }
                      }
                    }
                  }
                }
                v296 = a4[4];
                *(_DWORD *)(SGDGetUserSessionState(v290, v289, v291, v292) + 2996) = v296;
                goto LABEL_77;
              }
              v51 = *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 - *(_QWORD *)a4;
              if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
                v51 = *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
              if ( !v51 )
              {
                v105 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
                gptiCurrent = v105;
                if ( v105 )
                {
                  *((_DWORD *)v105 + 387) = 1;
                  v297 = PsGetCurrentProcessWin32Process(v107);
                  if ( v297 )
                  {
                    if ( *(_QWORD *)v297 )
                    {
                      if ( (*(_DWORD *)(v297 + 12) & 0x8000) != 0 )
                      {
                        v107 = gptiCurrent;
                        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                        {
                          v298 = gpSharedUserCritDeferredUnlockListHead;
                          if ( gpSharedUserCritDeferredUnlockListHead )
                          {
                            do
                            {
                              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v298 + 2);
                              v299 = *(_QWORD *)v298;
                              *((_QWORD *)v298 + 2) = 0LL;
                              if ( !*(_DWORD *)(v299 + 8) )
                                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                              HMUnlockObject(*(_QWORD *)v298);
                              v298 = gpSharedUserCritDeferredUnlockListHead;
                            }
                            while ( gpSharedUserCritDeferredUnlockListHead );
                            v7 = 0;
                          }
                        }
                      }
                    }
                  }
                }
                v110 = a4[4];
                *(_DWORD *)(SGDGetUserSessionState(v107, v106, v108, v109) + 3108) = v110;
                goto LABEL_77;
              }
              v52 = *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 - *(_QWORD *)a4;
              if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
                v52 = *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
              if ( !v52 )
              {
                v53 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
                gptiCurrent = v53;
                if ( v53 )
                {
                  *((_DWORD *)v53 + 387) = 1;
                  v300 = PsGetCurrentProcessWin32Process(v55);
                  if ( v300 )
                  {
                    if ( *(_QWORD *)v300 )
                    {
                      if ( (*(_DWORD *)(v300 + 12) & 0x8000) != 0 )
                      {
                        v55 = gptiCurrent;
                        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                        {
                          v301 = gpSharedUserCritDeferredUnlockListHead;
                          if ( gpSharedUserCritDeferredUnlockListHead )
                          {
                            do
                            {
                              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v301 + 2);
                              v302 = *(_QWORD *)v301;
                              *((_QWORD *)v301 + 2) = 0LL;
                              if ( !*(_DWORD *)(v302 + 8) )
                                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                              HMUnlockObject(*(_QWORD *)v301);
                              v301 = gpSharedUserCritDeferredUnlockListHead;
                            }
                            while ( gpSharedUserCritDeferredUnlockListHead );
                            v7 = 0;
                          }
                        }
                      }
                    }
                  }
                }
                v58 = a4[4];
                *(_DWORD *)(SGDGetUserSessionState(v55, v54, v56, v57) + 3000) = v58;
                goto LABEL_77;
              }
              v303 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)a4;
              if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)a4 )
                v303 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *((_QWORD *)a4 + 1);
              if ( !v303 )
              {
                if ( !a4[4] )
                  return v7;
                v304 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
                gptiCurrent = v304;
                if ( v304 )
                {
                  *((_DWORD *)v304 + 387) = 1;
                  v309 = PsGetCurrentProcessWin32Process(v306);
                  if ( v309 )
                  {
                    if ( *(_QWORD *)v309 )
                    {
                      if ( (*(_DWORD *)(v309 + 12) & 0x8000) != 0 )
                      {
                        v306 = gptiCurrent;
                        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                        {
                          v310 = gpSharedUserCritDeferredUnlockListHead;
                          if ( gpSharedUserCritDeferredUnlockListHead )
                          {
                            do
                            {
                              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v310 + 2);
                              v311 = *(_QWORD *)v310;
                              *((_QWORD *)v310 + 2) = 0LL;
                              if ( !*(_DWORD *)(v311 + 8) )
                                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                              HMUnlockObject(*(_QWORD *)v310);
                              v310 = gpSharedUserCritDeferredUnlockListHead;
                            }
                            while ( gpSharedUserCritDeferredUnlockListHead );
                            v7 = 0;
                          }
                        }
                      }
                    }
                  }
                }
                v312 = SGDGetUserSessionState(v306, v305, v307, v308);
                *(_DWORD *)(v312 + 12616) |= 2u;
                goto LABEL_77;
              }
              v313 = *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 - *(_QWORD *)a4;
              if ( *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 == *(_QWORD *)a4 )
                v313 = *(_QWORD *)GUID_INPUT_SUPPRESS_REQUESTED.Data4 - *((_QWORD *)a4 + 1);
              if ( v313 )
                return (unsigned int)-1073741823;
              v314 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
              gptiCurrent = v314;
              if ( v314 )
              {
                *((_DWORD *)v314 + 387) = 1;
                v316 = PsGetCurrentProcessWin32Process(v315);
                if ( v316 )
                {
                  if ( *(_QWORD *)v316 )
                  {
                    if ( (*(_DWORD *)(v316 + 12) & 0x8000) != 0
                      && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                      && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                    {
                      v317 = gpSharedUserCritDeferredUnlockListHead;
                      if ( gpSharedUserCritDeferredUnlockListHead )
                      {
                        do
                        {
                          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v317 + 2);
                          v318 = *(_QWORD *)v317;
                          *((_QWORD *)v317 + 2) = 0LL;
                          if ( !*(_DWORD *)(v318 + 8) )
                            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                          HMUnlockObject(*(_QWORD *)v317);
                          v317 = gpSharedUserCritDeferredUnlockListHead;
                        }
                        while ( gpSharedUserCritDeferredUnlockListHead );
                        v7 = 0;
                      }
                    }
                  }
                }
              }
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(13LL);
              v322 = &v342;
              v342 = 1;
              v343 = &gDomainDummyLock;
              v323 = 0;
              v344 = 0;
              v345 = 0LL;
              v346 = 0;
              do
              {
                v324 = (tagDomLock *)*((_QWORD *)v322 - 1);
                if ( v324 )
                {
                  if ( *v322 )
                    tagDomLock::LockExclusive(v324);
                  else
                    ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v324);
                }
                ++v323;
                v322 += 16;
              }
              while ( !v323 );
              v346 = 1;
              if ( a4[4] )
              {
                v325 = SGDGetUserSessionState(v324, v319, v320, v321);
                v326 = 2147484348LL;
                *(_DWORD *)(v325 + 3008) = 1;
              }
              else
              {
                v327 = SGDGetUserSessionState(v324, v319, v320, v321);
                v326 = 2147484349LL;
                *(_DWORD *)(v327 + 3008) = 0;
              }
              UserLogError(v326);
              CBaseInput::OnInputSuppressedValueChanged(a4[4] != 0);
            }
            else
            {
              v257 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
              gptiCurrent = v257;
              if ( v257 )
              {
                *((_DWORD *)v257 + 387) = 1;
                v259 = PsGetCurrentProcessWin32Process(v258);
                if ( v259 )
                {
                  if ( *(_QWORD *)v259 )
                  {
                    if ( (*(_DWORD *)(v259 + 12) & 0x8000) != 0
                      && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                      && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                    {
                      v260 = gpSharedUserCritDeferredUnlockListHead;
                      if ( gpSharedUserCritDeferredUnlockListHead )
                      {
                        do
                        {
                          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v260 + 2);
                          v261 = *(_QWORD *)v260;
                          *((_QWORD *)v260 + 2) = 0LL;
                          if ( !*(_DWORD *)(v261 + 8) )
                            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                          HMUnlockObject(*(_QWORD *)v260);
                          v260 = gpSharedUserCritDeferredUnlockListHead;
                        }
                        while ( gpSharedUserCritDeferredUnlockListHead );
                        v7 = 0;
                      }
                    }
                  }
                }
              }
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(13LL);
              v265 = &v342;
              v342 = 1;
              v343 = &gDomainDummyLock;
              v266 = 0;
              v344 = 0;
              v345 = 0LL;
              v346 = 0;
              do
              {
                v267 = (tagDomLock *)*((_QWORD *)v265 - 1);
                if ( v267 )
                {
                  if ( *v265 )
                    tagDomLock::LockExclusive(v267);
                  else
                    ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v267);
                }
                ++v266;
                v265 += 16;
              }
              while ( !v266 );
              v346 = 1;
              if ( a4[4] )
                *(_DWORD *)(SGDGetUserSessionState(v267, v262, v263, v264) + 3004) = 1;
              else
                *(_DWORD *)(SGDGetUserSessionState(v267, v262, v263, v264) + 3004) = 0;
            }
            if ( v346 )
            {
              if ( DomainLockRef )
                ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
              v346 = 0;
            }
            goto LABEL_77;
          }
          v247 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
          gptiCurrent = v247;
          if ( v247 )
          {
            *((_DWORD *)v247 + 387) = 1;
            v249 = PsGetCurrentProcessWin32Process(v248);
            if ( v249 )
            {
              if ( *(_QWORD *)v249 )
              {
                if ( (*(_DWORD *)(v249 + 12) & 0x8000) != 0
                  && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                  && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                {
                  v250 = gpSharedUserCritDeferredUnlockListHead;
                  if ( gpSharedUserCritDeferredUnlockListHead )
                  {
                    do
                    {
                      gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v250 + 2);
                      v251 = *(_QWORD *)v250;
                      *((_QWORD *)v250 + 2) = 0LL;
                      if ( !*(_DWORD *)(v251 + 8) )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                      HMUnlockObject(*(_QWORD *)v250);
                      v250 = gpSharedUserCritDeferredUnlockListHead;
                    }
                    while ( gpSharedUserCritDeferredUnlockListHead );
                    v7 = 0;
                  }
                }
              }
            }
          }
          if ( *(_BYTE *)SGDGetUserGdiSessionState()
            || gProtocolType
            || *(_DWORD *)(SGDGetUserSessionState(v253, v252, v254, v255) + 2968) )
          {
            goto LABEL_77;
          }
          v256 = MonitorRequestReasonBatteryCountChange;
        }
        else
        {
LABEL_421:
          v328 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
          gptiCurrent = v328;
          if ( v328 )
          {
            *((_DWORD *)v328 + 387) = 1;
            v333 = PsGetCurrentProcessWin32Process(v330);
            if ( v333 )
            {
              if ( *(_QWORD *)v333 )
              {
                if ( (*(_DWORD *)(v333 + 12) & 0x8000) != 0 )
                {
                  v330 = gptiCurrent;
                  if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                  {
                    v334 = gpSharedUserCritDeferredUnlockListHead;
                    if ( gpSharedUserCritDeferredUnlockListHead )
                    {
                      do
                      {
                        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v334 + 2);
                        v335 = *(_QWORD *)v334;
                        *((_QWORD *)v334 + 2) = 0LL;
                        if ( !*(_DWORD *)(v335 + 8) )
                          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                        HMUnlockObject(*(_QWORD *)v334);
                        v334 = gpSharedUserCritDeferredUnlockListHead;
                      }
                      while ( gpSharedUserCritDeferredUnlockListHead );
                      v7 = 0;
                    }
                  }
                }
              }
            }
          }
          if ( a4[4] )
            *(_DWORD *)(SGDGetUserSessionState(v330, v329, v331, v332) + 2968) = 0;
          else
            *(_DWORD *)(SGDGetUserSessionState(v330, v329, v331, v332) + 2968) = 1;
          v336 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)a4;
          if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4 )
            v336 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)a4 + 1);
          if ( !v336 || *(_BYTE *)SGDGetUserGdiSessionState() || gProtocolType )
            goto LABEL_77;
          v256 = MonitorRequestReasonAcDcDisplayBurst;
        }
        PowerDisplayBurst(v256);
        goto LABEL_77;
      }
      return (unsigned int)-1073741823;
    }
    v131 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
    gptiCurrent = v131;
    if ( v131 )
    {
      *((_DWORD *)v131 + 387) = 1;
      v133 = PsGetCurrentProcessWin32Process(v132);
      if ( v133 )
      {
        if ( *(_QWORD *)v133 )
        {
          if ( (*(_DWORD *)(v133 + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            v134 = gpSharedUserCritDeferredUnlockListHead;
            if ( gpSharedUserCritDeferredUnlockListHead )
            {
              do
              {
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v134 + 2);
                v135 = *(_QWORD *)v134;
                *((_QWORD *)v134 + 2) = 0LL;
                if ( !*(_DWORD *)(v135 + 8) )
                {
                  v339 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                }
                HMUnlockObject(*(_QWORD *)v134);
                v134 = gpSharedUserCritDeferredUnlockListHead;
              }
              while ( gpSharedUserCritDeferredUnlockListHead );
              v7 = 0;
            }
          }
        }
      }
    }
    UserSessionSwitchLeaveCrit();
  }
  if ( !gbVideoInitialized )
    return (unsigned int)-1073741823;
  if ( !v10 )
    goto LABEL_32;
  v12 = v10 - 1;
  if ( !v12 )
  {
    if ( *(_BYTE *)SGDGetUserGdiSessionState() )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5186LL);
    if ( v9 != 8 || !a4 )
      return (unsigned int)-1073741811;
    v64 = *(_BYTE *)a4;
    v65 = a4[1];
    v66 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
    gptiCurrent = v66;
    if ( v66 )
    {
      *((_DWORD *)v66 + 387) = 1;
      v71 = PsGetCurrentProcessWin32Process(v68);
      if ( v71 )
      {
        if ( *(_QWORD *)v71 )
        {
          if ( (*(_DWORD *)(v71 + 12) & 0x8000) != 0 )
          {
            v68 = gptiCurrent;
            if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v72 = gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v229 = *(_QWORD *)v72;
                *((_QWORD *)v72 + 2) = 0LL;
                if ( !*(_DWORD *)(v229 + 8) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                HMUnlockObject(*(_QWORD *)v72);
              }
            }
          }
        }
      }
    }
    if ( v64 && gbBlockSendInputResets )
    {
      v7 = -1073741823;
    }
    else if ( *(_DWORD *)(SGDGetUserSessionState(v68, v67, v69, v70) + 2960) )
    {
      v7 = 259;
      if ( !**(_BYTE **)(SGDGetUserSessionState(v60, v59, v61, v62) + 2928) )
        SetPendingInput((unsigned int)v65);
    }
    else
    {
      LODWORD(v338) = 16;
      *((_QWORD *)&v338 + 1) = v65;
      v7 = QueuePowerRequest(&v338, 0LL);
    }
    goto LABEL_77;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( *(_BYTE *)SGDGetUserGdiSessionState() )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5281LL);
    if ( v9 == 4 )
    {
      if ( a4 )
      {
        if ( a5 == 4 )
        {
          v14 = (_DWORD *)v340;
          if ( v340 )
          {
            v15 = *a4;
            v16 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
            gptiCurrent = v16;
            if ( v16 )
            {
              *((_DWORD *)v16 + 387) = 1;
              v21 = PsGetCurrentProcessWin32Process(v18);
              if ( v21 )
              {
                if ( *(_QWORD *)v21 )
                {
                  if ( (*(_DWORD *)(v21 + 12) & 0x8000) != 0 )
                  {
                    v18 = gptiCurrent;
                    if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                      && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                    {
                      v22 = gpSharedUserCritDeferredUnlockListHead;
                      if ( gpSharedUserCritDeferredUnlockListHead )
                      {
                        do
                        {
                          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v22 + 2);
                          v228 = *(_QWORD *)v22;
                          *((_QWORD *)v22 + 2) = 0LL;
                          if ( !*(_DWORD *)(v228 + 8) )
                            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                          HMUnlockObject(*(_QWORD *)v22);
                          v22 = gpSharedUserCritDeferredUnlockListHead;
                        }
                        while ( gpSharedUserCritDeferredUnlockListHead );
                        v7 = 0;
                      }
                    }
                  }
                }
              }
            }
            v23 = *(_DWORD *)(SGDGetUserSessionState(v18, v17, v19, v20) + 3072);
            v24 = v23 + v15;
            *(_DWORD *)(SGDGetUserSessionState(v26, v25, v27, v28) + 3072) = v23 + v15;
            if ( v23 == 1 )
            {
              v33 = v24 == 0;
              v34 = v24 < 0;
              if ( v24 )
              {
LABEL_25:
                v337[0] = !v34 && !v33;
                v35 = SGDGetUserSessionState(v30, v29, v31, v32);
                ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, v337, 1LL, 0LL, v35);
                UserSessionSwitchLeaveCrit();
                if ( v23 || v24 != 1 )
                {
                  if ( v24 < 0 )
                    goto LABEL_30;
                }
                else if ( *(_DWORD *)(SGDGetUserSessionState(v37, v36, v38, v39) + 3080) == 2 )
                {
                  LODWORD(v338) = 4;
                  *((_QWORD *)&v338 + 1) = 48LL;
                  QueuePowerRequest(&v338, 0LL);
                }
                v6 = v23 + v15;
LABEL_30:
                *v14 = v6;
                return v7;
              }
              CitDisplayRequestChange(0);
              EtwTraceDisplayReqChange(0LL);
              if ( !gbBlockSendInputResets )
                CInputGlobals::UpdateLastInputTime(
                  *((_QWORD *)&WPP_MAIN_CB.Reserved + 1),
                  (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                  10LL);
            }
            else if ( !v23 && v24 == 1 )
            {
              CitDisplayRequestChange(1u);
              EtwTraceDisplayReqChange(1LL);
            }
            v33 = v24 == 0;
            v34 = v24 < 0;
            goto LABEL_25;
          }
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  v78 = v13 - 1;
  if ( v78 )
  {
    v111 = v78 - 1;
    if ( !v111 )
    {
      if ( v9 != 32 || !a4 )
        return (unsigned int)-1073741811;
      v147 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
      gptiCurrent = v147;
      if ( v147 )
      {
        *((_DWORD *)v147 + 387) = 1;
        v152 = PsGetCurrentProcessWin32Process(v149);
        if ( v152 )
        {
          if ( *(_QWORD *)v152 )
          {
            if ( (*(_DWORD *)(v152 + 12) & 0x8000) != 0 )
            {
              v149 = gptiCurrent;
              if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
              {
                v153 = gpSharedUserCritDeferredUnlockListHead;
                if ( gpSharedUserCritDeferredUnlockListHead )
                {
                  do
                  {
                    gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v153 + 2);
                    v154 = *(_QWORD *)v153;
                    *((_QWORD *)v153 + 2) = 0LL;
                    if ( !*(_DWORD *)(v154 + 8) )
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                    HMUnlockObject(*(_QWORD *)v153);
                    v153 = gpSharedUserCritDeferredUnlockListHead;
                  }
                  while ( gpSharedUserCritDeferredUnlockListHead );
                  v7 = 0;
                }
              }
            }
          }
        }
      }
      v155 = *a4;
      *(_DWORD *)(SGDGetUserSessionState(v149, v148, v150, v151) + 3116) = v155;
      v156 = a4[1];
      *(_DWORD *)(SGDGetUserSessionState(v158, v157, v159, v160) + 3120) = v156;
      v161 = a4[2];
      *(_DWORD *)(SGDGetUserSessionState(v163, v162, v164, v165) + 3124) = v161;
      v166 = a4[3];
      *(_DWORD *)(SGDGetUserSessionState(v168, v167, v169, v170) + 3128) = v166;
      v171 = a4[4];
      *(_DWORD *)(SGDGetUserSessionState(v173, v172, v174, v175) + 3132) = v171;
      v176 = a4[5];
      *(_DWORD *)(SGDGetUserSessionState(v178, v177, v179, v180) + 3136) = v176;
      v181 = a4[6];
      *(_DWORD *)(SGDGetUserSessionState(v183, v182, v184, v185) + 3140) = v181;
      v186 = a4[7];
      *(_DWORD *)(SGDGetUserSessionState(v188, v187, v189, v190) + 3144) = v186;
      PowerUpdateBrightnessLevels();
      if ( *(_DWORD *)(SGDGetUserSessionState(v192, v191, v193, v194) + 3080) == 1 )
      {
        v199 = SGDGetUserSessionState(v196, v195, v197, v198);
        v196 = *(unsigned int *)(SGDGetUserSessionState(v201, v200, v202, v203) + 3116);
        if ( *(_DWORD *)(v199 + 3112) != (_DWORD)v196 )
        {
          LODWORD(v338) = 11;
          *((_QWORD *)&v338 + 1) = 1LL;
          QueuePowerRequest(&v338, 0LL);
        }
      }
      if ( *(_DWORD *)(SGDGetUserSessionState(v196, v195, v197, v198) + 3080) == 2 )
      {
        v208 = SGDGetUserSessionState(v205, v204, v206, v207);
        if ( *(_DWORD *)(v208 + 3112) != *(_DWORD *)(SGDGetUserSessionState(v210, v209, v211, v212) + 3132) )
        {
          LODWORD(v338) = 11;
          *((_QWORD *)&v338 + 1) = 2LL;
LABEL_141:
          QueuePowerRequest(&v338, 0LL);
        }
      }
LABEL_77:
      UserSessionSwitchLeaveCrit();
      return v7;
    }
    v112 = v111 - 1;
    if ( !v112 )
    {
      if ( *(_BYTE *)SGDGetUserGdiSessionState() )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5443LL);
      v113 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
      gptiCurrent = v113;
      if ( v113 )
      {
        *((_DWORD *)v113 + 387) = 1;
        v144 = PsGetCurrentProcessWin32Process(v115);
        if ( v144 )
        {
          if ( *(_QWORD *)v144 )
          {
            if ( (*(_DWORD *)(v144 + 12) & 0x8000) != 0 )
            {
              v115 = gptiCurrent;
              if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
              {
                while ( 1 )
                {
                  v146 = gpSharedUserCritDeferredUnlockListHead;
                  if ( !gpSharedUserCritDeferredUnlockListHead )
                    break;
                  gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                               + 2);
                  v145 = *(_QWORD *)v146;
                  *((_QWORD *)v146 + 2) = 0LL;
                  if ( !*(_DWORD *)(v145 + 8) )
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                  HMUnlockObject(*(_QWORD *)v146);
                }
              }
            }
          }
        }
      }
      if ( !*(_BYTE *)(SGDGetUserSessionState(v115, v114, v116, v117) + 752) )
        goto LABEL_77;
      v122 = *(int *)(SGDGetUserSessionState(v119, v118, v120, v121) + 756);
      *(_BYTE *)(SGDGetUserSessionState(v124, v123, v125, v126) + 752) = 0;
      *(_DWORD *)(SGDGetUserSessionState(v128, v127, v129, v130) + 756) = 0;
      if ( gnPoSessionSwitchBlockCount < 2 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5458LL);
      LODWORD(v338) = 12;
      *((_QWORD *)&v338 + 1) = v122;
      goto LABEL_141;
    }
    v136 = v112 - 1;
    if ( v136 )
    {
      v137 = v136 - 1;
      if ( v137 )
      {
        if ( v137 == 1 )
        {
          if ( !*(_BYTE *)SGDGetUserGdiSessionState() )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5246LL);
          if ( v9 != 1 || !a4 || a5 || v340 )
            return (unsigned int)-1073741811;
          v138 = *(_BYTE *)a4 != 0;
          v139 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
          gptiCurrent = v139;
          if ( v139 )
          {
            *((_DWORD *)v139 + 387) = 1;
            v141 = PsGetCurrentProcessWin32Process(v140);
            if ( v141 )
            {
              if ( *(_QWORD *)v141 )
              {
                if ( (*(_DWORD *)(v141 + 12) & 0x8000) != 0
                  && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                  && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                {
                  v142 = gpSharedUserCritDeferredUnlockListHead;
                  if ( gpSharedUserCritDeferredUnlockListHead )
                  {
                    do
                    {
                      gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v142 + 2);
                      v143 = *(_QWORD *)v142;
                      *((_QWORD *)v142 + 2) = 0LL;
                      if ( !*(_DWORD *)(v143 + 8) )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                      HMUnlockObject(*(_QWORD *)v142);
                      v142 = gpSharedUserCritDeferredUnlockListHead;
                    }
                    while ( gpSharedUserCritDeferredUnlockListHead );
                    v7 = 0;
                  }
                }
              }
            }
          }
          CitDisplayRequestChange(v138);
          EtwTraceDisplayReqChange(v138);
          goto LABEL_77;
        }
      }
      else
      {
        if ( !*(_BYTE *)SGDGetUserGdiSessionState() )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5503LL);
        if ( v9 == 4 && a4 )
        {
          LOBYTE(v90) = 1;
          *((_QWORD *)&v338 + 1) = *a4;
          LODWORD(v338) = 15;
          goto LABEL_116;
        }
      }
    }
    else
    {
      if ( !*(_BYTE *)SGDGetUserGdiSessionState() )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5470LL);
      if ( v9 == 8 && a4 )
      {
        UserSessionSwitchBlock_Start();
        *((_QWORD *)&v338 + 1) = a4[1];
        LODWORD(v338) = 14;
        if ( *(_BYTE *)a4 )
          LODWORD(v338) = 13;
        goto LABEL_115;
      }
    }
    return (unsigned int)-1073741823;
  }
  if ( *(_BYTE *)SGDGetUserGdiSessionState() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5355LL);
  if ( v9 != 8 || !a4 )
    return (unsigned int)-1073741823;
  v82 = (unsigned int)*a4;
  if ( !(_DWORD)v82 )
  {
    v7 = 0;
    if ( *(_BYTE *)(SGDGetUserSessionState(v82, v79, v80, v81) + 712) )
    {
      if ( !*(_DWORD *)(SGDGetUserSessionState(v217, v216, v218, v219) + 2952)
        && !*(_DWORD *)(SGDGetUserSessionState(v221, v220, v222, v223) + 2972)
        && !*(_DWORD *)(SGDGetUserSessionState(v225, v224, v226, v227) + 2976) )
      {
        return v7;
      }
      SetInputMode(1LL);
    }
    LODWORD(v338) = 5;
    goto LABEL_114;
  }
  v83 = v82 - 1;
  if ( !v83 )
    goto LABEL_111;
  if ( v83 != 1 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5403LL);
    return v7;
  }
  v84 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
  gptiCurrent = v84;
  if ( v84 )
  {
    *((_DWORD *)v84 + 387) = 1;
    v213 = PsGetCurrentProcessWin32Process(v86);
    if ( v213 )
    {
      if ( *(_QWORD *)v213 )
      {
        if ( (*(_DWORD *)(v213 + 12) & 0x8000) != 0 )
        {
          v86 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v215 = gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v214 = *(_QWORD *)v215;
              *((_QWORD *)v215 + 2) = 0LL;
              if ( !*(_DWORD *)(v214 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              HMUnlockObject(*(_QWORD *)v215);
            }
          }
        }
      }
    }
  }
  v89 = *(_DWORD *)(SGDGetUserSessionState(v86, v85, v87, v88) + 2952);
  UserSessionSwitchLeaveCrit();
  v7 = (unsigned __int8)-(v89 != 0);
  v11 = v89 == 0;
  if ( !v89 )
LABEL_111:
    CInputGlobals::UpdateLastInputTime(
      *((_QWORD *)&WPP_MAIN_CB.Reserved + 1),
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      5LL);
  if ( v11 )
  {
    LODWORD(v338) = 4;
LABEL_114:
    *((_QWORD *)&v338 + 1) = a4[1];
LABEL_115:
    v90 = 0LL;
LABEL_116:
    QueuePowerRequest(&v338, v90);
  }
  return v7;
}
