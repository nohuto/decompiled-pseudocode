/*
 * XREFs of KeGetNextClockTickDuration @ 0x14056C950
 * Callers:
 *     sub_14050BFD0 @ 0x14050BFD0 (sub_14050BFD0.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 */

unsigned __int64 KeGetNextClockTickDuration()
{
  __int64 v0; // rbx
  unsigned __int64 v1; // rax
  LARGE_INTEGER v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  v1 = KeQueryInterruptTimePrecise(&v3);
  if ( qword_140C2B1A0 > v1 )
    return qword_140C2B1A0 - v1;
  return v0;
}
