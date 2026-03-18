/*
 * XREFs of HalpPowerWriteResetCommand @ 0x140506ABC
 * Callers:
 *     HalpInterruptResetAllProcessors @ 0x140504D9C (HalpInterruptResetAllProcessors.c)
 *     HalpInterruptResetThisProcessor @ 0x140504E40 (HalpInterruptResetThisProcessor.c)
 *     HalReturnToFirmware @ 0x140506960 (HalReturnToFirmware.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x1402C3030 (KeStallExecutionProcessor.c)
 *     HalpAcpiPmRegisterWrite @ 0x140362C90 (HalpAcpiPmRegisterWrite.c)
 *     HalpMap @ 0x14037E228 (HalpMap.c)
 *     VslTerminateSecureServices @ 0x14040FCD8 (VslTerminateSecureServices.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     HalpMiscIsLegacyPcType @ 0x14050B28C (HalpMiscIsLegacyPcType.c)
 *     HalEfiResetSystem @ 0x14050D190 (HalEfiResetSystem.c)
 */

void __fastcall __noreturn HalpPowerWriteResetCommand(int a1, volatile signed __int32 *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx

  if ( HalpRebootHandler )
    HalpRebootHandler();
  if ( !a1 )
  {
    if ( (unsigned __int8)HalpMiscIsLegacyPcType() )
    {
      __outbyte(0x70u, 0xFu);
      __outbyte(0x71u, 0);
      KeStallExecutionProcessor(0x64u);
    }
    if ( !HalFirmwareTypeEfi )
    {
      v4 = HalpMap(0LL, 1LL, 1u, 0LL, 4u);
      if ( v4 )
        *(_WORD *)(v4 + 1138) = 4660;
    }
    if ( (HalpPlatformFlags & 4) != 0 )
    {
      __outbyte(0x70u, 0x15u);
      KeStallExecutionProcessor(1u);
    }
    VslTerminateSecureServices();
    if ( HalpHvUsedForReboot )
    {
      v5 = 0LL;
      __writemsr(0x40000003u, 1uLL);
    }
    if ( byte_140C60620 )
    {
      HalpAcpiPmRegisterWrite(8, 0, (__int64)&unk_140C620A0, 1u, 0LL);
      KeStallExecutionProcessor(0x1F4u);
    }
    if ( (HalpPlatformFlags & 2) != 0 )
    {
      __outbyte(0x64u, 0xFEu);
      KeStallExecutionProcessor(0x1388u);
    }
    if ( HalFirmwareTypeEfi )
    {
      HalEfiResetSystem(1LL, v5);
      HalEfiResetSystem(0LL, v6);
      __debugbreak();
    }
  }
  if ( a2 )
    _InterlockedDecrement(a2);
  __halt();
}
