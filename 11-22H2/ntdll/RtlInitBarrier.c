/*
 * XREFs of RtlInitBarrier @ 0x1800F8D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlInitBarrier(PRTL_BARRIER Barrier, ULONG TotalThreads, ULONG SpinCount)
{
  unsigned __int64 v3; // rcx
  NTSTATUS result; // eax

  v3 = ((unsigned __int64)&Barrier->Reserved2 + 3) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v3 )
    return -1073741811;
  result = 0;
  *(_DWORD *)(v3 + 16) = TotalThreads;
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_QWORD *)v3 = 0LL;
  return result;
}
