/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x140711150
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x1406702B0 (AdtpBuildAccessReasonAuditString.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1406C5280 (WmipGetGuidSecurityDescriptor.c)
 *     ExpWnfLookupPermanentName @ 0x140710B7C (ExpWnfLookupPermanentName.c)
 *     _PnpValidatePropertyData @ 0x1407970A8 (_PnpValidatePropertyData.c)
 *     ExpWnfRegisterPermanentName @ 0x1407E8280 (ExpWnfRegisterPermanentName.c)
 *     BiCreateKeySecurityDescriptor @ 0x140805580 (BiCreateKeySecurityDescriptor.c)
 *     IopUpdateSecureDeviceClassState @ 0x14083ABF8 (IopUpdateSecureDeviceClassState.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140859FD8 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14085CD78 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x14085FE00 (WmipSaveGuidSecurityDescriptor.c)
 *     _CmSetDeviceRegPropWorker @ 0x14086CBE0 (_CmSetDeviceRegPropWorker.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086F4C8 (_CmGetRegKeySecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14087ED40 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140880FB4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x1408A5852 (ObpSetObjectAuditInfo.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14095BB54 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14095BD9C (PiAuGetStateDirectorySecurityObject.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140A63640 (_CmSetInstallerClassRegPropWorker.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6DCB4 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B40310 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B406C0 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140B6C088 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // r8
  ULONG v2; // edx
  __int64 v3; // rax
  char *v4; // rax
  __int64 v5; // rax
  char *v6; // rax
  __int64 v7; // rax
  char *v8; // rax
  __int64 v10; // rax
  char *v11; // rax

  v1 = *((_WORD *)SecurityDescriptor + 1);
  v2 = ((v1 >> 31) & 0xFFFFFFEC) + 40;
  if ( v1 >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v3 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v3 )
      goto LABEL_7;
    v4 = (char *)SecurityDescriptor + v3;
  }
  if ( v4 )
    v2 += (4 * (unsigned __int8)v4[1] + 11) & 0xFFFFFFFC;
  if ( v1 >= 0 )
  {
    v6 = (char *)*((_QWORD *)SecurityDescriptor + 2);
    goto LABEL_9;
  }
LABEL_7:
  v5 = *((unsigned int *)SecurityDescriptor + 2);
  if ( !(_DWORD)v5 )
    goto LABEL_11;
  v6 = (char *)SecurityDescriptor + v5;
LABEL_9:
  if ( v6 )
    v2 += (4 * (unsigned __int8)v6[1] + 11) & 0xFFFFFFFC;
LABEL_11:
  if ( (v1 & 4) == 0 )
    goto LABEL_17;
  if ( v1 >= 0 )
  {
    v8 = (char *)*((_QWORD *)SecurityDescriptor + 4);
  }
  else
  {
    v7 = *((unsigned int *)SecurityDescriptor + 4);
    if ( !(_DWORD)v7 )
      goto LABEL_17;
    v8 = (char *)SecurityDescriptor + v7;
  }
  if ( v8 )
    v2 += (*((unsigned __int16 *)v8 + 1) + 3) & 0xFFFFFFFC;
LABEL_17:
  if ( (v1 & 0x10) != 0 )
  {
    if ( v1 >= 0 )
    {
      v11 = (char *)*((_QWORD *)SecurityDescriptor + 3);
    }
    else
    {
      v10 = *((unsigned int *)SecurityDescriptor + 3);
      if ( !(_DWORD)v10 )
        return v2;
      v11 = (char *)SecurityDescriptor + v10;
    }
    if ( v11 )
      v2 += (*((unsigned __int16 *)v11 + 1) + 3) & 0xFFFFFFFC;
  }
  return v2;
}
