/*
 * XREFs of InitCpcStatesInternal @ 0x1C0030214
 * Callers:
 *     RegisterHvCpcCounters @ 0x1C00242E0 (RegisterHvCpcCounters.c)
 *     RegisterKernelCpc @ 0x1C0032A10 (RegisterKernelCpc.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0001008 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C000103C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EnumerateNextDevice @ 0x1C0001840 (EnumerateNextDevice.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x1C0001C68 (WriteGenAddrMaybeHiddenEx.c)
 *     ResetEnumerationContext @ 0x1C00027D4 (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     ClearEnumerationContext @ 0x1C0003890 (ClearEnumerationContext.c)
 *     ReadGenAddrHiddenEx @ 0x1C0003A70 (ReadGenAddrHiddenEx.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0003AA4 (ReadGenAddrMaybeHiddenEx.c)
 *     CpcRegisterIsSupportedEx @ 0x1C00047F4 (CpcRegisterIsSupportedEx.c)
 *     WPP_RECORDER_SF_ii @ 0x1C00089BC (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_iii @ 0x1C0008AE4 (WPP_RECORDER_SF_iii.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000BE00 (memset.c)
 *     GetRegistryDwordValue @ 0x1C00203E4 (GetRegistryDwordValue.c)
 *     ProcLibTraceNoPayloadEvent @ 0x1C0021168 (ProcLibTraceNoPayloadEvent.c)
 *     CpcConnectNativeInterrupt @ 0x1C0022F74 (CpcConnectNativeInterrupt.c)
 *     ExecutePccCommand @ 0x1C0024F38 (ExecutePccCommand.c)
 *     StartPccCommand @ 0x1C00252C0 (StartPccCommand.c)
 *     DisplayKernelPerfStates @ 0x1C002B710 (DisplayKernelPerfStates.c)
 *     ProcLibCapChange @ 0x1C002B85C (ProcLibCapChange.c)
 *     GetPerfDomain @ 0x1C002CF98 (GetPerfDomain.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1C002F9F8 (AllocateAndInitKernelPerfStatesRegistration.c)
 *     GetPackageAffinity @ 0x1C002FF70 (GetPackageAffinity.c)
 *     InitCommonPerfStateContext @ 0x1C0030140 (InitCommonPerfStateContext.c)
 */

