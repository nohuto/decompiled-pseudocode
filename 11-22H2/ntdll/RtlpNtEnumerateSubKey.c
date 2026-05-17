/*
 * XREFs of RtlpNtEnumerateSubKey @ 0x1800846E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     NtEnumerateKey @ 0x18009F430 (NtEnumerateKey.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlpNtEnumerateSubKey(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 Heap; // rbx
  unsigned int v7; // esi
  int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // ecx
  __int16 v12; // [rsp+78h] [rbp+10h] BYREF

  Heap = 0LL;
  v7 = 0;
  if ( !*(_WORD *)(a2 + 2)
    || (v7 = *(unsigned __int16 *)(a2 + 2) + 16,
        (Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7)) != 0) )
  {
    v8 = NtEnumerateKey(a1, a3, 0LL, Heap, v7, &v12);
    v9 = v8;
    if ( v8 < 0 )
    {
      if ( v8 != -2147483643 )
        goto LABEL_8;
    }
    else
    {
      if ( !Heap )
        return v9;
      if ( (unsigned int)*(unsigned __int16 *)(a2 + 2) >= *(_DWORD *)(Heap + 12) )
      {
        v10 = *(unsigned __int16 *)(Heap + 12);
        *(_WORD *)a2 = v10;
        memmove(*(void **)(a2 + 8), (const void *)(Heap + 16), v10);
LABEL_9:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v9;
      }
      v9 = -2147483643;
    }
    *(_WORD *)a2 = v12 - 16;
LABEL_8:
    if ( Heap )
      goto LABEL_9;
    return v9;
  }
  return 3221225495LL;
}
