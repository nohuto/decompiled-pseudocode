/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x140864B3C
 * Callers:
 *     CmInitSystem1 @ 0x140B15F88 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140C49228;
  qword_140C49230 = (__int64)&qword_140C49228;
  qword_140C49228 = (__int64)&qword_140C49228;
  return result;
}
