/*
 * XREFs of RtlOpenImageFileOptionsKey @ 0x1407E2ED0
 * Callers:
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1407CE0B0 (RtlpOpenImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlOpenImageFileOptionsKey(unsigned __int16 *a1, __int64 a2, HANDLE *a3)
{
  return RtlpOpenImageFileOptionsKeyEx(a1, a2, (__int64)a3, a3);
}
