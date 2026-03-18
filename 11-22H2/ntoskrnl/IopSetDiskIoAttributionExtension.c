/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x140290230
 * Callers:
 *     IoSynchronousPageWriteEx @ 0x140250E60 (IoSynchronousPageWriteEx.c)
 *     IoMakeAssociatedIrpPriv @ 0x14028FDE8 (IoMakeAssociatedIrpPriv.c)
 *     IoUpdateIrpIoAttributionHandle @ 0x1402901B0 (IoUpdateIrpIoAttributionHandle.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x1402901D4 (IopSetDiskIoAttributionFromProcess.c)
 *     IoPropagateIrpExtensionEx @ 0x140290500 (IoPropagateIrpExtensionEx.c)
 *     IoPageReadEx @ 0x1402A66F0 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1402A7B10 (IoSetDiskIoAttributionFromThread.c)
 *     IoAsynchronousPageWrite @ 0x1403693BC (IoAsynchronousPageWrite.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x1402906EC (IopAllocateIrpExtension.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1402C0F78 (IopReferenceIoAttributionFromProcess.c)
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
