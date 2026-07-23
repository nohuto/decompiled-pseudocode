/*
 * XREFs of RtlGetAce @ 0x140227B70
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x14037060C (SepAppendAceToTokenDefaultDacl.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14067081C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1406BD140 (SepAppendAceToTokenObjectAcl.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140800BDC (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14080C3E0 (CmpHiveRootSecurityDescriptor.c)
 *     ObpGetDosDevicesProtection @ 0x140858B50 (ObpGetDosDevicesProtection.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14087ED40 (PiDevCfgGetKeySecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1409BE8B4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     ObInitSystem @ 0x140B4B2F8 (ObInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetAce(PACL Acl, ULONG AceIndex, PVOID *Ace)
{
  ULONG v4; // r9d
  PACL v5; // r8

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u && AceIndex < Acl->AceCount )
  {
    v4 = 0;
    v5 = Acl + 1;
    *Ace = &Acl[1];
    if ( AceIndex )
    {
      while ( v5 < (PACL)((char *)Acl + Acl->AclSize) )
      {
        ++v4;
        v5 = (PACL)((char *)v5 + v5->AclSize);
        *Ace = v5;
        if ( v4 >= AceIndex )
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      if ( v5 < (PACL)((char *)Acl + Acl->AclSize) )
        return 0;
    }
  }
  return -1073741811;
}
