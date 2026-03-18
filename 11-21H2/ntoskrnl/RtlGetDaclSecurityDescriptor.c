/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x140203DD0
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14064B9D8 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     ObpInsertOrLocateNamedObject @ 0x14066915C (ObpInsertOrLocateNamedObject.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14066FDE8 (ExpWnfSpecializeSecurityDescriptor.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140676314 (LocalConvertSDToStringSD_Rev1.c)
 *     SepHasCriticalAcesRemoved @ 0x140678698 (SepHasCriticalAcesRemoved.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140678874 (PiDevCfgGetKeySecurityDescriptor.c)
 *     IopGetSecurityDescriptorInformation @ 0x1406796E8 (IopGetSecurityDescriptorInformation.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1406BCE90 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1407F8298 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     MiInitializeMemoryEvents @ 0x14082BD64 (MiInitializeMemoryEvents.c)
 *     ObCleanupSecurityDescriptor @ 0x14082C308 (ObCleanupSecurityDescriptor.c)
 *     ObpCreateDosDevicesDirectory @ 0x14082C49C (ObpCreateDosDevicesDirectory.c)
 *     ExpInitFullProcessSecurityInfo @ 0x14085F700 (ExpInitFullProcessSecurityInfo.c)
 *     CmpCopySaclToVirtualKey @ 0x14091822C (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x1409B92B0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN DaclPresent,
        PACL *Dacl,
        PBOOLEAN DaclDefaulted)
{
  ACL *v4; // rax
  __int16 v5; // dx
  __int64 v6; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 4) != 0 )
  {
    *DaclPresent = 1;
    v5 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v5 & 4) != 0 )
    {
      if ( v5 >= 0 )
      {
        v4 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v6 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v6 )
          v4 = (ACL *)((char *)SecurityDescriptor + v6);
      }
    }
    *Dacl = v4;
    *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
  }
  else
  {
    *DaclPresent = 0;
  }
  return 0;
}
