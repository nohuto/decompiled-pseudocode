/*
 * XREFs of ?CancelDeadline@CAudioPump@@AEAAXXZ @ 0x14002C424
 * Callers:
 *     ?EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z @ 0x140005B70 (-EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001A570 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x14006B19C (-CheckForPause@CAudioPump@@AEAAXXZ.c)
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14006B550 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     McTemplateU0pit_EtwEventWriteTransfer @ 0x14002C4A8 (McTemplateU0pit_EtwEventWriteTransfer.c)
 */

void __fastcall CAudioPump::CancelDeadline(CAudioPump *this)
{
  int v1; // ebx
  char v2; // al
  int v3; // ecx

  v1 = (int)this;
  *((_DWORD *)this + 106) = 0;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 577) = 0LL;
  *((_QWORD *)this + 578) = 0LL;
  if ( *((_QWORD *)this + 29) )
  {
    v2 = AvTaskIndexYieldCancel();
    if ( (byte_1400C1841 & 8) != 0 )
      McTemplateU0pit_EtwEventWriteTransfer(v3, (unsigned int)&AudioCore_Pump_CancelDeadline, v1, 0, v2);
  }
}
