/*
 * XREFs of ?TsSessionOnApmResumeSuspendStateChanged@@YAXXZ @ 0x1800300D8
 * Callers:
 *     ?OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z @ 0x18000B2B0 (-OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z @ 0x18002E098 (-TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void TsSessionOnApmResumeSuspendStateChanged(void)
{
  struct _RTL_CRITICAL_SECTION *v0; // rbx
  int PrimaryConsoleAudioSession; // eax
  unsigned int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5[2]; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+28h] [rbp-40h]
  int *v7; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct TSSession *v9; // [rsp+70h] [rbp+8h] BYREF

  v0 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  PrimaryConsoleAudioSession = TsSessionGetPrimaryConsoleAudioSession(&v9);
  v2 = PrimaryConsoleAudioSession;
  if ( PrimaryConsoleAudioSession >= 0 )
  {
    if ( *((_DWORD *)v9 + 253) || g_bLowPowerEpoch || !*((_DWORD *)v9 + 254) || g_bApmSuspended )
    {
      v3 = *(_DWORD *)v9;
      *(_QWORD *)v5 = &off_1800488C8;
      v6 = v3;
      v7 = v5;
      v4 = QueueGenericWorkItem(v5);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x87E,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v4);
    }
    if ( v0 )
      LeaveCriticalSection(v0);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87E,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)PrimaryConsoleAudioSession);
    if ( v0 )
      LeaveCriticalSection(v0);
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x87E,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)v2);
  }
}
