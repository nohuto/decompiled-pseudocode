/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgs @ 0x18074BBF4
 * Callers:
 *     ?OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1801B9350 (-OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J.c)
 *     _winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_ResumeCoro$1_::_1_::catch$11 @ 0x1801CF776 (_winrt--Windows--Internal--Shell--implementation--FocusSessionComponent--Initialize_ea_1801CF776.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

int __fastcall MicrosoftTelemetryAssertTriggeredArgs(__int64 a1, int a2)
{
  FARPROC ProcAddress; // rax
  int v5; // [rsp+20h] [rbp-40h] BYREF
  struct HINSTANCE__ *v6; // [rsp+28h] [rbp-38h]
  void *v7; // [rsp+30h] [rbp-30h]
  char v8; // [rsp+38h] [rbp-28h]
  const char *v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+48h] [rbp-18h]
  int v11; // [rsp+4Ch] [rbp-14h]
  char v12; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+8h]
  HMODULE phModule; // [rsp+70h] [rbp+10h] BYREF

  phModule = 0LL;
  LODWORD(ProcAddress) = GetModuleHandleExA(2u, "ntdll.dll", &phModule);
  if ( (_DWORD)ProcAddress )
  {
    if ( phModule )
    {
      ProcAddress = GetProcAddress(phModule, "MicrosoftTelemetryAssertTriggeredUM");
      if ( ProcAddress )
      {
        v5 = 11;
        v6 = &_ImageBase;
        v11 = 0;
        v7 = retaddr;
        v9 = "twinui.pcshell.dll";
        v12 = 1;
        v8 = 1;
        v10 = a2;
        LODWORD(ProcAddress) = ((__int64 (__fastcall *)(int *))ProcAddress)(&v5);
      }
    }
  }
  return (int)ProcAddress;
}
