/*
 * XREFs of ?AERTUnlockModuleSection@@YAJPEAX@Z @ 0x14007AF18
 * Callers:
 *     ?Stop@CAudioPump@@UEAAJXZ @ 0x140073E90 (-Stop@CAudioPump@@UEAAJXZ.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14007B164 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall AERTUnlockModuleSection(void *a1)
{
  int v1; // edx
  int v2; // ecx
  int v3; // ebx
  int v4; // r8d

  v3 = RtlUnlockModuleSection(CAudioPump::DummyRoutineForLockingRtCodeSection);
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v2, v1, v4, 11, 0, 0, 0, 0);
  return v3 | 0x10000000u;
}
