/*
 * XREFs of wcsncmp @ 0x1403E33F0
 * Callers:
 *     sub_14024A520 @ 0x14024A520 (sub_14024A520.c)
 *     sub_14050B7C0 @ 0x14050B7C0 (sub_14050B7C0.c)
 *     sub_140602C4C @ 0x140602C4C (sub_140602C4C.c)
 *     sub_140637E70 @ 0x140637E70 (sub_140637E70.c)
 *     sub_1406DE494 @ 0x1406DE494 (sub_1406DE494.c)
 *     sub_14075F09C @ 0x14075F09C (sub_14075F09C.c)
 *     sub_1407D4430 @ 0x1407D4430 (sub_1407D4430.c)
 *     sub_1407DFBDC @ 0x1407DFBDC (sub_1407DFBDC.c)
 *     sub_14098D0C0 @ 0x14098D0C0 (sub_14098D0C0.c)
 *     sub_14098E51C @ 0x14098E51C (sub_14098E51C.c)
 *     sub_14098F4D4 @ 0x14098F4D4 (sub_14098F4D4.c)
 *     sub_14098F540 @ 0x14098F540 (sub_14098F540.c)
 *     sub_1409E190C @ 0x1409E190C (sub_1409E190C.c)
 *     sub_140A15610 @ 0x140A15610 (sub_140A15610.c)
 *     sub_140A1582C @ 0x140A1582C (sub_140A1582C.c)
 *     sub_140A15ECC @ 0x140A15ECC (sub_140A15ECC.c)
 *     sub_140A172D4 @ 0x140A172D4 (sub_140A172D4.c)
 *     sub_140A2F5D0 @ 0x140A2F5D0 (sub_140A2F5D0.c)
 *     sub_140A70F24 @ 0x140A70F24 (sub_140A70F24.c)
 *     sub_140A71270 @ 0x140A71270 (sub_140A71270.c)
 *     sub_140B1CC84 @ 0x140B1CC84 (sub_140B1CC84.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  if ( !MaxCount )
    return 0;
  while ( --MaxCount && *Str1 && *Str1 == *Str2 )
  {
    ++Str1;
    ++Str2;
  }
  return *Str1 - *Str2;
}
