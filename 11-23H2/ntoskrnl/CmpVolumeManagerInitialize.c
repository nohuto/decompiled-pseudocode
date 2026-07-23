/*
 * XREFs of CmpVolumeManagerInitialize @ 0x140865900
 * Callers:
 *     CmInitSystem1 @ 0x140B3626C (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpVolumeManagerInitialize()
{
  __int64 *result; // rax

  CmpVolumeManager = 0LL;
  result = &qword_140D552A0;
  qword_140D552A8 = (__int64)&qword_140D552A0;
  qword_140D552A0 = (__int64)&qword_140D552A0;
  return result;
}
