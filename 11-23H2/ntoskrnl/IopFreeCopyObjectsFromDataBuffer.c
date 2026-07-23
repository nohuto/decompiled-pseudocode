/*
 * XREFs of IopFreeCopyObjectsFromDataBuffer @ 0x14028F3F4
 * Callers:
 *     IopFreeCopyObjectsFromIrp @ 0x14028F440 (IopFreeCopyObjectsFromIrp.c)
 *     NtCopyFileChunk @ 0x140749A80 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x14074C3B0 (IopReadFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     IopFreeIrpExtension @ 0x1402900A8 (IopFreeIrpExtension.c)
 *     IopExceptionCleanupEx @ 0x140944B78 (IopExceptionCleanupEx.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeCopyObjectsFromDataBuffer(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  void *v4; // rcx
  IRP *v5; // rsi
  void *v6; // rdi

  v3 = a1 - 72;
  if ( a2 )
  {
    v5 = *(IRP **)(v3 + 32);
    v6 = *(void **)(v3 + 48);
    if ( v5 )
    {
      LOBYTE(a3) = 1;
      IopFreeIrpExtension(*(_QWORD *)(v3 + 32), 9LL, a3);
      IopExceptionCleanupEx(v6, v5, v5->UserEvent, 0LL, 0);
      return;
    }
    if ( v6 )
      ObfDereferenceObject(*(PVOID *)(v3 + 48));
  }
  v4 = *(void **)(v3 + 56);
  if ( v4 )
    ObfDereferenceObject(v4);
  ExFreePoolWithTag((PVOID)v3, 0);
}
