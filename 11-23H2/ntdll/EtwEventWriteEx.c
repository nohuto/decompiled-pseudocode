/*
 * XREFs of EtwEventWriteEx @ 0x18007CFA0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x180030178 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwEventWriteEx(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        int a4,
        _GUID *a5,
        __int128 *a6,
        int a7,
        __int64 a8)
{
  return EtwpEventWriteFull(a1, a2, a3, a4, 0, a5, a6, a7, a8);
}
