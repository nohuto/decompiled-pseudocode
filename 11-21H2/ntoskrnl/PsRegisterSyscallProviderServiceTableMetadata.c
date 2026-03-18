/*
 * XREFs of PsRegisterSyscallProviderServiceTableMetadata @ 0x140659320
 * Callers:
 *     KeAddSystemServiceTable @ 0x140844150 (KeAddSystemServiceTable.c)
 *     PsInitializeSyscallProviders @ 0x140AF2E54 (PsInitializeSyscallProviders.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x1406584BC (VslRegisterSyscallProviderServiceTableMetadata.c)
 */

__int64 __fastcall PsRegisterSyscallProviderServiceTableMetadata(unsigned int a1)
{
  __int64 v3; // rdi
  struct _MDL *v4; // rsi

  if ( !PspSyscallProvidersEnabled )
    return 3221225629LL;
  v3 = 2LL * a1;
  v4 = (struct _MDL *)*((_QWORD *)&KeServiceDescriptorTableShadow[v3 + 1] + 1);
  if ( !v4 )
    return 3221225659LL;
  if ( a1 == 1 && (unsigned int)MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) == -1 )
    return 3221226581LL;
  return VslRegisterSyscallProviderServiceTableMetadata(a1, KeServiceDescriptorTableShadow[v3 + 1], v4);
}
