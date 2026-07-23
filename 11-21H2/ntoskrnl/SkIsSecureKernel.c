/*
 * XREFs of SkIsSecureKernel @ 0x1403DF740
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_140A47990 @ 0x140A47990 (sub_140A47990.c)
 * Callees:
 *     <none>
 */

__int64 SkIsSecureKernel()
{
  return 3221225474LL;
}
