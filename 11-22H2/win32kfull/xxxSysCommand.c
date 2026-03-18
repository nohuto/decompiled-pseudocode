/*
 * XREFs of xxxSysCommand @ 0x1C00A7BFC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     ?xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z @ 0x1C01EB73C (-xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z.c)
 * Callees:
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C0026648 (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0041E8C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C005E3E8 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0062940 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _PostThreadMessage @ 0x1C009C5A0 (_PostThreadMessage.c)
 *     xxxPlayEventSound @ 0x1C00A7E50 (xxxPlayEventSound.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00AE308 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     _GetMessagePos @ 0x1C00AE3A4 (_GetMessagePos.c)
 *     _PostMessage @ 0x1C00B6CD0 (_PostMessage.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00D0C08 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01500D0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01CACD8 (xxxOldNextWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?HasPendingPromotion@PointerPromotion@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C01F7EC0 (-HasPendingPromotion@PointerPromotion@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01FF08C (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxMNEndMenuState @ 0x1C01FF9F0 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C020009C (xxxMNStartMenuState.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0200574 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C02007D8 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     ?StartScreenSaver@@YAXH@Z @ 0x1C020087C (-StartScreenSaver@@YAXH@Z.c)
 *     xxxMNLoop @ 0x1C02146AC (xxxMNLoop.c)
 *     xxxSBTrackInit @ 0x1C022A46C (xxxSBTrackInit.c)
 *     ?DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DE70 (-DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DED8 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     xxxIsDragging @ 0x1C022FF38 (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C0239514 (xxxHelpLoop.c)
 *     xxxMNKeyFilter @ 0x1C023F1B8 (xxxMNKeyFilter.c)
 */

void __fastcall xxxSysCommand(struct tagWND *a1, int a2, __int64 a3)
{
  PointerPromotion *v3; // r13
  char *v4; // r12
  unsigned int v5; // r14d
  __int64 v6; // r15
  unsigned int v7; // edi
  const struct tagWND *v9; // rdx
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  int v17; // edi
  unsigned int v18; // ecx
  char v19; // al
  unsigned int v20; // edi
  unsigned int MessagePos; // edi
  const struct tagWND *v22; // rdx
  unsigned int v23; // edx
  unsigned int v24; // r8d
  unsigned int v25; // edx
  struct tagMENUSTATE *v26; // rax
  struct tagMENUSTATE *v27; // rsi
  _QWORD *v28; // rdx
  struct tagMENUSTATE *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  struct tagWND *v35; // rax
  __int64 v36; // r8
  struct tagWND *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r9
  struct tagTHREADINFO **v40; // rdi
  struct tagMENUSTATE *v41; // rax
  struct tagMENUSTATE *v42; // rdi
  __int64 v43; // rdx
  int v44; // [rsp+50h] [rbp-19h] BYREF
  __int128 v45; // [rsp+58h] [rbp-11h] BYREF
  __int64 v46; // [rsp+68h] [rbp-1h]
  struct tagMENUSTATE *v47; // [rsp+70h] [rbp+7h] BYREF
  __int64 v48; // [rsp+78h] [rbp+Fh]

  v3 = (PointerPromotion *)*((_QWORD *)a1 + 2);
  v4 = (char *)a1 + 40;
  v5 = a2 & 0xF;
  v44 = 0;
  v6 = a3;
  v7 = a2 - v5;
  if ( a3 == 0x10000 )
    v6 = 0LL;
  if ( (*(_QWORD *)(*((_QWORD *)v3 + 54) + 112LL) || (*(_BYTE *)(*(_QWORD *)v4 + 31LL) & 8) != 0)
    && v7 != 61760
    && v7 != 61808
    && v7 != 61744 )
  {
    return;
  }
  if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(8, v7, (unsigned int)v6, 5) )
  {
    return;
  }
  v9 = *(const struct tagWND **)v4;
  if ( *(char *)(*(_QWORD *)v4 + 19LL) < 0 )
    return;
  if ( v7 <= 0xF090 )
  {
    if ( v7 != 61584 )
    {
      v10 = v7 - 61440;
      if ( v10 )
      {
        v11 = v10 - 16;
        if ( v11 )
        {
          v12 = v11 - 16;
          if ( v12 )
          {
            v13 = v12 - 16;
            if ( v13 )
            {
              v14 = v13 - 16;
              if ( v14 && (v15 = v14 - 16) != 0 )
              {
                v16 = v15 - 16;
                if ( v16 )
                {
                  v20 = v16 - 16;
                  if ( !v20 || v20 == 16 )
                  {
                    _GetKeyState(16LL);
                    xxxSBTrackInit(a1);
                  }
                }
                else
                {
                  xxxSendMessage(a1, 16LL, 0LL, 0LL);
                }
              }
              else
              {
                xxxOldNextWindow((unsigned int)v6);
              }
              return;
            }
            v17 = 3;
            if ( (*((_BYTE *)v9 + 31) & 1) != 0 )
              return;
            v18 = 12;
          }
          else
          {
            v17 = 6;
            if ( (*((_BYTE *)v9 + 31) & 0x20) != 0 )
              return;
            v18 = 11;
          }
LABEL_32:
          xxxPlayEventSound(v18);
          xxxShowWindow(a1, v17 | gdwPUDFlags & 0x10000u);
          return;
        }
        MessagePos = GetMessagePos();
        LODWORD(v47) = (__int16)MessagePos;
        HIDWORD(v47) = SHIWORD(MessagePos);
        if ( v5
          && !(unsigned int)PointerPromotion::HasPendingPromotion(
                              v3,
                              (struct tagTHREADINFO *)(unsigned int)SHIWORD(MessagePos))
          && !(unsigned int)xxxIsDragging(a1, v47) )
        {
          xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 3);
          if ( (*(_BYTE *)(*(_QWORD *)v4 + 31LL) & 0x20) != 0 )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0, 0, 0LL, 1, 0);
          }
          goto LABEL_65;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61456) )
        {
          v23 = 10 - (v5 != 0);
LABEL_62:
          DelegateMoveSizeToShell(a1, v23);
          goto LABEL_65;
        }
        if ( (*(_BYTE *)(*(_QWORD *)v4 + 30LL) & 4) != 0
          && (*(_BYTE *)(*(_QWORD *)v4 + 31LL) & 1) != 0
          && !WindowArrangement::DragOperationFromMaximizedAllowed(a1, v22) )
        {
          goto LABEL_65;
        }
        v24 = MessagePos;
        v25 = 10 - (v5 != 0);
      }
      else
      {
        if ( v5 > 0xA )
        {
LABEL_65:
          xxxDeliverRestoreFocusMessage(a1);
          return;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61440) )
        {
          v23 = v5;
          goto LABEL_62;
        }
        v24 = GetMessagePos();
        v25 = v5;
      }
      xxxMoveSize(a1, v25, v24);
      goto LABEL_65;
    }
    goto LABEL_69;
  }
  switch ( v7 )
  {
    case 0xF100u:
      v41 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, 61696LL, v6);
      v42 = v41;
      if ( !v41 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v47, v41);
      **(_DWORD **)v43 |= 0x80000000;
      *(_DWORD *)(v43 + 8) |= 0x20u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(&v45, *(_QWORD *)v43);
      xxxMNKeyFilter(&v45, v42, (unsigned int)v6);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v45);
      if ( (*((_DWORD *)v42 + 2) & 0x100) != 0 )
        goto LABEL_103;
      v29 = v42;
