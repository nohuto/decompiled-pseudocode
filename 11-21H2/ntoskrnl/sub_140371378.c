/*
 * XREFs of sub_140371378 @ 0x140371378
 * Callers:
 *     sub_14036EDD4 @ 0x14036EDD4 (sub_14036EDD4.c)
 *     sub_140371274 @ 0x140371274 (sub_140371274.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x14075BD80 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall sub_140371378(_RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Ptr )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, InitFn, a2, 0LL);
}
