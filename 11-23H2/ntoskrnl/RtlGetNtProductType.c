/*
 * XREFs of RtlGetNtProductType @ 0x1402F81D0
 * Callers:
 *     IoFillDumpHeader @ 0x140550288 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x140554980 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x140630E1C (MmWriteTriageInformation.c)
 *     RtlGetVersion @ 0x140758EF0 (RtlGetVersion.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14076B68C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409BDCA0 (RtlRestoreBootStatusDefaults.c)
 *     AstInitialize @ 0x140B74BD4 (AstInitialize.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14087F484 (RtlpGetNtProductTypeFromRegistry.c)
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
