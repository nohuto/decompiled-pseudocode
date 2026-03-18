/*
 * XREFs of xxxDoHotKeyStuff @ 0x1C00F6330
 * Callers:
 *     EditionDoHotKeys @ 0x1C00F62E0 (EditionDoHotKeys.c)
 * Callees:
 *     ?TraceLoggingHotkey@@YAXIIHHK@Z @ 0x1C0004D4C (-TraceLoggingHotkey@@YAXIIHHK@Z.c)
 *     ?IsPenQuickLaunchHotKey@@YA_NII@Z @ 0x1C0004E54 (-IsPenQuickLaunchHotKey@@YA_NII@Z.c)
 *     DoExplorerHangDetection @ 0x1C0004E74 (DoExplorerHangDetection.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A60 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _SetMagnificationInputTransform @ 0x1C0098370 (_SetMagnificationInputTransform.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     HasRawInputForegroundTarget @ 0x1C00AA6E8 (HasRawInputForegroundTarget.c)
 *     _PostThreadMessageEx @ 0x1C00AB0F8 (_PostThreadMessageEx.c)
 *     IsUninterceptable @ 0x1C00F62B4 (IsUninterceptable.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C00F67B8 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     IsHotKey @ 0x1C00F6854 (IsHotKey.c)
 *     IsSAS @ 0x1C00F6904 (IsSAS.c)
 *     zzzCancelJournalling @ 0x1C011886C (zzzCancelJournalling.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01E5944 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01E5AC8 (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     ?TraceLoggingPenHotkey@@YAXII@Z @ 0x1C021EC48 (-TraceLoggingPenHotkey@@YAXII@Z.c)
 *     ?TraceLoggingSuppressQuickLaunch@@YAXXZ @ 0x1C021F1D8 (-TraceLoggingSuppressQuickLaunch@@YAXXZ.c)
 *     ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1C021F388 (-TraceLoggingYieldedHotkey@@YAXII@Z.c)
 *     xxxActivateDebugger @ 0x1C0243B54 (xxxActivateDebugger.c)
 */

__int64 __fastcall xxxDoHotKeyStuff(unsigned int a1, unsigned int a2, int a3, struct tagINPUT_MESSAGE_SOURCE *a4)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // r14d
  unsigned int v9; // esi
  int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // r8
  signed __int16 *v13; // rsi
  __int64 v14; // rax
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int16 v19; // r15
  int v20; // eax
  signed __int16 v21; // r15
  void (__fastcall *v22)(_QWORD, _QWORD); // r8
  struct tagTHREADINFO **v23; // r14
  int v24; // r12d
  __int64 v25; // r13
  int v26; // ecx
  __int64 v27; // rax
  struct tagINPUT_MESSAGE_SOURCE *v28; // rsi
  struct tagTHREADINFO *v29; // rdx
  unsigned int v30; // esi
  __int64 v31; // rdx
  bool v32; // zf
  bool v33; // zf
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r8
  signed __int16 *i; // rax
  __int64 v41; // rax
  __int64 v42; // r9
  __int16 v43; // r15
  int v44; // [rsp+28h] [rbp-50h]
  int v45; // [rsp+30h] [rbp-48h]
  void (__fastcall *v46)(_QWORD, _QWORD); // [rsp+40h] [rbp-38h]
  _BYTE v47[24]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v48; // [rsp+60h] [rbp-18h]
  int v49; // [rsp+68h] [rbp-10h]
  char v50; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v51; // [rsp+C8h] [rbp+50h]
  int v52; // [rsp+D0h] [rbp+58h]
  struct tagINPUT_MESSAGE_SOURCE *v53; // [rsp+D8h] [rbp+60h]

  v53 = a4;
  v52 = a3;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v50);
  v7 = 0;
  v51 = 0;
  v8 = 0;
  v9 = 0;
  switch ( a1 )
  {
    case 0x10u:
      v8 = 4;
      break;
    case 0x11u:
      v8 = 2;
      break;
    case 0x12u:
      v8 = 1;
      break;
    default:
      if ( a1 <= 0x5A || a1 > 0x5C )
        gfsModOnlyCandidate = 0;
      else
        v8 = 8;
      break;
  }
  if ( a2 )
  {
    gfsModifiers &= ~v8;
    if ( v8 )
    {
      v9 = gfsModOnlyCandidate;
      v51 = gfsModOnlyCandidate;
      gfsModOnlyCandidate = 0;
    }
    if ( qword_1C0335C80 )
      qword_1C0335C80 = 0LL;
  }
  else
  {
    v16 = v8 | gfsModifiers;
    gfsModifiers |= v8;
    if ( v8 )
      gfsModOnlyCandidate = v16;
  }
  LOBYTE(v6) = a1;
  v10 = IsSAS(v6, &gfsModifiers);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v50, v11, v12);
  if ( a1 == 174 )
  {
    if ( a2 )
    {
LABEL_83:
      gbVolumeDownPressed = 0;
      goto LABEL_13;
    }
    if ( !gbVolumeUpPressed )
    {
      gbVolumeDownPressed = 1;
      goto LABEL_13;
    }
    xxxHandleVolumeUpDownCombo();
LABEL_80:
    gbVolumeUpPressed = 0;
    goto LABEL_13;
  }
  if ( a1 == 175 )
  {
    if ( !a2 )
    {
      if ( !gbVolumeDownPressed )
      {
        gbVolumeUpPressed = 1;
        goto LABEL_13;
      }
      xxxHandleVolumeUpDownCombo();
      goto LABEL_83;
    }
    goto LABEL_80;
  }
