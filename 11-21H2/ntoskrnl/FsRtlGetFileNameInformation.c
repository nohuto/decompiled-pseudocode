/*
 * XREFs of FsRtlGetFileNameInformation @ 0x1406E4910
 * Callers:
 *     sub_14062E9B0 @ 0x14062E9B0 (sub_14062E9B0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall FsRtlGetFileNameInformation(__int64 a1, __int64 a2)
{
  if ( qword_140D00A28 )
    return sub_14042A5E0(a1, a2);
  else
    return 3221225659LL;
}
