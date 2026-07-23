/*
 * XREFs of IopIrpHasExtensionType @ 0x140290508
 * Callers:
 *     IopFreeCopyObjectsFromIrp @ 0x14028F440 (IopFreeCopyObjectsFromIrp.c)
 *     IopFreeIrpExtension @ 0x1402900A8 (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x140290198 (IoMakeAssociatedIrpPriv.c)
 *     IoGetFsTrackOffsetState @ 0x1402904A0 (IoGetFsTrackOffsetState.c)
 *     IoPropagateActivityIdToThread @ 0x1402904D0 (IoPropagateActivityIdToThread.c)
 *     IoReuseIrp @ 0x140290660 (IoReuseIrp.c)
 *     IoIsKernelPagingRead @ 0x1403516E0 (IoIsKernelPagingRead.c)
 *     IoSetGenericIrpExtension @ 0x140394300 (IoSetGenericIrpExtension.c)
 *     IoGetFsZeroingOffset @ 0x1403AC860 (IoGetFsZeroingOffset.c)
 *     IopPerfCompleteRequest @ 0x14045FD5E (IopPerfCompleteRequest.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140559340 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x140559390 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x1405593C0 (IoGetAdapterCryptoEngineExtension.c)
 *     IoGetCopyInformationExtension @ 0x140559400 (IoGetCopyInformationExtension.c)
 *     IoSetFsZeroingOffset @ 0x140559500 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140559540 (IoSetFsZeroingOffsetRequired.c)
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
