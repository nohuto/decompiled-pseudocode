/*
 * XREFs of TppAllocThreadData @ 0x1800783A4
 * Callers:
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 */

__int64 __fastcall TppAllocThreadData(_QWORD *a1)
{
  struct _TEB *v2; // rbx
  __int64 result; // rax
  _QWORD *v4; // rdx

  *a1 = 0LL;
  v2 = NtCurrentTeb();
  result = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 2883584) | 8u, 136LL);
  v4 = (_QWORD *)result;
  if ( result )
  {
    *(_DWORD *)(result + 8) |= 3u;
    result = MEMORY[0x7FFE03B0];
    v4[3] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    v2->ThreadPoolData = v4;
    *a1 = v4;
  }
  else
  {
    v2->ThreadPoolData = 0LL;
  }
  return result;
}
