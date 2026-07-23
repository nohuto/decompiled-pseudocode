/*
 * XREFs of RtlDebugDestroyHeap @ 0x180104EE8
 * Callers:
 *     RtlDestroyHeap @ 0x1800570A0 (RtlDestroyHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlpCheckHeapSignature @ 0x180015DC8 (RtlpCheckHeapSignature.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800206D4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpValidateHeap @ 0x180106CB0 (RtlpValidateHeap.c)
 */

char __fastcall RtlDebugDestroyHeap(__int64 a1)
{
  __int64 v3; // rcx
  ULONG_PTR v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (void *)a1 == NtCurrentPeb()->ProcessHeap )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("May not destroy the process heap at %p\n", (const void *)a1);
    return 0;
  }
  if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlDestroyHeap") || !(unsigned __int8)RtlpValidateHeap(a1) )
    return 0;
  *(_DWORD *)(a1 + 152) = 0;
  if ( *(_QWORD *)(a1 + 216) )
  {
    v4 = 0LL;
    RtlpSecMemFreeVirtualMemory(v3, (PVOID *)(a1 + 216), &v4, 0x8000u);
  }
  return 1;
}
