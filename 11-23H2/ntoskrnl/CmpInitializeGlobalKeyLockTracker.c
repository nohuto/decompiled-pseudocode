/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x140865890
 * Callers:
 *     CmInitSystem1 @ 0x140B3626C (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140C13D08;
  qword_140C13D10 = (__int64)&qword_140C13D08;
  qword_140C13D08 = (__int64)&qword_140C13D08;
  return result;
}
