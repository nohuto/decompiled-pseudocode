/*
 * XREFs of CrmGlobalsInitialize @ 0x180049028
 * Callers:
 *     PsmCrmStart @ 0x180048860 (PsmCrmStart.c)
 *     PsmCrmCleanup @ 0x18006C860 (PsmCrmCleanup.c)
 * Callees:
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 *CrmGlobalsInitialize()
{
  __int64 *result; // rax

  memset_0(&CrmGlobals, 0, 0x1E0uLL);
  RtlInitializeSRWLock(&unk_1800DD180);
  dword_1800DD188 = 0;
  xmmword_1800DD190 = 0LL;
  CrmGlobals = 0LL;
  RtlInitializeSRWLock(&CrmGlobals);
  dword_1800DD028 = 0;
  unk_1800DD1A0 = 0LL;
  RtlInitializeSRWLock(&unk_1800DD1A0);
  dword_1800DD1A8 = 0;
  result = &qword_1800DD1B0;
  qword_1800DD1B8 = (__int64)&qword_1800DD1B0;
  qword_1800DD1B0 = (__int64)&qword_1800DD1B0;
  return result;
}
