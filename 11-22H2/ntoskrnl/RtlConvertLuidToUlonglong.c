/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x1405B8440
 * Callers:
 *     SepLogTokenSidManagement @ 0x1409C9CC0 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}
