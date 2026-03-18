/*
 * XREFs of VidSchSuspendAdapter @ 0x1C0086510
 * Callers:
 *     VidSchiDeferredVisibilityThread @ 0x1C00012D0 (VidSchiDeferredVisibilityThread.c)
 * Callees:
 *     VidSchWaitForEvents @ 0x1C0001A80 (VidSchWaitForEvents.c)
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C0002864 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     memset @ 0x1C001AC00 (memset.c)
 *     VidSchSubmitGlobalCommand @ 0x1C00880A8 (VidSchSubmitGlobalCommand.c)
 *     VidSchFlushDevice @ 0x1C0089F70 (VidSchFlushDevice.c)
 */

__int64 __fastcall VidSchSuspendAdapter(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  int v5; // ecx
  struct _KEVENT Event; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v8[10]; // [rsp+60h] [rbp+7h] BYREF
  struct _KEVENT *p_Event; // [rsp+C0h] [rbp+67h] BYREF

  v3 = *(_DWORD *)(a1 + 724);
  v5 = *(_DWORD *)(a1 + 736);
  if ( v3 || v5 )
  {
    if ( !a3 )
      VidSchiSuspendResumeDevicesForPowerTransition(a1, 1);
    VidSchFlushDevice(*(_QWORD *)(a1 + 256));
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v8, 0, sizeof(v8));
    LODWORD(v8[0]) = 0;
    v8[3] = VidSchiDrainFlipQueue;
    LODWORD(v8[5]) = 8;
    v8[4] = &Event;
    v8[6] = a1;
    VidSchSubmitGlobalCommand(a1, v8);
    p_Event = &Event;
    VidSchWaitForEvents(a1, 1u, (PVOID *)&p_Event, 0LL, 0);
  }
  return 0LL;
}
