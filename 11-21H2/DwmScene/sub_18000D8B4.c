/*
 * XREFs of sub_18000D8B4 @ 0x18000D8B4
 * Callers:
 *     sub_18000D7C8 @ 0x18000D7C8 (sub_18000D7C8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000D8B4(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  void *v3; // rbx
  HANDLE ProcessHeap; // rax

  v2 = *(volatile signed __int32 **)(a1 + 152);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(void **)(a1 + 152);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v3);
    }
    *(_QWORD *)(a1 + 152) = 0LL;
    *(_QWORD *)(a1 + 160) = 0LL;
  }
}
