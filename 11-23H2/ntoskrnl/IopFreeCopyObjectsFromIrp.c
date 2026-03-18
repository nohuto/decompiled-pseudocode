/*
 * XREFs of IopFreeCopyObjectsFromIrp @ 0x14028F1B0
 * Callers:
 *     IopFreeIrpExtension @ 0x14028FE18 (IopFreeIrpExtension.c)
 *     IoReuseIrp @ 0x1402903D0 (IoReuseIrp.c)
 *     IopfCompleteRequest @ 0x1402C99B0 (IopfCompleteRequest.c)
 * Callees:
 *     IopUnlockAndFreeMdl @ 0x14028CF2C (IopUnlockAndFreeMdl.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x14028F164 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopIrpHasExtensionType @ 0x140290278 (IopIrpHasExtensionType.c)
 */

void __fastcall IopFreeCopyObjectsFromIrp(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _MDL *v4; // rcx

  if ( (unsigned __int8)IopIrpHasExtensionType(a1, 9LL) && *(_QWORD *)(v2 + 112) )
  {
    v4 = *(struct _MDL **)(v2 + 8);
    if ( v4 )
    {
      IopUnlockAndFreeMdl(v4);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
    IopFreeCopyObjectsFromDataBuffer(*(_QWORD *)(a1 + 112), 0, v3);
  }
}
