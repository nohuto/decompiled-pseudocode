/*
 * XREFs of PsGetCurrentSilo @ 0x14022E200
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1405582E0 (IoRevokeHandlesForProcess.c)
 *     ObOpenObjectByName @ 0x14068C9D0 (ObOpenObjectByName.c)
 *     VRegEnabledInJob @ 0x14068EB28 (VRegEnabledInJob.c)
 *     CmCreateKey @ 0x140692410 (CmCreateKey.c)
 *     ObpInsertOrLocateNamedObject @ 0x1406C0ABC (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1406C2C50 (ObReferenceObjectByName.c)
 *     CmOpenKey @ 0x1406E2A60 (CmOpenKey.c)
 *     CmpParseKey @ 0x1406E6980 (CmpParseKey.c)
 *     ObReferenceObjectByNameEx @ 0x14071535C (ObReferenceObjectByNameEx.c)
 *     IopCreateFile @ 0x14073C690 (IopCreateFile.c)
 *     NtQueryAttributesFile @ 0x14073E210 (NtQueryAttributesFile.c)
 *     ObQueryNameStringMode @ 0x14075B7F4 (ObQueryNameStringMode.c)
 *     PopGetSettingNotificationName @ 0x140783080 (PopGetSettingNotificationName.c)
 *     NtQueryFullAttributesFile @ 0x1407AA850 (NtQueryFullAttributesFile.c)
 *     NtOpenSymbolicLinkObject @ 0x1407AAAE0 (NtOpenSymbolicLinkObject.c)
 *     ObpCreateSymbolicLinkName @ 0x1407B69F0 (ObpCreateSymbolicLinkName.c)
 *     IoQueryInformationByName @ 0x1407BEE90 (IoQueryInformationByName.c)
 *     PsRegisterSiloMonitor @ 0x14081EE90 (PsRegisterSiloMonitor.c)
 *     CmLockKeyForWrite @ 0x1408472CC (CmLockKeyForWrite.c)
 *     NtDeleteFile @ 0x140874330 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140947928 (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x1409AC790 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A73E44 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *PsGetCurrentSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
    return CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  for ( result = (struct _LIST_ENTRY *)CurrentThread->Process[1].Affinity.StaticBitmap[16];
        result;
        result = result[80].Blink )
  {
    if ( ((__int64)result[96].Flink & 0x40000000) != 0 )
      break;
  }
  return result;
}
