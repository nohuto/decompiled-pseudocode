/*
 * XREFs of UserThreadStartXfgThunk @ 0x18009EA20
 * Callers:
 *     RtlUserThreadStart @ 0x18005DF90 (RtlUserThreadStart.c)
 * Callees:
 *     <none>
 */

__int64 UserThreadStartXfgThunk()
{
  return _guard_xfg_table_dispatch_icall_fptr();
}
