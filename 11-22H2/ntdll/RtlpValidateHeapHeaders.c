/*
 * XREFs of RtlpValidateHeapHeaders @ 0x180106FF4
 * Callers:
 *     RtlDebugAllocateHeap @ 0x180103E60 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180104364 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateHeap @ 0x180104638 (RtlDebugCreateHeap.c)
 *     RtlDebugCreateTagHeap @ 0x18010492C (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x180104C90 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180105704 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeap @ 0x180106A10 (RtlpValidateHeap.c)
 * Callees:
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemory @ 0x1800A3970 (RtlCompareMemory.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

char __fastcall RtlpValidateHeapHeaders(PVOID *Src, char a2)
{
  PVOID *v3; // rsi
  size_t v4; // r8
  SIZE_T v5; // rdi
  ULONG_PTR v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rbx
  __int64 v9; // rax
  ULONG_PTR v11; // [rsp+50h] [rbp+18h] BYREF

  if ( !RtlpValidateHeapHdrsEnable )
    return 1;
  v3 = Src + 27;
  if ( Src[27] )
    goto LABEL_5;
  v11 = *((unsigned __int16 *)Src + 105);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3, 0LL, &v11, 0x1000u, 4u) < 0 )
    return 1;
  a2 = 1;
LABEL_5:
  v4 = *((unsigned __int16 *)Src + 105);
  v11 = v4;
  if ( a2 )
  {
    memmove(*v3, Src, v4);
    v6 = v11;
    v5 = v11;
  }
  else
  {
    v5 = RtlCompareMemory(Src, *v3, v4);
    v6 = v11;
  }
  if ( v6 == v5 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "Heap %p - headers modified (%p is %lx instead of %lx)\n",
    Src,
    (char *)Src + v5,
    *(_DWORD *)((char *)Src + v5),
    *(_DWORD *)((char *)*v3 + v5));
  v7 = 0;
  if ( "Entry" )
  {
    v8 = 0LL;
    v9 = 0LL;
    while ( 1 )
    {
      ++v7;
      if ( v5 >= *(unsigned int *)((char *)&RtlpHeapHeaderFieldOffsets + v9)
        && v5 < *((unsigned int *)&RtlpHeapHeaderFieldOffsets + 4 * v7) )
      {
        break;
      }
      v9 = 16LL * v7;
      v8 = v7;
      if ( !*(_QWORD *)((char *)&RtlpHeapHeaderFieldOffsets + v9 + 8) )
        return 0;
    }
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint(
      "    This is located in the %s field of the heap header.\n",
      *((const char **)&RtlpHeapHeaderFieldOffsets + 2 * v8 + 1));
  }
  return 0;
}
