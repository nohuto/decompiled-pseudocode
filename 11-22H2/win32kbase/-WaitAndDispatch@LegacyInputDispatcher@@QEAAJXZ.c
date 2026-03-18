/*
 * XREFs of ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C006F160
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?NeedsUpdateKeyboardLEDs@@YA_NXZ @ 0x1C006F2F8 (-NeedsUpdateKeyboardLEDs@@YA_NXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C006F340 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C006FB18 (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyInputDispatcher::WaitAndDispatch(
        LegacyInputDispatcher *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS v12; // eax
  __int64 v13; // rbx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  void (*v17)(void); // rax
  struct tagTHREADINFO *v19; // rax
  __int64 v20; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax

  while ( 1 )
  {
    if ( *(_QWORD *)(SGDGetUserSessionState(this, a2, a3, a4) + 12672)
      && (*(_DWORD *)(SGDGetUserSessionState(v6, v5, v7, v8) + 12616) & 7) != 0 )
    {
      v19 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v9, v10, v11);
      gptiCurrent = v19;
      if ( v19 )
      {
        *((_DWORD *)v19 + 387) = 1;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
        if ( CurrentProcessWin32Process )
        {
          if ( *(_QWORD *)CurrentProcessWin32Process
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v22 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v28 = *v22;
              v22[2] = 0LL;
              if ( !*(_DWORD *)(v28 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              HMUnlockObject(*v22);
            }
          }
        }
      }
      if ( NeedsUpdateKeyboardLEDs() )
      {
        v27 = SGDGetUserSessionState(v24, v23, v25, v26);
        CKeyboardSensor::UpdateKeyboardLEDs(*(CKeyboardSensor **)(v27 + 12672));
      }
      UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
    }
    v12 = KeWaitForMultipleObjects(
            *((_DWORD *)this + 13),
            *((PVOID **)this + 1),
            WaitAny,
            WrUserRequest,
            *((_BYTE *)this + 56),
            *((_BYTE *)this + 57),
            0LL,
            *((PKWAIT_BLOCK *)this + 3));
    v13 = (unsigned int)v12;
    if ( v12 < 0 )
      return (unsigned int)v13;
    v14 = *((_DWORD *)this + 13);
    if ( (unsigned int)v13 >= v14 )
      goto LABEL_30;
    v15 = *((_DWORD *)this + 10);
    if ( v15 >= v14 && v15 != 64 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3241LL);
    v16 = *((_DWORD *)this + 10);
    if ( (unsigned int)v13 < v16 || v16 == 64 )
    {
LABEL_30:
      if ( (unsigned int)v13 >= *((_DWORD *)this + 10) )
        return (unsigned int)v13;
      v17 = *(void (**)(void))(*((_QWORD *)this + 4) + 16 * v13);
      if ( !v17 )
        return (unsigned int)v13;
      v17();
    }
    else
    {
      LegacyInputDispatcher::Dispatch(this, v13);
    }
  }
}
