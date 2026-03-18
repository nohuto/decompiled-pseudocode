/*
 * XREFs of _wcstoi64 @ 0x1403DC08C
 * Callers:
 *     PiNormalizeDeviceText @ 0x140870EB8 (PiNormalizeDeviceText.c)
 * Callees:
 *     wcstoxq @ 0x1403DC0BC (wcstoxq.c)
 */

__int64 __cdecl wcstoi64(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxq((unsigned int)&_initiallocalestructinfo, (_DWORD)Str, (_DWORD)EndPtr, Radix, 0, 0LL);
}