LABEL_13:
  if ( !v10 && (gfInNumpadHexInput & 1) != 0 )
    return 0LL;
  if ( v9 && a2 )
  {
    v13 = (signed __int16 *)IsHotKey(v9);
  }
  else
  {
    v13 = (signed __int16 *)IsHotKey(gfsModifiers);
    if ( v13 && v10 )
    {
LABEL_30:
      v17 = 0;
      if ( *(_QWORD *)v13 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)v13 + 424LL);
        if ( v18 )
          v17 = *(_DWORD *)(v18 + 56);
      }
      goto LABEL_33;
    }
    v14 = IsUninterceptable();
    if ( v14 )
    {
      v13 = (signed __int16 *)v14;
      goto LABEL_30;
    }
  }
  if ( v13 )
    goto LABEL_30;
  if ( !a2 || (gfsModifiers & 8) == 0 || a1 - 19 > 0x47 && a1 > 0xF && a1 - 93 > 0x22 )
    goto LABEL_21;
  v17 = 0;
LABEL_33:
  TraceLoggingHotkey(gfsModifiers, a1, v13 != 0LL, a2, v17);
  if ( v13 && gbLockScreenActive && !v10 && !_bittest16(v13 + 13, 0xDu) )
    return 0LL;
LABEL_21:
  WindowArrangementSequence::TestSequence(
    (WindowArrangementSequence *)v13,
    (const struct tagHOTKEY *const)a1,
    v8,
    gfsModifiers,
    a2 == 0,
    v44);
  if ( !v13 )
    return 0LL;
  v19 = v13[13];
  if ( v19 < 0 && !v10 && v53 && *((_DWORD *)v53 + 1) != 4 )
    return 0LL;
  memset(v47, 0, sizeof(v47));
  if ( (v19 & 0x8800) == 0
    && (unsigned int)HasRawInputForegroundTarget(v47)
    && _bittest((const signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v47[8] + 424LL) + 832LL) + 100LL), 9u) )
  {
    return 0LL;
  }
  v20 = *((_DWORD *)v13 + 8);
  if ( v20 == -7 )
  {
    v23 = *(struct tagTHREADINFO ***)(*(_QWORD *)(gptiCurrent + 464LL) + 168LL);
    if ( v23 )
    {
      gfsModOnlyCandidate = 0;
      goto LABEL_73;
    }
  }
  else if ( (unsigned int)(v20 + 6) <= 1 )
  {
    if ( !a2 )
      return (unsigned int)xxxActivateDebugger((unsigned __int16)v13[12]);
    return v7;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 64LL) & 1) != 0
    && *(PVOID *)(*(_QWORD *)v13 + 456LL) != grpdeskLogon
    && !*((_QWORD *)v13 + 1)
    && gbLockScreenActive
    && (v19 & 0x2000) == 0
    || !v51 && a2 )
  {
    return 0LL;
  }
  if ( v10 || a1 == 27 && gfsModifiers == 2 )
  {
    zzzCancelJournalling();
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 216LL) )
    {
      memset(v47, 0, sizeof(v47));
      v48 = 0LL;
      v49 = 3;
      SetMagnificationInputTransform((__int128 *)v47, v31);
    }
    CancelCapturedMipOverride();
  }
  if ( v52 )
  {
    switch ( a1 )
    {
      case 9u:
        v33 = (v52 & 1) == 0;
        break;
      case 0xDu:
        v33 = (v52 & 8) == 0;
        break;
      case 0x1Bu:
        if ( (v52 & 2) != 0 && (gfsModifiers & 3) == 1 )
          return 0LL;
        if ( (v52 & 0x40) == 0 )
          goto LABEL_47;
        v32 = (gfsModifiers & 3) == 2;
        goto LABEL_127;
      case 0x20u:
        v33 = (v52 & 4) == 0;
        break;
      case 0x2Cu:
        if ( (gfsModifiers & 3) == 0 && (v52 & 0x20) != 0 )
          return 0LL;
        if ( (v52 & 0x10) == 0 )
          goto LABEL_47;
        v32 = (gfsModifiers & 3) == 1;
LABEL_127:
        if ( v32 )
          return 0LL;
        goto LABEL_47;
      default:
        goto LABEL_47;
    }
    if ( v33 )
      goto LABEL_47;
    v32 = (gfsModifiers & 3) == 1;
    goto LABEL_127;
  }
