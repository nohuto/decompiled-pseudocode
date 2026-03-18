/*
 * XREFs of RtlGetNtProductType @ 0x1402F7F40
 * Callers:
 *     IoFillDumpHeader @ 0x14054FBC8 (IoFillDumpHeader.c)
 *     KeCapturePersistentThreadState @ 0x1405542C0 (KeCapturePersistentThreadState.c)
 *     MmWriteTriageInformation @ 0x1406308CC (MmWriteTriageInformation.c)
 *     RtlGetVersion @ 0x140758D00 (RtlGetVersion.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14076B49C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409BDAA0 (RtlRestoreBootStatusDefaults.c)
 *     AstInitialize @ 0x140B74BD4 (AstInitialize.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140287470 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x140289F90 (PsGetCurrentServerSilo.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14087F244 (RtlpGetNtProductTypeFromRegistry.c)
 */

char __fastcall RtlGetNtProductType(_DWORD *a1)
{
  char v2; // bl
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
    *a1 = *(_DWORD *)(v5[165] + 16LL);
  }
  else if ( MEMORY[0xFFFFF78000000268] )
  {
    *a1 = MEMORY[0xFFFFF78000000264];
  }
  else if ( KeGetCurrentIrql() > 1u || (int)RtlpGetNtProductTypeFromRegistry(a1) < 0 )
  {
    *a1 = 1;
    return v2;
  }
  return 1;
}
