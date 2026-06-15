/*
 * XREFs of ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x1800301EC
 * Callers:
 *     ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x18000A610 (-LowPowerEpochNotificationCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z @ 0x18002E098 (-TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void TsSessionOnLowPowerEpochStateChanged(void)
{
  struct _RTL_CRITICAL_SECTION *v0; // rbx
  int v1; // eax
  int v2; // eax
  int v3[2]; // [rsp+20h] [rbp-48h] BYREF
  int v4; // [rsp+28h] [rbp-40h]
  int *v5; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct TSSession *v7; // [rsp+70h] [rbp+8h] BYREF

  v0 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( (int)TsSessionGetPrimaryConsoleAudioSession(&v7) >= 0 )
  {
    if ( *((_DWORD *)v7 + 253) || g_bLowPowerEpoch || !*((_DWORD *)v7 + 254) || g_bApmSuspended )
    {
      v1 = *(_DWORD *)v7;
      *(_QWORD *)v3 = &off_180048928;
      v4 = v1;
      v5 = v3;
      v2 = QueueGenericWorkItem(v3);
      if ( v2 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x85E,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v2);
    }
    if ( v0 )
      LeaveCriticalSection(v0);
  }
  else if ( v0 )
  {
    LeaveCriticalSection(v0);
  }
}
