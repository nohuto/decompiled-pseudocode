/*
 * XREFs of RtlpAddKnownAce @ 0x140735460
 * Callers:
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14069F068 (PspAllocateAndQueryNotificationChannel.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1406BD140 (SepAppendAceToTokenObjectAcl.c)
 *     sub_1406EF5A0 @ 0x1406EF5A0 (sub_1406EF5A0.c)
 *     SepCreateImpersonationTokenDacl @ 0x140733510 (SepCreateImpersonationTokenDacl.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14076B68C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PiUEventInitClientRegistrationContext @ 0x140781EC4 (PiUEventInitClientRegistrationContext.c)
 *     MiSessionObjectCreate @ 0x1407A9EDC (MiSessionObjectCreate.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1407D1394 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1407E34E0 (PopCreateNotificationName.c)
 *     RtlAddAccessAllowedAce @ 0x1407EF700 (RtlAddAccessAllowedAce.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1407F2EC0 (ObpVerifyAccessToBoundaryEntry.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140800BDC (PopCreateHiberFileSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x140805580 (BiCreateKeySecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14080BB58 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14080C3E0 (CmpHiveRootSecurityDescriptor.c)
 *     RtlAddAccessDeniedAceEx @ 0x140813800 (RtlAddAccessDeniedAceEx.c)
 *     ObCreateKernelObjectsSD @ 0x14081BF18 (ObCreateKernelObjectsSD.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14081FBB8 (ObpCreateDefaultObjectTypeSD.c)
 *     SepInitializationPhase1 @ 0x140822D40 (SepInitializationPhase1.c)
 *     MiCreatePagingFile @ 0x1408333DC (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x140846FB4 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x140850B10 (NtSetUuidSeed.c)
 *     ObpGetDosDevicesProtection @ 0x140858B50 (ObpGetDosDevicesProtection.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140859FD8 (_PnpGetEnumSecurityDescriptor.c)
 *     DbgkpCreateNotificationEvent @ 0x14085B5FC (DbgkpCreateNotificationEvent.c)
 *     MiCreateMemoryEventSD @ 0x14085F4E0 (MiCreateMemoryEventSD.c)
 *     ExpInitFullProcessSecurityInfo @ 0x14085F9C0 (ExpInitFullProcessSecurityInfo.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086F4C8 (_CmGetRegKeySecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x140874EA0 (RtlAddAccessAllowedAceEx.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14087ED40 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140880FB4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1408853F8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x14095B910 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14095BB54 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14095BD9C (PiAuGetStateDirectorySecurityObject.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1409BAFE0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1409BB040 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x1409BB2A0 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x1409BB2E0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x1409BB330 (RtlAddAuditAccessObjectAce.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1409BEBE4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409DA34C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140A01DDC (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6DCB4 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x140A74280 (ObpGetSilosRootDirectory.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     RtlValidAcl @ 0x140736A70 (RtlValidAcl.c)
 */

__int64 __fastcall RtlpAddKnownAce(ACL *a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, UCHAR a6)
{
  UCHAR v7; // bp
  unsigned __int8 AclRevision; // si
  ACL *v10; // rax
  ACL *v11; // r9
  unsigned int v12; // edx
  ACL *v13; // rdx
  USHORT v14; // cx
  __int64 result; // rax
  unsigned int v16; // eax

  v7 = a3;
  if ( (unsigned __int64)Src <= 0x7FFFFFFF0000LL || (*Src & 0xF) != 1 || Src[1] > 0xFu )
    return 3221225592LL;
  AclRevision = a1->AclRevision;
  if ( a1->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  if ( AclRevision <= (unsigned __int8)a2 )
    AclRevision = a2;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
    {
      v16 = a3 & 0xFFFFFF20;
    }
    else
    {
      if ( a6 )
        return 3221225485LL;
      v16 = a3 & 0xFFFFFFC0;
    }
    if ( !v16 )
      goto LABEL_9;
    return 3221225485LL;
  }
LABEL_9:
  if ( !RtlValidAcl(a1) )
    return 3221225591LL;
  v10 = a1 + 1;
  v11 = 0LL;
  v12 = 0;
  if ( a1->AceCount )
  {
    while ( v10 < (ACL *)((char *)a1 + a1->AclSize) )
    {
      ++v12;
      v10 = (ACL *)((char *)v10 + v10->AclSize);
      if ( v12 >= a1->AceCount )
        goto LABEL_13;
    }
    return 3221225591LL;
  }
LABEL_13:
  v13 = (ACL *)((char *)a1 + a1->AclSize);
  if ( v10 <= v13 )
    v11 = v10;
  v14 = 4 * (Src[1] + 4);
  if ( !v11 || (ACL *)((char *)v11 + v14) > v13 )
    return 3221225625LL;
  v11->AclSize = v14;
  v11->Sbz1 = v7;
  v11->AclRevision = a6;
  *(_DWORD *)&v11->AceCount = a4;
  memmove(&v11[1], Src, 4LL * Src[1] + 8);
  ++a1->AceCount;
  result = 0LL;
  a1->AclRevision = AclRevision;
  return result;
}
