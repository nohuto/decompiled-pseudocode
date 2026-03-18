/*
 * XREFs of IopIrpHasExtensionType @ 0x140290278
 * Callers:
 *     IopFreeCopyObjectsFromIrp @ 0x14028F1B0 (IopFreeCopyObjectsFromIrp.c)
 *     IopFreeIrpExtension @ 0x14028FE18 (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x14028FF08 (IoMakeAssociatedIrpPriv.c)
 *     IoGetFsTrackOffsetState @ 0x140290210 (IoGetFsTrackOffsetState.c)
 *     IoPropagateActivityIdToThread @ 0x140290240 (IoPropagateActivityIdToThread.c)
 *     IoReuseIrp @ 0x1402903D0 (IoReuseIrp.c)
 *     IoIsKernelPagingRead @ 0x140351540 (IoIsKernelPagingRead.c)
 *     IoSetGenericIrpExtension @ 0x140394120 (IoSetGenericIrpExtension.c)
 *     IoGetFsZeroingOffset @ 0x1403AC680 (IoGetFsZeroingOffset.c)
 *     IopPerfCompleteRequest @ 0x14045F95E (IopPerfCompleteRequest.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140558C80 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x140558CD0 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x140558D00 (IoGetAdapterCryptoEngineExtension.c)
 *     IoGetCopyInformationExtension @ 0x140558D40 (IoGetCopyInformationExtension.c)
 *     IoSetFsZeroingOffset @ 0x140558E40 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140558E80 (IoSetFsZeroingOffsetRequired.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IopIrpHasExtensionType(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  char v3; // r8
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 200);
  v3 = 0;
  if ( *(char *)(a1 + 71) < 0 )
    return a2 == 2;
  if ( v2 )
  {
    v4 = *(unsigned __int16 *)(v2 + 2);
    return _bittest(&v4, a2);
  }
  return v3;
}
