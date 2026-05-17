/*
 * XREFs of RtlGetSearchPath @ 0x18008A4A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCachedPath @ 0x18001DEB4 (RtlpGetCachedPath.c)
 */

__int64 __fastcall RtlGetSearchPath(_QWORD *a1)
{
  __int64 CachedPath; // rax

  CachedPath = RtlpGetCachedPath(
                 &RtlpSearchPath,
                 (__int64 (__fastcall *)(__int64, __int64))RtlpComputeSearchPath,
                 0LL,
                 0LL);
  if ( CachedPath )
  {
    *a1 = CachedPath + 128;
    return 0LL;
  }
  else
  {
    *a1 = 0LL;
    return 3221225495LL;
  }
}
