/*
 * XREFs of __scrt_initialize_thread_safe_statics @ 0x18004ADE0
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x18004AA88 (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x18004AC58 (atexit.c)
 *     __scrt_fastfail @ 0x18004B1B0 (__scrt_fastfail.c)
 */

__int64 _scrt_initialize_thread_safe_statics()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rdi
  FARPROC v2; // rax

  InitializeCriticalSectionAndSpinCount(&stru_180062AE8, 0xFA0u);
  ModuleHandleW = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ( !ModuleHandleW )
  {
    ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
    if ( !ModuleHandleW )
      goto LABEL_9;
  }
  ProcAddress = GetProcAddress(ModuleHandleW, "SleepConditionVariableCS");
  v2 = GetProcAddress(ModuleHandleW, "WakeAllConditionVariable");
  if ( ProcAddress && v2 )
  {
    qword_180062B10 = (__int64)ProcAddress;
    qword_180062B18 = (__int64)v2;
    goto LABEL_7;
  }
  hObject = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hObject )
  {
LABEL_9:
    _scrt_fastfail(7LL);
    JUMPOUT(0x18004AEAFLL);
  }
LABEL_7:
  if ( !_scrt_initialize_onexit_tables(0) )
    goto LABEL_9;
  atexit(_scrt_uninitialize_thread_safe_statics);
  return 0LL;
}
