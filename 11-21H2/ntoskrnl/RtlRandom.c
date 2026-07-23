/*
 * XREFs of RtlRandom @ 0x1406E2E20
 * Callers:
 *     sub_14053B160 @ 0x14053B160 (sub_14053B160.c)
 *     sub_14053B55C @ 0x14053B55C (sub_14053B55C.c)
 *     sub_140B24C44 @ 0x140B24C44 (sub_140B24C44.c)
 * Callees:
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  ULONG result; // eax

  result = sub_140363220(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
