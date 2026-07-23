/*
 * XREFs of RtlGetNtProductType @ 0x1402F7F40
 * Callers:
 *     IoFillDumpHeader @ 0x14054FC68 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140554360 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x14063093C (MmWriteTriageInformation.c)
 *     RtlGetVersion @ 0x140759210 (RtlGetVersion.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14076B9AC (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409BDB50 (RtlRestoreBootStatusDefaults.c)
 *     AstInitialize @ 0x140B75974 (AstInitialize.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x140289E70 (PsGetCurrentServerSilo.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14087F714 (RtlpGetNtProductTypeFromRegistry.c)
 */

BOOLEAN __cdecl RtlGetNtProductType(PNT_PRODUCT_TYPE NtProductType)
{
  BOOLEAN v2; // bl
  __int64 CurrentServerSilo; // rax
  _QWORD *v5; // rax

  v2 = 0;
  if ( PsIsCurrentThreadInServerSilo() )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( CurrentServerSilo )
      v5 = *(_QWORD **)(CurrentServerSilo + 1488);
    else
      v5 = &PspHostSiloGlobals;
    *NtProductType = *(PNT_PRODUCT_TYPE)(v5[165] + 16LL);
  }
  else if ( MEMORY[0xFFFFF78000000268] )
  {
    *NtProductType = MEMORY[0xFFFFF78000000264];
  }
  else if ( KeGetCurrentIrql() > 1u || (int)RtlpGetNtProductTypeFromRegistry(NtProductType) < 0 )
  {
    *NtProductType = NtProductWinNt;
    return v2;
  }
  return 1;
}
