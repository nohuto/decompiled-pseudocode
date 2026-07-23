/*
 * XREFs of KeFlushCurrentTbImmediately @ 0x1403B1CF0
 * Callers:
 *     sub_1403BF630 @ 0x1403BF630 (sub_1403BF630.c)
 *     sub_140A4B5A0 @ 0x140A4B5A0 (sub_140A4B5A0.c)
 *     sub_140A53954 @ 0x140A53954 (sub_140A53954.c)
 *     KeLoadMTRR @ 0x140A53A50 (KeLoadMTRR.c)
 * Callees:
 *     <none>
 */

unsigned __int64 KeFlushCurrentTbImmediately()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 result; // rax

  v0 = __readcr4();
  if ( (v0 & 0x20080) != 0 )
  {
    result = v0 ^ 0x80;
    __writecr4(v0 ^ 0x80);
    __writecr4(v0);
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
