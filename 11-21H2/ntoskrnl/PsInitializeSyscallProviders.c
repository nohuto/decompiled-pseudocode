/*
 * XREFs of PsInitializeSyscallProviders @ 0x140AF2E54
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PsRegisterSyscallProviderServiceTableMetadata @ 0x140659320 (PsRegisterSyscallProviderServiceTableMetadata.c)
 *     VslInitializeSyscallProviders @ 0x140AF2DE0 (VslInitializeSyscallProviders.c)
 */

void PsInitializeSyscallProviders()
{
  if ( VslVsmEnabled && (int)VslInitializeSyscallProviders() >= 0 )
  {
    PspSyscallProvidersEnabled = 1;
    PsRegisterSyscallProviderServiceTableMetadata(0);
  }
  else
  {
    PspSyscallProvidersEnabled = 0;
  }
}
