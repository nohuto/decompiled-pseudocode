/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x140736A80
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140225BD0 (SepMandatorySubProcessToken.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1402B3710 (SepSetProcessTrustLabelAceForToken.c)
 *     RtlCheckTokenMembershipEx @ 0x14031D010 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14036FFE0 (RtlCheckTokenCapability.c)
 *     SepInitProcessAuditSd @ 0x140387AB0 (SepInitProcessAuditSd.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1405B7B28 (SepBuildCapeSecurityDescriptor.c)
 *     SepVerifyDesktopAppxImage @ 0x1405B8000 (SepVerifyDesktopAppxImage.c)
 *     WdipAccessCheck @ 0x1405FB898 (WdipAccessCheck.c)
 *     ExpPlRunOnceInit @ 0x140608A70 (ExpPlRunOnceInit.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14067033C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14069BA60 (LocalConvertStringSDToSD_Rev1.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14069F068 (PspAllocateAndQueryNotificationChannel.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1406BD110 (SepAppendAceToTokenObjectAcl.c)
 *     sub_1406EF620 @ 0x1406EF620 (sub_1406EF620.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14076B9AC (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14076BAD0 (IopCreateSecurityDescriptorPerType.c)
 *     PiUEventInitClientRegistrationContext @ 0x1407821E4 (PiUEventInitClientRegistrationContext.c)
 *     MiSessionObjectCreate @ 0x1407AA29C (MiSessionObjectCreate.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1407D1644 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1407E3790 (PopCreateNotificationName.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1407F1980 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1407F3170 (ObpVerifyAccessToBoundaryEntry.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140800FBC (PopCreateHiberFileSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x140807830 (BiCreateKeySecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14080DE08 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14080E690 (CmpHiveRootSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x14081E1C8 (ObCreateKernelObjectsSD.c)
 *     SepInitializationPhase1 @ 0x140823D08 (SepInitializationPhase1.c)
 *     MiCreatePagingFile @ 0x140834C2C (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x140848A44 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x140851720 (NtSetUuidSeed.c)
 *     DbgkpCreateNotificationEvent @ 0x140858FD0 (DbgkpCreateNotificationEvent.c)
 *     ObpGetDosDevicesProtection @ 0x140859980 (ObpGetDosDevicesProtection.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14085A568 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14085CF98 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     MiCreateMemoryEventSD @ 0x14085F400 (MiCreateMemoryEventSD.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086F758 (_CmGetRegKeySecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14087EFD0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140881244 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140885688 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x14095B7C0 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14095BA04 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14095BC4C (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1409BEA94 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolTakeOwnership @ 0x1409BEC08 (RtlpSysVolTakeOwnership.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409DA1FC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140A01BFC (CMFCreateSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x140A1B43C (CmpCopySaclToVirtualKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6DA74 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x140A74040 (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140AC3A28 (ViInitializeLocalSystemDescriptor.c)
 *     WmipInitializeSecurity @ 0x140B3C860 (WmipInitializeSecurity.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B43A10 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B43DC0 (PiAuCreateStandardSecurityObject.c)
 *     ObInitSystem @ 0x140B4E9F8 (ObInitSystem.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140B5719C (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140B5742C (SeMakeAnonymousLogonToken.c)
 *     SeMakeSystemToken @ 0x140B576DC (SeMakeSystemToken.c)
 *     SepInitSystemDacls @ 0x140B59E44 (SepInitSystemDacls.c)
 *     SshpAlpcInitialize @ 0x140B680A4 (SshpAlpcInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140B6BFAC (PspInitializeCpuPartitionsDefaultSd.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140B6C6C8 (PspInitializeSystemPartitionPhase0.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140B6D174 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     IopCreateUmdfDirectory @ 0x140B6DFD4 (IopCreateUmdfDirectory.c)
 *     ExpKeyedEventInitialization @ 0x140B6ECCC (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140B70C0C (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x140B94EE0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlCreateSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, ULONG Revision)
{
  NTSTATUS result; // eax

  if ( Revision != 1 )
    return -1073741736;
  result = 0;
  *(_OWORD *)SecurityDescriptor = 0LL;
  *((_OWORD *)SecurityDescriptor + 1) = 0LL;
  *((_QWORD *)SecurityDescriptor + 4) = 0LL;
  *(_BYTE *)SecurityDescriptor = 1;
  return result;
}
