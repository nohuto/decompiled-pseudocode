/*
 * XREFs of IopGetFileObjectExtension @ 0x14030192C
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025EB60 (CcInitializeCacheMapInternal.c)
 *     IoChangeFileObjectFilterContext @ 0x1402FDACC (IoChangeFileObjectFilterContext.c)
 *     IopGetSetSpecificExtension @ 0x1403017F8 (IopGetSetSpecificExtension.c)
 *     IoGetOplockKeyContextEx @ 0x1403018D0 (IoGetOplockKeyContextEx.c)
 *     IoGetOplockFullFoExt @ 0x140301904 (IoGetOplockFullFoExt.c)
 *     IopSetLockOperationProcess @ 0x1403019FC (IopSetLockOperationProcess.c)
 *     IoSetOplockPrivateFoExt @ 0x140302758 (IoSetOplockPrivateFoExt.c)
 *     IoGetInitiatorProcess @ 0x14036E7D0 (IoGetInitiatorProcess.c)
 *     IoSetOplockKeyContext @ 0x1403CF318 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x140556FC0 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x1405570E0 (IoGetOplockKeyContext.c)
 *     IoGetShadowFileInformation @ 0x140557120 (IoGetShadowFileInformation.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140558B2C (IopAdjustFileObjectKeepAliveCount.c)
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopCloseFile @ 0x1407301F0 (IopCloseFile.c)
 *     IopSymlinkCreateECP @ 0x1407CDA94 (IopSymlinkCreateECP.c)
 *     IopOpenLinkOrRenameTarget @ 0x1407D32B4 (IopOpenLinkOrRenameTarget.c)
 *     IopGraftName @ 0x14087F758 (IopGraftName.c)
 *     IopSymlinkSetFoExtension @ 0x140881590 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x140946138 (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x140947300 (IoCopyDeviceObjectHint.c)
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
