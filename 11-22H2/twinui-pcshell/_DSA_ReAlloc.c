/*
 * XREFs of _DSA_ReAlloc @ 0x18074A690
 * Callers:
 *     DSA_Preallocate @ 0x18074A930 (DSA_Preallocate.c)
 * Callees:
 *     ??$CCv6s_HeapReallocArray@X@@YAJPEAXK0_K1PEAPEAX@Z @ 0x18074A59C (--$CCv6s_HeapReallocArray@X@@YAJPEAXK0_K1PEAPEAX@Z.c)
 */

__int64 __fastcall DSA_ReAlloc(__int64 a1, int a2)
{
  unsigned int v2; // edi
  void *v4; // rbx
  unsigned __int64 v5; // rbp
  HANDLE ProcessHeap; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 20);
  v4 = *(void **)(a1 + 8);
  v5 = a2;
  ProcessHeap = GetProcessHeap();
  if ( (int)CCv6s_HeapReallocArray<void>(ProcessHeap, v7, v4, v2, v5, &v9) < 0 )
    return 0LL;
  *(_QWORD *)(a1 + 8) = v9;
  result = 1LL;
  *(_DWORD *)(a1 + 16) = v5;
  return result;
}
