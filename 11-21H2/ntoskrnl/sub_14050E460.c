/*
 * XREFs of sub_14050E460 @ 0x14050E460
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403DE864 @ 0x1403DE864 (sub_1403DE864.c)
 */

unsigned __int64 sub_14050E460()
{
  __int64 v0; // r10

  if ( sub_1403DE864() )
    return __readmsr(0x40000022u);
  return v0;
}
