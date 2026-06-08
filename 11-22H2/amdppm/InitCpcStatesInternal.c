/*
 * XREFs of InitCpcStatesInternal @ 0x1C0031044
 * Callers:
 *     RegisterHvCpcCounters @ 0x1C0024EF0 (RegisterHvCpcCounters.c)
 *     RegisterKernelCpc @ 0x1C0033850 (RegisterKernelCpc.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0001008 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C000103C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EnumerateNextDevice @ 0x1C0001850 (EnumerateNextDevice.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x1C00021C4 (WriteGenAddrMaybeHiddenEx.c)
 *     ResetEnumerationContext @ 0x1C0002394 (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 *     ClearEnumerationContext @ 0x1C0003B64 (ClearEnumerationContext.c)
 *     ReadGenAddrHiddenEx @ 0x1C0003D44 (ReadGenAddrHiddenEx.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0003D78 (ReadGenAddrMaybeHiddenEx.c)
 *     CpcRegisterIsSupportedEx @ 0x1C0004BA4 (CpcRegisterIsSupportedEx.c)
 *     WPP_RECORDER_SF_ii @ 0x1C00090EC (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_iii @ 0x1C0009214 (WPP_RECORDER_SF_iii.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C7C0 (memset.c)
 *     GetRegistryDwordValue @ 0x1C0020F74 (GetRegistryDwordValue.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1C0021D9C (ProcLibTraceNoPayloadEvent.c)
 *     CpcConnectNativeInterrupt @ 0x1C0023BF0 (CpcConnectNativeInterrupt.c)
 *     ExecutePccCommand @ 0x1C0025B88 (ExecutePccCommand.c)
 *     StartPccCommand @ 0x1C0025EB0 (StartPccCommand.c)
 *     DisplayKernelPerfStates @ 0x1C002C4BC (DisplayKernelPerfStates.c)
 *     ProcLibCapChange @ 0x1C002C608 (ProcLibCapChange.c)
 *     GetPerfDomain @ 0x1C002DD08 (GetPerfDomain.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1C0030824 (AllocateAndInitKernelPerfStatesRegistration.c)
 *     GetPackageAffinity @ 0x1C0030DA0 (GetPackageAffinity.c)
 *     InitCommonPerfStateContext @ 0x1C0030F70 (InitCommonPerfStateContext.c)
 */