LABEL_47:
  if ( gfsModifiers == 2 && a1 == 27 && !a2 )
  {
    memset(v47, 0, sizeof(v47));
    if ( *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement )
    {
      v34 = HMValidateHandleNoSecure(WPP_MAIN_CB.AlignmentRequirement, 1);
      v35 = v34;
      if ( v34 )
      {
        ThreadLock(v34, (__int64 *)v47);
        xxxSetForegroundWindow2(v35, 0LL, 0);
        ThreadUnlock1(v37, v36, v38);
      }
    }
  }
  if ( !_bittest16(v13 + 13, 0xCu) )
  {
    if ( IsPenQuickLaunchHotKey(gfsModifiers, a1) )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_QuickLaunchInvocation__private_reporting,
        0x8ADD3Eu,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_DeliverDespiteMessageFilter_logged_traits,
        1,
        v45);
      if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                            - RIMGetLastInvertedPenTime()) < 0xFA )
      {
        TraceLoggingSuppressQuickLaunch();
        return 0LL;
      }
    }
    v21 = v13[13];
    v22 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v13 + 1);
    v23 = (struct tagTHREADINFO **)*((_QWORD *)v13 + 2);
    v24 = *((_DWORD *)v13 + 8);
    v25 = *(_QWORD *)v13;
    v46 = v22;
    if ( (v21 & 0x200) != 0 )
    {
      if ( gpqForeground
        && *(_QWORD *)(gpqForeground + 120LL)
        && (!IsPenQuickLaunchHotKey(gfsModifiers, a1)
         || !_bittest((const signed __int32 *)&gpdwCPUserPreferencesMask + 1, 9u)) )
      {
        for ( i = (signed __int16 *)*((_QWORD *)v13 + 6); i != v13 + 24; i = *(signed __int16 **)i )
        {
          if ( *(_QWORD *)(*((_QWORD *)i - 3) + 432LL) == v39 )
          {
            v25 = *((_QWORD *)i - 3);
            v23 = (struct tagTHREADINFO **)*((_QWORD *)i - 2);
            v24 = *((_DWORD *)i - 1);
            v21 = *(i - 4);
            TraceLoggingYieldedHotkey((unsigned __int16)v13[12], *((_DWORD *)v13 + 7));
            v22 = 0LL;
            goto LABEL_51;
          }
        }
      }
      v22 = v46;
    }
LABEL_51:
    if ( (v21 & 0x100) != 0 )
      goto LABEL_62;
    if ( !v23 )
    {
      v41 = qword_1C0335C80;
      v42 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
      v43 = v21 & 0x4000;
      if ( v22 )
      {
        if ( !v43 || v42 != qword_1C0335C80 )
        {
          if ( qword_1C0335C80 != v42 )
            v41 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
          qword_1C0335C80 = v41;
          v22(v24, (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16));
        }
        goto LABEL_62;
      }
      if ( v43 && v42 == qword_1C0335C80 )
      {
        v28 = v53;
      }
      else
      {
        v28 = v53;
        if ( qword_1C0335C80 != v42 )
          v41 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
        qword_1C0335C80 = v41;
        PostThreadMessageEx(v25, 786LL, v24, v42, v53);
      }
      v29 = (struct tagTHREADINFO *)v25;
LABEL_61:
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v29, *((_DWORD *)v28 + 1) == 1);
LABEL_62:
      v30 = gfsModifiers;
      if ( (gfsModifiers & 8) != 0 && a1 - 129 <= 2 )
      {
        ZwUpdateWnfStateData(&WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL, 0LL, 0LL, 0LL, gSessionId, 0, 0);
        TraceLoggingPenHotkey(v30, a1);
      }
      LOBYTE(v7) = v51 == 0;
      return v7;
    }
    if ( v23 == (struct tagTHREADINFO **)1 )
    {
      if ( !gpqForeground )
        return 0LL;
      v23 = *(struct tagTHREADINFO ***)(gpqForeground + 112LL);
      if ( !v23 )
        goto LABEL_62;
    }
    if ( v23 != *(struct tagTHREADINFO ***)(*((_QWORD *)v23[3] + 1) + 168LL) || v24 != 61744 )
    {
      v26 = (unsigned __int16)gfsModifiers | ((unsigned __int16)a1 << 16);
      v27 = qword_1C0335C80;
      if ( (v21 & 0x4000) != 0 && v26 == qword_1C0335C80 )
      {
        v28 = v53;
      }
      else
      {
        v28 = v53;
        if ( qword_1C0335C80 != v26 )
          v27 = v26;
        qword_1C0335C80 = v27;
        _PostTransformableMessageExtended((struct tagWND *)v23, 0x312u, v24, v26, v53, 1);
      }
      goto LABEL_60;
    }
LABEL_73:
    DoExplorerHangDetection(v23[3]);
    PostMessage((int)v23, 274, 61744, 0);
    v28 = v53;
    if ( qword_1C0335C80 )
      qword_1C0335C80 = 0LL;
LABEL_60:
    v29 = v23[2];
    goto LABEL_61;
  }
  return HandleIAMHotKey((const struct tagHOTKEY *const)v13);
}
