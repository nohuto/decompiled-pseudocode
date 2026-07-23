/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x1407119B0
 * Callers:
 *     AdtpBuildContextFromSecurityDescriptor @ 0x1406711C0 (AdtpBuildContextFromSecurityDescriptor.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14069AA88 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14069CE68 (LocalConvertSDToStringSD_Rev1.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14071186C (ExpWnfSpecializeSecurityDescriptor.c)
 *     NtSetSecurityObject @ 0x1407BC000 (NtSetSecurityObject.c)
 *     IopGetSecurityDescriptorInformation @ 0x14083B584 (IopGetSecurityDescriptorInformation.c)
 *     RtlReplaceSidInSd @ 0x1409BC530 (RtlReplaceSidInSd.c)
 *     SepSDContainsAttributeACE @ 0x1409D1488 (SepSDContainsAttributeACE.c)
 *     CmpCopySaclToVirtualKey @ 0x140A1B63C (CmpCopySaclToVirtualKey.c)
 *     CmpExamineSaclForAuditEvent @ 0x140A1BB18 (CmpExamineSaclForAuditEvent.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN SaclPresent,
        PACL *Sacl,
        PBOOLEAN SaclDefaulted)
{
  ACL *v4; // rax
  __int16 v6; // dx
  __int64 v7; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 0x10) != 0 )
  {
    *SaclPresent = 1;
    v6 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v6 & 0x10) != 0 )
    {
      if ( v6 >= 0 )
      {
        v4 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      else
      {
        v7 = *((unsigned int *)SecurityDescriptor + 3);
        if ( (_DWORD)v7 )
          v4 = (ACL *)((char *)SecurityDescriptor + v7);
      }
    }
    *Sacl = v4;
    *SaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 0x20) != 0;
  }
  else
  {
    *SaclPresent = 0;
  }
  return 0;
}
