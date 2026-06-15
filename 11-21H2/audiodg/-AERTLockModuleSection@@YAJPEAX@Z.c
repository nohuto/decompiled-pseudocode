/*
 * XREFs of ?AERTLockModuleSection@@YAJPEAX@Z @ 0x1400059F4
 * Callers:
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140005DA0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x140002CB4 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall AERTLockModuleSection(void *a1)
{
  int v1; // edx
  int v2; // ecx
  int v3; // ebx
  int v4; // r8d

  v3 = RtlLockModuleSection(CAudioPump::DummyRoutineForLockingRtCodeSection);
  if ( v3 == -1073741663 )
  {
    v3 = IncreaseProcessWorkingSet(0x100000LL);
    if ( v3 >= 0 )
      v3 = RtlLockModuleSection(CAudioPump::DummyRoutineForLockingRtCodeSection);
  }
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v2, v1, v4, 10, 0, 0, 0, 0);
  return v3 | 0x10000000u;
}
