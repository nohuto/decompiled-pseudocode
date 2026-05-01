/*
 * XREFs of sub_1800061F0 @ 0x1800061F0
 * Callers:
 *     sub_180005824 @ 0x180005824 (sub_180005824.c)
 *     sub_180005900 @ 0x180005900 (sub_180005900.c)
 * Callees:
 *     sub_1800062BC @ 0x1800062BC (sub_1800062BC.c)
 *     sub_18000635C @ 0x18000635C (sub_18000635C.c)
 *     sub_180008D10 @ 0x180008D10 (sub_180008D10.c)
 */

__int64 __fastcall sub_1800061F0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char *Heap; // rax
  char *v9; // rdi
  int v10; // ebx

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x48uLL);
  v9 = Heap;
  if ( Heap )
  {
    sub_18000635C(a1, a2, a3, Heap);
    v10 = TpAllocWork(v9 + 56, sub_1800067C0, v9, 0LL);
    if ( v10 < 0 || (v10 = sub_1800062BC(a1, v9), v10 < 0) )
    {
      sub_180008D10(v9);
    }
    else
    {
      *a4 = v9;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}
