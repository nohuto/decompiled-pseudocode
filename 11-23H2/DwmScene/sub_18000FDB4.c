/*
 * XREFs of sub_18000FDB4 @ 0x18000FDB4
 * Callers:
 *     sub_18000D5E4 @ 0x18000D5E4 (sub_18000D5E4.c)
 *     sub_18000F284 @ 0x18000F284 (sub_18000F284.c)
 *     sub_18000FC20 @ 0x18000FC20 (sub_18000FC20.c)
 *     sub_18000FCBC @ 0x18000FCBC (sub_18000FCBC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000FDB4(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rbx
  HANDLE ProcessHeap; // rax

  v2 = *(volatile signed __int32 **)a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(volatile signed __int32 **)a1;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, (LPVOID)v3);
    }
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
