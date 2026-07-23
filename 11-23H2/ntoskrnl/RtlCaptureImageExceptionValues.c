/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x140290C14
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x140290B90 (RtlInsertInvertedFunctionTable.c)
 *     KiLockServiceTable @ 0x14034C070 (KiLockServiceTable.c)
 *     RtlpLookupUserFunctionTable @ 0x1403A2A7C (RtlpLookupUserFunctionTable.c)
 *     KiLockExtendedServiceTable @ 0x1403E3A58 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140B17320 (KiVerifyXcpt15.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 *     KiFatalExceptionFilter @ 0x140B73480 (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(void *a1, _QWORD *a2, ULONG *a3)
{
  PVOID v5; // rax

  v5 = RtlImageDirectoryEntryToData(a1, 1u, 3u, a3);
  *a2 = v5;
  if ( !v5 )
    *a3 = 0;
  return 0LL;
}
