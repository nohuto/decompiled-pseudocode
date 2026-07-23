/*
 * XREFs of KiInitializeProcessorGroupSchedulingData @ 0x14057D9BC
 * Callers:
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140A9FC4C (KiAddProcessorToGroupSchedulingDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiInitializeProcessorGroupSchedulingData(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 34192) = a1 + 34184;
  *(_QWORD *)(a1 + 34184) = a1 + 34184;
  *(_DWORD *)(a1 + 216) = 424 * *(_DWORD *)(a1 + 36) + 128;
  result = KiGenerationEndTick;
  *(_QWORD *)(a1 + 34520) = KiGenerationEndTick;
  return result;
}
