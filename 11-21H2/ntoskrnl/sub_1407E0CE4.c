/*
 * XREFs of sub_1407E0CE4 @ 0x1407E0CE4
 * Callers:
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     sub_1407E0D28 @ 0x1407E0D28 (sub_1407E0D28.c)
 */

__int64 __fastcall sub_1407E0CE4(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 2072) )
  {
    PsReturnProcessPagedPoolQuota(a1, *(_QWORD *)(a1 + 2072));
    *(_QWORD *)(a1 + 2072) = 0LL;
  }
  return sub_1407E0D28(a1);
}
