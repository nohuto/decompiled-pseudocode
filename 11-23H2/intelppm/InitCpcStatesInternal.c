/*
 * XREFs of InitCpcStatesInternal @ 0x1C002AB4C
 * Callers:
 *     RegisterKernelCpc @ 0x1C002CB50 (RegisterKernelCpc.c)
 *     RegisterHvCpcCounters @ 0x1C0039EE0 (RegisterHvCpcCounters.c)
 * Callees:
 *     ClearEnumerationContext @ 0x1C0001E7C (ClearEnumerationContext.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x1C000259C (WriteGenAddrMaybeHiddenEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     CpcRegisterIsSupportedEx @ 0x1C00033C0 (CpcRegisterIsSupportedEx.c)
 *     EnumerateNextDevice @ 0x1C00033D8 (EnumerateNextDevice.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0003424 (ReadGenAddrMaybeHiddenEx.c)
 *     ResetEnumerationContext @ 0x1C0003474 (ResetEnumerationContext.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00045C0 (memset.c)
 *     ReadGenAddrHiddenEx @ 0x1C00089D4 (ReadGenAddrHiddenEx.c)
 *     WPP_RECORDER_SF_ii @ 0x1C000CCFC (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_iii @ 0x1C000CE24 (WPP_RECORDER_SF_iii.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C00270EC (GetRegistryDwordValueNoDefault.c)
 *     ProcLibCapChange @ 0x1C0027608 (ProcLibCapChange.c)
 *     InitCommonPerfStateContext @ 0x1C002BADC (InitCommonPerfStateContext.c)
 *     GetPackageAffinity @ 0x1C002C058 (GetPackageAffinity.c)
 *     CpcConnectNativeInterrupt @ 0x1C002C5DC (CpcConnectNativeInterrupt.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1C002C904 (AllocateAndInitKernelPerfStatesRegistration.c)
 *     GetPerfDomain @ 0x1C002CA14 (GetPerfDomain.c)
 *     DisplayKernelPerfStates @ 0x1C002CB6C (DisplayKernelPerfStates.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0035A2C (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     StartPccCommand @ 0x1C003AD90 (StartPccCommand.c)
 */

