/*
 * XREFs of ClipInitHandles @ 0x140374C30
 * Callers:
 *     ExInitLicenseData @ 0x14080F248 (ExInitLicenseData.c)
 * Callees:
 *     sub_140810A04 @ 0x140810A04 (sub_140810A04.c)
 */

__int64 ClipInitHandles()
{
  qword_140D534A0 = (__int64)ExUpdateLicenseData;
  qword_140D534A8 = (__int64)ntoskrnl_27;
  qword_140D534B0 = (__int64)ExUpdateOsPfnInRegistry;
  qword_140D534B8 = (__int64)SeExports;
  ClipSpInitialize(0LL, &g_kernelCallbacks);
  return sub_140810A04();
}
