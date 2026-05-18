/*
 * XREFs of sub_18000D89C @ 0x18000D89C
 * Callers:
 *     sub_18000D508 @ 0x18000D508 (sub_18000D508.c)
 * Callees:
 *     sub_18000D308 @ 0x18000D308 (sub_18000D308.c)
 */

BOOL __fastcall sub_18000D89C(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rbx
  HANDLE ProcessHeap; // rax
  void *v5; // rbx
  HANDLE v6; // rax
  BOOL result; // eax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  sub_18000D308(&v8, *(_QWORD *)(a1 + 24), *(unsigned __int16 *)(a1 + 32));
  if ( v8 != v9 )
  {
    v2 = v8 + 64;
    do
    {
      v3 = *(void **)v2;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v3);
      *(_QWORD *)v2 = 0LL;
      *(_QWORD *)(v2 + 8) = 0LL;
      v2 += 80LL;
    }
    while ( v2 - 64 != v9 );
  }
  v5 = *(void **)(a1 + 24);
  v6 = GetProcessHeap();
  result = HeapFree(v6, 0, v5);
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