__int64 __fastcall InitCpcStatesInternal(__int64 a1, __int64 (__fastcall *a2)(__int64))
{
  _QWORD *v2; // r15
  __int64 v3; // rsi
  int RegistryDwordValueNoDefault; // eax
  int v5; // ecx
  char *Pool2; // rax
  char *v7; // r14
  char v8; // r12
  __int64 v9; // r13
  PVOID v10; // rbx
  int v11; // eax
  char *v12; // rdi
  char v13; // r15
  int v14; // esi
  int v15; // r13d
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
  int v39; // r11d
  unsigned int *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  char v43; // r11
  __int64 *v44; // r14
  __int64 v45; // rbx
  char *v46; // rbx
  int v47; // r11d
  __int64 v48; // rdi
  PVOID v49; // r13
  struct _GROUP_AFFINITY *v50; // rdx
  _BYTE *v51; // rcx
  int v52; // r11d
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  unsigned __int64 v62; // rcx
  int v63; // eax
  unsigned __int64 v64; // r8
  unsigned __int64 v65; // rax
  char *v66; // rdi
  char v67; // r13
  __int64 v68; // rbx
  int v69; // r15d
  __int64 inited; // rax
  char v71; // r10
  int v72; // r8d
  __int64 (__fastcall *v73)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // rax
  char v74; // r9
  bool v75; // al
  int v76; // ecx
  int v77; // eax
  int v78; // edx
  int v79; // eax
  int v80; // ecx
  int v81; // eax
  __int64 v82; // rax
  char v83; // al
  unsigned __int64 v84; // r8
  __int64 v85; // rax
  __int64 v86; // rcx
  unsigned __int64 v87; // rax
  int v88; // esi
  unsigned int v89; // r15d
  __int64 v90; // rax
  _DWORD *v91; // r13
  __int64 v92; // rbx
  struct _GROUP_AFFINITY *v93; // rdx
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v95; // rcx
  unsigned __int64 v96; // rax
  __int64 v97; // rdx
  _QWORD *v98; // r11
  unsigned __int8 v99; // cl
  unsigned __int8 v100; // cl
  _QWORD *v101; // r11
  __int64 (__fastcall *v102)(__int64); // rax
  int started; // edi
  char *v104; // r11
  char *v106; // r15
  __int64 v107; // r12
  _QWORD *v108; // rbx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v110; // rbx
  int v111; // eax
  __int64 v112; // rbx
  unsigned __int16 v113; // r9
  unsigned __int16 v114; // r9
  void *v115; // rax
  unsigned int v116; // ecx
  __int64 v117; // rcx
  unsigned __int64 v118; // r8
  int v119; // eax
  unsigned __int64 v120; // rtt
  __int64 v121; // rax
  int v122; // [rsp+20h] [rbp-E0h]
  char v123; // [rsp+60h] [rbp-A0h]
  char v124; // [rsp+61h] [rbp-9Fh]
  char v125; // [rsp+62h] [rbp-9Eh]
  char v126; // [rsp+63h] [rbp-9Dh]
  PVOID DeferredContext; // [rsp+68h] [rbp-98h] BYREF
  char v128; // [rsp+70h] [rbp-90h]
  char v129; // [rsp+71h] [rbp-8Fh]
  char v130; // [rsp+72h] [rbp-8Eh] BYREF
  char v131; // [rsp+73h] [rbp-8Dh]
  char IsSupported; // [rsp+74h] [rbp-8Ch]
  bool v133; // [rsp+75h] [rbp-8Bh]
  bool v134; // [rsp+76h] [rbp-8Ah]
  char v135; // [rsp+77h] [rbp-89h]
  char v136; // [rsp+78h] [rbp-88h] BYREF
  char v137[3]; // [rsp+79h] [rbp-87h] BYREF
  int v138; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v139; // [rsp+80h] [rbp-80h]
  int v140; // [rsp+84h] [rbp-7Ch]
  int v141; // [rsp+88h] [rbp-78h]
  int v142; // [rsp+8Ch] [rbp-74h]
  _QWORD *v143; // [rsp+90h] [rbp-70h]
  _OWORD v144[2]; // [rsp+98h] [rbp-68h] BYREF
  int v145; // [rsp+B8h] [rbp-48h]
  int v146; // [rsp+BCh] [rbp-44h]
  int v147; // [rsp+C0h] [rbp-40h] BYREF
  int v148; // [rsp+C4h] [rbp-3Ch]
  __int64 v149; // [rsp+C8h] [rbp-38h]
  int v150; // [rsp+D0h] [rbp-30h] BYREF
  BOOL v151; // [rsp+D4h] [rbp-2Ch]
  _QWORD *v152; // [rsp+D8h] [rbp-28h]
  __int64 v153; // [rsp+E0h] [rbp-20h]
  __int64 v154; // [rsp+E8h] [rbp-18h]
  __int64 v155; // [rsp+F0h] [rbp-10h] BYREF
  __int64 (__fastcall *v156)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // [rsp+F8h] [rbp-8h] BYREF
  PVOID P; // [rsp+100h] [rbp+0h]
  __int128 v158; // [rsp+108h] [rbp+8h] BYREF
  __int64 v159; // [rsp+118h] [rbp+18h]
  __int64 v160; // [rsp+120h] [rbp+20h] BYREF
  __int64 v161; // [rsp+128h] [rbp+28h] BYREF
  __int64 (__fastcall *v162)(__int64); // [rsp+130h] [rbp+30h]
  struct _GROUP_AFFINITY Affinity; // [rsp+138h] [rbp+38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v165[272]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v166[272]; // [rsp+270h] [rbp+170h] BYREF

  v162 = a2;
  v2 = (_QWORD *)a1;
  v143 = (_QWORD *)a1;
  DeferredContext = 0LL;
  Affinity = 0LL;
  memset(v165, 0, 0x108uLL);
  v130 = 0;
  v155 = 0LL;
  v160 = 0LL;
  v156 = 0LL;
  memset(v166, 0, 0x108uLL);
  v161 = 0LL;
  v147 = 0;
  memset(v144, 0, sizeof(v144));
  LODWORD(v159) = 0;
  v3 = 0LL;
  v136 = 0;
  PreviousAffinity = 0LL;
  v150 = 0;
  v158 = 0LL;
  v137[0] = 0;
  v125 = 0;
  ClearEnumerationContext(v144);
  LODWORD(v149) = 0;
  v138 = 0;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                  (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                  (__int64)L"~MHz",
                                  (__int64)&v138);
  v5 = v138;
  if ( RegistryDwordValueNoDefault < 0 )
    v5 = 0;
  v138 = v5;
  if ( !v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x21u,
        (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids);
    v2[35] &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(v139) = v2[42] != 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001F018,
    0LL);
  LODWORD(v152) = GetPerfDomain(v2, v144, &v150);
  Pool2 = (char *)ExAllocatePool2(64LL, (unsigned int)(408 * (_DWORD)v152), 1919119952LL);
  P = Pool2;
  v7 = Pool2;
  if ( !Pool2 )
  {
LABEL_188:
    started = -1073741670;
    goto LABEL_180;
  }
  LOBYTE(Pool2) = 0;
  LOBYTE(v142) = 0;
  v141 = (int)Pool2;
  LOBYTE(v145) = 0;
  v124 = 1;
  v8 = 1;
  v130 = 1;
  v129 = 1;
  v9 = 0LL;
  v140 = 1;
  v131 = 0;
  v126 = 0;
  v128 = 0;
  LOBYTE(v146) = 0;
  IsSupported = 0;
  LOBYTE(v148) = 0;
  v135 = 0;
  v123 = 0;
  v134 = 0;
  v147 = 1000;
  v133 = 0;
  v154 = 0LL;
  KeInitializeAffinityEx2(v165, 32LL);
  ResetEnumerationContext((__int64 *)v144);
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
  {
    if ( !*((_DWORD *)DeferredContext + 20) )
      KeAddProcessorAffinityEx(v165, *((unsigned int *)DeferredContext + 14));
  }
  v151 = 0;
  ResetEnumerationContext((__int64 *)v144);
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
  {
    v10 = DeferredContext;
    if ( !*((_DWORD *)DeferredContext + 20) )
    {
      v9 = *((_QWORD *)DeferredContext + 74);
      v154 = v9;
      KeInitializeAffinityEx2(v166, 32LL);
      if ( (int)GetPackageAffinity(v10, v166) >= 0 )
        v151 = KeIsEqualAffinityEx(v166, v165) != 0;
      break;
    }
  }
  ResetEnumerationContext((__int64 *)v144);
  v11 = EnumerateNextDevice((__int64 *)v144, &DeferredContext);
  if ( v11 )
  {
    v43 = v141;
  }
  else
  {
    v12 = v7 + 124;
    LOBYTE(v7) = v142;
    v13 = 0;
    LOBYTE(v14) = v145;
    v15 = v140;
    do
    {
      v124 = v8;
      v16 = (_BYTE *)*((_QWORD *)DeferredContext + 74);
      if ( v16[272] == 10 || v16[296] == 10 )
        v126 = 1;
      if ( v16[344] == 10 || v16[152] == 10 || v16[176] == 10 || v16[128] == 10 || v16[200] == 10 || v16[416] == 10 )
        v128 = 1;
      LODWORD(v7) = (unsigned __int8)v7;
      if ( v16[104] == 10 )
        LODWORD(v7) = 1;
      v14 = (unsigned __int8)v14;
      v17 = v16[8] == 10;
      v142 = (int)v7;
      if ( v17 )
        v14 = 1;
      if ( v16[392] == 10 || v16[368] == 10 || v16[224] == 10 )
        v131 = 1;
      *(_QWORD *)(v12 + 20) = v16;
      IsSupported = CpcRegisterIsSupportedEx((__int64)(v16 + 344));
      *v12 = IsSupported;
      v12[1] = CpcRegisterIsSupportedEx((__int64)(v16 + 128));
      v12[2] = CpcRegisterIsSupportedEx((__int64)(v16 + 152));
      v12[3] = CpcRegisterIsSupportedEx((__int64)(v16 + 176));
      v12[6] = CpcRegisterIsSupportedEx((__int64)(v16 + 200));
      v12[7] = CpcRegisterIsSupportedEx((__int64)(v16 + 104));
      v135 = CpcRegisterIsSupportedEx(v18);
      v19 = CpcRegisterIsSupportedEx((__int64)(v16 + 416));
      v22 = (unsigned __int8)v146;
      v12[4] = v19;
      if ( v19 )
        v22 = v21;
      v146 = v22;
      v23 = CpcRegisterIsSupportedEx(v20);
      LOBYTE(v27) = v148;
      v12[5] = v23;
      v27 = (unsigned __int8)v27;
      if ( v23 )
        v27 = v26;
      v28 = v25;
      v17 = v16[272] == 127;
      v148 = v27;
      v29 = v24;
      if ( v17 )
        v28 = v24;
      if ( v16[296] != 127 )
        v29 = v28;
      v139 = v29;
      if ( !qword_1C001F248 || (v30 = qword_1C001F248(v16), v24 = 0, !v30) )
        v129 = v24;
      v31 = 0LL;
      v159 = 0LL;
      v32 = v24;
      v33 = 0LL;
      v158 = 0LL;
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
          v13 = 1;
          if ( *v35 == 10 )
            goto LABEL_194;
          if ( CpcRegisterIsSupportedEx((__int64)&v158) )
          {
            if ( (_BYTE)v158 != v38
              || *(_QWORD *)((char *)&v158 + 4) != *(_QWORD *)((char *)v37 + 4)
              || BYTE3(v158) != *((_BYTE *)v37 + 3) )
            {
LABEL_194:
              v8 = 0;
              v124 = 0;
              goto LABEL_58;
            }
          }
          else
          {
            v31 = *v37;
            v33 = *((_QWORD *)v37 + 2);
            v158 = *v37;
            v159 = v33;
          }
        }
        v32 = v36 + 1;
      }
      while ( v32 < 5 );
      if ( v13 && v8 )
      {
        *(_OWORD *)(v12 + 28) = v31;
        *(_QWORD *)(v12 + 44) = v33;
      }
LABEL_58:
      if ( qword_1C001F260 )
      {
        v15 = (unsigned __int8)v15;
        if ( (int)qword_1C001F260(DeferredContext, v12 - 124, &v155, &v160, &v161, &v156, &v136, v137, &v130, &v147) < 0 )
          v15 = 0;
      }
      LOBYTE(v39) = v141;
      v40 = (unsigned int *)&Cpc2RegisterTable;
      v41 = 19LL;
      do
      {
        v42 = *v40;
        v40 += 6;
        v39 = (unsigned __int8)v39;
        if ( v16[v42] == 10 )
          v39 = 1;
        --v41;
      }
      while ( v41 );
      v141 = v39;
      v12 += 408;
      v11 = EnumerateNextDevice((__int64 *)v144, &DeferredContext);
      LOBYTE(v7) = v142;
    }
    while ( !v11 );
    v7 = (char *)P;
    v140 = v15;
    v9 = v154;
    v145 = v14;
    v3 = 0LL;
    v123 = v13;
    v2 = v143;
  }
  if ( !v155 || !v156 )
  {
    LOBYTE(v11) = 0;
    v140 = v11;
  }
  if ( v43 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001F638,
      0LL);
    ResetEnumerationContext((__int64 *)v144);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
    {
      v106 = v7 + 144;
      do
      {
        if ( *(v106 - 20) )
        {
          v107 = *(_QWORD *)v106;
          v108 = DeferredContext;
          if ( *(_BYTE *)(*(_QWORD *)v106 + 344LL) == 127 && !*((_DWORD *)DeferredContext + 20) )
          {
            KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
            p_PreviousAffinity = &PreviousAffinity;
            if ( v125 )
              p_PreviousAffinity = 0LL;
            KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
            v125 = 1;
          }
          if ( (*(_BYTE *)(v108[32] + 144LL) & 1) == 0 )
          {
            started = StartPccCommand(v143[32]);
            if ( started < 0 )
            {
              v2 = v143;
              goto LABEL_216;
            }
          }
          WriteGenAddrMaybeHiddenEx((__int64)v108, v107 + 344, 1LL);
        }
        v106 += 408;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) );
      v2 = v143;
    }
    ResetEnumerationContext((__int64 *)v144);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 32) + 144LL) & 1) != 0 )
        {
          v110 = v2[32];
          v111 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v110 + 120))(*(_QWORD *)(v110 + 72), 0LL);
          *(_DWORD *)(v110 + 144) &= ~1u;
          started = v111;
          if ( v111 < 0 )
            break;
        }
        if ( (unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
          goto LABEL_214;
      }
LABEL_216:
      ResetEnumerationContext((__int64 *)v144);
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
      {
        if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 32) + 144LL) & 1) != 0 )
        {
          v112 = v2[32];
          (*(void (__fastcall **)(_QWORD))(v112 + 136))(*(_QWORD *)(v112 + 72));
          *(_DWORD *)(v112 + 144) &= ~1u;
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C001F638);
      goto LABEL_180;
    }
