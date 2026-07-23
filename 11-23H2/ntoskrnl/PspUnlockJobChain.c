/*
 * XREFs of PspUnlockJobChain @ 0x1406A0C10
 * Callers:
 *     PspUnlockJobsAndProcessExclusive @ 0x14069F5E8 (PspUnlockJobsAndProcessExclusive.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PspImplicitAssignProcessToJob @ 0x1407E628C (PspImplicitAssignProcessToJob.c)
 *     PspGetMemoryPartitionImplicit @ 0x1407E71B4 (PspGetMemoryPartitionImplicit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PspUnlockJobChain(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 i; // rsi

  if ( *(_QWORD *)(a1 + 1320) > 1uLL )
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1296) + 56LL));
  v6 = *(_QWORD *)(a1 + 1320);
  if ( v6 > 2 )
  {
    for ( i = v6 - 2; i; --i )
      ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(*(_QWORD *)(a1 + 1328) + 8 * i - 8) + 56LL));
  }
  if ( *(_QWORD *)(a1 + 1320) )
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1288) + 56LL));
  if ( (a3 & 1) == 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    if ( a2 )
    {
      if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
        KiCheckForKernelApcDelivery();
    }
  }
}
