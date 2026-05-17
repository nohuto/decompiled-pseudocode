/*
 * XREFs of RtlpNtQueryValueKey @ 0x1800800A0
 * Callers:
 *     RtlInitializeRXact @ 0x18008D8C0 (RtlInitializeRXact.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlpNtQueryValueKey(__int64 a1, _DWORD *a2, void *a3, int *a4)
{
  int v8; // eax
  __int64 Heap; // rbx
  int v10; // eax
  int *v11; // rcx
  int v12; // edi
  _WORD v14[12]; // [rsp+38h] [rbp-30h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  v8 = 0;
  if ( a4 )
    v8 = *a4;
  v15 = v8 + 12;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(v8 + 12));
  if ( Heap )
  {
    v14[0] = 0;
    v10 = NtQueryValueKey(a1, v14, 2LL, Heap, v15, &v15);
    v11 = (int *)(Heap + 8);
    if ( v10 == -1073741772 )
    {
      v12 = 0;
      *v11 = 0;
      *(_DWORD *)(Heap + 4) = 0;
    }
    else
    {
      v12 = v10;
      if ( v10 < 0 && v10 != -2147483643 )
      {
LABEL_13:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        return (unsigned int)v12;
      }
    }
    if ( a4 )
      *a4 = *v11;
    if ( a2 )
      *a2 = *(_DWORD *)(Heap + 4);
    if ( v12 >= 0 )
    {
      if ( a3 )
        memmove(a3, (const void *)(Heap + 12), (unsigned int)*v11);
    }
    goto LABEL_13;
  }
  return 3221225626LL;
}
