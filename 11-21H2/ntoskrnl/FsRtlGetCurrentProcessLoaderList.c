/*
 * XREFs of FsRtlGetCurrentProcessLoaderList @ 0x14092ECB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 FsRtlGetCurrentProcessLoaderList()
{
  return *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1360LL) + 24LL) + 16LL;
}
