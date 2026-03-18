/*
 * XREFs of SeAuditingFileEvents @ 0x1409CA220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140C1B384 && AccessGranted
    || byte_140C1B385 && !AccessGranted
    || byte_140C1B386 && AccessGranted
    || byte_140C1B387 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
