/*
 * XREFs of sub_18000C3F0 @ 0x18000C3F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B798 @ 0x18000B798 (sub_18000B798.c)
 *     atexit @ 0x18000B968 (atexit.c)
 *     sub_18000BAEC @ 0x18000BAEC (sub_18000BAEC.c)
 */

__int64 sub_18000C3F0()
{
  HMODULE ModuleHandleW; // rbx
  BOOL (__stdcall *SleepConditionVariableCS)(PCONDITION_VARIABLE, PCRITICAL_SECTION, DWORD); // rdi
  void (__stdcall *WakeAllConditionVariable)(PCONDITION_VARIABLE); // rax

  InitializeCriticalSectionAndSpinCount(&CriticalSection, 0xFA0u);
  ModuleHandleW = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ( !ModuleHandleW )
  {
    ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
    if ( !ModuleHandleW )
      goto LABEL_9;
  }
  SleepConditionVariableCS = (BOOL (__stdcall *)(PCONDITION_VARIABLE, PCRITICAL_SECTION, DWORD))GetProcAddress(
                                                                                                  ModuleHandleW,
                                                                                                  "SleepConditionVariableCS");
  WakeAllConditionVariable = (void (__stdcall *)(PCONDITION_VARIABLE))GetProcAddress(
                                                                        ModuleHandleW,
                                                                        "WakeAllConditionVariable");
  if ( SleepConditionVariableCS && WakeAllConditionVariable )
  {
    qword_1801D3210 = (__int64)SleepConditionVariableCS;
    qword_1801D3218 = (__int64)WakeAllConditionVariable;
    goto LABEL_7;
  }
  hHandle = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hHandle )
  {
LABEL_9:
    sub_18000BAEC(7u);
    JUMPOUT(0x18000C4BFLL);
  }
LABEL_7:
  if ( !sub_18000B798(0) )
    goto LABEL_9;
  atexit(sub_18000C4D0);
  return 0LL;
}
