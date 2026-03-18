/*
 * XREFs of ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C0230CC4
 * Callers:
 *     NtCompositionInputThread @ 0x1C0231B80 (NtCompositionInputThread.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C0230C10 (-CleanupDwmInputThread@CInputManager@@IEAAXXZ.c)
 *     ?ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z @ 0x1C0231328 (-ValidateUserEvent@CInputManager@@CAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall CInputManager::DwmInputThread(CInputManager *this, void *a2, void *a3, int a4)
{
  CInputManager *v4; // rsi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD *v11; // rax
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  HANDLE Handle; // [rsp+20h] [rbp-28h] BYREF
  HANDLE v23; // [rsp+28h] [rbp-20h] BYREF

  v4 = g_pInputManager;
  Handle = 0LL;
  v23 = 0LL;
  v7 = CInputManager::ValidateUserEvent(a2, &Handle);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v7 = CInputManager::ValidateUserEvent(a3, &v23);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v11 = (struct _KTHREAD *)_InterlockedCompareExchange64(
                             (volatile signed __int64 *)v4 + 1,
                             (signed __int64)KeGetCurrentThread(),
                             0LL);
  if ( !v11 || v11 == KeGetCurrentThread() )
  {
    *((_QWORD *)v4 + 2) = Handle;
    *((_QWORD *)v4 + 3) = v23;
    *((_QWORD *)v4 + 4) = *(_QWORD *)v4;
    *((_DWORD *)v4 + 15) = a4;
    Handle = 0LL;
    v23 = 0LL;
    if ( !qword_1C02960E8 )
      goto LABEL_10;
    v7 = qword_1C02960E8((char *)v4 + 16);
    if ( v7 < 0 )
      goto LABEL_11;
    if ( qword_1C02960F0 )
      v7 = qword_1C02960F0((char *)v4 + 16);
    else
LABEL_10:
      v7 = -1073741822;
LABEL_11:
    v12 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v8, v9, v10);
    gptiCurrent = v12;
    if ( v12 )
    {
      *((_DWORD *)v12 + 387) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v16 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            v15 = *v16;
            v16[2] = 0LL;
            if ( !*(_DWORD *)(v15 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
            HMUnlockObject(*v16);
          }
        }
      }
    }
    CInputManager::CleanupDwmInputThread(v4);
    UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
    goto LABEL_23;
  }
  v7 = -2147483631;
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  if ( v23 )
    ZwClose(v23);
  return (unsigned int)v7;
}
