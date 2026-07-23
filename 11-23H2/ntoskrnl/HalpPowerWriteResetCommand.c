/*
 * XREFs of HalpPowerWriteResetCommand @ 0x14050700C
 * Callers:
 *     HalpInterruptResetAllProcessors @ 0x1405052EC (HalpInterruptResetAllProcessors.c)
 *     HalpInterruptResetThisProcessor @ 0x140505390 (HalpInterruptResetThisProcessor.c)
 *     HalReturnToFirmware @ 0x140506EB0 (HalReturnToFirmware.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x1402C32C0 (KeStallExecutionProcessor.c)
 *     HalpAcpiPmRegisterWrite @ 0x140362E30 (HalpAcpiPmRegisterWrite.c)
 *     HalpMap @ 0x14037E3C8 (HalpMap.c)
 *     VslTerminateSecureServices @ 0x14040FEB8 (VslTerminateSecureServices.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     HalpMiscIsLegacyPcType @ 0x14050B7DC (HalpMiscIsLegacyPcType.c)
 *     HalEfiResetSystem @ 0x14050D6E0 (HalEfiResetSystem.c)
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
