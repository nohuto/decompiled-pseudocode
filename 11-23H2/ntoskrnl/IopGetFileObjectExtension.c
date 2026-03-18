/*
 * XREFs of IopGetFileObjectExtension @ 0x14030169C
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025E8D0 (CcInitializeCacheMapInternal.c)
 *     IoChangeFileObjectFilterContext @ 0x1402FD83C (IoChangeFileObjectFilterContext.c)
 *     IopGetSetSpecificExtension @ 0x140301568 (IopGetSetSpecificExtension.c)
 *     IoGetOplockKeyContextEx @ 0x140301640 (IoGetOplockKeyContextEx.c)
 *     IoGetOplockFullFoExt @ 0x140301674 (IoGetOplockFullFoExt.c)
 *     IopSetLockOperationProcess @ 0x14030176C (IopSetLockOperationProcess.c)
 *     IoSetOplockPrivateFoExt @ 0x1403024C8 (IoSetOplockPrivateFoExt.c)
 *     IoGetInitiatorProcess @ 0x14036E630 (IoGetInitiatorProcess.c)
 *     IoSetOplockKeyContext @ 0x1403CF138 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x140556900 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x140556A20 (IoGetOplockKeyContext.c)
 *     IoGetShadowFileInformation @ 0x140556A60 (IoGetShadowFileInformation.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x14055846C (IopAdjustFileObjectKeepAliveCount.c)
 *     IopSynchronousServiceTail @ 0x1406E3E90 (IopSynchronousServiceTail.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     IopCloseFile @ 0x140730000 (IopCloseFile.c)
 *     IopSymlinkCreateECP @ 0x1407CD7C4 (IopSymlinkCreateECP.c)
 *     IopOpenLinkOrRenameTarget @ 0x1407D2FE4 (IopOpenLinkOrRenameTarget.c)
 *     IopGraftName @ 0x14087F518 (IopGraftName.c)
 *     IopSymlinkSetFoExtension @ 0x140881350 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x140945F38 (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x140947100 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetFileObjectExtension(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // r9
  __int64 result; // rax

  v3 = *(_QWORD **)(a1 + 208);
  if ( !v3 )
  {
    if ( a3 )
      *a3 = 0LL;
    return 0LL;
  }
  if ( v3 == IopRevocationExtension )
    return 0LL;
  result = v3[a2 + 1];
  if ( a3 )
    *a3 = v3;
  return result;
}
