/*
 * XREFs of SeAuditingFileEvents @ 0x1409CD4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140C37404 && AccessGranted
    || byte_140C37405 && !AccessGranted
    || byte_140C37406 && AccessGranted
    || byte_140C37407 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
