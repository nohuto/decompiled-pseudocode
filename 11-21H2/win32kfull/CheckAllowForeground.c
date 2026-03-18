/*
 * XREFs of CheckAllowForeground @ 0x1C007AD80
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C007AA20 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     CanForceForeground @ 0x1C007B000 (CanForceForeground.c)
 *     IsShellProcess @ 0x1C007B10C (IsShellProcess.c)
 *     _anonymous_namespace_::HasLegacyForegroundActivateRight @ 0x1C00FE99C (_anonymous_namespace_--HasLegacyForegroundActivateRight.c)
 */

__int64 __fastcall CheckAllowForeground(__int64 a1)
{
  int v2; // r12d
  unsigned int v3; // edi
  void *v4; // r14
  unsigned int v5; // r15d
  int v6; // esi
  __int64 ProcessWin32Process; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned int *v15; // rax
  PACCESS_TOKEN v16; // rax
  void *v17; // r14
  PEPROCESS Process; // [rsp+88h] [rbp+48h] BYREF
  _LUID AuthenticationId; // [rsp+90h] [rbp+50h] BYREF
  __int64 ProcessInheritedFromUniqueProcessId; // [rsp+98h] [rbp+58h]

  v2 = 1;
  v3 = 0;
  v4 = (void *)((__int64 (*)(void))PsGetProcessInheritedFromUniqueProcessId)();
  AuthenticationId = 0LL;
  v5 = 0;
  Process = 0LL;
  v6 = 0;
  while ( 1 )
  {
    if ( PsLookupProcessByProcessId(v4, &Process) < 0 )
      goto LABEL_33;
    if ( (unsigned int)PsGetProcessSessionId(Process) != gSessionId )
    {
      v15 = (unsigned int *)UPDWORDPointer(0x2000LL);
      if ( CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v15) )
        v6 = 1;
      ObfDereferenceObject(Process);
      if ( !v6 )
        goto LABEL_22;
      return 1;
    }
    ProcessWin32Process = PsGetProcessWin32Process(Process);
    v8 = ProcessWin32Process;
    if ( !ProcessWin32Process )
      break;
    if ( !v2
      && ((unsigned int)IsShellProcess(ProcessWin32Process)
       || (v13 = *(_QWORD *)(v8 + 664)) != 0 && (*(_DWORD *)(v13 + 64) & 4) != 0) )
    {
      ObfDereferenceObject(Process);
      goto LABEL_22;
    }
    v6 = CanForceForeground(v8);
    if ( !v6 )
    {
      v9 = *(_QWORD *)(v8 + 320);
      if ( v9 && (*(_DWORD *)(v9 + 488) & 0x20) != 0 )
      {
        v6 = 1;
      }
      else
      {
        ProcessInheritedFromUniqueProcessId = PsGetProcessInheritedFromUniqueProcessId(Process);
        v4 = (void *)ProcessInheritedFromUniqueProcessId;
        if ( v2 )
        {
          v2 = 0;
          v16 = PsReferencePrimaryToken(Process);
          v17 = v16;
          if ( v16 )
          {
            if ( SeQueryAuthenticationIdToken(v16, &AuthenticationId) >= 0 )
            {
              if ( AuthenticationId.LowPart == luidSystem[0] && AuthenticationId.HighPart == luidSystem[1] )
              {
                *(_DWORD *)(v8 + 12) |= 0x80000u;
                v6 = 1;
              }
              else
              {
                v6 = 0;
              }
            }
            ObfDereferenceObject(v17);
          }
          v4 = (void *)ProcessInheritedFromUniqueProcessId;
        }
      }
    }
    ObfDereferenceObject(Process);
    if ( v6 )
      return 1;
    v12 = v5++;
    if ( v12 >= 5 )
      goto LABEL_22;
  }
  ObfDereferenceObject(Process);
LABEL_33:
  if ( (unsigned __int8)anonymous_namespace_::HasLegacyForegroundActivateRight(a1) )
    return 1;
LABEL_22:
  if ( gptiForeground
    && *(_DWORD *)(gptiForeground + 632LL) <= 0x400u
    && (*(_DWORD *)(gptiForeground + 648LL) & 0x40) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        84,
        4,
        2,
        84,
        (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
    }
    return 1;
  }
  return v3;
}
