/*
 * XREFs of RtlpFreeHandleForAtom @ 0x14069ED40
 * Callers:
 *     RtlpFreeAllAtom @ 0x14020BDA8 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x1409BBDC0 (RtlEmptyAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExDestroyHandle @ 0x14073FFAC (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x140740120 (ExMapHandleToPointer.c)
 */

void __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h]

  v5 = 4 * (unsigned int)*(unsigned __int16 *)(a2 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ExMapHandleToPointer(*(_QWORD *)(a1 + 16), v5);
  if ( v4 )
    ExDestroyHandle(*(_QWORD *)(a1 + 16), v5, v4);
  KeLeaveCriticalRegion();
}
