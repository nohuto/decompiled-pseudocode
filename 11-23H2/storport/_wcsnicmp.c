/*
 * XREFs of _wcsnicmp @ 0x1C0022F9A
 * Callers:
 *     sub_1C00B0578 @ 0x1C00B0578 (sub_1C00B0578.c)
 *     sub_1C00B0690 @ 0x1C00B0690 (sub_1C00B0690.c)
 *     sub_1C00B0838 @ 0x1C00B0838 (sub_1C00B0838.c)
 *     sub_1C00B0950 @ 0x1C00B0950 (sub_1C00B0950.c)
 *     sub_1C00B0EA4 @ 0x1C00B0EA4 (sub_1C00B0EA4.c)
 *     sub_1C00B106C @ 0x1C00B106C (sub_1C00B106C.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return _wcsnicmp(Str1, Str2, MaxCount);
}
