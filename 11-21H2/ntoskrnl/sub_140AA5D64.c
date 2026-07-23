/*
 * XREFs of sub_140AA5D64 @ 0x140AA5D64
 * Callers:
 *     sub_140601C50 @ 0x140601C50 (sub_140601C50.c)
 *     sub_140A9C13C @ 0x140A9C13C (sub_140A9C13C.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_140AA5D64()
{
  __int64 result; // rax

  if ( qword_140C1AE00 )
  {
    ExFreePoolWithTag(qword_140C1AE00, 0);
    qword_140C1AE00 = 0LL;
  }
  result = (unsigned int)_InterlockedExchange(&dword_140C1ADEC, 0);
  dword_140C1ADF0 = 0;
  return result;
}
