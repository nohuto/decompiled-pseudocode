/*
 * XREFs of InitCpcStatesInternal @ 0x1C0027340
 * Callers:
 *     RegisterKernelCpc @ 0x1C00243A0 (RegisterKernelCpc.c)
 *     RegisterHvCpcCounters @ 0x1C0038AD0 (RegisterHvCpcCounters.c)
 * Callees:
 *     ClearEnumerationContext @ 0x1C0001BB8 (ClearEnumerationContext.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x1C000200C (WriteGenAddrMaybeHiddenEx.c)
 *     CpcRegisterIsSupportedEx @ 0x1C0002474 (CpcRegisterIsSupportedEx.c)
 *     EnumerateNextDevice @ 0x1C000248C (EnumerateNextDevice.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C00024D8 (ReadGenAddrMaybeHiddenEx.c)
 *     ResetEnumerationContext @ 0x1C0002528 (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0003A00 (memset.c)
 *     ReadGenAddrHiddenEx @ 0x1C00072B4 (ReadGenAddrHiddenEx.c)
 *     WPP_RECORDER_SF_ii @ 0x1C000B7DC (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_iii @ 0x1C000B904 (WPP_RECORDER_SF_iii.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1C00243BC (AllocateAndInitKernelPerfStatesRegistration.c)
 *     DisplayKernelPerfStates @ 0x1C00244C8 (DisplayKernelPerfStates.c)
 *     GetPerfDomain @ 0x1C002478C (GetPerfDomain.c)
 *     CpcConnectNativeInterrupt @ 0x1C0029150 (CpcConnectNativeInterrupt.c)
 *     InitCommonPerfStateContext @ 0x1C0029290 (InitCommonPerfStateContext.c)
 *     GetPackageAffinity @ 0x1C002980C (GetPackageAffinity.c)
 *     ProcLibCapChange @ 0x1C0029F64 (ProcLibCapChange.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C002AC80 (GetRegistryDwordValueNoDefault.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C00348AC (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     StartPccCommand @ 0x1C0039AA0 (StartPccCommand.c)
 */

