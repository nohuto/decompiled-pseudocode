/*
 * XREFs of ?CancelDeadline@CAudioPump@@AEAAXXZ @ 0x140008D70
 * Callers:
 *     ?EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z @ 0x140006CA0 (-EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14000B480 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x1400388E2 (-CheckForPause@CAudioPump@@AEAAXXZ.c)
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x140038AD0 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x140008E4C (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     McTemplateU0pit_EtwEventWriteTransfer @ 0x1400390FC (McTemplateU0pit_EtwEventWriteTransfer.c)
 */

void __fastcall CAudioPump::CancelDeadline(CAudioPump *this)
{
  __int64 v2; // rcx
  char v3; // al
  int v4; // ecx

  LinearFitT<256>::Reset((char *)this + 424);
  v2 = *((_QWORD *)this + 29);
  *((_QWORD *)this + 578) = 0LL;
  *((_QWORD *)this + 579) = 0LL;
  if ( v2 )
  {
    v3 = AvTaskIndexYieldCancel();
    if ( (byte_1400CF981 & 8) != 0 )
      McTemplateU0pit_EtwEventWriteTransfer(v4, (unsigned int)&AudioCore_Pump_CancelDeadline, (_DWORD)this, 0, v3);
  }
}
