/*
 * XREFs of PsGetCurrentProcess @ 0x1402A3820
 * Callers:
 *     sub_1403EB1A8 @ 0x1403EB1A8 (sub_1403EB1A8.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     sub_1407ADB90 @ 0x1407ADB90 (sub_1407ADB90.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentProcess()
{
  return *((_QWORD *)KeGetCurrentThread() + 23);
}
