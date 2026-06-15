/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgs @ 0x14006E28C
 * Callers:
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140001A9C (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x14000CFA0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x140021FBC (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

int __fastcall MicrosoftTelemetryAssertTriggeredArgs(__int64 a1, int a2, int a3)
{
  FARPROC ProcAddress; // rax
  HMODULE phModule; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+28h] [rbp-38h] BYREF
  struct HINSTANCE__ *v10; // [rsp+30h] [rbp-30h]
  void *v11; // [rsp+38h] [rbp-28h]
  char v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+54h] [rbp-Ch]
  char v16; // [rsp+58h] [rbp-8h]
  void *retaddr; // [rsp+68h] [rbp+8h]

  phModule = 0LL;
  LODWORD(ProcAddress) = GetModuleHandleExA(2u, "ntdll.dll", &phModule);
  if ( (_DWORD)ProcAddress )
  {
    if ( phModule )
    {
      ProcAddress = GetProcAddress(phModule, "MicrosoftTelemetryAssertTriggeredUM");
      if ( ProcAddress )
      {
        v9 = 11;
        v10 = &_ImageBase;
        v11 = retaddr;
        v16 = 1;
        v12 = 1;
        v13 = a1;
        v14 = a2;
        v15 = a3;
        LODWORD(ProcAddress) = ((__int64 (__fastcall *)(int *))ProcAddress)(&v9);
      }
    }
  }
  return (int)ProcAddress;
}
