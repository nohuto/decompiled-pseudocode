/*
 * XREFs of NtUserConfigureActivationObject @ 0x1C00B8B40
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1C00651C8 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CheckProcessForeground@ForegroundManagement@@YA_NK@Z @ 0x1C012E850 (-CheckProcessForeground@ForegroundManagement@@YA_NK@Z.c)
 *     ?QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectData@@@Z @ 0x1C012EA24 (-QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectDat.c)
 *     ValidateHbwnd @ 0x1C012FDB0 (ValidateHbwnd.c)
 */

__int64 __fastcall NtUserConfigureActivationObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // r12
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  struct _LUID *v8; // rsi
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rax
  char v16; // al
  __int64 *v17; // rdi
  CActivationObjectManager *v18; // rcx
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 CurrentProcess; // rax
  BOOL v26; // edx
  bool v27; // zf
  unsigned int CurrentProcessId; // eax
  unsigned int v29; // edx
  ULONG v30; // ecx
  __int64 v31; // rax
  struct _LUID v32; // [rsp+30h] [rbp-68h] BYREF
  __int128 v33; // [rsp+50h] [rbp-48h] BYREF
  __int128 v34; // [rsp+60h] [rbp-38h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = (struct _LUID *)a1;
  LOBYTE(a1) = 1;
  v9 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, a2, a3, a4);
  gptiCurrent = v9;
  v13 = 0;
  if ( v9 )
  {
    *((_DWORD *)v9 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    if ( CurrentProcessWin32Process )
    {
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v15 = v10 & CurrentProcessWin32Process;
      if ( v15 )
      {
        if ( (*(_DWORD *)(v15 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v16 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v16 = 0;
          }
          if ( v16 )
          {
            while ( 1 )
            {
              v17 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v17[2] = 0LL;
              if ( !*(_DWORD *)(*v17 + 8) )
              {
                v32.LowPart = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              }
              HMUnlockObject(*v17);
            }
          }
        }
      }
    }
  }
  v32 = 0LL;
  v18 = (CActivationObjectManager *)&v8[1];
  if ( &v8[1] < v8 || (unsigned __int64)v18 > MmUserProbeAddress )
    v8 = (struct _LUID *)MmUserProbeAddress;
  v32 = *v8;
  if ( v7 )
  {
    if ( v7 != 1 )
      goto LABEL_35;
    CurrentProcess = PsGetCurrentProcess(v18, v10, v12);
    v26 = 0;
    if ( CurrentProcess )
      v26 = CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
    v27 = !v26;
LABEL_26:
    if ( v27 )
      goto LABEL_27;
    goto LABEL_15;
  }
  if ( v6 != 1 )
  {
    if ( !v6 )
      goto LABEL_15;
LABEL_35:
    v30 = 87;
    goto LABEL_29;
  }
  v33 = 0LL;
  v34 = 0LL;
  if ( CActivationObjectManager::QueryActivationObjectData(v18, &v32, (struct _tagActivationObjectData *)&v33) < 0 )
    goto LABEL_35;
  if ( HIDWORD(v34) != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
LABEL_27:
    v30 = 5;
LABEL_29:
    UserSetLastError(v30);
    goto LABEL_17;
  }
  v31 = ValidateHbwnd(*((_QWORD *)&v33 + 1));
  if ( !v31 )
    goto LABEL_35;
  if ( !*(_QWORD *)(v31 + 136) )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    v27 = !ForegroundManagement::CheckProcessForeground((ForegroundManagement *)(CurrentProcessId & 0xFFFFFFFC), v29);
    goto LABEL_26;
  }
LABEL_15:
  v19 = CActivationObjectManager::ConfigureActivationObject((__int64)v18, &v32, v7, v6, v5, a5);
  if ( v19 < 0 )
  {
    v30 = RtlNtStatusToDosError(v19);
    goto LABEL_29;
  }
  v13 = 1;
LABEL_17:
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return v13;
}
