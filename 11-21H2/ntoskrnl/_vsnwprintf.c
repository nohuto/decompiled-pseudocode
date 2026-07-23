/*
 * XREFs of _vsnwprintf @ 0x1403E0440
 * Callers:
 *     sub_1402511F0 @ 0x1402511F0 (sub_1402511F0.c)
 *     sub_1402D17BC @ 0x1402D17BC (sub_1402D17BC.c)
 *     sub_1402D1840 @ 0x1402D1840 (sub_1402D1840.c)
 *     sub_1402DFCC8 @ 0x1402DFCC8 (sub_1402DFCC8.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     StringVPrintfWorkerW @ 0x14064CB7C (StringVPrintfWorkerW.c)
 * Callees:
 *     sub_1403E0460 @ 0x1403E0460 (sub_1403E0460.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return sub_1403E0460((_DWORD)Dest, Count, (_DWORD)Format, 0, (__int64)Args);
}
