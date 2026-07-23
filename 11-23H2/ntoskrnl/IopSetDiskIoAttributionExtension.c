/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x1402905E0
 * Callers:
 *     IoSynchronousPageWriteEx @ 0x140251040 (IoSynchronousPageWriteEx.c)
 *     IoMakeAssociatedIrpPriv @ 0x140290198 (IoMakeAssociatedIrpPriv.c)
 *     IoUpdateIrpIoAttributionHandle @ 0x140290560 (IoUpdateIrpIoAttributionHandle.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x140290584 (IopSetDiskIoAttributionFromProcess.c)
 *     IoPropagateIrpExtensionEx @ 0x1402908B0 (IoPropagateIrpExtensionEx.c)
 *     IoPageReadEx @ 0x1402A6AA0 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1402A7EC0 (IoSetDiskIoAttributionFromThread.c)
 *     IoAsynchronousPageWrite @ 0x140369BAC (IoAsynchronousPageWrite.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x140290A9C (IopAllocateIrpExtension.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1402C1238 (IopReferenceIoAttributionFromProcess.c)
 */

__int64 __fastcall IopSetDiskIoAttributionExtension(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rdx
  __int64 IrpExtension; // rbx
  __int64 v8; // rcx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  IrpExtension = IopAllocateIrpExtension(a1, 6LL);
  if ( !IrpExtension )
    return 3221225626LL;
  v8 = *(_QWORD *)(a3 + 544);
  if ( (*(_DWORD *)(v8 + 2172) & 0x1000) != 0 && *(_QWORD *)(v8 + 1296) && *(_QWORD *)(*(_QWORD *)(v8 + 1296) + 1568LL) )
  {
    LOBYTE(v6) = 1;
    if ( (a4 & 1) == 0 )
      IopReferenceIoAttributionFromProcess(v8, v6, &v10);
  }
  *(_QWORD *)(IrpExtension + 16) = v10;
  return 0LL;
}