__int64 __fastcall InitCpcStatesInternal(__int64 a1, __int64 (__fastcall *a2)(__int64))
{
  int v2; // edi
  int v3; // r12d
  __int64 *v4; // r13
  __int64 v5; // rsi
  int started; // edi
  __int64 Pool2; // rax
  __int64 v8; // r14
  char v9; // r15
  int v10; // eax
  int v11; // r11d
  int v12; // r11d
  PVOID v13; // rbx
  int v14; // eax
  __int64 (__fastcall *v15)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, unsigned __int64 *); // r11
  __int64 v16; // rdi
  int v17; // r13d
  _BYTE *v18; // rbx
  bool v19; // zf
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // r9
  int v23; // ecx
  char v24; // al
  int v25; // edx
  unsigned __int8 v26; // r10
  unsigned int v27; // r11d
  int v28; // ecx
  unsigned __int8 v29; // al
  unsigned int v30; // ecx
  char v31; // al
  __int128 v32; // xmm1
  unsigned int v33; // r9d
  __int64 v34; // xmm0_8
  __int64 v35; // rdx
  _BYTE *v36; // rdx
  int v37; // r9d
  __int128 *v38; // rdx
  char v39; // r8
  int v40; // eax
  int v41; // r12d
  unsigned int *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // r12
  _QWORD *v47; // rbx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v49; // rbx
  __int64 v50; // r14
  __int64 *v51; // rsi
  __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rbx
  unsigned int v57; // r10d
  __int64 v58; // rdi
  PVOID v59; // r15
  struct _GROUP_AFFINITY *v60; // rdx
  _BYTE *v61; // rcx
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int16 v63; // r9
  unsigned int v64; // r8d
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rcx
  unsigned __int64 v73; // rcx
  int v74; // eax
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // rax
  unsigned __int16 v77; // r9
  __int64 v78; // rdi
  char v79; // r13
  __int64 v80; // rbx
  int v81; // r15d
  __int64 inited; // rax
  char v83; // r10
  int v84; // r8d
  __int64 (__fastcall *v85)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, unsigned __int64 *); // rax
  char v86; // r9
  void *v87; // rax
  unsigned int v88; // ecx
  bool v89; // al
  int v90; // ecx
  int v91; // eax
  int v92; // edx
  int v93; // eax
  int v94; // ecx
  int v95; // eax
  __int64 v96; // rax
  char v97; // al
  __int64 v98; // rcx
  unsigned __int64 v99; // r8
  int v100; // eax
  unsigned __int64 v101; // rtt
  unsigned __int64 v102; // r8
  __int64 v103; // rax
  __int64 v104; // rcx
  unsigned __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rsi
  unsigned __int64 v108; // rax
  unsigned int v109; // r15d
  _DWORD *v110; // r13
  _BYTE *v111; // rbx
  struct _GROUP_AFFINITY *v112; // rdx
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rcx
  unsigned __int64 v115; // rax
  unsigned __int64 v116; // rdx
  _QWORD *v117; // r10
  unsigned __int8 v118; // cl
  unsigned __int8 v119; // cl
  _QWORD *v120; // r10
  int v122; // [rsp+20h] [rbp-E0h]
  char v123; // [rsp+60h] [rbp-A0h]
  char v124; // [rsp+61h] [rbp-9Fh]
  char v125; // [rsp+62h] [rbp-9Eh]
  char v126; // [rsp+63h] [rbp-9Dh]
  char v127; // [rsp+64h] [rbp-9Ch]
  char v128; // [rsp+65h] [rbp-9Bh]
  char v129[2]; // [rsp+66h] [rbp-9Ah] BYREF
  PVOID DeferredContext; // [rsp+68h] [rbp-98h] BYREF
  char v131; // [rsp+70h] [rbp-90h]
  char IsSupported; // [rsp+71h] [rbp-8Fh]
  bool v133; // [rsp+72h] [rbp-8Eh]
  bool v134; // [rsp+73h] [rbp-8Dh]
  char v135; // [rsp+74h] [rbp-8Ch]
  char v136; // [rsp+75h] [rbp-8Bh] BYREF
  char v137[2]; // [rsp+76h] [rbp-8Ah] BYREF
  unsigned int v138; // [rsp+78h] [rbp-88h]
  int v139; // [rsp+7Ch] [rbp-84h] BYREF
  int v140; // [rsp+80h] [rbp-80h]
  int v141; // [rsp+84h] [rbp-7Ch]
  _OWORD v142[2]; // [rsp+88h] [rbp-78h] BYREF
  int v143; // [rsp+A8h] [rbp-58h]
  int v144; // [rsp+ACh] [rbp-54h]
  int v145; // [rsp+B0h] [rbp-50h]
  int v146; // [rsp+B4h] [rbp-4Ch] BYREF
  int v147; // [rsp+BCh] [rbp-44h]
  unsigned __int64 v148; // [rsp+C0h] [rbp-40h]
  _QWORD *v149; // [rsp+C8h] [rbp-38h]
  int v150; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v151; // [rsp+D8h] [rbp-28h]
  int v152; // [rsp+E0h] [rbp-20h]
  __int64 v153; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v154)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, unsigned __int64 *); // [rsp+F0h] [rbp-10h] BYREF
  __int64 (__fastcall *v155)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, unsigned __int64 *); // [rsp+F8h] [rbp-8h] BYREF
  __int64 v156; // [rsp+100h] [rbp+0h]
  __int128 v157; // [rsp+108h] [rbp+8h] BYREF
  __int64 v158; // [rsp+118h] [rbp+18h]
  __int64 v159; // [rsp+120h] [rbp+20h]
  __int64 *v160; // [rsp+128h] [rbp+28h]
  __int64 v161; // [rsp+130h] [rbp+30h] BYREF
  __int64 v162; // [rsp+138h] [rbp+38h] BYREF
  __int64 (__fastcall *v163)(__int64); // [rsp+140h] [rbp+40h]
  struct _GROUP_AFFINITY Affinity; // [rsp+148h] [rbp+48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v166[272]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v167[272]; // [rsp+280h] [rbp+180h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v168; // [rsp+390h] [rbp+290h] BYREF

  v163 = a2;
  v4 = (__int64 *)a1;
  v151 = (__int64 *)a1;
  DeferredContext = 0LL;
  Affinity = 0LL;
  memset(v166, 0, 0x108uLL);
  v129[0] = 0;
  v154 = 0LL;
  v161 = 0LL;
  v155 = 0LL;
  memset(v167, 0, 0x108uLL);
  v162 = 0LL;
  v146 = 0;
  LODWORD(v158) = 0;
  memset(v142, 0, sizeof(v142));
  v136 = 0;
  v5 = 0LL;
  v150 = 0;
  PreviousAffinity = 0LL;
  v137[0] = 0;
  v157 = 0LL;
  v153 = 0LL;
  v125 = 0;
  ClearEnumerationContext(v142);
  v139 = 0;
  v148 = 0LL;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
    (__int64)L"~MHz",
    &v139);
  if ( !v139 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x21u,
        (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids);
    v4[35] &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(v138) = v4[42] != 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00124D8,
    0LL);
  LODWORD(v149) = GetPerfDomain((__int64)v4, (__int64)v142, &v150);
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(408 * (_DWORD)v149), 1919119952LL);
  v156 = Pool2;
  v8 = Pool2;
  if ( !Pool2 )
  {
LABEL_6:
    started = -1073741670;
    goto LABEL_302;
  }
  LOBYTE(v140) = 0;
  v124 = 1;
  LOBYTE(Pool2) = 1;
  v129[0] = 1;
  LOBYTE(v3) = 0;
  v128 = 1;
  v134 = 0;
  v133 = 0;
  v159 = 0LL;
  LOBYTE(v147) = 0;
  v131 = 0;
  v126 = 0;
  v127 = 0;
  LOBYTE(v144) = 0;
  IsSupported = 0;
  LOBYTE(v145) = 0;
  v135 = 0;
  v123 = 0;
  v9 = 1;
  v143 = v3;
  v146 = 1000;
  v141 = Pool2;
  KeInitializeAffinityEx2(v166, 32LL);
  ResetEnumerationContext((__int64 *)v142);
  v10 = EnumerateNextDevice((__int64 *)v142, &DeferredContext);
  v11 = 0;
  while ( !v10 )
  {
    if ( *((_DWORD *)DeferredContext + 20) == v11 )
      KeAddProcessorAffinityEx(v166, *((unsigned int *)DeferredContext + 14));
    v10 = EnumerateNextDevice((__int64 *)v142, &DeferredContext);
  }
  LOBYTE(v2) = v11;
  v152 = v2;
  ResetEnumerationContext((__int64 *)v142);
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v142, &DeferredContext) )
  {
    v13 = DeferredContext;
    if ( *((_DWORD *)DeferredContext + 20) == v12 )
    {
      v159 = *((_QWORD *)DeferredContext + 74);
      KeInitializeAffinityEx2(v167, 32LL);
      if ( (int)GetPackageAffinity((__int64)v13, (__int64)v167) >= 0 )
      {
        v2 = (unsigned __int8)v2;
        if ( (unsigned int)KeIsEqualAffinityEx(v167, v166) )
          v2 = 1;
        v152 = v2;
      }
      break;
    }
  }
  ResetEnumerationContext((__int64 *)v142);
  v14 = EnumerateNextDevice((__int64 *)v142, &DeferredContext);
  if ( !v14 )
  {
    v16 = v8 + 124;
    LOBYTE(v8) = v147;
    LOBYTE(v17) = v140;
    do
    {
      v124 = v9;
      v18 = (_BYTE *)*((_QWORD *)DeferredContext + 74);
      if ( v18[272] == 10 || v18[296] == 10 )
        v126 = 1;
      if ( v18[344] == 10 || v18[152] == 10 || v18[176] == 10 || v18[128] == 10 || v18[200] == 10 || v18[416] == 10 )
        v127 = 1;
      v17 = (unsigned __int8)v17;
      if ( v18[104] == 10 )
        v17 = 1;
      LODWORD(v8) = (unsigned __int8)v8;
      v19 = v18[8] == 10;
      v140 = v17;
      if ( v19 )
        LODWORD(v8) = 1;
      if ( v18[392] == 10 || v18[368] == 10 || v18[224] == 10 )
        v131 = 1;
      *(_QWORD *)(v16 + 20) = v18;
      IsSupported = CpcRegisterIsSupportedEx((__int64)(v18 + 344));
      *(_BYTE *)v16 = IsSupported;
      *(_BYTE *)(v16 + 1) = CpcRegisterIsSupportedEx((__int64)(v18 + 128));
      *(_BYTE *)(v16 + 2) = CpcRegisterIsSupportedEx((__int64)(v18 + 152));
      *(_BYTE *)(v16 + 3) = CpcRegisterIsSupportedEx((__int64)(v18 + 176));
      *(_BYTE *)(v16 + 6) = CpcRegisterIsSupportedEx((__int64)(v18 + 200));
      *(_BYTE *)(v16 + 7) = CpcRegisterIsSupportedEx((__int64)(v18 + 104));
      v135 = CpcRegisterIsSupportedEx(v20);
      v21 = CpcRegisterIsSupportedEx((__int64)(v18 + 416));
      v23 = (unsigned __int8)v144;
      if ( v21 )
        v23 = 1;
      *(_BYTE *)(v16 + 4) = v21;
      v144 = v23;
      v24 = CpcRegisterIsSupportedEx(v22);
      LOBYTE(v28) = v145;
      *(_BYTE *)(v16 + 5) = v24;
      v28 = (unsigned __int8)v28;
      if ( v24 )
        v28 = v25;
      v29 = v26;
      v19 = v18[272] == 127;
      v145 = v28;
      v30 = v27;
      if ( v19 )
        v29 = v27;
      if ( v18[296] != 127 )
        v30 = v29;
      v138 = v30;
      if ( !qword_1C0012708 || (v31 = qword_1C0012708(v18), v27 = 0, !v31) )
        v128 = v27;
      v32 = 0LL;
      v158 = 0LL;
      v33 = v27;
      v34 = 0LL;
      v157 = 0LL;
      while ( v33 < 5 )
      {
        if ( v33 )
        {
          switch ( v33 )
          {
            case 1u:
              v35 = (__int64)(v18 + 152);
              break;
            case 2u:
              v35 = (__int64)(v18 + 176);
              break;
            case 3u:
              v35 = (__int64)(v18 + 416);
              break;
            default:
              v35 = (__int64)(v18 + 200);
              break;
          }
        }
        else
        {
          v35 = (__int64)(v18 + 128);
        }
        if ( CpcRegisterIsSupportedEx(v35) )
        {
          v123 = 1;
          if ( *v36 == 10 )
            goto LABEL_70;
          if ( CpcRegisterIsSupportedEx((__int64)&v157) )
          {
            if ( (_BYTE)v157 != v39
              || *(_QWORD *)((char *)&v157 + 4) != *(_QWORD *)((char *)v38 + 4)
              || BYTE3(v157) != *((_BYTE *)v38 + 3) )
            {
LABEL_70:
              LOBYTE(v5) = 1;
              v9 = 0;
              v124 = 0;
              goto LABEL_74;
            }
          }
          else
          {
            v32 = *v38;
            v34 = *((_QWORD *)v38 + 2);
            v157 = *v38;
            v158 = v34;
          }
          LOBYTE(v5) = 1;
        }
        v33 = v37 + 1;
      }
      v123 = v5;
      if ( (_BYTE)v5 )
      {
        v123 = v5;
        if ( v9 )
        {
          *(_OWORD *)(v16 + 28) = v32;
          v123 = v5;
          *(_QWORD *)(v16 + 44) = v34;
        }
      }
LABEL_74:
      if ( qword_1C0012720 )
      {
        v40 = qword_1C0012720(DeferredContext, v16 - 124, &v154, &v161, &v162, &v155, &v136, v137, v129, &v146);
        v41 = (unsigned __int8)v141;
        if ( v40 < 0 )
          v41 = 0;
        v141 = v41;
      }
      LOBYTE(v3) = v143;
      v42 = (unsigned int *)&Cpc2RegisterTable;
      v43 = 19LL;
      do
      {
        v44 = *v42;
        v42 += 6;
        v3 = (unsigned __int8)v3;
        if ( v18[v44] == 10 )
          v3 = 1;
        --v43;
      }
      while ( v43 );
      v143 = v3;
      v16 += 408LL;
      v14 = EnumerateNextDevice((__int64 *)v142, &DeferredContext);
      LOBYTE(v17) = v140;
    }
    while ( !v14 );
    v5 = v153;
    v4 = v151;
    v147 = v8;
    v8 = v156;
  }
  if ( v154 == v15 || v155 == v15 )
  {
    LOBYTE(v14) = (_BYTE)v15;
    v141 = v14;
  }
  if ( (_BYTE)v3 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0012AF8,
      0LL);
    ResetEnumerationContext((__int64 *)v142);
    v45 = v8 + 144;
    v160 = (__int64 *)(v8 + 144);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v142, &DeferredContext) )
    {
      if ( *(_BYTE *)(v45 - 20) )
      {
        v46 = *(_QWORD *)v45;
        v47 = DeferredContext;
        if ( *(_BYTE *)(*(_QWORD *)v45 + 344LL) == 127 && !*((_DWORD *)DeferredContext + 20) )
        {
          KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
          p_PreviousAffinity = &PreviousAffinity;
          if ( v125 )
            p_PreviousAffinity = 0LL;
          KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
          v125 = 1;
        }
        if ( (*(_BYTE *)(v47[32] + 144LL) & 1) == 0 )
        {
          started = StartPccCommand(v4[32]);
          if ( started < 0 )
          {
LABEL_104:
            ResetEnumerationContext((__int64 *)v142);
            while ( !(unsigned int)EnumerateNextDevice((__int64 *)v142, &DeferredContext) )
            {
              if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 32) + 144LL) & 1) != 0 )
              {
                v49 = v4[32];
                (*(void (__fastcall **)(_QWORD))(v49 + 136))(*(_QWORD *)(v49 + 72));
                *(_DWORD *)(v49 + 144) &= ~1u;
              }
            }
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
              WdfDriverGlobals,
              qword_1C0012AF8);
            goto LABEL_302;
          }
        }
        WriteGenAddrMaybeHiddenEx((__int64)v47, (_BYTE *)(v46 + 344), 1LL);
      }
      v45 += 408LL;
    }
    ResetEnumerationContext((__int64 *)v142);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v142, &DeferredContext) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 32) + 144LL) & 1) != 0 )
      {
        started = ExecutePccCommand(v4[32]);
        if ( started < 0 )
          goto LABEL_104;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0012AF8);
  }
  else
  {
    v160 = (__int64 *)(v8 + 144);
  }
  ResetEnumerationContext((__int64 *)v142);
  if ( !(unsigned int)EnumerateNextDevice((__int64 *)v142, &DeferredContext) )
  {
    v50 = v159;
    v51 = v160;
    do
    {
      v52 = *v51;
      if ( *((_DWORD *)DeferredContext + 20) == 2
        && *(_BYTE *)(v52 + 32) == 10
        && !ReadGenAddrHiddenEx(*((unsigned int *)DeferredContext + 21), (_BYTE *)(v52 + 32)) )
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
          ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_DEGRADED);
          if ( (unsigned int)dword_1C00120F8 > 5 && tlgKeywordOn() )
            tlgWriteTransfer_EtwWriteTransfer(v53, (unsigned __int8 *)dword_1C000F283, v54, v55, (ULONG)2, &v168);
          CpcHiddenProcessorMitigationReported = 1;
        }
        *(_QWORD *)(v52 + 32) = *(_QWORD *)(v50 + 32);
        *(_DWORD *)(v52 + 40) = *(_DWORD *)(v50 + 40);
        if ( *(_BYTE *)(v52 + 8) == 10 )
        {
          *(_QWORD *)(v52 + 8) = *(_QWORD *)(v50 + 8);
          *(_DWORD *)(v52 + 16) = *(_DWORD *)(v50 + 16);
        }
        if ( *(_BYTE *)(v52 + 56) == 10 )
        {
          *(_QWORD *)(v52 + 56) = *(_QWORD *)(v50 + 56);
          *(_DWORD *)(v52 + 64) = *(_DWORD *)(v50 + 64);
        }
        if ( *(_BYTE *)(v52 + 80) == 10 )
        {
          *(_QWORD *)(v52 + 80) = *(_QWORD *)(v50 + 80);
          *(_DWORD *)(v52 + 88) = *(_DWORD *)(v50 + 88);
        }
        if ( *(_BYTE *)(v52 + 440) == 10 )
        {
          *(_QWORD *)(v52 + 440) = *(_QWORD *)(v50 + 440);
          *(_DWORD *)(v52 + 448) = *(_DWORD *)(v50 + 448);
        }
        if ( *(_BYTE *)(v52 + 104) == 10 )
        {
          *(_QWORD *)(v52 + 104) = *(_QWORD *)(v50 + 104);
          *(_DWORD *)(v52 + 112) = *(_DWORD *)(v50 + 112);
        }
      }
      v51 += 51;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v142, &DeferredContext) );
    v5 = v153;
    v8 = v156;
  }
  ResetEnumerationContext((__int64 *)v142);
  v56 = v8 + 132;
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v142, &DeferredContext) )
  {
    v58 = *(_QWORD *)(v56 + 12);
    v59 = DeferredContext;
    if ( (*(_BYTE *)(v58 + 8) == 127
       || *(_BYTE *)(v58 + 32) == 127
       || *(_BYTE *)(v58 + 56) == 127
       || *(_BYTE *)(v58 + 80) == 127
       || *(_BYTE *)(v58 + 440) == 127
       || *(_BYTE *)(v58 + 368) == 127)
      && !*((_DWORD *)DeferredContext + 20) )
    {
      KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
      v60 = &PreviousAffinity;
      if ( v125 )
        v60 = 0LL;
      KeSetSystemGroupAffinityThread(&Affinity, v60);
      v125 = 1;
    }
    *(_BYTE *)v56 = v126;
    *(_BYTE *)(v56 + 1) = v140;
    *(_BYTE *)(v56 + 2) = v147;
    *(_BYTE *)(v56 + 3) = v127;
    if ( CpcRegisterIsSupportedEx(v58 + 488) && (*v61 != 126 || *(_DWORD *)(v58 + 492)) )
    {
      GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx((__int64)v59, v61);
      v148 = GenAddrMaybeHidden;
      if ( !(_DWORD)GenAddrMaybeHidden )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_155;
        v63 = 35;
LABEL_153:
        v64 = 1;
LABEL_154:
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          v64,
          v63,
          (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids);
        goto LABEL_155;
      }
    }
    else
    {
      LODWORD(GenAddrMaybeHidden) = v139;
    }
    *(_DWORD *)(v56 - 36) = GenAddrMaybeHidden;
    *(_QWORD *)(v56 - 92) = ReadGenAddrMaybeHiddenEx((__int64)v59, (_BYTE *)(v58 + 8));
    v65 = ReadGenAddrMaybeHiddenEx((__int64)v59, (_BYTE *)(v58 + 32));
    *(_QWORD *)(v56 - 84) = v65;
    if ( !v65 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_155;
      v63 = 36;
      goto LABEL_153;
    }
    v66 = ReadGenAddrMaybeHiddenEx((__int64)v59, (_BYTE *)(v58 + 56));
    if ( v66 > *(_QWORD *)(v56 - 84) )
      v66 = *(_QWORD *)(v56 - 84);
    *(_QWORD *)(v56 - 76) = v66;
    *(_QWORD *)(v56 - 68) = ReadGenAddrMaybeHiddenEx((__int64)v59, (_BYTE *)(v58 + 80));
    *(_QWORD *)(v56 - 60) = ReadGenAddrMaybeHiddenEx((__int64)v59, (_BYTE *)(v58 + 440));
    if ( CpcRegisterIsSupportedEx(v58 + 368) )
    {
      v133 = ReadGenAddrMaybeHiddenEx((__int64)v59, (_BYTE *)(v58 + 368)) != 0;
      v134 = *(_BYTE *)(v58 + 368) != 126;
    }
    if ( v56 - 132 != v8 )
    {
      v70 = *(_QWORD *)(v56 - 92);
      v71 = *(_QWORD *)(v8 + 40);
      if ( v70 != v71 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_155;
        v77 = 37;
        goto LABEL_184;
      }
      v70 = *(_QWORD *)(v56 - 84);
      v71 = *(_QWORD *)(v8 + 48);
      if ( v70 != v71 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_155;
        v77 = 38;
LABEL_184:
        WPP_RECORDER_SF_ii(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v77,
          (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids,
          v70,
          v71);
        goto LABEL_155;
      }
      v70 = *(_QWORD *)(v56 - 68);
      v71 = *(_QWORD *)(v8 + 64);
      if ( v70 != v71 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v77 = 39;
          goto LABEL_184;
        }
LABEL_155:
        started = -1073741811;
        goto LABEL_302;
      }
      v72 = *(_QWORD *)(v56 - 76);
      if ( v72 != *(_QWORD *)(v8 + 56) )
      {
        if ( !v128 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ii(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x28u,
              (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids,
              v72,
              *(_QWORD *)(v8 + 56));
          goto LABEL_155;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_iii((__int64)WPP_GLOBAL_Control->DeviceExtension, v67, v68, v69, v122);
        *(_QWORD *)(v56 - 76) = *(_QWORD *)(v8 + 56);
      }
    }
    v73 = *(_QWORD *)(v56 - 84);
    v74 = 100LL * *(_QWORD *)(v56 - 92) / v73;
    *(_DWORD *)(v56 - 32) = v74;
    *(_DWORD *)(v56 - 28) = v74;
    v75 = 100LL * *(_QWORD *)(v56 - 76) / v73;
    v76 = 100LL * *(_QWORD *)(v56 - 68) / v73;
    if ( !(_DWORD)v76 )
      LODWORD(v76) = 1;
    *(_DWORD *)(v56 - 20) = v76;
    if ( !(_DWORD)v75 )
      LODWORD(v75) = 1;
    *(_DWORD *)(v56 - 24) = v75;
    v56 += 408LL;
  }
  if ( *(_QWORD *)(v8 + 40) < *(_QWORD *)(v8 + 48) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_155;
    v63 = 42;
    goto LABEL_190;
  }
  v78 = v8 + 64;
  if ( *(_QWORD *)(v8 + 56) < *(_QWORD *)(v8 + 64) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_155;
    v63 = 43;
LABEL_190:
    v64 = v57;
    goto LABEL_154;
  }
  v79 = v138;
  v80 = (__int64)v151;
  v81 = (int)v149;
  inited = AllocateAndInitKernelPerfStatesRegistration((__int64)v151, (int)v149, v57 + ((_BYTE)v138 != 0));
  v153 = inited;
  v5 = inited;
  if ( !inited )
    goto LABEL_6;
  v83 = v141;
  v84 = v150;
  *(_WORD *)(inited + 4) = v150;
  if ( v83 )
  {
    *(_QWORD *)(inited + 448) = v154;
    *(_QWORD *)(inited + 456) = v161;
    if ( (_BYTE)v152 && v162 && v84 == 254 )
    {
      *(_QWORD *)(inited + 464) = v162;
      *(_QWORD *)(inited + 96) = v8;
    }
    v85 = v155;
    v86 = v123;
  }
  else
  {
    v86 = v123;
    if ( v123 )
    {
      if ( v124 )
      {
        v19 = (_BYTE)v157 == 0;
        *(_QWORD *)(inited + 448) = PerfControlCpcSingleRegister;
        v87 = PerfControlCpcSingleRegisterHidden;
        if ( v19 )
          v87 = PerfControlCpcSingleRegister;
      }
      else
      {
        *(_QWORD *)(inited + 448) = PerfControlCpc;
        v87 = (void *)qword_1C00126D8;
        if ( !qword_1C00126D8 || !CpcHiddenProcessorMitigationReported )
          v87 = PerfControlCpcHidden;
      }
    }
    else
    {
      v87 = AcpiCStateIdleCancel;
      *(_QWORD *)(v5 + 448) = AcpiCStateIdleCancel;
    }
    *(_QWORD *)(v5 + 456) = v87;
    v85 = PerfSelectionCpc;
  }
  *(_QWORD *)(v5 + 440) = v85;
  if ( (_BYTE)v143 )
  {
    if ( v126 )
      *(_QWORD *)(v5 + 472) = CpcReadFeedback;
    if ( v127 )
    {
      *(_QWORD *)(v5 + 480) = CpcAcquirePerformance;
      *(_QWORD *)(v5 + 488) = CpcCommitPerformance;
    }
    if ( v131 )
    {
      *(_QWORD *)(v5 + 416) = AcquirePccSubspace;
      *(_QWORD *)(v5 + 424) = ExecutePccWrite;
    }
    v88 = *(_DWORD *)(*(_QWORD *)(v80 + 256) + 84LL);
    if ( v88 )
      *(_DWORD *)(v5 + 40) = 0x989680 / (v88 >> 1);
  }
  if ( IsSupported || _bittest64((const signed __int64 *)(v80 + 280), 0x26u) )
    *(_QWORD *)(v5 + 432) = CpcReinitializeHandler;
  *(_BYTE *)(v5 + 6) = 0;
  v89 = v86 || v83;
  v90 = v148;
  *(_BYTE *)(v5 + 7) = v89;
  *(_BYTE *)(v5 + 8) = v128;
  *(_BYTE *)(v5 + 52) = v133;
  v91 = v139;
  if ( v90 )
    v91 = v90;
  *(_DWORD *)(v5 + 20) = v91;
  *(_DWORD *)(v5 + 24) = *(_DWORD *)(v8 + 100);
  v92 = *(_DWORD *)(v8 + 108);
  *(_DWORD *)(v5 + 28) = v92;
  v93 = v92;
  v94 = *(_DWORD *)(v8 + 112);
  if ( !v92 )
    v93 = 1;
  *(_DWORD *)(v5 + 28) = v93;
  v95 = v94;
  if ( !v94 )
    v95 = 1;
  *(_DWORD *)(v5 + 32) = v95;
  *(_QWORD *)(v5 + 56) = *(_QWORD *)v78;
  *(_QWORD *)(v5 + 64) = *(_QWORD *)(v8 + 48);
  v96 = *(_QWORD *)(v80 + 344);
  if ( v96 )
    *(_QWORD *)(v5 + 368) = v96;
  *(_QWORD *)(v5 + 384) = *(_QWORD *)(v80 + 352);
  if ( (_BYTE)v144 )
    *(_BYTE *)(v5 + 9) = 1;
  if ( (_BYTE)v145 )
  {
    if ( v83 )
      *(_BYTE *)(v5 + 10) = 1;
    else
      *(_QWORD *)(v5 + 400) = CpcSetAutonomousActivityWindow;
  }
  if ( v134 )
    *(_QWORD *)(v5 + 408) = CpcSetAutonomousMode;
  if ( v135 )
    *(_QWORD *)(v5 + 376) = CpcSetTimeWindow;
  if ( (*(_DWORD *)(v80 + 280) & 0x400000) != 0 && v83 && v136 && (v84 == 254 || v81 == 1) )
  {
    *(_BYTE *)(v5 + 11) = 1;
    if ( !_bittest64((const signed __int64 *)(v80 + 280), 0x22u) || (v97 = 0, v129[0]) )
      v97 = 1;
    *(_BYTE *)(v5 + 12) = v97;
    *(_DWORD *)(v5 + 48) = v146;
  }
  if ( v137[0] )
  {
    v98 = *(unsigned int *)(v5 + 20);
    *(_BYTE *)(v5 + 13) = 1;
    v99 = *(_QWORD *)(v8 + 48);
    v101 = v98 + (v99 >> 1);
    v100 = v101 / v99;
    *(_DWORD *)(v5 + 72) = v100;
    *(_DWORD *)(v5 + 76) = *(_DWORD *)(v8 + 40) * v100;
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(v8 + 48) * v100;
    *(_DWORD *)(v5 + 84) = *(_DWORD *)v78 * v100;
  }
  v102 = *(_QWORD *)(v8 + 48);
  v103 = *(_QWORD *)(v8 + 72);
  v104 = *(_QWORD *)(v5 + 544);
  if ( v102 == v103 )
    LODWORD(v105) = 100;
  else
    v105 = 100 * v103 / v102;
  *(_DWORD *)(v104 + 8) = v105;
  *(_QWORD *)v104 = PerfReadWrappingCounter;
  *(_DWORD *)(v104 + 12) = 1;
  *(_BYTE *)(v104 + 16) = v126 == 0;
  *(_BYTE *)(v104 + 17) = 1;
  if ( v79 )
  {
    v106 = *(_QWORD *)(v5 + 544);
    *(_QWORD *)(v106 + 32) = 100LL;
    *(_QWORD *)(v106 + 24) = PerfReadWrappingCounter;
    *(_WORD *)(v106 + 40) = 257;
  }
  DisplayKernelPerfStates(v5, 1LL, (__int64)PerfReadWrappingCounter);
  v148 = *(_QWORD *)(v5 + 552);
  v149 = *(_QWORD **)(v5 + 560);
  ResetEnumerationContext((__int64 *)v142);
  if ( !(unsigned int)EnumerateNextDevice((__int64 *)v142, &DeferredContext) )
  {
    v107 = v148;
    do
    {
      v108 = *(_QWORD *)(v78 + 80);
      v109 = 100;
      v110 = DeferredContext;
      v148 = v108;
      if ( *(_BYTE *)(v78 + 67) )
      {
        v111 = (_BYTE *)(v108 + 104);
        if ( *(_BYTE *)(v108 + 104) == 127 && !*((_DWORD *)DeferredContext + 20) )
        {
          KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
          v112 = &PreviousAffinity;
          if ( v125 )
            v112 = 0LL;
          KeSetSystemGroupAffinityThread(&Affinity, v112);
          v125 = 1;
        }
        v113 = ReadGenAddrMaybeHiddenEx((__int64)v110, v111);
        v114 = *(_QWORD *)(v78 - 16);
        if ( v113 > v114 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              1u,
              0x2Cu,
              (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids);
          v113 = *(_QWORD *)(v78 - 16);
          v114 = v113;
        }
        if ( v113 < *(_QWORD *)v78 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              1u,
              0x2Du,
              (__int64)&WPP_9a67812f3be535b726a3611c121e2d7f_Traceguids);
            v114 = *(_QWORD *)(v78 - 16);
          }
          v113 = *(_QWORD *)v78;
        }
        v109 = *(_DWORD *)(v78 + 48);
        *(_QWORD *)(v78 + 24) = v113;
        v115 = 100 * v113 / v114;
        if ( (unsigned int)v115 > v109 )
          v109 = v115;
        *(_DWORD *)(v78 + 52) = v109;
        if ( v109 != v110[185] )
          ProcLibCapChange((__int64)v151, v110[116], v110[128], v109);
      }
      else
      {
        *(_QWORD *)(v78 + 24) = *(_QWORD *)(v78 - 16);
      }
      InitCommonPerfStateContext((__int64)v110, (_QWORD *)(v78 - 64), v107, v109, v109 < 0x64 ? 2 : 0);
      v116 = v148;
      v117 = v149;
      v151[27] = v78 - 64;
      *v117 = v78 + 136;
      *(_QWORD *)(v78 + 184) = GetCpcDifferentialFeedback;
      *(_QWORD *)(v78 + 192) = v116;
      v118 = *(_BYTE *)(v116 + 297);
      if ( v118 < 0x40u )
        *(_QWORD *)(v78 + 168) = (1LL << v118) - 1;
      v119 = *(_BYTE *)(v116 + 273);
      if ( v119 < 0x40u )
        *(_QWORD *)(v78 + 176) = (1LL << v119) - 1;
      v120 = v117 + 1;
      v149 = v120;
      if ( (_BYTE)v138 )
      {
        *v120 = v78 + 200;
        *(_QWORD *)(v78 + 248) = *((_QWORD *)v110 + 42);
        v149 = v120 + 1;
      }
      v107 += 32LL;
      v78 += 408LL;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v142, &DeferredContext) );
    v5 = v153;
    v8 = v156;
    v80 = (__int64)v151;
  }
  if ( v125 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  *(_BYTE *)(v5 + 15) = 1;
  started = v163(v5);
  if ( started >= 0 )
  {
    ResetEnumerationContext((__int64 *)v142);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v142, &DeferredContext) )
    {
      *((_QWORD *)DeferredContext + 31) = v8;
      v8 += 408LL;
    }
    if ( _bittest64((const signed __int64 *)(v80 + 280), 0x26u) )
    {
      ResetEnumerationContext((__int64 *)v142);
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v142, &DeferredContext) )
      {
        if ( !*((_DWORD *)DeferredContext + 20) )
          CpcConnectNativeInterrupt((struct _DEVICE_OBJECT **)DeferredContext);
      }
    }
    v8 = 0LL;
    started = 0;
  }
LABEL_302:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00124D8);
  if ( v5 )
    ExFreePoolWithTag((PVOID)v5, (ULONG)1919119952);
  if ( v8 )
    ExFreePoolWithTag((PVOID)v8, (ULONG)1919119952);
  return (unsigned int)started;
}
