/*
 * XREFs of ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x14000F6B4
 * Callers:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x14000F47C (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140008630 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall MilWerRegisterMemoryBlock(const void *a1, unsigned int a2)
{
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax

  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  if ( ModuleHandleW )
  {
    ProcAddress = GetProcAddress(ModuleHandleW, "WerRegisterMemoryBlock");
    if ( ProcAddress )
      ((void (__fastcall *)(const void *, _QWORD))ProcAddress)(a1, a2);
  }
}
