/*
 * XREFs of sub_18000C400 @ 0x18000C400
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7A8 @ 0x18000B7A8 (sub_18000B7A8.c)
 *     atexit @ 0x18000B978 (atexit.c)
 *     sub_18000BAFC @ 0x18000BAFC (sub_18000BAFC.c)
 */

__int64 sub_18000C400()
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
    qword_1801F7340 = (__int64)SleepConditionVariableCS;
    qword_1801F7348 = (__int64)WakeAllConditionVariable;
    goto LABEL_7;
  }
  hHandle = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hHandle )
  {
LABEL_9:
    sub_18000BAFC(7u);
    JUMPOUT(0x18000C4CFLL);
  }
LABEL_7:
  if ( !sub_18000B7A8(0) )
    goto LABEL_9;
  atexit(sub_18000C4E0);
  return 0LL;
}
