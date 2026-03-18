/*
 * XREFs of NtUnmapViewOfSection @ 0x1406F7A50
 * Callers:
 *     <none>
 * Callees:
 *     NtUnmapViewOfSectionEx @ 0x1406F8C60 (NtUnmapViewOfSectionEx.c)
 */

__int64 __fastcall NtUnmapViewOfSection(__int64 a1, __int64 a2)
{
  return NtUnmapViewOfSectionEx(a1, a2, 0LL);
}
