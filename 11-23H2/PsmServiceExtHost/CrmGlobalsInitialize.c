/*
 * XREFs of CrmGlobalsInitialize @ 0x1800464A0
 * Callers:
 *     PsmCrmStart @ 0x180043610 (PsmCrmStart.c)
 *     PsmCrmCleanup @ 0x18006C030 (PsmCrmCleanup.c)
 * Callees:
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

__int64 CrmGlobalsInitialize()
{
  __int64 result; // rax

  memset_0(&CrmGlobals, 0, 0x208uLL);
  RtlInitializeSRWLock(&unk_1800DC1B0);
  dword_1800DC1B8 = 0;
  xmmword_1800DC1C0 = 0LL;
  CrmGlobals = 0LL;
  RtlInitializeSRWLock(&CrmGlobals);
  dword_1800DC048 = 0;
  unk_1800DC1D0 = 0LL;
  result = RtlInitializeSRWLock(&unk_1800DC1D0);
  dword_1800DC1D8 = 0;
  xmmword_1800DC1E0 = 0LL;
  return result;
}
