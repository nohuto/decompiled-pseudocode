/*
 * XREFs of IoIsWdmVersionAvailable @ 0x1408A5010
 * Callers:
 *     DifIoIsWdmVersionAvailableWrapper @ 0x1405E0700 (DifIoIsWdmVersionAvailableWrapper.c)
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
