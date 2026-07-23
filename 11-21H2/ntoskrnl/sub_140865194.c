/*
 * XREFs of sub_140865194 @ 0x140865194
 * Callers:
 *     sub_1409893F0 @ 0x1409893F0 (sub_1409893F0.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 */

bool sub_140865194()
{
  return dword_140D0526C == 2
      || (dword_140D0689C & 0x4000) != 0 && (dword_140D0688C & 2) == 0
      || dword_140D0526C == 3 && KeQueryActiveProcessorCountEx(0xFFFFu) <= 0x20;
}
