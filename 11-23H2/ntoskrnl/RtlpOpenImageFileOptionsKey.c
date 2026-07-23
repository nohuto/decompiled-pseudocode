/*
 * XREFs of RtlpOpenImageFileOptionsKey @ 0x1409B8FD0
 * Callers:
 *     RtlQueryImageXfgFilter @ 0x1405A7684 (RtlQueryImageXfgFilter.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1407CE380 (RtlpOpenImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlpOpenImageFileOptionsKey(unsigned __int16 *a1, __int64 a2, HANDLE *a3)
{
  return RtlpOpenImageFileOptionsKeyEx(a1, a2, (__int64)a3, a3);
}
