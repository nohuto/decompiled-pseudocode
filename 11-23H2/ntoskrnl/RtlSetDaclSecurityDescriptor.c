/*
 * XREFs of RtlSetDaclSecurityDescriptor @ 0x1406BD500
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x14031D1F0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x140370630 (RtlCheckTokenCapability.c)
 *     SepInitProcessAuditSd @ 0x14038848C (SepInitProcessAuditSd.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1405B7A98 (SepBuildCapeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x1405FB808 (WdipAccessCheck.c)
 *     ExpPlRunOnceInit @ 0x140608A00 (ExpPlRunOnceInit.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1406702CC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14069BA60 (LocalConvertStringSDToSD_Rev1.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14069F068 (PspAllocateAndQueryNotificationChannel.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1406BD110 (SepAppendAceToTokenObjectAcl.c)
 *     sub_1406EF570 @ 0x1406EF570 (sub_1406EF570.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14076B49C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14076B5C0 (IopCreateSecurityDescriptorPerType.c)
 *     PiUEventInitClientRegistrationContext @ 0x140781CD4 (PiUEventInitClientRegistrationContext.c)
 *     MiSessionObjectCreate @ 0x1407A9CEC (MiSessionObjectCreate.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1407D10C4 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1407E3210 (PopCreateNotificationName.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1407F1400 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1407F2BF0 (ObpVerifyAccessToBoundaryEntry.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14080090C (PopCreateHiberFileSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x1408052B0 (BiCreateKeySecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14080B888 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14080C110 (CmpHiveRootSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x14081BC48 (ObCreateKernelObjectsSD.c)
 *     SepInitializationPhase1 @ 0x140822A40 (SepInitializationPhase1.c)
 *     MiCreatePagingFile @ 0x1408330DC (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x140846CB4 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x140850810 (NtSetUuidSeed.c)
 *     ObpGetDosDevicesProtection @ 0x140858910 (ObpGetDosDevicesProtection.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140859D98 (_PnpGetEnumSecurityDescriptor.c)
 *     DbgkpCreateNotificationEvent @ 0x14085B3BC (DbgkpCreateNotificationEvent.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14085CB38 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     MiCreateMemoryEventSD @ 0x14085F2A0 (MiCreateMemoryEventSD.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086F288 (_CmGetRegKeySecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14087EB00 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140880D74 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1408851B8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x14095B710 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14095B954 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14095BB9C (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1409BE6B4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1409BE9E4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409DA14C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140A01B4C (CMFCreateSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x140A1B38C (CmpCopySaclToVirtualKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6DA04 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x140A73FD0 (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140AC2A58 (ViInitializeLocalSystemDescriptor.c)
 *     WmipInitializeSecurity @ 0x140B39160 (WmipInitializeSecurity.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B40310 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B406C0 (PiAuCreateStandardSecurityObject.c)
 *     ObInitSystem @ 0x140B4B2F8 (ObInitSystem.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140B53620 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140B538B0 (SeMakeAnonymousLogonToken.c)
 *     SeMakeSystemToken @ 0x140B53B60 (SeMakeSystemToken.c)
 *     SepInitSystemDacls @ 0x140B64194 (SepInitSystemDacls.c)
 *     SshpAlpcInitialize @ 0x140B66D04 (SshpAlpcInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140B6B05C (PspInitializeCpuPartitionsDefaultSd.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140B6B5DC (PspInitializeSystemPartitionPhase0.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140B6C088 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     IopCreateUmdfDirectory @ 0x140B6CB68 (IopCreateUmdfDirectory.c)
 *     ExpKeyedEventInitialization @ 0x140B6D860 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140B6FC1C (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x140B93EE0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN DaclPresent,
        PACL Dacl,
        BOOLEAN DaclDefaulted)
{
  __int16 v5; // cx
  __int16 v6; // cx
  PACL v7; // rax
  __int16 v8; // cx
  __int16 v10; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1);
  if ( v5 >= 0 )
  {
    if ( DaclPresent )
    {
      v6 = v5 | 4;
      v7 = 0LL;
      if ( Dacl )
        v7 = Dacl;
      *((_QWORD *)SecurityDescriptor + 4) = v7;
      v8 = v6 & 0xFFF7;
      *((_WORD *)SecurityDescriptor + 1) = v8;
      if ( !DaclDefaulted )
        return 0;
      v10 = v8 | 8;
    }
    else
    {
      v10 = v5 & 0xFFFB;
    }
    *((_WORD *)SecurityDescriptor + 1) = v10;
    return 0;
  }
  return -1073741703;
}
