/*
 * XREFs of RtlpInitializeMap @ 0x1801038A0
 * Callers:
 *     RtlpInitializeLeakDetection @ 0x1801037F4 (RtlpInitializeLeakDetection.c)
 *     RtlpSetBlockInfo @ 0x180104010 (RtlpSetBlockInfo.c)
 * Callees:
 *     memset @ 0x1800AAE00 (memset.c)
 */

void *__fastcall RtlpInitializeMap(_QWORD *a1, _QWORD *a2)
{
  void *result; // rax

  result = memset(a1, 0, 0x838uLL);
  a1[263] = a2;
  if ( a2 )
  {
    result = (void *)(*a2 >> 8);
    *a1 = result;
  }
  return result;
}
