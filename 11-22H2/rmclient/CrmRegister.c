/*
 * XREFs of CrmRegister @ 0x180005C30
 * Callers:
 *     sub_180015FBC @ 0x180015FBC (sub_180015FBC.c)
 * Callees:
 *     sub_1800027A8 @ 0x1800027A8 (sub_1800027A8.c)
 *     sub_180005CD4 @ 0x180005CD4 (sub_180005CD4.c)
 */

__int64 __fastcall CrmRegister(_QWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // edi
  _QWORD *Heap; // rbx
  int v8; // esi

  v6 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
  if ( Heap )
  {
    *(_OWORD *)Heap = 0LL;
    Heap[2] = 0LL;
    *(_DWORD *)Heap = 309;
    v8 = sub_180005CD4(Heap, a2, a3);
    if ( v8 < 0 )
    {
      sub_1800027A8((__int64)Heap);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return (unsigned int)v8;
    }
    else
    {
      *a1 = Heap;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
