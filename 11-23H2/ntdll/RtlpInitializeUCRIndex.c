/*
 * XREFs of RtlpInitializeUCRIndex @ 0x18008C55C
 * Callers:
 *     RtlpPerformHeapMaintenance @ 0x18004A524 (RtlpPerformHeapMaintenance.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpHeapAddListEntry @ 0x180044D74 (RtlpHeapAddListEntry.c)
 */

__int64 __fastcall RtlpInitializeUCRIndex(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 i; // rdi
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax

  v2 = ((*(_DWORD *)(a1 + 148) >> 8) + 31) & 0xFFFFFFE0;
  v3 = (unsigned __int64)v2 >> 3;
  result = (__int64)RtlAllocateHeap((PVOID)a1, 0x80000Au, v3 + 8 * (v2 + 7LL));
  v5 = a1 + 240;
  v6 = result;
  if ( result )
  {
    *(_BYTE *)(result - 1) = 1;
    *(_QWORD *)(result + 40) = result + 56;
    *(_QWORD *)(result + 48) = v3 + result + 56;
    *(_DWORD *)(result + 8) = v2;
    *(_QWORD *)(result + 32) = v5;
    *(_QWORD *)(a1 + 320) = result;
    for ( i = *(_QWORD *)(a1 + 248); v5 != i; i = *(_QWORD *)(i + 8) )
    {
      v8 = v6;
      v9 = *(unsigned int *)(v6 + 8);
      v10 = *(_QWORD *)(i + 40) >> 12;
      while ( v10 >= v9 )
      {
        v11 = *(_QWORD *)v8;
        if ( !*(_QWORD *)v8 )
        {
          LODWORD(v10) = *(_DWORD *)(v8 + 8) - 1;
          break;
        }
        v8 = *(_QWORD *)v8;
        v9 = *(unsigned int *)(v11 + 8);
      }
      result = RtlpHeapAddListEntry(a1, v8, 0, i, v10, *(_QWORD *)(i + 40));
    }
  }
  return result;
}
