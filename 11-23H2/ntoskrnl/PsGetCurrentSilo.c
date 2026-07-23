/*
 * XREFs of PsGetCurrentSilo @ 0x14022E310
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1405589A0 (IoRevokeHandlesForProcess.c)
 *     ObOpenObjectByName @ 0x14068C9D0 (ObOpenObjectByName.c)
 *     VRegEnabledInJob @ 0x14068EB28 (VRegEnabledInJob.c)
 *     CmCreateKey @ 0x140692410 (CmCreateKey.c)
 *     ObpInsertOrLocateNamedObject @ 0x1406C0AEC (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1406C2C80 (ObReferenceObjectByName.c)
 *     CmOpenKey @ 0x1406E2A90 (CmOpenKey.c)
 *     CmpParseKey @ 0x1406E69B0 (CmpParseKey.c)
 *     ObReferenceObjectByNameEx @ 0x140715568 (ObReferenceObjectByNameEx.c)
 *     IopCreateFile @ 0x14073C880 (IopCreateFile.c)
 *     NtQueryAttributesFile @ 0x14073E400 (NtQueryAttributesFile.c)
 *     ObQueryNameStringMode @ 0x14075B9E4 (ObQueryNameStringMode.c)
 *     PopGetSettingNotificationName @ 0x140783270 (PopGetSettingNotificationName.c)
 *     NtQueryFullAttributesFile @ 0x1407AAA40 (NtQueryFullAttributesFile.c)
 *     NtOpenSymbolicLinkObject @ 0x1407AACD0 (NtOpenSymbolicLinkObject.c)
 *     ObpCreateSymbolicLinkName @ 0x1407B6CD0 (ObpCreateSymbolicLinkName.c)
 *     IoQueryInformationByName @ 0x1407BF160 (IoQueryInformationByName.c)
 *     PsRegisterSiloMonitor @ 0x14081F190 (PsRegisterSiloMonitor.c)
 *     CmLockKeyForWrite @ 0x1408475CC (CmLockKeyForWrite.c)
 *     NtDeleteFile @ 0x140874570 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140947B28 (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x1409AC990 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A740F4 (ObGetSiloRootDirectoryPath.c)
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
