/*
 * XREFs of xxxInjectTouchInput @ 0x1C01D73EC
 * Callers:
 *     NtUserInjectTouchInput @ 0x1C01F8300 (NtUserInjectTouchInput.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C007FB78 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C007FBC0 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C009BC14 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     CheckGrantedAccess @ 0x1C00F5C8C (CheckGrantedAccess.c)
 *     GetScreenRect @ 0x1C0110C1C (GetScreenRect.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01D59A8 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C01D5D44 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01D60A0 (-SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01D63F0 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01D68D8 (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?_ValidateInjectionQpcCount@@YAH_K00HH@Z @ 0x1C01D6964 (-_ValidateInjectionQpcCount@@YAH_K00HH@Z.c)
 *     ?_ValidateInjectionTime@@YAHKKKHH@Z @ 0x1C01D69D4 (-_ValidateInjectionTime@@YAHKKKHH@Z.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01D6A48 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01D6BB0 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_didi @ 0x1C01D6F38 (WPP_RECORDER_AND_TRACE_SF_didi.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1C01D7054 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInjectTouchInput(unsigned int a1, struct tagPOINTER_TOUCH_INFO *a2)
{
  int v2; // esi
  struct tagPOINTER_TOUCH_INFO *v3; // r13
  __int64 v4; // rdi
  __int64 v5; // r14
  ULONG v6; // eax
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // r9d
  PDEVICE_OBJECT v10; // rcx
  char v11; // bp
  __int16 v12; // ax
  int v13; // r8d
  ULONG v14; // eax
  __int64 v15; // rdx
  void *v16; // rdx
  char v17; // r10
  void *v18; // rdx
  int v19; // edx
  int v20; // r8d
  int v21; // r8d
  int v22; // r9d
  void *v23; // rdx
  __int64 v24; // rcx
  ULONG v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  int v31; // r8d
  unsigned int v32; // r15d
  char *v33; // rax
  unsigned int v34; // ecx
  int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r12
  struct tagINJECTED_CONTACT *v39; // r15
  __int64 v40; // rax
  __int64 v41; // rdx
  void *v42; // rdx
  __int64 v43; // rcx
  int v45; // r8d
  PDEVICE_OBJECT v46; // rcx
  __int16 v47; // r9
  int v48; // eax
  void *v49; // rdx
  PDEVICE_OBJECT v50; // rcx
  char v51; // r8
  unsigned __int16 v52; // r9
  int v53; // r8d
  _DWORD *v54; // rcx
  unsigned __int64 v55; // rdx
  int v56; // r9d
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // r14
  int v64; // r8d
  void *v65; // rdx
  bool v66; // cf
  ULONG v67; // r15d
  int QpcBasedTouchStackTime; // eax
  unsigned __int64 v69; // rdx
  __int64 v70; // rcx
  unsigned int *v71; // r9
  __int64 v72; // r10
  __int64 v73; // r8
  unsigned int v74; // edx
  __int64 v75; // rdx
  __int64 v76; // rcx
  INT *v77; // r12
  char *v78; // r14
  __int64 v79; // r13
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  INT DpiForSystem; // edi
  INT v84; // ebx
  INT v85; // eax
  INT v86; // ecx
  INT v87; // eax
  int v88; // edx
  _DWORD *v89; // rax
  int v90; // r8d
  __int64 v91; // rcx
  unsigned __int64 v92; // rax
  unsigned int v93; // [rsp+20h] [rbp-C8h]
  int v94; // [rsp+28h] [rbp-C0h]
  int v95; // [rsp+30h] [rbp-B8h]
  __int16 v96; // [rsp+30h] [rbp-B8h]
  int v97; // [rsp+38h] [rbp-B0h]
  unsigned int v98; // [rsp+40h] [rbp-A8h]
  unsigned int v99; // [rsp+48h] [rbp-A0h]
  int v100; // [rsp+60h] [rbp-88h]
  unsigned int v101; // [rsp+64h] [rbp-84h]
  unsigned __int64 v102; // [rsp+68h] [rbp-80h]
  unsigned __int64 v103; // [rsp+70h] [rbp-78h]
  struct tagRECT v104; // [rsp+78h] [rbp-70h] BYREF
  __int128 v105; // [rsp+88h] [rbp-60h]
  unsigned int v108; // [rsp+100h] [rbp+18h]
  __int64 v109; // [rsp+108h] [rbp+20h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = a1;
  LODWORD(v109) = 0;
  v5 = *(_QWORD *)(gptiCurrent + 424LL);
  CheckCurrentInjectionConfiguration();
  if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
  {
    v6 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v6, v7);
    v10 = WPP_GLOBAL_Control;
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = 19;
LABEL_313:
    v16 = &WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids;
    v96 = v12;
    goto LABEL_314;
  }
  if ( !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 888LL), 0x20u) )
  {
    v14 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v14, v15);
    v10 = WPP_GLOBAL_Control;
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v16 = &WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids;
    v96 = 20;
    goto LABEL_314;
  }
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v17 = 0;
    }
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = &WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids;
      LOBYTE(v18) = v17;
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v18,
        v13,
        (_DWORD)WPP_GLOBAL_Control,
        2,
        20,
        21,
        (__int64)&WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids);
    }
    return 1LL;
  }
  v11 = 1;
  if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1u) )
  {
    MSGLUA_GPQFOREGROUND();
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v22) = 0;
    }
    if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = &WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids;
      LOBYTE(v23) = v22;
      LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v23,
        v21,
        v22,
        2,
        20,
        22,
        (__int64)&WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids);
    }
    return 1LL;
  }
  v24 = *(_QWORD *)(v5 + 896);
  if ( !v24 )
  {
    v25 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v25, v26);
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v11 = 0;
    }
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = 23;
    goto LABEL_313;
  }
  InputTraceLogging::RIM::InjectInput(*(_QWORD *)(v24 + 16), v19, v20);
  gppiInputProvider = v5;
  v28 = *(_QWORD *)(v5 + 896);
  v29 = *(unsigned int *)(v28 + 28);
  if ( (unsigned int)v4 > (unsigned int)v29 )
  {
    UserSetLastError(87LL, v27);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v11 = 0;
    }
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v11,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        2u,
        0x14u,
        0x18u,
        (__int64)&WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids,
        v4,
        v29);
    return 0LL;
  }
  v108 = *((_DWORD *)v3 + 16);
  v101 = *(_DWORD *)(v28 + 40);
  v103 = *(_QWORD *)(v28 + 64);
  v102 = *((_QWORD *)v3 + 10);
  if ( !(unsigned int)SortTouchContacts(v3, v4) )
  {
    UserSetLastError(87LL, v30);
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v11 = 0;
    }
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = 25;
    goto LABEL_313;
  }
  v32 = 0;
  if ( !(_DWORD)v4 )
  {
LABEL_93:
    v36 = *(_QWORD *)(v5 + 896);
    v37 = v36;
    v38 = *(_QWORD *)(v36 + 16);
    *(_QWORD *)&v105 = v38;
    if ( !*(_DWORD *)(*(_QWORD *)(v38 + 472) + 1008LL) )
    {
      *(_DWORD *)(v36 + 32) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 896) + 36LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 896) + 40LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 896) + 48LL) = 0;
      *(_QWORD *)(*(_QWORD *)(v5 + 896) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v5 + 896) + 64LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)(v5 + 896) + 72LL) = 0;
      v36 = *(_QWORD *)(v5 + 896);
      v37 = v36;
    }
    v39 = *(struct tagINJECTED_CONTACT **)(v36 + 80);
    if ( v108 && v102 || *(_DWORD *)(v36 + 32) && v102 || (v40 = *(_QWORD *)(v36 + 56)) != 0 && v108 )
    {
      xxxSendLastFrameTouchUp(
        *(struct tagINJECTED_CONTACT **)(v36 + 80),
        (struct DEVICEINFO *)v38,
        (unsigned int)v29,
        *(_DWORD *)(v36 + 36));
      UserSetLastError(87LL, v41);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_didi(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v11,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          v102,
          v93,
          v94,
          v95,
          v97);
      return 0LL;
    }
    if ( v102 || (v53 = 1, v40) )
      v53 = 0;
    v100 = v53;
    if ( !*(_DWORD *)(*(_QWORD *)(v38 + 472) + 1008LL) && (_DWORD)v29 )
    {
      v54 = (_DWORD *)((char *)v39 + 8);
      v55 = v29;
      do
      {
        if ( ((*v54 - 0x20000) & 0xFFFDFFFF) != 0 )
        {
          *v54 = 0x40000;
          LODWORD(v109) = 1;
        }
        v54 += 3;
        --v55;
      }
      while ( v55 );
      v37 = *(_QWORD *)(v5 + 896);
    }
    v56 = 0;
    if ( v53 )
    {
      v57 = *(_QWORD *)(v38 + 472);
      LOBYTE(v56) = *(_DWORD *)(v57 + 1008) == 0;
      if ( !_ValidateInjectionTime(v108, v101, *(_DWORD *)(v57 + 792), v56, *(_DWORD *)(v37 + 48)) )
      {
        xxxSendLastFrameTouchUp(
          v39,
          (struct DEVICEINFO *)v38,
          (unsigned int)v29,
          *(_DWORD *)(*(_QWORD *)(v5 + 896) + 36LL));
        UserSetLastError(87LL, v59);
        v50 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v11 = 0;
        }
        v51 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v52 = 44;
        v99 = v101;
        v98 = v108;
        goto LABEL_250;
      }
    }
    else
    {
      v60 = *(_QWORD *)(v38 + 472);
      LOBYTE(v56) = *(_DWORD *)(v60 + 1008) == 0;
      if ( !_ValidateInjectionQpcCount(v102, v103, *(_QWORD *)(v60 + 800), v56, *(_DWORD *)(v37 + 72)) )
      {
        xxxSendLastFrameTouchUp(
          v39,
          (struct DEVICEINFO *)v38,
          (unsigned int)v29,
          (unsigned __int64)(10000LL * *(_QWORD *)(*(_QWORD *)(v5 + 896) + 56LL)) / gliQpcFreq);
        UserSetLastError(87LL, v61);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v11 = 0;
        }
        if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_ii(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v11,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            v102,
            2u,
            0x14u,
            0x2Du,
            (__int64)&WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids,
            v102,
            v103);
        return 0LL;
      }
    }
    v104 = (struct tagRECT)*GetScreenRect((__m128i *)&v104, v58);
    v62 = ValidateInjectedTouchFrame(v4, v3, v39, &v104, v29);
    v63 = *(_QWORD *)(v5 + 896);
    *(_QWORD *)&v104.left = v63;
    if ( !v62 )
    {
      xxxSendLastFrameTouchUp(v39, (struct DEVICEINFO *)v38, (unsigned int)v29, *(_DWORD *)(v63 + 36));
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v65 = &WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids;
        LOBYTE(v65) = v11;
        LOBYTE(v64) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v65,
          v64,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          20,
          46,
          (__int64)&WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids,
          v109);
      }
      v66 = (_DWORD)v109 != 0;
      LODWORD(v109) = -(int)v109;
      v43 = v66 ? 1460 : 87;
      goto LABEL_116;
    }
    if ( v100 )
    {
      v67 = 10 * (v108 - *(_DWORD *)(v63 + 32));
      QpcBasedTouchStackTime = _GetQpcBasedTouchStackTime();
      v70 = *(_QWORD *)(v38 + 472);
      if ( *(_DWORD *)(v70 + 1008) )
      {
        if ( !v67 )
        {
          v70 = *(unsigned int *)(v63 + 44);
          v67 = QpcBasedTouchStackTime - *(_DWORD *)(v63 + 36);
          if ( v67 <= (unsigned int)v70 )
          {
            if ( (unsigned int)v70 - v67 >= 5 )
            {
              UserSetLastError(21LL, v69);
              v10 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
                || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
              {
                v11 = 0;
              }
              LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return 0LL;
              v12 = 47;
              goto LABEL_313;
            }
            v67 = v70 + 1;
          }
        }
        goto LABEL_276;
      }
      v69 = v108;
      *(_DWORD *)(v63 + 32) = v108;
      *(_DWORD *)(v63 + 36) = QpcBasedTouchStackTime;
    }
    else
    {
      v92 = 10000 * (v102 - *(_QWORD *)(v63 + 56)) / gliQpcFreq;
      v69 = 10000 * (v102 - *(_QWORD *)(v63 + 56)) % gliQpcFreq;
      v70 = *(_QWORD *)(v38 + 472);
      v67 = v92;
      if ( *(_DWORD *)(v70 + 1008) )
      {
        if ( (_DWORD)v92 == *(_DWORD *)(v63 + 44) )
        {
          UserSetLastError(21LL, v69);
          v10 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v11 = 0;
          }
          LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v12 = 48;
          goto LABEL_313;
        }
        goto LABEL_276;
      }
      *(_QWORD *)(v63 + 56) = v102;
    }
    v67 = 0;
LABEL_276:
    if ( (_DWORD)v29 )
    {
      v70 = 0LL;
      v69 = v29;
      do
      {
        v70 += 12LL;
        *(_DWORD *)(v70 + *(_QWORD *)(v63 + 80) - 4) = 0x40000;
        --v69;
      }
      while ( v69 );
    }
    if ( (_DWORD)v4 )
    {
      v71 = (unsigned int *)((char *)v3 + 4);
      v72 = v4;
      do
      {
        v73 = *v71;
        v74 = v71[2];
        v71 += 36;
        *(_DWORD *)(*(_QWORD *)(v63 + 80) + 12 * v73 + 8) = v74 & 0xFFFF7FFF;
        v69 = 3 * v73;
        v70 = *(_QWORD *)(v63 + 80);
        *(_QWORD *)(v70 + 12 * v73) = *(_QWORD *)(v71 - 29);
        --v72;
      }
      while ( v72 );
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v70, v69) & 0xF) != 2 && (_DWORD)v4 )
    {
      v77 = (INT *)((char *)v3 + 116);
      v78 = (char *)v3 + 32;
      v79 = v4;
      do
      {
        v109 = 0LL;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v76, v75);
        LogicalToPhysicalDPIPoint(v78, v78, CurrentThreadDpiAwarenessContext, &v109);
        DpiForSystem = GetDpiForSystem(v82, v81);
        v84 = *(unsigned __int16 *)(*(_QWORD *)(v109 + 40) + 60LL);
        v85 = EngMulDiv(*(v77 - 1) - *(v77 - 3), v84, DpiForSystem);
        v86 = *v77 - *(v77 - 2);
        *(v77 - 1) = v85;
        v87 = EngMulDiv(v86, v84, DpiForSystem);
        v78 += 144;
        *(_QWORD *)(v77 - 3) = 0LL;
        *v77 = v87;
        v77 += 36;
        --v79;
      }
      while ( v79 );
      v63 = *(_QWORD *)&v104.left;
      v3 = a2;
      v38 = v105;
      LODWORD(v4) = a1;
    }
    v105 = *(_OWORD *)(*(_QWORD *)(v38 + 472) + 160LL);
    if ( (_DWORD)v4 )
    {
      v88 = DWORD1(v105);
      v89 = (_DWORD *)((char *)v3 + 36);
      v90 = v105;
      v91 = (unsigned int)v4;
      do
      {
        *(v89 - 1) -= v90;
        *v89 -= v88;
        v89 += 36;
        --v91;
      }
      while ( v91 );
    }
    *(_DWORD *)(v63 + 44) = v67;
    if ( v100 )
    {
      if ( v101 && !v108 )
        v2 = 1;
      *(_DWORD *)(v63 + 48) = v2;
      *(_DWORD *)(v63 + 40) = v108;
    }
    else
    {
      if ( v103 && !v102 )
        v2 = 1;
      *(_DWORD *)(v63 + 72) = v2;
      *(_QWORD *)(v63 + 64) = v102;
    }
    xxxSendToTouchStack((struct DEVICEINFO *)v38, v4, v3, v67);
    return 1LL;
  }
  v33 = (char *)v3 + 12;
  while ( 1 )
  {
    if ( *((_DWORD *)v33 - 2) >= (unsigned int)v29 )
    {
      UserSetLastError(87LL, v30);
      v50 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      v51 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v52 = 26;
      v99 = v29;
      v98 = *((_DWORD *)v3 + 36 * v32 + 1);
LABEL_250:
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)v50->AttachedDevice,
        v11,
        v51,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        2u,
        0x14u,
        v52,
        (__int64)&WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids,
        v98,
        v99);
      return 0LL;
    }
    if ( *((_DWORD *)v33 - 3) != 2 )
    {
      UserSetLastError(87LL, v30);
      v46 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      LOBYTE(v45) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v47 = 27;
      v48 = *((_DWORD *)v3 + 36 * v32);
LABEL_132:
      v49 = &WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids;
      LOBYTE(v49) = v11;
      WPP_RECORDER_AND_TRACE_SF_D(
        v46->AttachedDevice,
        (_DWORD)v49,
        v45,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        20,
        v47,
        (__int64)&WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids,
        v48);
      return 0LL;
    }
    v34 = *(_DWORD *)v33 & 0xFFFF7FFF;
    if ( v34 != 0x40000 )
    {
      v30 = v34 - 0x20000;
      if ( (unsigned int)v30 > 6 || (v31 = 69, !_bittest(&v31, v30)) )
      {
        if ( v34 != 65542 && v34 != 262146 )
          break;
      }
    }
    v35 = *((_DWORD *)v33 + 22);
    if ( (v35 & 2) != 0 && *((_DWORD *)v33 + 31) >= 0x168u )
    {
      UserSetLastError(87LL, v30);
      v46 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      LOBYTE(v45) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v47 = 29;
      v48 = *((_DWORD *)v3 + 36 * v32 + 34);
      goto LABEL_132;
    }
    if ( (v35 & 4) != 0 && *((_DWORD *)v33 + 32) > 0xFDE8u )
    {
      UserSetLastError(87LL, v30);
      v46 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      LOBYTE(v45) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v47 = 30;
      v48 = *((_DWORD *)v3 + 36 * v32 + 35);
      goto LABEL_132;
    }
    if ( *((_DWORD *)v33 + 21) )
    {
      UserSetLastError(87LL, v30);
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 31;
      goto LABEL_313;
    }
    if ( *((_DWORD *)v33 + 28) || *((_DWORD *)v33 + 30) || *((_DWORD *)v33 + 27) || *((_DWORD *)v33 + 29) )
    {
      UserSetLastError(87LL, v30);
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = &WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids;
      v96 = 32;
LABEL_314:
      LOBYTE(v16) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        v10->AttachedDevice,
        (_DWORD)v16,
        v8,
        v9,
        2,
        20,
        v96,
        (__int64)&WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids);
      return 0LL;
    }
    if ( *((_DWORD *)v33 - 1) )
    {
      UserSetLastError(87LL, v30);
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 33;
      goto LABEL_313;
    }
    if ( *(_QWORD *)(v33 + 4) )
    {
      UserSetLastError(87LL, v30);
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 34;
      goto LABEL_313;
    }
    if ( *(_QWORD *)(v33 + 12) )
    {
      UserSetLastError(87LL, v30);
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 35;
      goto LABEL_313;
    }
    if ( *((_DWORD *)v33 + 7) || *((_DWORD *)v33 + 8) )
    {
      UserSetLastError(87LL, v30);
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 36;
      goto LABEL_313;
    }
    if ( *((_DWORD *)v33 + 9) || *((_DWORD *)v33 + 10) )
    {
      UserSetLastError(87LL, v30);
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 37;
      goto LABEL_313;
    }
    if ( *((_DWORD *)v33 + 11) || *((_DWORD *)v33 + 12) )
    {
      UserSetLastError(87LL, v30);
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 38;
      goto LABEL_313;
    }
    if ( *((_DWORD *)v33 + 14) )
    {
      UserSetLastError(87LL, v30);
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 39;
      goto LABEL_313;
    }
    if ( *((_DWORD *)v33 + 15) )
    {
      UserSetLastError(87LL, v30);
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 40;
      goto LABEL_313;
    }
    if ( *((_DWORD *)v33 + 16) )
    {
      UserSetLastError(87LL, v30);
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 41;
      goto LABEL_313;
    }
    if ( *((_DWORD *)v33 + 19) )
    {
      UserSetLastError(87LL, v30);
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v11 = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 42;
      goto LABEL_313;
    }
    ++v32;
    v33 += 144;
    if ( v32 >= (unsigned int)v4 )
      goto LABEL_93;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v42 = &WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids;
    LOBYTE(v42) = v11;
    LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v42,
      v31,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      20,
      28,
      (__int64)&WPP_7f0ff6f8c25b358727b761e93ff3e21d_Traceguids,
      *((_DWORD *)v3 + 36 * v32 + 3));
  }
  v43 = 87LL;
LABEL_116:
  UserSetLastError(v43, v30);
  return 0LL;
}
