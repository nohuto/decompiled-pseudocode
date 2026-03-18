/*
 * XREFs of ExpResourceTimeoutCaptureLiveDump @ 0x14060FF90
 * Callers:
 *     <none>
 * Callees:
 *     DbgkWerCaptureLiveKernelDump @ 0x1408834E0 (DbgkWerCaptureLiveKernelDump.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
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
