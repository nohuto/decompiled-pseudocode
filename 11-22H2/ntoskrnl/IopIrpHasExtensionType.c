/*
 * XREFs of IopIrpHasExtensionType @ 0x140290158
 * Callers:
 *     IopFreeCopyObjectsFromIrp @ 0x14028F090 (IopFreeCopyObjectsFromIrp.c)
 *     IopFreeIrpExtension @ 0x14028FCF8 (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x14028FDE8 (IoMakeAssociatedIrpPriv.c)
 *     IoGetFsTrackOffsetState @ 0x1402900F0 (IoGetFsTrackOffsetState.c)
 *     IoPropagateActivityIdToThread @ 0x140290120 (IoPropagateActivityIdToThread.c)
 *     IoReuseIrp @ 0x1402902B0 (IoReuseIrp.c)
 *     IoIsKernelPagingRead @ 0x140350F40 (IoIsKernelPagingRead.c)
 *     IoSetGenericIrpExtension @ 0x1403925A0 (IoSetGenericIrpExtension.c)
 *     IoGetFsZeroingOffset @ 0x1403ABEA0 (IoGetFsZeroingOffset.c)
 *     IopPerfCompleteRequest @ 0x14045F2FE (IopPerfCompleteRequest.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140558D20 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x140558D70 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x140558DA0 (IoGetAdapterCryptoEngineExtension.c)
 *     IoGetCopyInformationExtension @ 0x140558DE0 (IoGetCopyInformationExtension.c)
 *     IoSetFsZeroingOffset @ 0x140558EE0 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140558F20 (IoSetFsZeroingOffsetRequired.c)
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
