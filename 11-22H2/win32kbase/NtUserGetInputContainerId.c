/*
 * XREFs of NtUserGetInputContainerId @ 0x1C01447E0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C0048218 (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     SetLastNtError @ 0x1C00D5700 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ValidateHbwnd @ 0x1C012FDB0 (ValidateHbwnd.c)
 *     ResolveContainerId @ 0x1C01E8A3C (ResolveContainerId.c)
 */

__int64 __fastcall NtUserGetInputContainerId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // r12
  int v6; // r14d
  __int128 *v7; // rsi
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 *v11; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdi
  int v14; // ecx
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  __int16 v20; // cx
  char v21; // al
  char v22; // al
  _OWORD *v23; // rax
  unsigned __int16 *v24; // rcx
  __int64 v25; // rax
  _WORD *v26; // rcx
  char v27; // al
  char v28; // al
  _DWORD v30[12]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v31; // [rsp+50h] [rbp-58h]
  __int128 v32; // [rsp+60h] [rbp-48h] BYREF

  v4 = (_DWORD *)a4;
  v6 = a2;
  v7 = (__int128 *)a1;
  LOBYTE(a1) = 1;
  v8 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, a2, a3, a4);
  gptiCurrent = v8;
  v10 = 0;
  if ( v8 )
  {
    *((_DWORD *)v8 + 387) = 1;
    if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v9) )
    {
      while ( 1 )
      {
        v11 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
        if ( !gpSharedUserCritDeferredUnlockListHead )
          break;
        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                     + 2);
        v11[2] = 0LL;
        if ( !*(_DWORD *)(*v11 + 8) )
        {
          v30[1] = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
        }
        HMUnlockObject(*v11);
      }
    }
  }
  v32 = 0LL;
  v30[0] = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
  v13 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( isChildPartition() )
    goto LABEL_11;
  if ( v7 + 1 < v7 || (unsigned __int64)(v7 + 1) > MmUserProbeAddress )
    v7 = (__int128 *)MmUserProbeAddress;
  v31 = *v7;
  v32 = v31;
  if ( !(unsigned __int8)ResolveContainerId(&v32, v30) || (v19 = ValidateHbwnd(v6)) == 0 || !a3 )
  {
    v14 = 87;
    goto LABEL_12;
  }
  v20 = *(_WORD *)(v13 + 1096);
  if ( v20 || (v21 = 1, *(_WORD *)(v13 + 1098)) )
    v21 = 0;
  if ( !v21 )
  {
    if ( v20 != LOWORD(v30[0]) || (v22 = 1, *(_WORD *)(v13 + 1098) != HIWORD(v30[0])) )
      v22 = 0;
    if ( !v22 )
      goto LABEL_11;
  }
  if ( !*(_QWORD *)(v19 + 136) )
  {
    v23 = (_OWORD *)Win32AllocPoolZInit(0x14uLL, 0x64636755u);
    *(_QWORD *)(v19 + 136) = v23;
    if ( !v23 )
    {
      v14 = 8;
      goto LABEL_12;
    }
    *v23 = 0LL;
  }
  v24 = *(unsigned __int16 **)(v19 + 136);
  v25 = *((_QWORD *)v24 + 1);
  if ( v25 )
  {
    if ( v25 != a3 )
      goto LABEL_11;
  }
  v15 = *v24;
  v26 = v24 + 1;
  if ( (_WORD)v15 || (v27 = 1, *v26) )
    v27 = 0;
  if ( !v27 )
  {
    if ( (_WORD)v15 != LOWORD(v30[0]) || (v28 = 1, *v26 != HIWORD(v30[0])) )
      v28 = 0;
    if ( !v28 )
    {
LABEL_11:
      v14 = 5;
LABEL_12:
      UserSetLastError(v14);
      goto LABEL_45;
    }
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_DWORD *)MmUserProbeAddress;
  *v4 = v30[0];
  v16 = *(_DWORD **)(v19 + 136);
  *v16 = v30[0];
  *(_QWORD *)(*(_QWORD *)(v19 + 136) + 8LL) = a3;
  *(_DWORD *)(v13 + 1096) = v30[0];
  v10 = 1;
LABEL_45:
  UserSessionSwitchLeaveCrit((__int64)v16, v15, v17, v18);
  return v10;
}
