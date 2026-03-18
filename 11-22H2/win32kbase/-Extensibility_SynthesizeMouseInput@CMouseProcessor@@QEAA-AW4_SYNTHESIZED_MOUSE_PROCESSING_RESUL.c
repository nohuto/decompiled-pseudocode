/*
 * XREFs of ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01F6B68
 * Callers:
 *     NtMITSynthesizeMouseInput @ 0x1C0142240 (NtMITSynthesizeMouseInput.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C00545FC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0054794 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     UpconvertTime @ 0x1C00BFB50 (UpconvertTime.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C01FB4A4 (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 */

__int64 __fastcall CMouseProcessor::Extensibility_SynthesizeMouseInput(
        CMouseProcessor *a1,
        __int64 a2,
        char a3,
        _QWORD *a4)
{
  int v8; // ecx
  int v9; // edx
  __int16 v10; // ax
  __int16 v11; // cx
  __int16 v12; // ax
  bool v13; // zf
  __int16 v14; // ax
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  unsigned int v19; // edi
  unsigned int v20; // ecx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct tagTHREADINFO *v29; // rax
  __int64 v30; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v32; // rax
  __int64 *v33; // rbx
  __int128 v35; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B8h]
  __int128 v37; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+68h] [rbp-A0h]
  __int128 v39; // [rsp+78h] [rbp-90h]
  __int64 v40; // [rsp+88h] [rbp-80h]
  __int128 v41; // [rsp+98h] [rbp-70h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-60h]
  struct tagPOINT v43; // [rsp+B8h] [rbp-50h] BYREF

  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1947);
  v8 = *(_DWORD *)(a2 + 32);
  v36 = 0LL;
  v9 = 256;
  v35 = 0LL;
  if ( v8 || *(_DWORD *)(a2 + 36) )
  {
    v10 = *(_WORD *)(a2 + 24) & 3;
    HIDWORD(v35) = v8;
    WORD1(v35) = v10;
    LODWORD(v36) = *(_DWORD *)(a2 + 36);
    if ( (a3 & 4) != 0 )
      v9 = 258;
  }
  else
  {
    v9 = 264;
  }
  v11 = *(_WORD *)(a2 + 28);
  v12 = *(_WORD *)(a2 + 26) & 0xFFF;
  WORD2(v35) = v12;
  if ( v11 )
  {
    v13 = (v12 & 0xC00) == 0;
    v14 = WORD3(v35);
    if ( !v13 )
      v14 = v11;
    WORD3(v35) = v14;
  }
  v15 = v9 | 0x800;
  if ( (a3 & 2) == 0 )
    v15 = v9;
  v16 = v15 | 0x200;
  if ( (a3 & 8) != 0 )
    v16 = v15;
  v17 = v16 | 0x400;
  if ( (a3 & 1) == 0 )
    v17 = v16;
  v18 = v17 | 0x2000;
  if ( (a3 & 0x20) == 0 )
    v18 = v17;
  v19 = v18 | 0x10000;
  if ( a3 >= 0 )
    v19 = v18;
  if ( (a3 & 0x10) != 0 )
    v19 = v19 & 0xFFFFFFF3 | 4;
  v20 = *(_DWORD *)(a2 + 8);
  v21 = *(_QWORD *)(a2 + 16);
  *((_QWORD *)&v37 + 1) = *(_QWORD *)a2;
  *(_QWORD *)&v37 = 1LL;
  *(_QWORD *)&v39 = UpconvertTime(v20);
  v41 = v37;
  v42 = 0LL;
  *((_QWORD *)&v39 + 1) = v21;
  v40 = v21;
  v37 = v39;
  v38 = v21;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v43, (__int64)&v35, &v37, v19 | 0x40, (__int64)&v41, a4);
  UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v43, 0LL);
  v29 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v26, v27, v28);
  gptiCurrent = v29;
  if ( v29 )
  {
    *((_DWORD *)v29 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v30);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v33 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v32 = *v33;
          v33[2] = 0LL;
          if ( !*(_DWORD *)(v32 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v33);
        }
      }
    }
  }
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(&v43, 4LL) )
    return 2LL;
  else
    return (unsigned int)((unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(
                                             &v43,
                                             2LL) != 0)
         + 1;
}
