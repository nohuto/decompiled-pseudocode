/*
 * XREFs of DSA_Destroy @ 0x18074A78C
 * Callers:
 *     ??1CPinList@@QEAA@XZ @ 0x180751A34 (--1CPinList@@QEAA@XZ.c)
 * Callees:
 *     ?CCv6s_HeapFree@@YAJPEAX0@Z @ 0x18074A4B0 (-CCv6s_HeapFree@@YAJPEAX0@Z.c)
 */

BOOL __stdcall DSA_Destroy(HDSA hdsa)
{
  BOOL v1; // ebx
  void *v4; // rsi
  HANDLE ProcessHeap; // rax
  HANDLE v6; // rax

  v1 = 0;
  if ( !hdsa )
    return 1;
  v4 = (void *)*((_QWORD *)hdsa + 1);
  if ( v4 )
  {
    ProcessHeap = GetProcessHeap();
    if ( (int)CCv6s_HeapFree(ProcessHeap, v4) < 0 )
      return 0;
  }
  v6 = GetProcessHeap();
  LOBYTE(v1) = (int)CCv6s_HeapFree(v6, hdsa) >= 0;
  return v1;
}
