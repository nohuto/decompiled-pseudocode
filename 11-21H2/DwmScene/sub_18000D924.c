/*
 * XREFs of sub_18000D924 @ 0x18000D924
 * Callers:
 *     sub_18000D6D4 @ 0x18000D6D4 (sub_18000D6D4.c)
 * Callees:
 *     sub_18000D48C @ 0x18000D48C (sub_18000D48C.c)
 */

BOOL __fastcall sub_18000D924(__int64 a1)
{
  void *v1; // rbx
  __int64 v3; // rsi
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v6; // rax
  BOOL result; // eax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v1 = *(void **)(a1 + 24);
  sub_18000D48C(&v8, (__int64)v1, *(unsigned __int16 *)(a1 + 32));
  if ( v8 != v9 )
  {
    v3 = v8 + 64;
    do
    {
      v4 = *(void **)v3;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v4);
      *(_QWORD *)v3 = 0LL;
      *(_QWORD *)(v3 + 8) = 0LL;
      v3 += 80LL;
    }
    while ( v3 - 64 != v9 );
    v1 = *(void **)(a1 + 24);
  }
  v6 = GetProcessHeap();
  result = HeapFree(v6, 0, v1);
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
