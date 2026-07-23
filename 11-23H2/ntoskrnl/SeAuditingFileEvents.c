/*
 * XREFs of SeAuditingFileEvents @ 0x1409CD6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140C373E4 && AccessGranted
    || byte_140C373E5 && !AccessGranted
    || byte_140C373E6 && AccessGranted
    || byte_140C373E7 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
