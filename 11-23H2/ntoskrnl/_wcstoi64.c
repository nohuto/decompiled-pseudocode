/*
 * XREFs of _wcstoi64 @ 0x1403DC26C
 * Callers:
 *     PiNormalizeDeviceText @ 0x1408710F8 (PiNormalizeDeviceText.c)
 * Callees:
 *     wcstoxq @ 0x1403DC29C (wcstoxq.c)
 */

__int64 __cdecl wcstoi64(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxq((unsigned int)&_initiallocalestructinfo, (_DWORD)Str, (_DWORD)EndPtr, Radix, 0, 0LL);
}
