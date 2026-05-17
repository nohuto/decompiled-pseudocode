/*
 * XREFs of _wcstoi64 @ 0x180090960
 * Callers:
 *     _wtoi64 @ 0x180090D20 (_wtoi64.c)
 * Callees:
 *     wcstoxq @ 0x1800909D4 (wcstoxq.c)
 */

__int64 __cdecl wcstoi64(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return wcstoxq((unsigned int)&_initiallocalestructinfo, (_DWORD)String, (_DWORD)EndPtr, Radix, 0, 0LL);
}