LABEL_214:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001F638);
  }
  ResetEnumerationContext((__int64 *)v144);
  if ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
  {
    v44 = (__int64 *)(v7 + 144);
    do
    {
      v45 = *v44;
      if ( *((_DWORD *)DeferredContext + 20) == 2
        && *(_BYTE *)(v45 + 32) == 10
        && !ReadGenAddrHiddenEx(*((unsigned int *)DeferredContext + 21), (unsigned __int8 *)(v45 + 32)) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            1u,
            0x22u,
            (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids);
        if ( !CpcHiddenProcessorMitigationReported )
        {
          ProcLibTraceHiddenProcessorDegradedOperation();
          CpcHiddenProcessorMitigationReported = 1;
        }
        *(_QWORD *)(v45 + 32) = *(_QWORD *)(v9 + 32);
        *(_DWORD *)(v45 + 40) = *(_DWORD *)(v9 + 40);
        if ( *(_BYTE *)(v45 + 8) == 10 )
        {
          *(_QWORD *)(v45 + 8) = *(_QWORD *)(v9 + 8);
          *(_DWORD *)(v45 + 16) = *(_DWORD *)(v9 + 16);
        }
        if ( *(_BYTE *)(v45 + 56) == 10 )
        {
          *(_QWORD *)(v45 + 56) = *(_QWORD *)(v9 + 56);
          *(_DWORD *)(v45 + 64) = *(_DWORD *)(v9 + 64);
        }
        if ( *(_BYTE *)(v45 + 80) == 10 )
        {
          *(_QWORD *)(v45 + 80) = *(_QWORD *)(v9 + 80);
          *(_DWORD *)(v45 + 88) = *(_DWORD *)(v9 + 88);
        }
        if ( *(_BYTE *)(v45 + 440) == 10 )
        {
          *(_QWORD *)(v45 + 440) = *(_QWORD *)(v9 + 440);
          *(_DWORD *)(v45 + 448) = *(_DWORD *)(v9 + 448);
        }
        if ( *(_BYTE *)(v45 + 104) == 10 )
        {
          *(_QWORD *)(v45 + 104) = *(_QWORD *)(v9 + 104);
          *(_DWORD *)(v45 + 112) = *(_DWORD *)(v9 + 112);
        }
      }
      v44 += 51;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) );
    v7 = (char *)P;
    v3 = 0LL;
  }
  ResetEnumerationContext((__int64 *)v144);
  if ( (unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
  {
LABEL_99:
    if ( *((_QWORD *)v7 + 5) < *((_QWORD *)v7 + 6) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_254;
      v113 = 42;
    }
    else
    {
      v66 = v7 + 64;
      if ( *((_QWORD *)v7 + 7) >= *((_QWORD *)v7 + 8) )
      {
        v67 = v139;
        v68 = (__int64)v143;
        v69 = (int)v152;
        inited = AllocateAndInitKernelPerfStatesRegistration(
                   v143,
                   (unsigned int)v152,
                   (unsigned int)((_BYTE)v139 != 0) + 1);
        v153 = inited;
        v3 = inited;
        if ( inited )
        {
          v71 = v140;
          v72 = v150;
          *(_WORD *)(inited + 4) = v150;
          if ( v71 )
          {
            *(_QWORD *)(inited + 448) = v155;
            *(_QWORD *)(inited + 456) = v160;
            if ( v151 && v161 && v72 == 254 )
            {
              *(_QWORD *)(inited + 464) = v161;
              *(_QWORD *)(inited + 96) = v7;
            }
            v73 = v156;
            v74 = v123;
          }
          else
          {
            v74 = v123;
            if ( v123 )
            {
              if ( v124 )
              {
                v17 = (_BYTE)v158 == 0;
                *(_QWORD *)(inited + 448) = PerfControlCpcSingleRegister;
                v115 = PerfControlCpcSingleRegisterHidden;
                if ( v17 )
                  v115 = PerfControlCpcSingleRegister;
              }
              else
              {
                *(_QWORD *)(inited + 448) = PerfControlCpc;
                v115 = (void *)qword_1C001F218;
                if ( !qword_1C001F218 || !CpcHiddenProcessorMitigationReported )
                  v115 = PerfControlCpcHidden;
              }
            }
            else
            {
              v115 = AcpiCStateIdleCancel;
              *(_QWORD *)(v3 + 448) = AcpiCStateIdleCancel;
            }
            *(_QWORD *)(v3 + 456) = v115;
            v73 = PerfSelectionCpc;
          }
          *(_QWORD *)(v3 + 440) = v73;
          if ( (_BYTE)v141 )
          {
            if ( v126 )
              *(_QWORD *)(v3 + 472) = CpcReadFeedback;
            if ( v128 )
            {
              *(_QWORD *)(v3 + 480) = CpcAcquirePerformance;
              *(_QWORD *)(v3 + 488) = CpcCommitPerformance;
            }
            if ( v131 )
            {
              *(_QWORD *)(v3 + 416) = AcquirePccSubspace;
              *(_QWORD *)(v3 + 424) = ExecutePccWrite;
            }
            v116 = *(_DWORD *)(*(_QWORD *)(v68 + 256) + 84LL);
            if ( v116 )
              *(_DWORD *)(v3 + 40) = 0x989680 / (v116 >> 1);
          }
          if ( IsSupported || _bittest64((const signed __int64 *)(v68 + 280), 0x26u) )
            *(_QWORD *)(v3 + 432) = CpcReinitializeHandler;
          *(_BYTE *)(v3 + 6) = 0;
          v75 = v74 || v71;
          v76 = v149;
          *(_BYTE *)(v3 + 7) = v75;
          *(_BYTE *)(v3 + 8) = v129;
          *(_BYTE *)(v3 + 52) = v133;
          v77 = v138;
          if ( v76 )
            v77 = v76;
          *(_DWORD *)(v3 + 20) = v77;
          *(_DWORD *)(v3 + 24) = *((_DWORD *)v7 + 25);
          v78 = *((_DWORD *)v7 + 27);
          *(_DWORD *)(v3 + 28) = v78;
          v79 = v78;
          v80 = *((_DWORD *)v7 + 28);
          if ( !v78 )
            v79 = 1;
          *(_DWORD *)(v3 + 28) = v79;
          v81 = v80;
          if ( !v80 )
            v81 = 1;
          *(_DWORD *)(v3 + 32) = v81;
          *(_QWORD *)(v3 + 56) = *(_QWORD *)v66;
          *(_QWORD *)(v3 + 64) = *((_QWORD *)v7 + 6);
          v82 = *(_QWORD *)(v68 + 344);
          if ( v82 )
            *(_QWORD *)(v3 + 368) = v82;
          *(_QWORD *)(v3 + 384) = *(_QWORD *)(v68 + 352);
          if ( (_BYTE)v146 )
            *(_BYTE *)(v3 + 9) = 1;
          if ( (_BYTE)v148 )
          {
            if ( v71 )
              *(_BYTE *)(v3 + 10) = 1;
            else
              *(_QWORD *)(v3 + 400) = CpcSetAutonomousActivityWindow;
          }
          if ( v134 )
            *(_QWORD *)(v3 + 408) = CpcSetAutonomousMode;
          if ( v135 )
            *(_QWORD *)(v3 + 376) = CpcSetTimeWindow;
          if ( (*(_DWORD *)(v68 + 280) & 0x400000) != 0 && v71 && v136 && (v72 == 254 || v69 == 1) )
          {
            *(_BYTE *)(v3 + 11) = 1;
            if ( !_bittest64((const signed __int64 *)(v68 + 280), 0x22u) || (v83 = 0, v130) )
              v83 = 1;
            *(_BYTE *)(v3 + 12) = v83;
            *(_DWORD *)(v3 + 48) = v147;
          }
          if ( v137[0] )
          {
            v117 = *(unsigned int *)(v3 + 20);
            *(_BYTE *)(v3 + 13) = 1;
            v118 = *((_QWORD *)v7 + 6);
            v120 = v117 + (v118 >> 1);
            v119 = v120 / v118;
            *(_DWORD *)(v3 + 72) = v119;
            *(_DWORD *)(v3 + 76) = *((_DWORD *)v7 + 10) * v119;
            *(_DWORD *)(v3 + 80) = *((_DWORD *)v7 + 12) * v119;
            *(_DWORD *)(v3 + 84) = *(_DWORD *)v66 * v119;
          }
          v84 = *((_QWORD *)v7 + 6);
          v85 = *((_QWORD *)v7 + 9);
          v86 = *(_QWORD *)(v3 + 544);
          if ( v84 == v85 )
            LODWORD(v87) = 100;
          else
            v87 = 100 * v85 / v84;
          *(_DWORD *)(v86 + 8) = v87;
          *(_QWORD *)v86 = PerfReadWrappingCounter;
          *(_DWORD *)(v86 + 12) = 1;
          *(_BYTE *)(v86 + 17) = 1;
          *(_BYTE *)(v86 + 16) = v126 == 0;
          if ( v67 )
          {
            v121 = *(_QWORD *)(v3 + 544);
            *(_QWORD *)(v121 + 32) = 100LL;
            *(_QWORD *)(v121 + 24) = PerfReadWrappingCounter;
            *(_WORD *)(v121 + 40) = 257;
          }
          DisplayKernelPerfStates(v3, PerfReadWrappingCounter);
          v149 = *(_QWORD *)(v3 + 552);
          v152 = *(_QWORD **)(v3 + 560);
          ResetEnumerationContext((__int64 *)v144);
          if ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
          {
            v88 = v149;
            do
            {
              v89 = 100;
              v90 = *((_QWORD *)v66 + 10);
              v91 = DeferredContext;
              v149 = v90;
              if ( v66[67] )
              {
                v92 = v90 + 104;
                if ( *(_BYTE *)(v90 + 104) == 127 && !*((_DWORD *)DeferredContext + 20) )
                {
                  KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                  v93 = &PreviousAffinity;
                  if ( v125 )
                    v93 = 0LL;
                  KeSetSystemGroupAffinityThread(&Affinity, v93);
                  v125 = 1;
                }
                GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx((__int64)v91, v92);
                v95 = *((_QWORD *)v66 - 2);
                if ( GenAddrMaybeHidden > v95 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      3u,
                      1u,
                      0x2Cu,
                      (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids);
                  GenAddrMaybeHidden = *((_QWORD *)v66 - 2);
                  v95 = GenAddrMaybeHidden;
                }
                if ( GenAddrMaybeHidden < *(_QWORD *)v66 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    WPP_RECORDER_SF_(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      3u,
                      1u,
                      0x2Du,
                      (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids);
                    v95 = *((_QWORD *)v66 - 2);
                  }
                  GenAddrMaybeHidden = *(_QWORD *)v66;
                }
                v89 = *((_DWORD *)v66 + 12);
                *((_QWORD *)v66 + 3) = GenAddrMaybeHidden;
                v96 = 100 * GenAddrMaybeHidden / v95;
                if ( (unsigned int)v96 > v89 )
                  v89 = v96;
                *((_DWORD *)v66 + 13) = v89;
                if ( v89 != v91[185] )
                  ProcLibCapChange((__int64)v143, v91[116], v91[128], v89);
              }
              else
              {
                *((_QWORD *)v66 + 3) = *((_QWORD *)v66 - 2);
              }
              InitCommonPerfStateContext((_DWORD)v91, (_DWORD)v66 - 64, v88, v89, v89 < 0x64 ? 2 : 0);
              v97 = v149;
              v98 = v152;
              v143[27] = v66 - 64;
              *v98 = v66 + 136;
              *((_QWORD *)v66 + 23) = GetCpcDifferentialFeedback;
              *((_QWORD *)v66 + 24) = v97;
              v99 = *(_BYTE *)(v97 + 297);
              if ( v99 < 0x40u )
                *((_QWORD *)v66 + 21) = (1LL << v99) - 1;
              v100 = *(_BYTE *)(v97 + 273);
              if ( v100 < 0x40u )
                *((_QWORD *)v66 + 22) = (1LL << v100) - 1;
              v101 = v98 + 1;
              v152 = v101;
              if ( (_BYTE)v139 )
              {
                *v101 = v66 + 200;
                *((_QWORD *)v66 + 31) = *((_QWORD *)v91 + 42);
                v152 = v101 + 1;
              }
              v88 += 32;
              v66 += 408;
            }
            while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) );
            v3 = v153;
            v7 = (char *)P;
            v68 = (__int64)v143;
          }
          if ( v125 )
            KeRevertToUserGroupAffinityThread(&PreviousAffinity);
          v102 = v162;
          *(_BYTE *)(v3 + 15) = 1;
          started = v102(v3);
          if ( started >= 0 )
          {
            ResetEnumerationContext((__int64 *)v144);
            while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
            {
              *((_QWORD *)DeferredContext + 31) = v7;
              v7 += 408;
            }
            if ( _bittest64((const signed __int64 *)(v68 + 280), 0x26u) )
            {
              ResetEnumerationContext((__int64 *)v144);
              while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
              {
                if ( *((_DWORD *)DeferredContext + 20) == (_DWORD)v104 )
                  CpcConnectNativeInterrupt(DeferredContext);
              }
            }
            v7 = v104;
            started = (int)v104;
          }
          goto LABEL_180;
        }
        goto LABEL_188;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_254;
      v113 = 43;
    }
LABEL_252:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v113,
      (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids);
    goto LABEL_254;
  }
  v46 = v7 + 132;
  v47 = 0;
  while ( 1 )
  {
    v48 = *(_QWORD *)(v46 + 12);
    v49 = DeferredContext;
    if ( (*(_BYTE *)(v48 + 8) == 127
       || *(_BYTE *)(v48 + 32) == 127
       || *(_BYTE *)(v48 + 56) == 127
       || *(_BYTE *)(v48 + 80) == 127
       || *(_BYTE *)(v48 + 440) == 127
       || *(_BYTE *)(v48 + 368) == 127)
      && *((_DWORD *)DeferredContext + 20) == v47 )
    {
      KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
      v50 = &PreviousAffinity;
      if ( v125 )
        v50 = 0LL;
      KeSetSystemGroupAffinityThread(&Affinity, v50);
      v125 = 1;
    }
    *v46 = v126;
    v46[1] = v142;
    v46[2] = v145;
    v46[3] = v128;
    if ( !CpcRegisterIsSupportedEx(v48 + 488) || *v51 == 126 && *(_DWORD *)(v48 + 492) == v52 )
    {
      LODWORD(v53) = v138;
    }
    else
    {
      v53 = ReadGenAddrMaybeHiddenEx((__int64)v49, (__int64)v51);
      v149 = v53;
      if ( !(_DWORD)v53 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_254;
        v113 = 35;
        goto LABEL_252;
      }
    }
    *((_DWORD *)v46 - 9) = v53;
    *(_QWORD *)(v46 - 92) = ReadGenAddrMaybeHiddenEx((__int64)v49, v48 + 8);
    v54 = ReadGenAddrMaybeHiddenEx((__int64)v49, v48 + 32);
    *(_QWORD *)(v46 - 84) = v54;
    if ( !v54 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_254;
      v113 = 36;
      goto LABEL_252;
    }
    v55 = ReadGenAddrMaybeHiddenEx((__int64)v49, v48 + 56);
    if ( v55 > *(_QWORD *)(v46 - 84) )
      v55 = *(_QWORD *)(v46 - 84);
    *(_QWORD *)(v46 - 76) = v55;
    *(_QWORD *)(v46 - 68) = ReadGenAddrMaybeHiddenEx((__int64)v49, v48 + 80);
    *(_QWORD *)(v46 - 60) = ReadGenAddrMaybeHiddenEx((__int64)v49, v48 + 440);
    if ( CpcRegisterIsSupportedEx(v48 + 368) )
    {
      v133 = ReadGenAddrMaybeHiddenEx((__int64)v49, v48 + 368) != 0;
      v134 = *(_BYTE *)(v48 + 368) != 126;
    }
    if ( v46 - 132 == v7 )
      goto LABEL_94;
    v59 = *(_QWORD *)(v46 - 92);
    v60 = *((_QWORD *)v7 + 5);
    if ( v59 != v60 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_254;
      v114 = 37;
LABEL_253:
      WPP_RECORDER_SF_ii(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v114,
        (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids,
        v59,
        v60);
      goto LABEL_254;
    }
    v59 = *(_QWORD *)(v46 - 84);
    v60 = *((_QWORD *)v7 + 6);
    if ( v59 != v60 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_254;
      v114 = 38;
      goto LABEL_253;
    }
    v59 = *(_QWORD *)(v46 - 68);
    v60 = *((_QWORD *)v7 + 8);
    if ( v59 != v60 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_254;
      v114 = 39;
      goto LABEL_253;
    }
    v61 = *(_QWORD *)(v46 - 76);
    if ( v61 != *((_QWORD *)v7 + 7) )
      break;
LABEL_94:
    v62 = *(_QWORD *)(v46 - 84);
    v63 = 100LL * *(_QWORD *)(v46 - 92) / v62;
    *((_DWORD *)v46 - 8) = v63;
    *((_DWORD *)v46 - 7) = v63;
    v64 = 100LL * *(_QWORD *)(v46 - 76) / v62;
    v65 = 100LL * *(_QWORD *)(v46 - 68) / v62;
    if ( !(_DWORD)v65 )
      LODWORD(v65) = 1;
    *((_DWORD *)v46 - 5) = v65;
    if ( !(_DWORD)v64 )
      LODWORD(v64) = 1;
    *((_DWORD *)v46 - 6) = v64;
    v46 += 408;
    if ( (unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
      goto LABEL_99;
  }
  if ( v129 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_iii((__int64)WPP_GLOBAL_Control->DeviceExtension, v56, v57, v58, v122);
    *(_QWORD *)(v46 - 76) = *((_QWORD *)v7 + 7);
    goto LABEL_94;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ii(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x28u,
      (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids,
      v61,
      *((_QWORD *)v7 + 7));
LABEL_254:
  started = -1073741811;
LABEL_180:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001F018);
  if ( v3 )
    ExFreePoolWithTag((PVOID)v3, (ULONG)1919119952);
  if ( v7 )
    ExFreePoolWithTag(v7, (ULONG)1919119952);
  return (unsigned int)started;
}