__int64 __fastcall InitCpcStatesInternal(__int64 a1, __int64 (__fastcall *a2)(__int64))
{
  int v2; // r12d
  __int64 *v3; // r13
  __int64 v4; // rsi
  int started; // edi
  __int64 Pool2; // rax
  __int64 v7; // r14
  char v8; // r15
  int v9; // r11d
  PVOID v10; // rbx
  int v11; // eax
  __int64 (__fastcall *v12)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, unsigned __int64 *); // r11
  __int64 v13; // rdi
  char v14; // r13
  int v15; // esi
  _BYTE *v16; // rbx
  __int64 v17; // rdx
  char v18; // al
  __int64 v19; // r9
  int v20; // ecx
  char v21; // al
  int v22; // edx
  unsigned __int8 v23; // r10
  unsigned int v24; // r11d
  int v25; // ecx
  unsigned __int8 v26; // al
  bool v27; // zf
  unsigned int v28; // ecx
  char v29; // al
  __int128 v30; // xmm1
  unsigned int v31; // r9d
  __int64 v32; // xmm0_8
  __int64 v33; // rdx
  _BYTE *v34; // rdx
  int v35; // r9d
  __int128 *v36; // rdx
  char v37; // r8
  int v38; // eax
  int v39; // r12d
  unsigned int *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r15
  __int64 v44; // r12
  _QWORD *v45; // rbx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v47; // rbx
  __int64 *v48; // r15
  __int64 v49; // r14
  __int64 v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r11
  __int64 v55; // rbx
  unsigned int v56; // r10d
  int v57; // r11d
  __int64 v58; // rdi
  PVOID v59; // r15
  struct _GROUP_AFFINITY *v60; // rdx
  _BYTE *v61; // rcx
  int v62; // r11d
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int16 v64; // r9
  unsigned int v65; // r8d
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rax
  unsigned __int64 v76; // rcx
  int v77; // eax
  unsigned __int64 v78; // r8
  unsigned __int64 v79; // rax
  unsigned __int16 v80; // r9
  __int64 v81; // rdi
  char v82; // r13
  __int64 v83; // rbx
  int v84; // r15d
  _QWORD *inited; // rax
  char v86; // dl
  int v87; // r8d
  __int64 (__fastcall *v88)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, unsigned __int64 *); // rax
  char v89; // r9
  void *v90; // rax
  unsigned int v91; // ecx
  bool v92; // al
  int v93; // ecx
  int v94; // eax
  int v95; // eax
  int v96; // ecx
  __int64 v97; // rax
  char v98; // al
  __int64 v99; // rcx
  unsigned __int64 v100; // r8
  int v101; // eax
  unsigned __int64 v102; // r8
  __int64 v103; // rax
  __int64 v104; // rcx
  unsigned __int64 v105; // rax
  __int64 v106; // rax
  int v107; // eax
  int v108; // r11d
  __int64 v109; // rsi
  unsigned int v110; // r15d
  unsigned __int64 v111; // rax
  _DWORD *v112; // r13
  _BYTE *v113; // rbx
  struct _GROUP_AFFINITY *v114; // rdx
  unsigned __int64 v115; // rax
  unsigned __int64 v116; // rcx
  unsigned __int64 v117; // rax
  unsigned __int64 v118; // rdx
  _QWORD *v119; // r10
  unsigned __int8 v120; // cl
  unsigned __int8 v121; // cl
  _QWORD *v122; // r10
  __int64 v123; // r10
  int v125; // [rsp+20h] [rbp-E0h]
  char v126; // [rsp+60h] [rbp-A0h]
  char v127; // [rsp+61h] [rbp-9Fh]
  char v128; // [rsp+62h] [rbp-9Eh]
  char v129; // [rsp+63h] [rbp-9Dh]
  char v130; // [rsp+64h] [rbp-9Ch]
  char v131; // [rsp+65h] [rbp-9Bh]
  char v132[2]; // [rsp+66h] [rbp-9Ah] BYREF
  PVOID DeferredContext; // [rsp+68h] [rbp-98h] BYREF
  char v134; // [rsp+70h] [rbp-90h]
  char IsSupported; // [rsp+71h] [rbp-8Fh]
  bool v136; // [rsp+72h] [rbp-8Eh]
  bool v137; // [rsp+73h] [rbp-8Dh]
  char v138; // [rsp+74h] [rbp-8Ch]
  char v139; // [rsp+75h] [rbp-8Bh] BYREF
  char v140[2]; // [rsp+76h] [rbp-8Ah] BYREF
  int v141; // [rsp+78h] [rbp-88h]
  unsigned int v142; // [rsp+7Ch] [rbp-84h]
  int v143; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v144[2]; // [rsp+88h] [rbp-78h] BYREF
  int v145; // [rsp+A8h] [rbp-58h]
  int v146; // [rsp+ACh] [rbp-54h]
  int v147; // [rsp+B0h] [rbp-50h]
  int v148; // [rsp+B4h] [rbp-4Ch] BYREF
  int v149; // [rsp+B8h] [rbp-48h]
  int v150; // [rsp+BCh] [rbp-44h]
  unsigned __int64 v151; // [rsp+C0h] [rbp-40h]
  _QWORD *v152; // [rsp+C8h] [rbp-38h]
  int v153; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v154; // [rsp+D8h] [rbp-28h]
  BOOL v155; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v156)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, unsigned __int64 *); // [rsp+E8h] [rbp-18h] BYREF
  __int64 (__fastcall *v157)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, unsigned __int64 *); // [rsp+F0h] [rbp-10h] BYREF
  _QWORD *v158; // [rsp+F8h] [rbp-8h]
  __int64 v159; // [rsp+100h] [rbp+0h]
  __int128 v160; // [rsp+108h] [rbp+8h] BYREF
  __int64 v161; // [rsp+118h] [rbp+18h]
  __int64 v162; // [rsp+120h] [rbp+20h]
  __int64 v163; // [rsp+128h] [rbp+28h] BYREF
  __int64 v164; // [rsp+130h] [rbp+30h] BYREF
  __int64 (__fastcall *v165)(__int64); // [rsp+138h] [rbp+38h]
  struct _GROUP_AFFINITY Affinity; // [rsp+140h] [rbp+40h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v168[272]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v169[272]; // [rsp+270h] [rbp+170h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v170; // [rsp+380h] [rbp+280h] BYREF

  v165 = a2;
  v3 = (__int64 *)a1;
  v154 = (__int64 *)a1;
  DeferredContext = 0LL;
  Affinity = 0LL;
  memset(v168, 0, 0x108uLL);
  v132[0] = 0;
  v156 = 0LL;
  v163 = 0LL;
  v157 = 0LL;
  memset(v169, 0, 0x108uLL);
  v164 = 0LL;
  v148 = 0;
  LODWORD(v161) = 0;
  memset(v144, 0, sizeof(v144));
  v139 = 0;
  v4 = 0LL;
  v153 = 0;
  PreviousAffinity = 0LL;
  v140[0] = 0;
  v160 = 0LL;
  v128 = 0;
  ClearEnumerationContext(v144);
  v143 = 0;
  v151 = 0LL;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
    (__int64)L"~MHz",
    &v143);
  if ( !v143 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x21u,
        (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids);
    v3[35] &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(v142) = v3[42] != 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0011458,
    0LL);
  LODWORD(v152) = GetPerfDomain((__int64)v3, (__int64)v144, &v153);
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(408 * (_DWORD)v152), 1919119952LL);
  v159 = Pool2;
  v7 = Pool2;
  if ( !Pool2 )
  {
LABEL_6:
    started = -1073741670;
    goto LABEL_297;
  }
  LOBYTE(v149) = 0;
  LOBYTE(Pool2) = 1;
  v127 = 1;
  v8 = 1;
  v132[0] = 1;
  v131 = 1;
  LOBYTE(v2) = 0;
  v145 = v2;
  LOBYTE(v150) = 0;
  v134 = 0;
  v129 = 0;
  v130 = 0;
  LOBYTE(v146) = 0;
  IsSupported = 0;
  LOBYTE(v147) = 0;
  v138 = 0;
  v126 = 0;
  v137 = 0;
  v148 = 1000;
  v136 = 0;
  v141 = Pool2;
  v162 = 0LL;
  KeInitializeAffinityEx2(v168, 32LL);
  ResetEnumerationContext((__int64 *)v144);
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
  {
    if ( !*((_DWORD *)DeferredContext + 20) )
      KeAddProcessorAffinityEx(v168, *((unsigned int *)DeferredContext + 14));
  }
  v155 = 0;
  ResetEnumerationContext((__int64 *)v144);
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
  {
    v10 = DeferredContext;
    if ( *((_DWORD *)DeferredContext + 20) == v9 )
    {
      v162 = *((_QWORD *)DeferredContext + 74);
      KeInitializeAffinityEx2(v169, 32LL);
      if ( (int)GetPackageAffinity((__int64)v10, (__int64)v169) >= 0 )
        v155 = KeIsEqualAffinityEx(v169, v168) != 0;
      break;
    }
  }
  ResetEnumerationContext((__int64 *)v144);
  v11 = EnumerateNextDevice((__int64 *)v144, &DeferredContext);
  if ( !v11 )
  {
    v13 = v7 + 124;
    LOBYTE(v7) = v149;
    v14 = 0;
    LOBYTE(v15) = v150;
    do
    {
      v127 = v8;
      v16 = (_BYTE *)*((_QWORD *)DeferredContext + 74);
      if ( v16[272] == 10 || v16[296] == 10 )
        v129 = 1;
      if ( v16[344] == 10 || v16[152] == 10 || v16[176] == 10 || v16[128] == 10 || v16[200] == 10 || v16[416] == 10 )
        v130 = 1;
      LODWORD(v7) = (unsigned __int8)v7;
      if ( v16[104] == 10 )
        LODWORD(v7) = 1;
      v15 = (unsigned __int8)v15;
      if ( v16[8] == 10 )
        v15 = 1;
      if ( v16[392] == 10 || v16[368] == 10 || v16[224] == 10 )
        v134 = 1;
      *(_QWORD *)(v13 + 20) = v16;
      IsSupported = CpcRegisterIsSupportedEx((__int64)(v16 + 344));
      *(_BYTE *)v13 = IsSupported;
      *(_BYTE *)(v13 + 1) = CpcRegisterIsSupportedEx((__int64)(v16 + 128));
      *(_BYTE *)(v13 + 2) = CpcRegisterIsSupportedEx((__int64)(v16 + 152));
      *(_BYTE *)(v13 + 3) = CpcRegisterIsSupportedEx((__int64)(v16 + 176));
      *(_BYTE *)(v13 + 6) = CpcRegisterIsSupportedEx((__int64)(v16 + 200));
      *(_BYTE *)(v13 + 7) = CpcRegisterIsSupportedEx((__int64)(v16 + 104));
      v138 = CpcRegisterIsSupportedEx(v17);
      v18 = CpcRegisterIsSupportedEx((__int64)(v16 + 416));
      v20 = (unsigned __int8)v146;
      if ( v18 )
        v20 = 1;
      *(_BYTE *)(v13 + 4) = v18;
      v146 = v20;
      v21 = CpcRegisterIsSupportedEx(v19);
      LOBYTE(v25) = v147;
      *(_BYTE *)(v13 + 5) = v21;
      v25 = (unsigned __int8)v25;
      if ( v21 )
        v25 = v22;
      v26 = v23;
      v27 = v16[272] == 127;
      v147 = v25;
      v28 = v24;
      if ( v27 )
        v26 = v24;
      if ( v16[296] != 127 )
        v28 = v26;
      v142 = v28;
      if ( !qword_1C0011688 || (v29 = qword_1C0011688(v16), v24 = 0, !v29) )
        v131 = v24;
      v30 = 0LL;
      v161 = 0LL;
      v31 = v24;
      v32 = 0LL;
      v160 = 0LL;
      while ( v31 < 5 )
      {
        if ( v31 )
        {
          switch ( v31 )
          {
            case 1u:
              v33 = (__int64)(v16 + 152);
              break;
            case 2u:
              v33 = (__int64)(v16 + 176);
              break;
            case 3u:
              v33 = (__int64)(v16 + 416);
              break;
            default:
              v33 = (__int64)(v16 + 200);
              break;
          }
        }
        else
        {
          v33 = (__int64)(v16 + 128);
        }
        if ( CpcRegisterIsSupportedEx(v33) )
        {
          v126 = 1;
          if ( *v34 == 10 )
            goto LABEL_67;
          if ( CpcRegisterIsSupportedEx((__int64)&v160) )
          {
            if ( (_BYTE)v160 != v37
              || *(_QWORD *)((char *)&v160 + 4) != *(_QWORD *)((char *)v36 + 4)
              || BYTE3(v160) != *((_BYTE *)v36 + 3) )
            {
LABEL_67:
              v14 = 1;
              v8 = 0;
              v127 = 0;
              goto LABEL_71;
            }
          }
          else
          {
            v30 = *v36;
            v32 = *((_QWORD *)v36 + 2);
            v160 = *v36;
            v161 = v32;
          }
          v14 = 1;
        }
        v31 = v35 + 1;
      }
      v126 = v14;
      if ( v14 )
      {
        v126 = v14;
        if ( v8 )
        {
          *(_OWORD *)(v13 + 28) = v30;
          v126 = v14;
          *(_QWORD *)(v13 + 44) = v32;
        }
      }
LABEL_71:
      if ( qword_1C00116A0 )
      {
        v38 = qword_1C00116A0(DeferredContext, v13 - 124, &v156, &v163, &v164, &v157, &v139, v140, v132, &v148);
        v39 = (unsigned __int8)v141;
        if ( v38 < 0 )
          v39 = 0;
        v141 = v39;
      }
      LOBYTE(v2) = v145;
      v40 = (unsigned int *)&Cpc2RegisterTable;
      v41 = 19LL;
      do
      {
        v42 = *v40;
        v40 += 6;
        v2 = (unsigned __int8)v2;
        if ( v16[v42] == 10 )
          v2 = 1;
        --v41;
      }
      while ( v41 );
      v145 = v2;
      v13 += 408LL;
      v11 = EnumerateNextDevice((__int64 *)v144, &DeferredContext);
      v12 = 0LL;
    }
    while ( !v11 );
    v3 = v154;
    v150 = v15;
    v4 = 0LL;
    v149 = v7;
    v7 = v159;
  }
  if ( v156 == v12 || v157 == v12 )
  {
    LOBYTE(v11) = (_BYTE)v12;
    v141 = v11;
  }
  if ( (_BYTE)v2 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0011A48,
      0LL);
    ResetEnumerationContext((__int64 *)v144);
    v43 = v7 + 144;
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
    {
      if ( *(_BYTE *)(v43 - 20) )
      {
        v44 = *(_QWORD *)v43;
        v45 = DeferredContext;
        if ( *(_BYTE *)(*(_QWORD *)v43 + 344LL) == 127 && !*((_DWORD *)DeferredContext + 20) )
        {
          KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
          p_PreviousAffinity = &PreviousAffinity;
          if ( v128 )
            p_PreviousAffinity = 0LL;
          KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
          v128 = 1;
        }
        if ( (*(_BYTE *)(v45[32] + 144LL) & 1) == 0 )
        {
          started = StartPccCommand(v3[32]);
          if ( started < 0 )
          {
LABEL_101:
            ResetEnumerationContext((__int64 *)v144);
            while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
            {
              if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 32) + 144LL) & 1) != 0 )
              {
                v47 = v3[32];
                (*(void (__fastcall **)(_QWORD))(v47 + 136))(*(_QWORD *)(v47 + 72));
                *(_DWORD *)(v47 + 144) &= ~1u;
              }
            }
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
              WdfDriverGlobals,
              qword_1C0011A48);
            goto LABEL_297;
          }
        }
        WriteGenAddrMaybeHiddenEx((__int64)v45, (_BYTE *)(v44 + 344), 1LL);
      }
      v43 += 408LL;
    }
    ResetEnumerationContext((__int64 *)v144);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 32) + 144LL) & 1) != 0 )
      {
        started = ExecutePccCommand(v3[32]);
        if ( started < 0 )
          goto LABEL_101;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0011A48);
  }
  ResetEnumerationContext((__int64 *)v144);
  if ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
  {
    v48 = (__int64 *)(v7 + 144);
    v49 = v162;
    do
    {
      v50 = *v48;
      if ( *((_DWORD *)DeferredContext + 20) == 2
        && *(_BYTE *)(v50 + 32) == 10
        && !ReadGenAddrHiddenEx(*((unsigned int *)DeferredContext + 21), (_BYTE *)(v50 + 32)) )
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
          ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_DEGRADED);
          if ( (unsigned int)dword_1C0011068 > 5 && tlgKeywordOn() )
            tlgWriteTransfer_EtwWriteTransfer(v51, (unsigned __int8 *)dword_1C000E19B, v52, v53, (ULONG)2, &v170);
          CpcHiddenProcessorMitigationReported = 1;
        }
        *(_QWORD *)(v50 + 32) = *(_QWORD *)(v49 + 32);
        *(_DWORD *)(v50 + 40) = *(_DWORD *)(v49 + 40);
        if ( *(_BYTE *)(v50 + 8) == 10 )
        {
          *(_QWORD *)(v50 + 8) = *(_QWORD *)(v49 + 8);
          *(_DWORD *)(v50 + 16) = *(_DWORD *)(v49 + 16);
        }
        if ( *(_BYTE *)(v50 + 56) == 10 )
        {
          *(_QWORD *)(v50 + 56) = *(_QWORD *)(v49 + 56);
          *(_DWORD *)(v50 + 64) = *(_DWORD *)(v49 + 64);
        }
        if ( *(_BYTE *)(v50 + 80) == 10 )
        {
          *(_QWORD *)(v50 + 80) = *(_QWORD *)(v49 + 80);
          *(_DWORD *)(v50 + 88) = *(_DWORD *)(v49 + 88);
        }
        if ( *(_BYTE *)(v50 + 440) == 10 )
        {
          *(_QWORD *)(v50 + 440) = *(_QWORD *)(v49 + 440);
          *(_DWORD *)(v50 + 448) = *(_DWORD *)(v49 + 448);
        }
        if ( *(_BYTE *)(v50 + 104) == 10 )
        {
          *(_QWORD *)(v50 + 104) = *(_QWORD *)(v49 + 104);
          *(_DWORD *)(v50 + 112) = *(_DWORD *)(v49 + 112);
        }
      }
      v48 += 51;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) );
    v7 = v159;
    v4 = v54;
  }
  ResetEnumerationContext((__int64 *)v144);
  v55 = v7 + 132;
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
  {
    v58 = *(_QWORD *)(v55 + 12);
    v59 = DeferredContext;
    if ( (*(_BYTE *)(v58 + 8) == 127
       || *(_BYTE *)(v58 + 32) == 127
       || *(_BYTE *)(v58 + 56) == 127
       || *(_BYTE *)(v58 + 80) == 127
       || *(_BYTE *)(v58 + 440) == 127
       || *(_BYTE *)(v58 + 368) == 127)
      && *((_DWORD *)DeferredContext + 20) == v57 )
    {
      KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
      v60 = &PreviousAffinity;
      if ( v128 )
        v60 = 0LL;
      KeSetSystemGroupAffinityThread(&Affinity, v60);
      v128 = 1;
    }
    *(_BYTE *)v55 = v129;
    *(_BYTE *)(v55 + 1) = v149;
    *(_BYTE *)(v55 + 2) = v150;
    *(_BYTE *)(v55 + 3) = v130;
    if ( !CpcRegisterIsSupportedEx(v58 + 488) || *v61 == 126 && *(_DWORD *)(v58 + 492) == v62 )
    {
      LODWORD(GenAddrMaybeHidden) = v143;
    }
    else
    {
      GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx((__int64)v59, v61);
      v151 = GenAddrMaybeHidden;
      if ( !(_DWORD)GenAddrMaybeHidden )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_151;
        v64 = 35;
LABEL_149:
        v65 = 1;
LABEL_150:
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          v65,
          v64,
          (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids);
        goto LABEL_151;
      }
    }
    *(_DWORD *)(v55 - 36) = GenAddrMaybeHidden;
    *(_QWORD *)(v55 - 92) = ReadGenAddrMaybeHiddenEx((__int64)v59, (_BYTE *)(v58 + 8));
    v66 = ReadGenAddrMaybeHiddenEx((__int64)v59, (_BYTE *)(v58 + 32));
    *(_QWORD *)(v55 - 84) = v66;
    if ( !v66 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_151;
      v64 = 36;
      goto LABEL_149;
    }
    v67 = ReadGenAddrMaybeHiddenEx((__int64)v59, (_BYTE *)(v58 + 56));
    v68 = *(_QWORD *)(v55 - 84);
    *(_QWORD *)(v55 - 76) = v67;
    if ( v67 > v68 )
      *(_QWORD *)(v55 - 76) = v68;
    *(_QWORD *)(v55 - 68) = ReadGenAddrMaybeHiddenEx((__int64)v59, (_BYTE *)(v58 + 80));
    *(_QWORD *)(v55 - 60) = ReadGenAddrMaybeHiddenEx((__int64)v59, (_BYTE *)(v58 + 440));
    if ( CpcRegisterIsSupportedEx(v58 + 368) )
    {
      v136 = ReadGenAddrMaybeHiddenEx((__int64)v59, (_BYTE *)(v58 + 368)) != 0;
      v137 = *(_BYTE *)(v58 + 368) != 126;
    }
    if ( v55 - 132 != v7 )
    {
      v72 = *(_QWORD *)(v55 - 92);
      v73 = *(_QWORD *)(v7 + 40);
      if ( v72 != v73 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_151;
        v80 = 37;
        goto LABEL_180;
      }
      v72 = *(_QWORD *)(v55 - 84);
      v73 = *(_QWORD *)(v7 + 48);
      if ( v72 != v73 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_151;
        v80 = 38;
LABEL_180:
        WPP_RECORDER_SF_ii(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v80,
          (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids,
          v72,
          v73);
        goto LABEL_151;
      }
      v72 = *(_QWORD *)(v55 - 68);
      v73 = *(_QWORD *)(v7 + 64);
      if ( v72 != v73 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v80 = 39;
          goto LABEL_180;
        }
LABEL_151:
        started = -1073741811;
        goto LABEL_297;
      }
      v74 = *(_QWORD *)(v55 - 76);
      v75 = *(_QWORD *)(v7 + 56);
      if ( v74 != v75 )
      {
        if ( !v131 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ii(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x28u,
              (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids,
              v74,
              *(_QWORD *)(v7 + 56));
          goto LABEL_151;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_iii((__int64)WPP_GLOBAL_Control->DeviceExtension, v69, v70, v71, v125);
          v75 = *(_QWORD *)(v7 + 56);
        }
        *(_QWORD *)(v55 - 76) = v75;
      }
    }
    v76 = *(_QWORD *)(v55 - 84);
    v77 = 100LL * *(_QWORD *)(v55 - 92) / v76;
    *(_DWORD *)(v55 - 32) = v77;
    *(_DWORD *)(v55 - 28) = v77;
    v78 = 100LL * *(_QWORD *)(v55 - 76) / v76;
    v79 = 100LL * *(_QWORD *)(v55 - 68) / v76;
    if ( !(_DWORD)v79 )
      LODWORD(v79) = 1;
    *(_DWORD *)(v55 - 20) = v79;
    if ( !(_DWORD)v78 )
      LODWORD(v78) = 1;
    *(_DWORD *)(v55 - 24) = v78;
    v55 += 408LL;
  }
  if ( *(_QWORD *)(v7 + 40) < *(_QWORD *)(v7 + 48) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_151;
    v64 = 42;
    goto LABEL_186;
  }
  v81 = v7 + 64;
  if ( *(_QWORD *)(v7 + 56) < *(_QWORD *)(v7 + 64) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_151;
    v64 = 43;
LABEL_186:
    v65 = v56;
    goto LABEL_150;
  }
  v82 = v142;
  v83 = (__int64)v154;
  v84 = (int)v152;
  inited = AllocateAndInitKernelPerfStatesRegistration((__int64)v154, (int)v152, v56 + ((_BYTE)v142 != 0));
  v158 = inited;
  v4 = (__int64)inited;
  if ( !inited )
    goto LABEL_6;
  v86 = v141;
  v87 = v153;
  *((_WORD *)inited + 2) = v153;
  if ( v86 )
  {
    inited[56] = v156;
    inited[57] = v163;
    if ( v155 && v164 && v87 == 254 )
    {
      inited[58] = v164;
      inited[12] = v7;
    }
    v88 = v157;
    v89 = v126;
  }
  else
  {
    v89 = v126;
    if ( v126 )
    {
      if ( v127 )
      {
        v27 = (_BYTE)v160 == 0;
        inited[56] = PerfControlCpcSingleRegister;
        v90 = PerfControlCpcSingleRegisterHidden;
        if ( v27 )
          v90 = PerfControlCpcSingleRegister;
      }
      else
      {
        inited[56] = PerfControlCpc;
        v90 = (void *)qword_1C0011658;
        if ( !qword_1C0011658 || !CpcHiddenProcessorMitigationReported )
          v90 = PerfControlCpcHidden;
      }
    }
    else
    {
      v90 = AcpiCStateIdleCancel;
      *(_QWORD *)(v4 + 448) = AcpiCStateIdleCancel;
    }
    *(_QWORD *)(v4 + 456) = v90;
    v88 = PerfSelectionCpc;
  }
  *(_QWORD *)(v4 + 440) = v88;
  if ( (_BYTE)v145 )
  {
    if ( v129 )
      *(_QWORD *)(v4 + 472) = CpcReadFeedback;
    if ( v130 )
    {
      *(_QWORD *)(v4 + 480) = CpcAcquirePerformance;
      *(_QWORD *)(v4 + 488) = CpcCommitPerformance;
    }
    if ( v134 )
    {
      *(_QWORD *)(v4 + 416) = AcquirePccSubspace;
      *(_QWORD *)(v4 + 424) = ExecutePccWrite;
    }
    v91 = *(_DWORD *)(*(_QWORD *)(v83 + 256) + 84LL);
    if ( v91 )
    {
      v86 = v141;
      *(_DWORD *)(v4 + 40) = 0x989680 / (v91 >> 1);
    }
  }
  if ( IsSupported || _bittest64((const signed __int64 *)(v83 + 280), 0x26u) )
    *(_QWORD *)(v4 + 432) = CpcReinitializeHandler;
  *(_BYTE *)(v4 + 6) = 0;
  v92 = v89 || v86;
  v93 = v151;
  *(_BYTE *)(v4 + 7) = v92;
  *(_BYTE *)(v4 + 8) = v131;
  *(_BYTE *)(v4 + 52) = v136;
  v94 = v143;
  if ( v93 )
    v94 = v93;
  *(_DWORD *)(v4 + 20) = v94;
  *(_DWORD *)(v4 + 24) = *(_DWORD *)(v7 + 100);
  v95 = *(_DWORD *)(v7 + 108);
  *(_DWORD *)(v4 + 28) = v95;
  v96 = *(_DWORD *)(v7 + 112);
  if ( !v95 )
    v95 = 1;
  *(_DWORD *)(v4 + 28) = v95;
  if ( !v96 )
    v96 = 1;
  *(_DWORD *)(v4 + 32) = v96;
  *(_QWORD *)(v4 + 56) = *(_QWORD *)v81;
  *(_QWORD *)(v4 + 64) = *(_QWORD *)(v7 + 48);
  v97 = *(_QWORD *)(v83 + 344);
  if ( v97 )
    *(_QWORD *)(v4 + 368) = v97;
  *(_QWORD *)(v4 + 384) = *(_QWORD *)(v83 + 352);
  if ( (_BYTE)v146 )
    *(_BYTE *)(v4 + 9) = 1;
  if ( (_BYTE)v147 )
  {
    if ( v86 )
      *(_BYTE *)(v4 + 10) = 1;
    else
      *(_QWORD *)(v4 + 400) = CpcSetAutonomousActivityWindow;
  }
  if ( v137 )
    *(_QWORD *)(v4 + 408) = CpcSetAutonomousMode;
  if ( v138 )
    *(_QWORD *)(v4 + 376) = CpcSetTimeWindow;
  if ( (*(_DWORD *)(v83 + 280) & 0x400000) != 0 && v86 && v139 && (v87 == 254 || v84 == 1) )
  {
    *(_BYTE *)(v4 + 11) = 1;
    if ( !_bittest64((const signed __int64 *)(v83 + 280), 0x22u) || (v98 = 0, v132[0]) )
      v98 = 1;
    *(_BYTE *)(v4 + 12) = v98;
    *(_DWORD *)(v4 + 48) = v148;
  }
  if ( v140[0] )
  {
    v99 = *(unsigned int *)(v4 + 20);
    *(_BYTE *)(v4 + 13) = 1;
    v100 = *(_QWORD *)(v7 + 48);
    v101 = (v99 + (v100 >> 1)) / v100;
    *(_DWORD *)(v4 + 72) = v101;
    *(_DWORD *)(v4 + 76) = v101 * *(_DWORD *)(v7 + 40);
    *(_DWORD *)(v4 + 80) = *(_DWORD *)(v7 + 48) * v101;
    *(_DWORD *)(v4 + 84) = *(_DWORD *)v81 * v101;
  }
  v102 = *(_QWORD *)(v7 + 48);
  v103 = *(_QWORD *)(v7 + 72);
  v104 = *(_QWORD *)(v4 + 544);
  if ( v102 == v103 )
    LODWORD(v105) = 100;
  else
    v105 = 100 * v103 / v102;
  *(_DWORD *)(v104 + 8) = v105;
  *(_QWORD *)v104 = PerfReadWrappingCounter;
  *(_DWORD *)(v104 + 12) = 1;
  *(_BYTE *)(v104 + 17) = 1;
  *(_BYTE *)(v104 + 16) = v129 == 0;
  if ( v82 )
  {
    v106 = *(_QWORD *)(v4 + 544);
    *(_QWORD *)(v106 + 32) = 100LL;
    *(_QWORD *)(v106 + 24) = PerfReadWrappingCounter;
    *(_WORD *)(v106 + 40) = 257;
  }
  DisplayKernelPerfStates(v4, (__int64)PerfReadWrappingCounter, v102);
  v151 = *(_QWORD *)(v4 + 552);
  v152 = *(_QWORD **)(v4 + 560);
  ResetEnumerationContext((__int64 *)v144);
  v107 = EnumerateNextDevice((__int64 *)v144, &DeferredContext);
  v108 = 0;
  if ( !v107 )
  {
    v109 = v151;
    do
    {
      v110 = 100;
      v111 = *(_QWORD *)(v81 + 80);
      v112 = DeferredContext;
      v151 = v111;
      if ( *(_BYTE *)(v81 + 67) == (_BYTE)v108 )
      {
        *(_QWORD *)(v81 + 24) = *(_QWORD *)(v81 - 16);
      }
      else
      {
        v113 = (_BYTE *)(v111 + 104);
        if ( *(_BYTE *)(v111 + 104) == 127 && *((_DWORD *)DeferredContext + 20) == v108 )
        {
          KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
          v114 = &PreviousAffinity;
          if ( v128 )
            v114 = 0LL;
          KeSetSystemGroupAffinityThread(&Affinity, v114);
          v128 = 1;
        }
        v115 = ReadGenAddrMaybeHiddenEx((__int64)v112, v113);
        v116 = *(_QWORD *)(v81 - 16);
        if ( v115 > v116 )
        {
          v115 = *(_QWORD *)(v81 - 16);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              1u,
              0x2Cu,
              (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids);
            v115 = *(_QWORD *)(v81 - 16);
          }
          v116 = v115;
        }
        if ( v115 < *(_QWORD *)v81 )
        {
          v115 = *(_QWORD *)v81;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              1u,
              0x2Du,
              (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids);
            v115 = *(_QWORD *)v81;
            v116 = *(_QWORD *)(v81 - 16);
          }
        }
        v110 = *(_DWORD *)(v81 + 48);
        *(_QWORD *)(v81 + 24) = v115;
        v117 = 100 * v115 / v116;
        if ( (unsigned int)v117 > v110 )
          v110 = v117;
        *(_DWORD *)(v81 + 52) = v110;
        if ( v110 != v112[185] )
          ProcLibCapChange((__int64)v154, v112[116], v112[128], v110);
      }
      InitCommonPerfStateContext((__int64)v112, (_QWORD *)(v81 - 64), v109, v110, v110 < 0x64 ? 2 : 0);
      v118 = v151;
      v119 = v152;
      v154[27] = v81 - 64;
      *v119 = v81 + 136;
      *(_QWORD *)(v81 + 184) = GetCpcDifferentialFeedback;
      *(_QWORD *)(v81 + 192) = v118;
      v120 = *(_BYTE *)(v118 + 297);
      if ( v120 < 0x40u )
        *(_QWORD *)(v81 + 168) = (1LL << v120) - 1;
      v121 = *(_BYTE *)(v118 + 273);
      if ( v121 < 0x40u )
        *(_QWORD *)(v81 + 176) = (1LL << v121) - 1;
      v122 = v119 + 1;
      v152 = v122;
      if ( (_BYTE)v142 )
      {
        *v122 = v81 + 200;
        *(_QWORD *)(v81 + 248) = *((_QWORD *)v112 + 42);
        v152 = v122 + 1;
      }
      v109 += 32LL;
      v81 += 408LL;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) );
    v4 = (__int64)v158;
    v7 = v159;
    v83 = (__int64)v154;
  }
  if ( v128 != (_BYTE)v108 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  started = v165(v4);
  if ( started >= 0 )
  {
    ResetEnumerationContext((__int64 *)v144);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
    {
      *((_QWORD *)DeferredContext + 31) = v7;
      v7 += 408LL;
    }
    if ( _bittest64((const signed __int64 *)(v83 + 280), 0x26u) )
    {
      ResetEnumerationContext((__int64 *)v144);
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v144, &DeferredContext) )
      {
        if ( *((_DWORD *)DeferredContext + 20) == (_DWORD)v123 )
          CpcConnectNativeInterrupt((struct _DEVICE_OBJECT **)DeferredContext);
      }
    }
    v7 = v123;
    started = v123;
  }
LABEL_297:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0011458);
  if ( v4 )
    ExFreePoolWithTag((PVOID)v4, (ULONG)1919119952);
  if ( v7 )
    ExFreePoolWithTag((PVOID)v7, (ULONG)1919119952);
  return (unsigned int)started;
}
