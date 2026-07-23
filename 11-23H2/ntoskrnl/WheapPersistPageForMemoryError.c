/*
 * XREFs of WheapPersistPageForMemoryError @ 0x140611518
 * Callers:
 *     WheaRecoveryBugCheck @ 0x140610B10 (WheaRecoveryBugCheck.c)
 *     WheaReportHwError @ 0x140610B80 (WheaReportHwError.c)
 * Callees:
 *     HalSetEnvironmentVariableEx @ 0x140504FB0 (HalSetEnvironmentVariableEx.c)
 *     WheapErrorContainsMemorySection @ 0x140612788 (WheapErrorContainsMemorySection.c)
 */

void __fastcall WheapPersistPageForMemoryError(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 104) & 0x20) != 0 )
  {
    v1 = WheapErrorContainsMemorySection();
    if ( v1 )
    {
      if ( (*(_BYTE *)v1 & 2) != 0 )
      {
        v2 = *(_QWORD *)(v1 + 16) >> 12;
        HalSetEnvironmentVariableEx(L"UncorrectedBadMemoryPage", (int)&WheapHardwareErrorGuid, (__int64)&v2, 8, 7);
      }
    }
  }
}
