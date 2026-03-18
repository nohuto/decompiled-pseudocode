/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18027C9A4
 * Callers:
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x1800BFA20 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x1800C097C (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x1800E5624 (--1CInteraction@@MEAA@XZ.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800E8BA8 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     PubSebRegisterRpc @ 0x1800FDB98 (PubSebRegisterRpc.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

int MicrosoftTelemetryAssertTriggeredNoArgs()
{
  FARPROC ProcAddress; // rax
  int v2; // [rsp+20h] [rbp-40h] BYREF
  __int16 *v3; // [rsp+28h] [rbp-38h]
  void *v4; // [rsp+30h] [rbp-30h]
  char v5; // [rsp+38h] [rbp-28h]
  __int64 v6; // [rsp+40h] [rbp-20h]
  int v7; // [rsp+48h] [rbp-18h]
  int v8; // [rsp+4Ch] [rbp-14h]
  char v9; // [rsp+50h] [rbp-10h]
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
        v2 = 11;
        v3 = _ImageBase;
        v6 = 0LL;
        v4 = retaddr;
        v7 = -1;
        v8 = -1;
        v9 = 1;
        v5 = 0;
        LODWORD(ProcAddress) = ((__int64 (__fastcall *)(int *))ProcAddress)(&v2);
      }
    }
  }
  return (int)ProcAddress;
}
