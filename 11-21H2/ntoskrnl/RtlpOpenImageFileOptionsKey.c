/*
 * XREFs of RtlpOpenImageFileOptionsKey @ 0x1409B5C20
 * Callers:
 *     RtlQueryImageXfgFilter @ 0x1405E3B04 (RtlQueryImageXfgFilter.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1406C2D34 (RtlpOpenImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlpOpenImageFileOptionsKey(unsigned __int16 *a1, __int64 a2, HANDLE *a3)
{
  return RtlpOpenImageFileOptionsKeyEx(a1, a2, (__int64)a3, a3);
}