__int64 __fastcall InitCpcStatesInternal(__int64 a1, __int64 (__fastcall *a2)(__int64))
{
  BOOL v2; // edi
  int v3; // r12d
  _QWORD *v4; // r13
  __int64 v5; // rsi
  int RegistryDwordValueNoDefault; // eax
  int v7; // ecx
  __int64 v8; // r14
  char v9; // r15
  PVOID v10; // rbx
  int v11; // eax
  int v12; // r11d
  __int64 v13; // rdi
  char v14; // r13
  int v15; // esi
  _BYTE *v16; // rbx
  bool v17; // zf
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // r9
  int v21; // r11d
  int v22; // ecx
  char v23; // al
  unsigned int v24; // r8d
  unsigned __int8 v25; // r10
  int v26; // r11d
  int v27; // ecx
  unsigned __int8 v28; // al
  unsigned int v29; // ecx
  char v30; // al
  __int128 v31; // xmm1
  unsigned int v32; // r9d
  __int64 v33; // xmm0_8
  __int64 v34; // rdx
  _BYTE *v35; // rdx
  int v36; // r9d
  __int128 *v37; // rdx
  char v38; // r8
  int v39; // eax
  int v40; // r12d
  unsigned int *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 *v44; // r15
  __int64 v45; // r14
  __int64 v46; // rbx
  __int64 v47; // rbx
  __int64 v48; // rdi
  PVOID v49; // r15
  struct _GROUP_AFFINITY *v50; // rdx
  _BYTE *v51; // rcx
  __int64 GenAddrMaybeHidden; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  int v64; // eax
  unsigned __int64 v65; // r8
  unsigned __int64 v66; // rax
  int v67; // r11d
  __int64 v68; // rdi
  char v69; // r13
  __int64 v70; // rbx
  int v71; // r15d
  _QWORD *inited; // rax
  char v73; // dl
  int v74; // r8d
  __int64 (__fastcall *v75)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // rax
  char v76; // r9
  bool v77; // al
  int v78; // ecx
  int v79; // eax
  int v80; // eax
  int v81; // ecx
  __int64 v82; // rax
  char v83; // al
  unsigned __int64 v84; // r8
  __int64 v85; // rax
  __int64 v86; // rcx
  unsigned __int64 v87; // rax
  int v88; // esi
  __int64 v89; // rax
  unsigned int v90; // r15d
  _DWORD *v91; // r13
  __int64 v92; // rbx
  struct _GROUP_AFFINITY *v93; // rdx
  unsigned __int64 v94; // rax
  unsigned __int64 v95; // rcx
  unsigned __int64 v96; // rax
  __int64 v97; // rdx
  _QWORD *v98; // r11
  unsigned __int8 v99; // cl
  unsigned __int8 v100; // cl
  _QWORD *v101; // r11
  int started; // edi
  __int64 v104; // r15
  __int64 v105; // r12
  _QWORD *v106; // rbx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v108; // rbx
  int v109; // eax
  __int64 v110; // rbx
  unsigned __int16 v111; // r9
  unsigned int v112; // r8d
  unsigned __int16 v113; // r9
  void *v114; // rax
  unsigned int v115; // ecx
  __int64 v116; // rcx
  unsigned __int64 v117; // r8
  unsigned __int64 v118; // rax
  __int64 v119; // rax
  int v120; // [rsp+20h] [rbp-E0h]
  char v121; // [rsp+60h] [rbp-A0h]
  char v122; // [rsp+61h] [rbp-9Fh]
  char v123; // [rsp+62h] [rbp-9Eh]
  char v124; // [rsp+63h] [rbp-9Dh]
  PVOID DeferredContext; // [rsp+68h] [rbp-98h] BYREF
  char v126; // [rsp+70h] [rbp-90h]
  char v127; // [rsp+71h] [rbp-8Fh]
  char v128; // [rsp+72h] [rbp-8Eh] BYREF
  char v129; // [rsp+73h] [rbp-8Dh]
  char IsSupported; // [rsp+74h] [rbp-8Ch]
  bool v131; // [rsp+75h] [rbp-8Bh]
  bool v132; // [rsp+76h] [rbp-8Ah]
  char v133; // [rsp+77h] [rbp-89h]
  char v134; // [rsp+78h] [rbp-88h] BYREF
  char v135[3]; // [rsp+79h] [rbp-87h] BYREF
  int v136; // [rsp+7Ch] [rbp-84h]
  int v137; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v138; // [rsp+84h] [rbp-7Ch]
  int v139; // [rsp+88h] [rbp-78h]
  _OWORD v140[2]; // [rsp+90h] [rbp-70h] BYREF
  int v141; // [rsp+B0h] [rbp-50h]
  int v142; // [rsp+B4h] [rbp-4Ch]
  int v143; // [rsp+B8h] [rbp-48h]
  int v144; // [rsp+BCh] [rbp-44h] BYREF
  int v145; // [rsp+C0h] [rbp-40h]
  __int64 v146; // [rsp+C8h] [rbp-38h]
  int v147; // [rsp+D0h] [rbp-30h] BYREF
  BOOL v148; // [rsp+D4h] [rbp-2Ch]
  _QWORD *v149; // [rsp+D8h] [rbp-28h]
  _QWORD *v150; // [rsp+E0h] [rbp-20h]
  _QWORD *v151; // [rsp+E8h] [rbp-18h]
  __int64 v152; // [rsp+F0h] [rbp-10h] BYREF
  __int64 (__fastcall *v153)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // [rsp+F8h] [rbp-8h] BYREF
  __int64 Pool2; // [rsp+100h] [rbp+0h]
  __int128 v155; // [rsp+108h] [rbp+8h] BYREF
  __int64 v156; // [rsp+118h] [rbp+18h]
  __int64 v157; // [rsp+120h] [rbp+20h]
  __int64 v158; // [rsp+128h] [rbp+28h] BYREF
  __int64 v159; // [rsp+130h] [rbp+30h] BYREF
  __int64 (__fastcall *v160)(__int64); // [rsp+138h] [rbp+38h]
  struct _GROUP_AFFINITY Affinity; // [rsp+140h] [rbp+40h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v163[272]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v164[272]; // [rsp+270h] [rbp+170h] BYREF

  v160 = a2;
  v4 = (_QWORD *)a1;
  v150 = (_QWORD *)a1;
  DeferredContext = 0LL;
  Affinity = 0LL;
  memset(v163, 0, 0x108uLL);
  v128 = 0;
  v152 = 0LL;
  v158 = 0LL;
  v153 = 0LL;
  memset(v164, 0, 0x108uLL);
  v159 = 0LL;
  v144 = 0;
  LODWORD(v156) = 0;
  memset(v140, 0, sizeof(v140));
  v134 = 0;
  v5 = 0LL;
  v147 = 0;
  PreviousAffinity = 0LL;
  v135[0] = 0;
  v155 = 0LL;
  v151 = 0LL;
  v123 = 0;
  ClearEnumerationContext(v140);
  LODWORD(v146) = 0;
  v137 = 0;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                  L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                  L"~MHz",
                                  &v137);
  v7 = v137;
  if ( RegistryDwordValueNoDefault < 0 )
    v7 = 0;
  v137 = v7;
  if ( v7 )
  {
    LOBYTE(v138) = v4[42] != 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001DCF8,
      0LL);
    LODWORD(v149) = GetPerfDomain((__int64)v4, (__int64)v140, &v147);
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(408 * (_DWORD)v149), 1919119952LL);
    v8 = Pool2;
    if ( !Pool2 )
      goto LABEL_191;
    LOBYTE(v139) = 0;
    LOBYTE(v141) = 0;
    LOBYTE(v3) = 0;
    v129 = 0;
    v124 = 0;
    v126 = 0;
    LOBYTE(v143) = 0;
    IsSupported = 0;
    LOBYTE(v145) = 0;
    v133 = 0;
    v121 = 0;
    v9 = 1;
    v142 = v3;
    v122 = 1;
    v132 = 0;
    v128 = 1;
    v131 = 0;
    v127 = 1;
    v136 = 1;
    v157 = 0LL;
    v144 = 1000;
    KeInitializeAffinityEx2(v163, 32LL);
    ResetEnumerationContext((__int64 *)v140);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v140, &DeferredContext) )
    {
      if ( !*((_DWORD *)DeferredContext + 20) )
        KeAddProcessorAffinityEx(v163, *((unsigned int *)DeferredContext + 14));
    }
    LOBYTE(v2) = 0;
    v148 = v2;
    ResetEnumerationContext((__int64 *)v140);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v140, &DeferredContext) )
    {
      v10 = DeferredContext;
      if ( !*((_DWORD *)DeferredContext + 20) )
      {
        v157 = *((_QWORD *)DeferredContext + 74);
        KeInitializeAffinityEx2(v164, 32LL);
        if ( (int)GetPackageAffinity(v10, v164) >= 0 )
          v148 = KeIsEqualAffinityEx(v164, v163) != 0;
        break;
      }
    }
    ResetEnumerationContext((__int64 *)v140);
    v11 = EnumerateNextDevice((__int64 *)v140, &DeferredContext);
    if ( !v11 )
    {
      v13 = v8 + 124;
      LOBYTE(v8) = v139;
      v14 = 0;
      LOBYTE(v15) = v141;
      while ( 2 )
      {
        v122 = v9;
        v16 = (_BYTE *)*((_QWORD *)DeferredContext + 74);
        if ( v16[272] == 10 || v16[296] == 10 )
          v124 = v12;
        if ( v16[344] == 10 || v16[152] == 10 || v16[176] == 10 || v16[128] == 10 || v16[200] == 10 || v16[416] == 10 )
          v126 = v12;
        LODWORD(v8) = (unsigned __int8)v8;
        if ( v16[104] == 10 )
          LODWORD(v8) = v12;
        v15 = (unsigned __int8)v15;
        v17 = v16[8] == 10;
        v139 = v8;
        if ( v17 )
          v15 = v12;
        if ( v16[392] == 10 || v16[368] == 10 || v16[224] == 10 )
          v129 = v12;
        *(_QWORD *)(v13 + 20) = v16;
        IsSupported = CpcRegisterIsSupportedEx((__int64)(v16 + 344));
        *(_BYTE *)v13 = IsSupported;
        *(_BYTE *)(v13 + 1) = CpcRegisterIsSupportedEx((__int64)(v16 + 128));
        *(_BYTE *)(v13 + 2) = CpcRegisterIsSupportedEx((__int64)(v16 + 152));
        *(_BYTE *)(v13 + 3) = CpcRegisterIsSupportedEx((__int64)(v16 + 176));
        *(_BYTE *)(v13 + 6) = CpcRegisterIsSupportedEx((__int64)(v16 + 200));
        *(_BYTE *)(v13 + 7) = CpcRegisterIsSupportedEx((__int64)(v16 + 104));
        v133 = CpcRegisterIsSupportedEx(v18);
        v19 = CpcRegisterIsSupportedEx((__int64)(v16 + 416));
        v22 = (unsigned __int8)v143;
        *(_BYTE *)(v13 + 4) = v19;
        if ( v19 )
          v22 = v21;
        v143 = v22;
        v23 = CpcRegisterIsSupportedEx(v20);
        LOBYTE(v27) = v145;
        *(_BYTE *)(v13 + 5) = v23;
        v27 = (unsigned __int8)v27;
        if ( v23 )
          v27 = v26;
        v28 = v25;
        v17 = v16[272] == 127;
        v145 = v27;
        v29 = v24;
        if ( v17 )
          v28 = v24;
        if ( v16[296] != 127 )
          v29 = v28;
        v138 = v29;
        if ( !qword_1C001DF28 || (v30 = qword_1C001DF28(v16), v24 = 0, !v30) )
          v127 = v24;
        v31 = 0LL;
        v156 = 0LL;
        v32 = v24;
        v33 = 0LL;
        v155 = 0LL;
        do
        {
          if ( v32 )
          {
            switch ( v32 )
            {
              case 1u:
                v34 = (__int64)(v16 + 152);
                break;
              case 2u:
                v34 = (__int64)(v16 + 176);
                break;
              case 3u:
                v34 = (__int64)(v16 + 416);
                break;
              default:
                v34 = (__int64)(v16 + 200);
                break;
            }
          }
          else
          {
            v34 = (__int64)(v16 + 128);
          }
          if ( CpcRegisterIsSupportedEx(v34) )
          {
            v121 = 1;
            if ( *v35 == 10 )
              goto LABEL_197;
            if ( CpcRegisterIsSupportedEx((__int64)&v155) )
            {
              if ( (_BYTE)v155 != v38
                || *(_QWORD *)((char *)&v155 + 4) != *(_QWORD *)((char *)v37 + 4)
                || BYTE3(v155) != *((_BYTE *)v37 + 3) )
              {
LABEL_197:
                v14 = 1;
                v9 = 0;
                v122 = 0;
                goto LABEL_60;
              }
            }
            else
            {
              v31 = *v37;
              v33 = *((_QWORD *)v37 + 2);
              v155 = *v37;
              v156 = v33;
            }
            v14 = 1;
          }
          v32 = v36 + 1;
        }
        while ( v32 < 5 );
        v121 = v14;
        if ( v14 )
        {
          v121 = v14;
          if ( v9 )
          {
            *(_OWORD *)(v13 + 28) = v31;
            v121 = v14;
            *(_QWORD *)(v13 + 44) = v33;
          }
        }
LABEL_60:
        if ( qword_1C001DF40 )
        {
          v39 = qword_1C001DF40(DeferredContext, v13 - 124, &v152, &v158, &v159, &v153, &v134, v135, &v128, &v144);
          v40 = (unsigned __int8)v136;
          if ( v39 < 0 )
            v40 = 0;
          v136 = v40;
        }
        LOBYTE(v3) = v142;
        v41 = (unsigned int *)&Cpc2RegisterTable;
        v42 = 19LL;
        do
        {
          v43 = *v41;
          v41 += 6;
          v3 = (unsigned __int8)v3;
          if ( v16[v43] == 10 )
            v3 = 1;
          --v42;
        }
        while ( v42 );
        v142 = v3;
        v13 += 408LL;
        v11 = EnumerateNextDevice((__int64 *)v140, &DeferredContext);
        LOBYTE(v8) = v139;
        if ( !v11 )
        {
          v12 = 1;
          continue;
        }
        break;
      }
      v8 = Pool2;
      v4 = v150;
      v141 = v15;
      v5 = (__int64)v151;
    }
    if ( !v152 || !v153 )
    {
      LOBYTE(v11) = 0;
      v136 = v11;
    }
    if ( (_BYTE)v3 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C001E2E8,
        0LL);
      ResetEnumerationContext((__int64 *)v140);
      if ( !(unsigned int)EnumerateNextDevice((__int64 *)v140, &DeferredContext) )
      {
        v104 = v8 + 144;
        do
        {
          if ( *(_BYTE *)(v104 - 20) )
          {
            v105 = *(_QWORD *)v104;
            v106 = DeferredContext;
            if ( *(_BYTE *)(*(_QWORD *)v104 + 344LL) == 127 && !*((_DWORD *)DeferredContext + 20) )
            {
              KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
              p_PreviousAffinity = &PreviousAffinity;
              if ( v123 )
                p_PreviousAffinity = 0LL;
              KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
              v123 = 1;
            }
            if ( (*(_BYTE *)(v106[32] + 144LL) & 1) == 0 )
            {
              started = StartPccCommand(v4[32]);
              if ( started < 0 )
                goto LABEL_216;
            }
            WriteGenAddrMaybeHiddenEx((__int64)v106, v105 + 344, 1LL);
          }
          v104 += 408LL;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v140, &DeferredContext) );
      }
      ResetEnumerationContext((__int64 *)v140);
      if ( !(unsigned int)EnumerateNextDevice((__int64 *)v140, &DeferredContext) )
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 32) + 144LL) & 1) != 0 )
          {
            v108 = v4[32];
            v109 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v108 + 120))(*(_QWORD *)(v108 + 72), 0LL);
            *(_DWORD *)(v108 + 144) &= ~1u;
            started = v109;
            if ( v109 < 0 )
              break;
          }
          if ( (unsigned int)EnumerateNextDevice((__int64 *)v140, &DeferredContext) )
            goto LABEL_215;
        }
