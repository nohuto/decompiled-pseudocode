/*
 * XREFs of ExpResourceTimeoutCaptureLiveDump @ 0x140610000
 * Callers:
 *     <none>
 * Callees:
 *     DbgkWerCaptureLiveKernelDump @ 0x1408839B0 (DbgkWerCaptureLiveKernelDump.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall ExpResourceTimeoutCaptureLiveDump(_QWORD *P)
{
  DbgkWerCaptureLiveKernelDump(
    (unsigned int)L"ResourceTimeout",
    460,
    P[5],
    P[4],
    *((unsigned int *)P + 12),
    *((unsigned int *)P + 13),
    0LL,
    0LL,
    0);
  ExFreePoolWithTag(P, 0x6F546552u);
}
