/*
 * XREFs of ?AERTUnlockCurrentThread@@YAJXZ @ 0x14002D5E0
 * Callers:
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001A570 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14006B550 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 AERTUnlockCurrentThread(void)
{
  int v0; // edx
  int v1; // ecx
  int v2; // ebx
  int v3; // r8d

  v2 = RtlUnlockCurrentThread();
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v1, v0, v3, 13, 0, 0, 0, 0);
  return v2 | 0x10000000u;
}