LABEL_216:
        ResetEnumerationContext((__int64 *)v140);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v140, &DeferredContext) )
        {
          if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 32) + 144LL) & 1) != 0 )
          {
            v110 = v4[32];
            (*(void (__fastcall **)(_QWORD))(v110 + 136))(*(_QWORD *)(v110 + 72));
            *(_DWORD *)(v110 + 144) &= ~1u;
          }
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C001E2E8);
        goto LABEL_183;
      }
LABEL_215:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C001E2E8);
    }
    ResetEnumerationContext((__int64 *)v140);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v140, &DeferredContext) )
    {
      v44 = (__int64 *)(v8 + 144);
      v5 = 0LL;
      v45 = v157;
      do
      {
        v46 = *v44;
        if ( *((_DWORD *)DeferredContext + 20) == 2
          && *(_BYTE *)(v46 + 32) == 10
          && !ReadGenAddrHiddenEx(*((unsigned int *)DeferredContext + 21), (unsigned __int8 *)(v46 + 32)) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              1u,
              0x22u,
              (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids);
          if ( !CpcHiddenProcessorMitigationReported )
          {
            ProcLibTraceHiddenProcessorDegradedOperation();
            CpcHiddenProcessorMitigationReported = 1;
          }
          *(_QWORD *)(v46 + 32) = *(_QWORD *)(v45 + 32);
          *(_DWORD *)(v46 + 40) = *(_DWORD *)(v45 + 40);
          if ( *(_BYTE *)(v46 + 8) == 10 )
          {
            *(_QWORD *)(v46 + 8) = *(_QWORD *)(v45 + 8);
            *(_DWORD *)(v46 + 16) = *(_DWORD *)(v45 + 16);
          }
          if ( *(_BYTE *)(v46 + 56) == 10 )
          {
            *(_QWORD *)(v46 + 56) = *(_QWORD *)(v45 + 56);
            *(_DWORD *)(v46 + 64) = *(_DWORD *)(v45 + 64);
          }
          if ( *(_BYTE *)(v46 + 80) == 10 )
          {
            *(_QWORD *)(v46 + 80) = *(_QWORD *)(v45 + 80);
            *(_DWORD *)(v46 + 88) = *(_DWORD *)(v45 + 88);
          }
          if ( *(_BYTE *)(v46 + 440) == 10 )
          {
            *(_QWORD *)(v46 + 440) = *(_QWORD *)(v45 + 440);
            *(_DWORD *)(v46 + 448) = *(_DWORD *)(v45 + 448);
          }
          if ( *(_BYTE *)(v46 + 104) == 10 )
          {
            *(_QWORD *)(v46 + 104) = *(_QWORD *)(v45 + 104);
            *(_DWORD *)(v46 + 112) = *(_DWORD *)(v45 + 112);
          }
        }
        v44 += 51;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v140, &DeferredContext) );
      v8 = Pool2;
    }
    ResetEnumerationContext((__int64 *)v140);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v140, &DeferredContext) )
    {
      v47 = v8 + 132;
      while ( 1 )
      {
        v48 = *(_QWORD *)(v47 + 12);
        v49 = DeferredContext;
        if ( (*(_BYTE *)(v48 + 8) == 127
           || *(_BYTE *)(v48 + 32) == 127
           || *(_BYTE *)(v48 + 56) == 127
           || *(_BYTE *)(v48 + 80) == 127
           || *(_BYTE *)(v48 + 440) == 127
           || *(_BYTE *)(v48 + 368) == 127)
          && !*((_DWORD *)DeferredContext + 20) )
        {
          KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
          v50 = &PreviousAffinity;
          if ( v123 )
            v50 = 0LL;
          KeSetSystemGroupAffinityThread(&Affinity, v50);
          v123 = 1;
        }
        *(_BYTE *)v47 = v124;
        *(_BYTE *)(v47 + 1) = v139;
        *(_BYTE *)(v47 + 2) = v141;
        *(_BYTE *)(v47 + 3) = v126;
        if ( CpcRegisterIsSupportedEx(v48 + 488) && (*v51 != 126 || *(_DWORD *)(v48 + 492)) )
        {
          GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx((__int64)v49, (__int64)v51);
          v146 = GenAddrMaybeHidden;
          if ( !(_DWORD)GenAddrMaybeHidden )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_257;
            v111 = 35;
            goto LABEL_253;
          }
        }
        else
        {
          LODWORD(GenAddrMaybeHidden) = v137;
        }
        *(_DWORD *)(v47 - 36) = GenAddrMaybeHidden;
        *(_QWORD *)(v47 - 92) = ReadGenAddrMaybeHiddenEx((__int64)v49, v48 + 8);
        v53 = ReadGenAddrMaybeHiddenEx((__int64)v49, v48 + 32);
        *(_QWORD *)(v47 - 84) = v53;
        if ( !v53 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_257;
          v111 = 36;
LABEL_253:
          v112 = 1;
          goto LABEL_255;
        }
        v54 = ReadGenAddrMaybeHiddenEx((__int64)v49, v48 + 56);
        v55 = *(_QWORD *)(v47 - 84);
        *(_QWORD *)(v47 - 76) = v54;
        if ( v54 > v55 )
          *(_QWORD *)(v47 - 76) = v55;
        *(_QWORD *)(v47 - 68) = ReadGenAddrMaybeHiddenEx((__int64)v49, v48 + 80);
        *(_QWORD *)(v47 - 60) = ReadGenAddrMaybeHiddenEx((__int64)v49, v48 + 440);
        if ( CpcRegisterIsSupportedEx(v48 + 368) )
        {
          v131 = ReadGenAddrMaybeHiddenEx((__int64)v49, v48 + 368) != 0;
          v132 = *(_BYTE *)(v48 + 368) != 126;
        }
        if ( v47 - 132 != v8 )
        {
          v59 = *(_QWORD *)(v47 - 92);
          v60 = *(_QWORD *)(v8 + 40);
          if ( v59 != v60 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_257;
            v113 = 37;
LABEL_256:
            WPP_RECORDER_SF_ii(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              v113,
              (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids,
              v59,
              v60);
            goto LABEL_257;
          }
          v59 = *(_QWORD *)(v47 - 84);
          v60 = *(_QWORD *)(v8 + 48);
          if ( v59 != v60 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_257;
            v113 = 38;
            goto LABEL_256;
          }
          v59 = *(_QWORD *)(v47 - 68);
          v60 = *(_QWORD *)(v8 + 64);
          if ( v59 != v60 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_257;
            v113 = 39;
            goto LABEL_256;
          }
          v61 = *(_QWORD *)(v47 - 76);
          v62 = *(_QWORD *)(v8 + 56);
          if ( v61 != v62 )
          {
            if ( !v127 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_ii(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  1u,
                  0x28u,
                  (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids,
                  v61,
                  *(_QWORD *)(v8 + 56));
              goto LABEL_257;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_iii((__int64)WPP_GLOBAL_Control->DeviceExtension, v56, v57, v58, v120);
              v62 = *(_QWORD *)(v8 + 56);
            }
            *(_QWORD *)(v47 - 76) = v62;
          }
        }
        v63 = *(_QWORD *)(v47 - 84);
        v64 = 100LL * *(_QWORD *)(v47 - 92) / v63;
        *(_DWORD *)(v47 - 32) = v64;
        *(_DWORD *)(v47 - 28) = v64;
        v65 = 100LL * *(_QWORD *)(v47 - 76) / v63;
        v66 = 100LL * *(_QWORD *)(v47 - 68) / v63;
        if ( !(_DWORD)v66 )
          LODWORD(v66) = 1;
        *(_DWORD *)(v47 - 20) = v66;
        if ( !(_DWORD)v65 )
          LODWORD(v65) = 1;
        *(_DWORD *)(v47 - 24) = v65;
        v47 += 408LL;
        if ( (unsigned int)EnumerateNextDevice((__int64 *)v140, &DeferredContext) )
          goto LABEL_102;
      }
    }
    v67 = 1;
LABEL_102:
    if ( *(_QWORD *)(v8 + 40) < *(_QWORD *)(v8 + 48) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_257;
      v111 = 42;
    }
    else
    {
      v68 = v8 + 64;
      if ( *(_QWORD *)(v8 + 56) >= *(_QWORD *)(v8 + 64) )
      {
        v69 = v138;
        v70 = (__int64)v150;
        v71 = (int)v149;
        inited = AllocateAndInitKernelPerfStatesRegistration(
                   (__int64)v150,
                   (int)v149,
                   v67 + (unsigned int)((_BYTE)v138 != 0));
        v151 = inited;
        v5 = (__int64)inited;
        if ( inited )
        {
          v73 = v136;
          v74 = v147;
          *((_WORD *)inited + 2) = v147;
          if ( v73 )
          {
            inited[56] = v152;
            inited[57] = v158;
            if ( v148 && v159 && v74 == 254 )
            {
              inited[58] = v159;
              inited[12] = v8;
            }
            v75 = v153;
            v76 = v121;
          }
          else
          {
            v76 = v121;
            if ( v121 )
            {
              if ( v122 )
              {
                v17 = (_BYTE)v155 == 0;
                inited[56] = PerfControlCpcSingleRegister;
                v114 = PerfControlCpcSingleRegisterHidden;
                if ( v17 )
                  v114 = PerfControlCpcSingleRegister;
              }
              else
              {
                inited[56] = PerfControlCpc;
                v114 = (void *)qword_1C001DEF8;
                if ( !qword_1C001DEF8 || !CpcHiddenProcessorMitigationReported )
                  v114 = PerfControlCpcHidden;
              }
            }
            else
            {
              v114 = AcpiCStateIdleCancel;
              *(_QWORD *)(v5 + 448) = AcpiCStateIdleCancel;
            }
            *(_QWORD *)(v5 + 456) = v114;
            v75 = PerfSelectionCpc;
          }
          *(_QWORD *)(v5 + 440) = v75;
          if ( (_BYTE)v142 )
          {
            if ( v124 )
              *(_QWORD *)(v5 + 472) = CpcReadFeedback;
            if ( v126 )
            {
              *(_QWORD *)(v5 + 480) = CpcAcquirePerformance;
              *(_QWORD *)(v5 + 488) = CpcCommitPerformance;
            }
            if ( v129 )
            {
              *(_QWORD *)(v5 + 416) = AcquirePccSubspace;
              *(_QWORD *)(v5 + 424) = ExecutePccWrite;
            }
            v115 = *(_DWORD *)(*(_QWORD *)(v70 + 256) + 84LL);
            if ( v115 )
            {
              v73 = v136;
              *(_DWORD *)(v5 + 40) = 0x989680 / (v115 >> 1);
            }
          }
          if ( IsSupported || _bittest64((const signed __int64 *)(v70 + 280), 0x26u) )
            *(_QWORD *)(v5 + 432) = CpcReinitializeHandler;
          *(_BYTE *)(v5 + 6) = 0;
          v77 = v76 || v73;
          v78 = v146;
          *(_BYTE *)(v5 + 7) = v77;
          *(_BYTE *)(v5 + 8) = v127;
          *(_BYTE *)(v5 + 52) = v131;
          v79 = v137;
          if ( v78 )
            v79 = v78;
          *(_DWORD *)(v5 + 20) = v79;
          *(_DWORD *)(v5 + 24) = *(_DWORD *)(v8 + 100);
          v80 = *(_DWORD *)(v8 + 108);
          *(_DWORD *)(v5 + 28) = v80;
          v81 = *(_DWORD *)(v8 + 112);
          if ( !v80 )
            v80 = 1;
          *(_DWORD *)(v5 + 28) = v80;
          if ( !v81 )
            v81 = 1;
          *(_DWORD *)(v5 + 32) = v81;
          *(_QWORD *)(v5 + 56) = *(_QWORD *)v68;
          *(_QWORD *)(v5 + 64) = *(_QWORD *)(v8 + 48);
          v82 = *(_QWORD *)(v70 + 344);
          if ( v82 )
            *(_QWORD *)(v5 + 368) = v82;
          *(_QWORD *)(v5 + 384) = *(_QWORD *)(v70 + 352);
          if ( (_BYTE)v143 )
            *(_BYTE *)(v5 + 9) = 1;
          if ( (_BYTE)v145 )
          {
            if ( v73 )
              *(_BYTE *)(v5 + 10) = 1;
            else
              *(_QWORD *)(v5 + 400) = CpcSetAutonomousActivityWindow;
          }
          if ( v132 )
            *(_QWORD *)(v5 + 408) = CpcSetAutonomousMode;
          if ( v133 )
            *(_QWORD *)(v5 + 376) = CpcSetTimeWindow;
          if ( (*(_DWORD *)(v70 + 280) & 0x400000) != 0 && v73 && v134 && (v74 == 254 || v71 == 1) )
          {
            *(_BYTE *)(v5 + 11) = 1;
            if ( !_bittest64((const signed __int64 *)(v70 + 280), 0x22u) || (v83 = 0, v128) )
              v83 = 1;
            *(_BYTE *)(v5 + 12) = v83;
            *(_DWORD *)(v5 + 48) = v144;
          }
          if ( v135[0] )
          {
            v116 = *(unsigned int *)(v5 + 20);
            *(_BYTE *)(v5 + 13) = 1;
            v117 = *(_QWORD *)(v8 + 48);
            v118 = (v116 + (v117 >> 1)) / v117;
            *(_DWORD *)(v5 + 72) = v118;
            *(_DWORD *)(v5 + 76) = *(_DWORD *)(v8 + 40) * v118;
            *(_DWORD *)(v5 + 80) = v118 * *(_DWORD *)(v8 + 48);
            *(_DWORD *)(v5 + 84) = v118 * *(_DWORD *)v68;
          }
          v84 = *(_QWORD *)(v8 + 48);
          v85 = *(_QWORD *)(v8 + 72);
          v86 = *(_QWORD *)(v5 + 544);
          if ( v84 == v85 )
            LODWORD(v87) = 100;
          else
            v87 = 100 * v85 / v84;
          *(_DWORD *)(v86 + 8) = v87;
          *(_QWORD *)v86 = PerfReadWrappingCounter;
          *(_DWORD *)(v86 + 12) = 1;
          *(_BYTE *)(v86 + 17) = 1;
          *(_BYTE *)(v86 + 16) = v124 == 0;
          if ( v69 )
          {
            v119 = *(_QWORD *)(v5 + 544);
            *(_QWORD *)(v119 + 32) = 100LL;
            *(_QWORD *)(v119 + 24) = PerfReadWrappingCounter;
            *(_WORD *)(v119 + 40) = 257;
          }
          DisplayKernelPerfStates(v5, (__int64)PerfReadWrappingCounter, v84);
          v146 = *(_QWORD *)(v5 + 552);
          v149 = *(_QWORD **)(v5 + 560);
          ResetEnumerationContext((__int64 *)v140);
          if ( !(unsigned int)EnumerateNextDevice((__int64 *)v140, &DeferredContext) )
          {
            v88 = v146;
            do
            {
              v89 = *(_QWORD *)(v68 + 80);
              v90 = 100;
              v91 = DeferredContext;
              v146 = v89;
              if ( *(_BYTE *)(v68 + 67) )
              {
                v92 = v89 + 104;
                if ( *(_BYTE *)(v89 + 104) == 127 && !*((_DWORD *)DeferredContext + 20) )
                {
                  KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                  v93 = &PreviousAffinity;
                  if ( v123 )
                    v93 = 0LL;
                  KeSetSystemGroupAffinityThread(&Affinity, v93);
                  v123 = 1;
                }
                v94 = ReadGenAddrMaybeHiddenEx((__int64)v91, v92);
                v95 = *(_QWORD *)(v68 - 16);
                if ( v94 > v95 )
                {
                  v94 = *(_QWORD *)(v68 - 16);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    WPP_RECORDER_SF_(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      3u,
                      1u,
                      0x2Cu,
                      (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids);
                    v94 = *(_QWORD *)(v68 - 16);
                  }
                  v95 = v94;
                }
                if ( v94 < *(_QWORD *)v68 )
                {
                  v94 = *(_QWORD *)v68;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    WPP_RECORDER_SF_(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      3u,
                      1u,
                      0x2Du,
                      (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids);
                    v94 = *(_QWORD *)v68;
                    v95 = *(_QWORD *)(v68 - 16);
                  }
                }
                v90 = *(_DWORD *)(v68 + 48);
                *(_QWORD *)(v68 + 24) = v94;
                v96 = 100 * v94 / v95;
                if ( (unsigned int)v96 > v90 )
                  v90 = v96;
                *(_DWORD *)(v68 + 52) = v90;
                if ( v90 != v91[185] )
                  ProcLibCapChange(v150, (unsigned int)v91[116], (unsigned int)v91[128], v90);
              }
              else
              {
                *(_QWORD *)(v68 + 24) = *(_QWORD *)(v68 - 16);
              }
              InitCommonPerfStateContext((_DWORD)v91, v68 - 64, v88, v90, v90 < 0x64 ? 2 : 0);
              v97 = v146;
              v98 = v149;
              v150[27] = v68 - 64;
              *v98 = v68 + 136;
              *(_QWORD *)(v68 + 184) = GetCpcDifferentialFeedback;
              *(_QWORD *)(v68 + 192) = v97;
              v99 = *(_BYTE *)(v97 + 297);
              if ( v99 < 0x40u )
                *(_QWORD *)(v68 + 168) = (1LL << v99) - 1;
              v100 = *(_BYTE *)(v97 + 273);
              if ( v100 < 0x40u )
                *(_QWORD *)(v68 + 176) = (1LL << v100) - 1;
              v101 = v98 + 1;
              v149 = v101;
              if ( (_BYTE)v138 )
              {
                *v101 = v68 + 200;
                *(_QWORD *)(v68 + 248) = *((_QWORD *)v91 + 42);
                v149 = v101 + 1;
              }
              v88 += 32;
              v68 += 408LL;
            }
            while ( !(unsigned int)EnumerateNextDevice((__int64 *)v140, &DeferredContext) );
            v5 = (__int64)v151;
            v8 = Pool2;
            v70 = (__int64)v150;
          }
          if ( v123 )
            KeRevertToUserGroupAffinityThread(&PreviousAffinity);
          started = v160(v5);
          if ( started >= 0 )
          {
            ResetEnumerationContext((__int64 *)v140);
            while ( !(unsigned int)EnumerateNextDevice((__int64 *)v140, &DeferredContext) )
            {
              *((_QWORD *)DeferredContext + 31) = v8;
              v8 += 408LL;
            }
            if ( _bittest64((const signed __int64 *)(v70 + 280), 0x26u) )
            {
              ResetEnumerationContext((__int64 *)v140);
              while ( !(unsigned int)EnumerateNextDevice((__int64 *)v140, &DeferredContext) )
              {
                if ( !*((_DWORD *)DeferredContext + 20) )
                  CpcConnectNativeInterrupt(DeferredContext);
              }
            }
            v8 = 0LL;
            started = 0;
          }
          goto LABEL_183;
        }
LABEL_191:
        started = -1073741670;
LABEL_183:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C001DCF8);
        if ( v5 )
          ExFreePoolWithTag((PVOID)v5, (ULONG)1919119952);
        if ( v8 )
          ExFreePoolWithTag((PVOID)v8, (ULONG)1919119952);
        return (unsigned int)started;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_257;
      v111 = 43;
    }
    v112 = v67;
LABEL_255:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v112,
      v111,
      (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids);
LABEL_257:
    started = -1073741811;
    goto LABEL_183;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x21u,
      (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids);
  v4[35] &= ~0x8000000uLL;
  return (unsigned int)-1073741823;
}
