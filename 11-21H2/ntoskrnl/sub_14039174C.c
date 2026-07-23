/*
 * XREFs of sub_14039174C @ 0x14039174C
 * Callers:
 *     HalMakeBeep @ 0x14050A490 (HalMakeBeep.c)
 *     sub_14050A93C @ 0x14050A93C (sub_14050A93C.c)
 *     sub_140A5054C @ 0x140A5054C (sub_140A5054C.c)
 * Callees:
 *     <none>
 */

bool sub_14039174C()
{
  return !byte_140C4BFC8
      || (dword_140C0C60C & 1) != 0 && (dword_140C0C60C & 4) != 0 && byte_140C54940 && (dword_140C0C60C & 8) == 0;
}
