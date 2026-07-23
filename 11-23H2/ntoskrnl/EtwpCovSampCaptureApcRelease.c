/*
 * XREFs of EtwpCovSampCaptureApcRelease @ 0x140603304
 * Callers:
 *     EtwpCovSampCaptureApcRundown @ 0x1409F0C00 (EtwpCovSampCaptureApcRundown.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x14046A58A (EtwpCovSampCaptureReleaseToLookaside.c)
 */

__int64 __fastcall EtwpCovSampCaptureApcRelease(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx

  v1 = qword_140C31C68;
  memset((void *)(a1 + 56), 0, 0x58uLL);
  v3 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 144) = 0;
  return EtwpCovSampCaptureReleaseToLookaside(v1, v3, (_SLIST_ENTRY *)a1);
}
