/*
 * XREFs of sub_18000D7C8 @ 0x18000D7C8
 * Callers:
 *     sub_18000D9F0 @ 0x18000D9F0 (sub_18000D9F0.c)
 * Callees:
 *     sub_18000D8B4 @ 0x18000D8B4 (sub_18000D8B4.c)
 */

void **__fastcall sub_18000D7C8(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  void *v3; // rbx
  HANDLE ProcessHeap; // rax
  void **result; // rax

  v2 = (volatile signed __int32 *)a1[23];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = (void *)a1[23];
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v3);
    }
    a1[23] = 0LL;
    a1[24] = 0LL;
  }
  sub_18000D8B4(a1 + 2);
  result = &stdext::exception::`vftable';
  *a1 = &stdext::exception::`vftable';
  return result;
}
