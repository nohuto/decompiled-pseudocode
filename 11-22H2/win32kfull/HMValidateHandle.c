/*
 * XREFs of HMValidateHandle @ 0x1C002D0F8
 * Callers:
 *     NtUserTranslateAccelerator @ 0x1C000C720 (NtUserTranslateAccelerator.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C0013364 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     NtUserCopyAcceleratorTable @ 0x1C0013EE0 (NtUserCopyAcceleratorTable.c)
 *     NtUserDrawIconEx @ 0x1C0028220 (NtUserDrawIconEx.c)
 *     NtUserGetIconSize @ 0x1C0028390 (NtUserGetIconSize.c)
 *     NtUserDestroyCursor @ 0x1C0028C50 (NtUserDestroyCursor.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0029610 (NtUserDeferWindowPosAndBand.c)
 *     NtUserGetIconInfo @ 0x1C002BFF0 (NtUserGetIconInfo.c)
 *     NtUserSetCursorIconDataEx @ 0x1C002CD90 (NtUserSetCursorIconDataEx.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C002DBDC (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     xxxInterSendMsgEx @ 0x1C004D920 (xxxInterSendMsgEx.c)
 *     _MapDesktopObject @ 0x1C004FDF0 (_MapDesktopObject.c)
 *     NtUserUnhookWinEvent @ 0x1C006F080 (NtUserUnhookWinEvent.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C006F1B0 (NtUserUnhookWindowsHookEx.c)
 *     NtUserFindExistingCursorIcon @ 0x1C008F910 (NtUserFindExistingCursorIcon.c)
 *     NtUserSetCursor @ 0x1C00A4ED0 (NtUserSetCursor.c)
 *     NtUserUpdateInputContext @ 0x1C00A7070 (NtUserUpdateInputContext.c)
 *     NtUserGetRequiredCursorSizes @ 0x1C00A7470 (NtUserGetRequiredCursorSizes.c)
 *     NtUserGetCursorFrameInfo @ 0x1C00A7580 (NtUserGetCursorFrameInfo.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C00A8E40 (NtUserEndDeferWindowPosEx.c)
 *     NtUserQueryInputContext @ 0x1C00AB070 (NtUserQueryInputContext.c)
 *     NtUserDestroyAcceleratorTable @ 0x1C00BBF70 (NtUserDestroyAcceleratorTable.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011E780 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     fnHkINLPMSG @ 0x1C0124E30 (fnHkINLPMSG.c)
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserGetRawInputData @ 0x1C01543B0 (NtUserGetRawInputData.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01C0C04 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     NtUserAssociateInputContext @ 0x1C01CCC50 (NtUserAssociateInputContext.c)
 *     NtUserCreateLocalMemHandle @ 0x1C01CE090 (NtUserCreateLocalMemHandle.c)
 *     NtUserDestroyInputContext @ 0x1C01CE5C0 (NtUserDestroyInputContext.c)
 *     NtUserDragObject @ 0x1C01CE920 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1C01CEDA0 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1C01D15B0 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01D1710 (NtUserGetGestureInfo.c)
 *     NtUserGetRawInputBuffer @ 0x1C01D3540 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C01D38B0 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetTouchInputInfo @ 0x1C01D3F60 (NtUserGetTouchInputInfo.c)
 *     NtUserGetTouchValidationStatus @ 0x1C01D40C0 (NtUserGetTouchValidationStatus.c)
 *     NtUserLinkDpiCursor @ 0x1C01D5FD0 (NtUserLinkDpiCursor.c)
 *     NtUserRegisterEdgy @ 0x1C01D90E0 (NtUserRegisterEdgy.c)
 *     NtUserSetCalibrationData @ 0x1C01DA720 (NtUserSetCalibrationData.c)
 *     NtUserSetDisplayMapping @ 0x1C01DB8A0 (NtUserSetDisplayMapping.c)
 *     NtUserSetSystemCursor @ 0x1C01DCAB0 (NtUserSetSystemCursor.c)
 *     NtUserUserHandleGrantAccess @ 0x1C01DFEC0 (NtUserUserHandleGrantAccess.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FD360 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     SfnGESTURE @ 0x1C0206610 (SfnGESTURE.c)
 *     SfnTOUCH @ 0x1C020FC40 (SfnTOUCH.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C021116C (fnHkOPTINLPEVENTMSG.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C022F6D8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall HMValidateHandle(__int64 a1, unsigned __int8 a2)
{
  int v3; // r15d
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 *v6; // r14
  __int16 v7; // ax
  char v8; // al
  __int64 v9; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 v13; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v15; // rdx
  __int16 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rax

  v3 = a2;
  v4 = 0LL;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(gpsi + 8LL) )
    goto LABEL_19;
  v5 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)a1;
  v6 = (__int64 *)HMPkheFromPhe(v5);
  v7 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v5 + 26) && v7 != 0x7FFF && (v7 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_19;
  if ( (*(_BYTE *)(v5 + 25) & 1) == 0 )
  {
    v8 = *(_BYTE *)(v5 + 24);
    if ( v8 == (_BYTE)v3 || (_BYTE)v3 == 0xFF && v8 )
      v4 = *v6;
  }
  v9 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v9 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v9 + 488) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
      v4 = 0LL;
  }
  else
  {
    v11 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
    v4 &= v11;
  }
  if ( *(char *)(v5 + 25) < 0 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v11);
    v15 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      if ( *CurrentProcessWin32Process )
      {
        v16 = gahti[12 * *(unsigned __int8 *)(v5 + 24) + 6];
        if ( (v16 & 2) != 0 )
        {
          v17 = (_QWORD *)v6[1];
LABEL_42:
          if ( v17 && v17 != v15 )
            goto LABEL_19;
          goto LABEL_11;
        }
        if ( (v16 & 1) != 0 )
        {
          v18 = v6[1];
          if ( v18 )
          {
            v17 = *(_QWORD **)(v18 + 424);
            goto LABEL_42;
          }
        }
      }
    }
  }
LABEL_11:
  if ( v4 )
    return v4;
LABEL_19:
  switch ( v3 )
  {
    case 1:
      v13 = 1400LL;
      break;
    case 2:
      v13 = 1401LL;
      break;
    case 3:
      v13 = 1402LL;
      break;
    case 4:
      v13 = 1405LL;
      break;
    case 5:
      v13 = 1404LL;
      break;
    case 8:
      v13 = 1403LL;
      break;
    default:
      v13 = 6LL;
      break;
  }
  UserSetLastError(v13);
  return 0LL;
}
