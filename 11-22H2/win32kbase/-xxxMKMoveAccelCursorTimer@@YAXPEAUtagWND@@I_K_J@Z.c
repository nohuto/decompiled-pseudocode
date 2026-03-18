/*
 * XREFs of ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B6B80
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MouseMove @ 0x1C01E8770 (MouseMove.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C0207894 (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall xxxMKMoveAccelCursorTimer(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  char v4; // al
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rax
  __int64 *v13; // rbx

  if ( (dword_1C02905D4 & 0x40) == 0 )
    goto LABEL_6;
  v4 = gLockBits | gLatchBits | gPhysModifierState;
  if ( (v4 & 3) == 0 )
  {
    if ( (v4 & 0xC) != 0 )
    {
      v5 = 4 * (unsigned __int8)byte_1C0290512;
      goto LABEL_10;
    }
LABEL_6:
    if ( giMouseMoveTable >= (unsigned int)(unsigned __int8)gMouseCursor[0] )
    {
      v5 = (unsigned __int8)byte_1C0290512;
      giMouseMoveTable = 1;
      gtmridMKMoveCursor = ApiSetEditionSetAccessibilityTimer(gtmridMKMoveCursor, 50LL, xxxMKMoveConstCursorTimer);
    }
    else
    {
      a2 = byte_1C0290491;
      v5 = byte_1C0290491[giMouseMoveTable];
      a1 = (unsigned int)++giMouseMoveTable;
    }
    if ( !v5 )
      return;
    goto LABEL_10;
  }
  v5 = 1;
LABEL_10:
  UserSessionSwitchLeaveCrit(a1, (__int64)a2, a3, a4);
  MouseMove(gMKDeltaX * v5, gMKDeltaY * v5);
  v9 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v6, v7, v8);
  gptiCurrent = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v13 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v12 = *v13;
          v13[2] = 0LL;
          if ( !*(_DWORD *)(v12 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v13);
        }
      }
    }
  }
}
