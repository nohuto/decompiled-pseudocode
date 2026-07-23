/*
 * XREFs of sub_140281830 @ 0x140281830
 * Callers:
 *     sub_1406A8F48 @ 0x1406A8F48 (sub_1406A8F48.c)
 *     NtFindAtom @ 0x1406F68C0 (NtFindAtom.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     KeUserModeCallback @ 0x1407A3EC0 (KeUserModeCallback.c)
 * Callees:
 *     <none>
 */

_RTL_RUN_ONCE *sub_140281830()
{
  _RTL_RUN_ONCE *result; // rax

  result = &stru_140C1BDC8;
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 616LL) < 2uLL )
    return &stru_140C1BDD0;
  return result;
}
