/*
 * XREFs of UserThreadStartXfgThunk @ 0x1800A0AE0
 * Callers:
 *     RtlUserThreadStart @ 0x18005AF90 (RtlUserThreadStart.c)
 * Callees:
 *     <none>
 */

__int64 UserThreadStartXfgThunk()
{
  return _guard_xfg_table_dispatch_icall_fptr();
}
