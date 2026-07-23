/*
 * XREFs of RtlQueryProcessPlaceholderCompatibilityMode @ 0x1409BCBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR RtlQueryProcessPlaceholderCompatibilityMode(void)
{
  __int64 v0; // rax

  v0 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1360LL);
  if ( v0 )
    return *(_BYTE *)(v0 + 1968);
  else
    return -3;
}
