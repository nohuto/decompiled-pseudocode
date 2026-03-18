/*
 * XREFs of RtlpAddKnownAce @ 0x140735270
 * Callers:
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14069F068 (PspAllocateAndQueryNotificationChannel.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1406BD110 (SepAppendAceToTokenObjectAcl.c)
 *     sub_1406EF570 @ 0x1406EF570 (sub_1406EF570.c)
 *     SepCreateImpersonationTokenDacl @ 0x140733320 (SepCreateImpersonationTokenDacl.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14076B49C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PiUEventInitClientRegistrationContext @ 0x140781CD4 (PiUEventInitClientRegistrationContext.c)
 *     MiSessionObjectCreate @ 0x1407A9CEC (MiSessionObjectCreate.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1407D10C4 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1407E3210 (PopCreateNotificationName.c)
 *     RtlAddAccessAllowedAce @ 0x1407EF430 (RtlAddAccessAllowedAce.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1407F2BF0 (ObpVerifyAccessToBoundaryEntry.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14080090C (PopCreateHiberFileSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x1408052B0 (BiCreateKeySecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14080B888 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14080C110 (CmpHiveRootSecurityDescriptor.c)
 *     RtlAddAccessDeniedAceEx @ 0x140813530 (RtlAddAccessDeniedAceEx.c)
 *     ObCreateKernelObjectsSD @ 0x14081BC48 (ObCreateKernelObjectsSD.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14081F8B8 (ObpCreateDefaultObjectTypeSD.c)
 *     SepInitializationPhase1 @ 0x140822A40 (SepInitializationPhase1.c)
 *     MiCreatePagingFile @ 0x1408330DC (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x140846CB4 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x140850810 (NtSetUuidSeed.c)
 *     ObpGetDosDevicesProtection @ 0x140858910 (ObpGetDosDevicesProtection.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140859D98 (_PnpGetEnumSecurityDescriptor.c)
 *     DbgkpCreateNotificationEvent @ 0x14085B3BC (DbgkpCreateNotificationEvent.c)
 *     MiCreateMemoryEventSD @ 0x14085F2A0 (MiCreateMemoryEventSD.c)
 *     ExpInitFullProcessSecurityInfo @ 0x14085F780 (ExpInitFullProcessSecurityInfo.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086F288 (_CmGetRegKeySecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x140874C60 (RtlAddAccessAllowedAceEx.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14087EB00 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140880D74 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1408851B8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x14095B710 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14095B954 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14095BB9C (PiAuGetStateDirectorySecurityObject.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1409BADE0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1409BAE40 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x1409BB0A0 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x1409BB0E0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x1409BB130 (RtlAddAuditAccessObjectAce.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1409BE9E4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409DA14C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140A01B4C (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6DA04 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x140A73FD0 (ObpGetSilosRootDirectory.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
 *     RtlValidAcl @ 0x140736880 (RtlValidAcl.c)
 */

__int64 __fastcall RtlpAddKnownAce(__int64 a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, char a6)
{
  char v7; // bp
  unsigned __int8 v9; // si
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r9
  unsigned int v12; // edx
  unsigned __int64 v13; // rdx
  unsigned __int16 v14; // cx
  __int64 result; // rax
  unsigned int v16; // eax

  v7 = a3;
  if ( (unsigned __int64)Src <= 0x7FFFFFFF0000LL || (*Src & 0xF) != 1 || Src[1] > 0xFu )
    return 3221225592LL;
  v9 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 > 4u || a2 > 4 )
    return 3221225561LL;
  if ( v9 <= (unsigned __int8)a2 )
    v9 = a2;
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
  if ( !(unsigned __int8)RtlValidAcl(a1) )
    return 3221225591LL;
  v10 = a1 + 8;
  v11 = 0LL;
  v12 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( v10 < a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    {
      ++v12;
      v10 += *(unsigned __int16 *)(v10 + 2);
      if ( v12 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_13;
    }
    return 3221225591LL;
  }
LABEL_13:
  v13 = a1 + *(unsigned __int16 *)(a1 + 2);
  if ( v10 <= v13 )
    v11 = v10;
  v14 = 4 * (Src[1] + 4);
  if ( !v11 || v11 + v14 > v13 )
    return 3221225625LL;
  *(_WORD *)(v11 + 2) = v14;
  *(_BYTE *)(v11 + 1) = v7;
  *(_BYTE *)v11 = a6;
  *(_DWORD *)(v11 + 4) = a4;
  memmove((void *)(v11 + 8), Src, 4LL * Src[1] + 8);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v9;
  return result;
}
