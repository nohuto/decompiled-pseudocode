/*
 * XREFs of ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x1800EFDE0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x1801631B0 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSrv::PreADGTermination(CAudioSrv *this)
{
  EnterCriticalSection(&g_csVadList);
  if ( qword_1801CEE60 )
    MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", (unsigned int)qword_1801CEE60, 0LL, 1LL);
  LeaveCriticalSection(&g_csVadList);
}
