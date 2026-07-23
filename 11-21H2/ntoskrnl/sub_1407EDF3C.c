/*
 * XREFs of sub_1407EDF3C @ 0x1407EDF3C
 * Callers:
 *     sub_1407EDFC0 @ 0x1407EDFC0 (sub_1407EDFC0.c)
 *     sub_140995484 @ 0x140995484 (sub_140995484.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 */

char sub_1407EDF3C()
{
  char v0; // bl

  if ( (unsigned __int64)qword_140C095E8 < MEMORY[0xFFFFF78000000008] )
    return 0;
  v0 = 1;
  DbgPrintEx(0x92u, 3u, "Battery estimate suppressed\n");
  return v0;
}
