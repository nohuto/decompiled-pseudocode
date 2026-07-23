/*
 * XREFs of RtlpNtQueryValueKey @ 0x180083C70
 * Callers:
 *     RtlInitializeRXact @ 0x180092D10 (RtlInitializeRXact.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlpNtQueryValueKey(HANDLE KeyHandle, _DWORD *a2, void *a3, int *a4)
{
  int v8; // eax
  char *Heap; // rbx
  NTSTATUS v10; // eax
  int v11; // edi
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  ULONG Length; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  if ( a4 )
    v8 = *a4;
  Length = v8 + 12;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(v8 + 12));
  if ( Heap )
  {
    ValueName.Length = 0;
    v10 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Length, &Length);
    if ( v10 == -1073741772 )
    {
      v11 = 0;
      *(_QWORD *)(Heap + 4) = 0LL;
    }
    else
    {
      v11 = v10;
      if ( v10 < 0 && v10 != -2147483643 )
      {
LABEL_13:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return (unsigned int)v11;
      }
    }
    if ( a4 )
      *a4 = *((_DWORD *)Heap + 2);
    if ( a2 )
      *a2 = *((_DWORD *)Heap + 1);
    if ( v11 >= 0 )
    {
      if ( a3 )
        memmove(a3, Heap + 12, *((unsigned int *)Heap + 2));
    }
    goto LABEL_13;
  }
  return 3221225626LL;
}
