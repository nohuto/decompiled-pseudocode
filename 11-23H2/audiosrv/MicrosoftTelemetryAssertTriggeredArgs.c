/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgs @ 0x180163160
 * Callers:
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180016F54 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x180017250 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180018F50 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800510AC (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x1800EFD90 (-PreADGTermination@CAudioSrv@@EEAAXXZ.c)
 *     ?RefreshConnectorFormats@EffectPack@@QEAAJXZ @ 0x18014E6C8 (-RefreshConnectorFormats@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

int __fastcall MicrosoftTelemetryAssertTriggeredArgs(__int64 a1, int a2, int a3, char a4)
{
  FARPROC ProcAddress; // rax
  HMODULE phModule; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+28h] [rbp-38h] BYREF
  struct HINSTANCE__ *v12; // [rsp+30h] [rbp-30h]
  void *v13; // [rsp+38h] [rbp-28h]
  char v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+54h] [rbp-Ch]
  char v18; // [rsp+58h] [rbp-8h]
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
        v11 = 11;
        v12 = &_ImageBase;
        v13 = retaddr;
        v18 = a4;
        v14 = 1;
        v15 = a1;
        v16 = a2;
        v17 = a3;
        LODWORD(ProcAddress) = ((__int64 (__fastcall *)(int *))ProcAddress)(&v11);
      }
    }
  }
  return (int)ProcAddress;
}
