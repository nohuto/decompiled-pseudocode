/*
 * XREFs of EtwpCovSampCaptureApcRelease @ 0x140602DB4
 * Callers:
 *     EtwpCovSampCaptureApcRundown @ 0x1409F0970 (EtwpCovSampCaptureApcRundown.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x14046A18A (EtwpCovSampCaptureReleaseToLookaside.c)
 */

__int64 __fastcall EtwpCovSampCaptureApcRelease(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx

  v1 = qword_140C31CC8;
  memset((void *)(a1 + 56), 0, 0x58uLL);
  v3 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 144) = 0;
  return EtwpCovSampCaptureReleaseToLookaside(v1, v3, (struct _SLIST_ENTRY *)a1);
}
