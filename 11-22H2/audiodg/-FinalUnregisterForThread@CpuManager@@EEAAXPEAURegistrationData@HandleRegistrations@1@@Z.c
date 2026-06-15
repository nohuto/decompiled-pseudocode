/*
 * XREFs of ?FinalUnregisterForThread@CpuManager@@EEAAXPEAURegistrationData@HandleRegistrations@1@@Z @ 0x140053490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CpuManager::FinalUnregisterForThread(CpuManager *this, HANDLE *a2)
{
  NtSetInformationThread(*a2, ThreadEnableAlignmentFaultFixup|0x20, 0LL, 0);
  CloseHandle(*a2);
  *a2 = 0LL;
}
