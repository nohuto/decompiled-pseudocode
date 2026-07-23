/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x140865AD0
 * Callers:
 *     CmInitSystem1 @ 0x140B3626C (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140C13CC8;
  qword_140C13CD0 = (__int64)&qword_140C13CC8;
  qword_140C13CC8 = (__int64)&qword_140C13CC8;
  return result;
}
