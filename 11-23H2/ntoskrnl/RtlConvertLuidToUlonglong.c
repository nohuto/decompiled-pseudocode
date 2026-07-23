/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x1405B8920
 * Callers:
 *     SepLogTokenSidManagement @ 0x1409C9E10 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}
