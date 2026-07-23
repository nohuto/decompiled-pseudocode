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

__int64 __fastcall RtlpNtQueryValueKey(HANDLE KeyHandle, _DWORD *a2, void *a3, int *a4)
{
  int v8; // eax
  int *Heap; // rbx
  NTSTATUS v10; // eax
  int *v11; // rcx
  int v12; // edi
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-30h] BYREF
  ULONG Length; // [rsp+88h] [rbp+20h] BYREF

  v8 = 0;
  if ( a4 )
    v8 = *a4;
  Length = v8 + 12;
  Heap = (int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(v8 + 12));
  if ( Heap )
  {
    ValueName.Length = 0;
    v10 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Length, &Length);
    v11 = Heap + 2;
    if ( v10 == -1073741772 )
    {
      v12 = 0;
      *v11 = 0;
      Heap[1] = 0;
    }
    else
    {
      v12 = v10;
      if ( v10 < 0 && v10 != -2147483643 )
      {
LABEL_13:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return (unsigned int)v12;
      }
    }
    if ( a4 )
      *a4 = *v11;
    if ( a2 )
      *a2 = Heap[1];
    if ( v12 >= 0 )
    {
      if ( a3 )
        memmove(a3, Heap + 3, (unsigned int)*v11);
    }
    goto LABEL_13;
  }
  return 3221225626LL;
}
