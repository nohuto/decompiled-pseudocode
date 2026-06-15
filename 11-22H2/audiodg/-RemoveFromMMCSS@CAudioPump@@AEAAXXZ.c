/*
 * XREFs of ?RemoveFromMMCSS@CAudioPump@@AEAAXXZ @ 0x140073D80
 * Callers:
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14000B480 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x140038B10 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioPump::RemoveFromMMCSS(CAudioPump *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 29);
  if ( v2 )
  {
    *((_QWORD *)this + 29) = 0LL;
    NtClose(v2);
  }
  ResetEngineThreadPriority((void **)this + 28);
}