LABEL_102:
      xxxMNEndMenuState(v29);
LABEL_103:
      if ( v47 )
        xxxUnlockMenuStateInternal(v47, 0);
      return;
    case 0xF120u:
      v19 = *((_BYTE *)v9 + 31);
      v18 = 9;
      v17 = 9;
      if ( (v19 & 0x20) == 0 && (v19 & 1) != 0 )
      {
        if ( WindowArrangement::MoveWithArrangementAllowed(a1, v9) )
          IsSemiMaximized(a1);
        v18 = 10;
      }
      goto LABEL_32;
    case 0xF130u:
      if ( (*(_DWORD *)(gpsi + 2120LL) & 8) == 0 )
        goto LABEL_89;
      if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
      {
        xxxCallHook(7, *(_QWORD *)a1, 0LL, 10);
      }
      else if ( !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
      {
LABEL_89:
        if ( gptiTasklist )
        {
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, gptiTasklist, 0);
          PostThreadMessage(gptiTasklist, 0x112u, 61744LL, 0LL);
        }
        return;
      }
      v40 = *(struct tagTHREADINFO ***)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL);
      if ( !v40 )
        return;
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v40[2], 0);
      if ( v6 == 0xFFFFFFFFLL )
        v39 = -1LL;
      else
        v39 = *(_QWORD *)a1;
      v36 = 7LL;
      v37 = (struct tagWND *)v40;
      v38 = *(unsigned int *)(gpsi + 928LL);
LABEL_84:
      PostMessage(v37, v38, v36, v39);
      return;
    case 0xF140u:
      LOBYTE(v9) = 1;
      v35 = (struct tagWND *)HMValidateHandleNoSecure(ghwndSwitch, v9);
      if ( !v35 || a1 == v35 )
      {
        StartScreenSaver(0);
        return;
      }
      v36 = 61760LL;
      v37 = v35;
      v38 = 274LL;
      v39 = (*gpsi >> 9) & 1;
      goto LABEL_84;
    case 0xF150u:
      v30 = ValidateHwnd(v6);
      if ( v30 )
      {
        v31 = *(_QWORD *)(v30 + 200);
        v46 = 0LL;
        v45 = 0LL;
        if ( !v31 )
          v31 = v30;
        ThreadLockAlways(v31, &v45);
        xxxSetForegroundWindowWithOptions(v31, 2u, 0, 0);
        if ( (*(_BYTE *)(*(_QWORD *)(v31 + 40) + 31LL) & 0x20) != 0 )
          PostMessage(v31, 274LL, 61728LL, 0LL);
        ThreadUnlock1(v33, v32, v34);
      }
      break;
    case 0xF160u:
LABEL_69:
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground )
        return;
      v26 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, v7, v6);
      v27 = v26;
      if ( !v26 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v47, v26);
      *(_DWORD *)*v28 |= 0x80000000;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(&v45, *v28);
      xxxMNLoop(&v45, v27, v6, v7 == 61792);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v45);
      if ( (*((_DWORD *)v27 + 2) & 0x100) != 0 )
        goto LABEL_103;
      v29 = v27;
      goto LABEL_102;
    case 0xF170u:
      if ( v6 == -1 )
      {
        v47 = (struct tagMENUSTATE *)4;
        v48 = 3LL;
      }
      else
      {
        if ( v6 != 2 )
          return;
        v47 = (struct tagMENUSTATE *)5;
        if ( (unsigned int)PowerIsDisplayIdleExpired(v7 - 61808, &v44) )
          v48 = v44;
        else
          v48 = (unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) != 0 ? 17LL : 3LL;
      }
      QueuePowerRequest(&v47, 0LL);
      return;
    case 0xF180u:
      xxxHelpLoop(a1);
      break;
  }
}
