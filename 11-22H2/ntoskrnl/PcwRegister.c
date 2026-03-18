/*
 * XREFs of PcwRegister @ 0x140874250
 * Callers:
 *     ExpRegisterCounterSet @ 0x140859ED0 (ExpRegisterCounterSet.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA470 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     ExpPcwDisabledStatus @ 0x140A01868 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwRegister(PPCW_REGISTRATION *Registration, PPCW_REGISTRATION_INFORMATION Info)
{
  __int64 (__fastcall **ExtensionTable)(PPCW_REGISTRATION *, PPCW_REGISTRATION_INFORMATION); // rax
  NTSTATUS v5; // ebx

  ExtensionTable = (__int64 (__fastcall **)(PPCW_REGISTRATION *, PPCW_REGISTRATION_INFORMATION))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( ExtensionTable )
  {
    v5 = (*ExtensionTable)(Registration, Info);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
  else
  {
    *Registration = 0LL;
    return ExpPcwDisabledStatus();
  }
  return v5;
}
