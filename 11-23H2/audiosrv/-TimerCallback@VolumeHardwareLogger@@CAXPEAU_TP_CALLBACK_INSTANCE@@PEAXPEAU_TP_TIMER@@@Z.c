/*
 * XREFs of ?TimerCallback@VolumeHardwareLogger@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1801298D0
 * Callers:
 *     <none>
 * Callees:
 *     ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x180128060 (-LogBurst@VolumeHardwareLogger@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VolumeHardwareLogger::TimerCallback(
        PTP_CALLBACK_INSTANCE Instance,
        struct _RTL_CRITICAL_SECTION *Context,
        PTP_TIMER Timer)
{
  EnterCriticalSection(Context);
  VolumeHardwareLogger::LogBurst(Context);
  if ( Context )
    LeaveCriticalSection(Context);
}
