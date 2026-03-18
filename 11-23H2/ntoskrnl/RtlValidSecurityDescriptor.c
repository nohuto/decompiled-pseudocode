/*
 * XREFs of RtlValidSecurityDescriptor @ 0x1407B4D10
 * Callers:
 *     AdtpIsSDValidSelfRelative @ 0x14067116C (AdtpIsSDValidSelfRelative.c)
 *     _PnpOpenPropertiesKey @ 0x1406CDC40 (_PnpOpenPropertiesKey.c)
 *     ObOpenObjectByNameEx @ 0x1406ECFE0 (ObOpenObjectByNameEx.c)
 *     ObpAdjustAccessMask @ 0x140715644 (ObpAdjustAccessMask.c)
 *     ObInsertObjectEx @ 0x1407359D0 (ObInsertObjectEx.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x1407DD03C (PnpInitializeInheritedRestrictedSd.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140859D98 (_PnpGetEnumSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086F288 (_CmGetRegKeySecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14087EB00 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140880D74 (_PnpGetPropertiesSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x1408A5602 (ObpSetObjectAuditInfo.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14095B954 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14095BB9C (PiAuGetStateDirectorySecurityObject.c)
 *     CMFCreateSecurityDescriptor @ 0x140A01B4C (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6DA04 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B40310 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B406C0 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140B6C088 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlValidAcl @ 0x140736880 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1407373A0 (RtlValidSid.c)
 */

BOOLEAN __stdcall RtlValidSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v2; // di
  __int64 v3; // rax
  char *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rcx
  __int16 v8; // ax
  char *v10; // rcx
  __int64 v11; // rax
  char *v12; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return 0;
  v2 = *((_WORD *)SecurityDescriptor + 1);
  if ( v2 >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v3 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v3 )
      goto LABEL_8;
    v4 = (char *)SecurityDescriptor + v3;
  }
  if ( v4 && !RtlValidSid(v4) )
    return 0;
  if ( v2 >= 0 )
  {
    v10 = (char *)*((_QWORD *)SecurityDescriptor + 2);
    goto LABEL_18;
  }
LABEL_8:
  v5 = *((unsigned int *)SecurityDescriptor + 2);
  if ( !(_DWORD)v5 )
    goto LABEL_9;
  v10 = (char *)SecurityDescriptor + v5;
LABEL_18:
  if ( v10 && !RtlValidSid(v10) )
    return 0;
LABEL_9:
  if ( (v2 & 4) != 0 )
  {
    if ( v2 >= 0 )
    {
      v7 = (char *)*((_QWORD *)SecurityDescriptor + 4);
      goto LABEL_13;
    }
    v6 = *((unsigned int *)SecurityDescriptor + 4);
    if ( (_DWORD)v6 )
    {
      v7 = (char *)SecurityDescriptor + v6;
LABEL_13:
      if ( !v7 || RtlValidAcl((__int64)v7) )
        goto LABEL_15;
      return 0;
    }
  }
LABEL_15:
  v8 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v8 & 0x10) == 0 )
    return 1;
  if ( v8 >= 0 )
  {
    v12 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v11 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v11 )
      return 1;
    v12 = (char *)SecurityDescriptor + v11;
  }
  if ( !v12 )
    return 1;
  return RtlValidAcl((__int64)v12) != 0;
}
