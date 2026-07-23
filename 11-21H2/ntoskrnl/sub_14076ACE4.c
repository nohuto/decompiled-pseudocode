/*
 * XREFs of sub_14076ACE4 @ 0x14076ACE4
 * Callers:
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 */

__int64 __fastcall sub_14076ACE4(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = a1;
  Buffer[1] = a2;
  ExAcquireFastMutex(&stru_140C467E0);
  v2 = RtlInsertElementGenericTableAvl(&stru_140C46820, Buffer, 0x10u, 0LL) == 0LL ? 0xC0000001 : 0;
  KeReleaseGuardedMutex(&stru_140C467E0);
  return v2;
}
