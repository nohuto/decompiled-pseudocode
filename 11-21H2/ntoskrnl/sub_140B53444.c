/*
 * XREFs of sub_140B53444 @ 0x140B53444
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID sub_140B53444()
{
  PVOID result; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x11620uLL, 0x67626445u);
  qword_140D01188 = (__int64)result;
  if ( result )
  {
    result = memset(result, 0, 0x11620uLL);
    dword_140C1BCA0 = 50;
  }
  return result;
}
