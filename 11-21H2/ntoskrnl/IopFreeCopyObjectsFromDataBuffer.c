/*
 * XREFs of IopFreeCopyObjectsFromDataBuffer @ 0x140418218
 * Callers:
 *     IopFreeCopyObjectsFromIrp @ 0x1404182AC (IopFreeCopyObjectsFromIrp.c)
 *     NtCopyFileChunk @ 0x1406588A0 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x14020B888 (IopFreeIrpExtension.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IopExceptionCleanupEx @ 0x140658670 (IopExceptionCleanupEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeCopyObjectsFromDataBuffer(__int64 a1, char a2)
{
  __int64 v2; // rbx
  IRP *v3; // rsi
  void *v4; // rdi
  void *v5; // rcx

  v2 = a1 - 72;
  if ( a2 )
  {
    v3 = *(IRP **)(v2 + 32);
    v4 = *(void **)(v2 + 48);
    if ( v3 )
    {
      IopFreeIrpExtension(*(_QWORD *)(v2 + 32), 9, 1);
      IopExceptionCleanupEx(v4, v3, v3->UserEvent, 0LL, 0);
      return;
    }
    if ( v4 )
      ObfDereferenceObjectWithTag(*(PVOID *)(v2 + 48), 0x746C6644u);
  }
  v5 = *(void **)(v2 + 56);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  ExFreePoolWithTag((PVOID)v2, 0);
}
