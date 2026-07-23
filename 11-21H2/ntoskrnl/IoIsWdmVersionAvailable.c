/*
 * XREFs of IoIsWdmVersionAvailable @ 0x140662010
 * Callers:
 *     sub_14060FC80 @ 0x14060FC80 (sub_14060FC80.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIsWdmVersionAvailable(UCHAR MajorVersion, UCHAR MinorVersion)
{
  BOOLEAN result; // al

  if ( MajorVersion < 6u )
    return 1;
  result = 0;
  if ( MajorVersion == 6 && !MinorVersion )
    return 1;
  return result;
}
