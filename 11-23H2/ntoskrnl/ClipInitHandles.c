/*
 * XREFs of ClipInitHandles @ 0x140374A90
 * Callers:
 *     ExInitLicenseData @ 0x14080EF78 (ExInitLicenseData.c)
 * Callees:
 *     sub_140810734 @ 0x140810734 (sub_140810734.c)
 */

__int64 ClipInitHandles()
{
  qword_140D534A0 = (__int64)ExUpdateLicenseData;
  qword_140D534A8 = (__int64)ntoskrnl_27;
  qword_140D534B0 = (__int64)ExUpdateOsPfnInRegistry;
  qword_140D534B8 = (__int64)SeExports;
  ClipSpInitialize(0LL, &g_kernelCallbacks);
  return sub_140810734();
}
