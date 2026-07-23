/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x14070DD30
 * Callers:
 *     PipGetRegistrySecurityWithFallback @ 0x14069A82C (PipGetRegistrySecurityWithFallback.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14070CBEC (CmpValidateHiveSecurityDescriptors.c)
 *     ExpWnfLookupPermanentName @ 0x140710B7C (ExpWnfLookupPermanentName.c)
 *     _PnpValidatePropertyData @ 0x1407970A8 (_PnpValidatePropertyData.c)
 *     _CmSetDeviceRegPropWorker @ 0x14086CBE0 (_CmSetDeviceRegPropWorker.c)
 *     CmpVerifyCreateOrDeleteKeyLogRecord @ 0x140A1F4D8 (CmpVerifyCreateOrDeleteKeyLogRecord.c)
 *     CmpVerifySetSecurityDescriptorLogRecord @ 0x140A1F6C8 (CmpVerifySetSecurityDescriptorLogRecord.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140A63640 (_CmSetInstallerClassRegPropWorker.c)
 * Callees:
 *     RtlpValidateSDOffsetAndSize @ 0x14070DE90 (RtlpValidateSDOffsetAndSize.c)
 *     RtlValidAcl @ 0x140736A70 (RtlValidAcl.c)
 */

BOOLEAN __stdcall RtlValidRelativeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptorInput,
        ULONG SecurityDescriptorLength,
        SECURITY_INFORMATION RequiredInformation)
{
  char v3; // r10
  __int16 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  ACL *v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  ACL *v20; // rcx
  unsigned int v21; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v22[3]; // [rsp+24h] [rbp-Ch] BYREF
  unsigned int v23; // [rsp+58h] [rbp+28h] BYREF
  unsigned int v24; // [rsp+68h] [rbp+38h] BYREF

  v3 = RequiredInformation;
  v23 = 0;
  v24 = 0;
  v21 = 0;
  v22[0] = 0;
  if ( SecurityDescriptorLength < 0x14 )
    return 0;
  if ( *(_BYTE *)SecurityDescriptorInput != 1 )
    return 0;
  v6 = *((_WORD *)SecurityDescriptorInput + 1);
  if ( v6 >= 0 )
    return 0;
  v7 = *((unsigned int *)SecurityDescriptorInput + 1);
  v8 = 12LL;
  if ( (_DWORD)v7 )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v7, SecurityDescriptorLength, 12LL, &v23) )
      return 0;
    if ( *((_BYTE *)SecurityDescriptorInput + v9) != 1 )
      return 0;
    v10 = *((unsigned __int8 *)SecurityDescriptorInput + v9 + 1);
    if ( (unsigned __int8)v10 > 0xFu || v23 < 4 * v10 + 8 )
      return 0;
  }
  else if ( (v3 & 1) != 0 )
  {
    return 0;
  }
  v11 = *((unsigned int *)SecurityDescriptorInput + 2);
  if ( (_DWORD)v11 )
  {
    if ( (unsigned __int8)RtlpValidateSDOffsetAndSize(v11, SecurityDescriptorLength, v8, &v24) )
    {
      if ( *((_BYTE *)SecurityDescriptorInput + v12) == 1 )
      {
        v13 = *((unsigned __int8 *)SecurityDescriptorInput + v12 + 1);
        if ( (unsigned __int8)v13 <= 0xFu && v24 >= 4 * v13 + 8 )
          goto LABEL_14;
      }
    }
    return 0;
  }
  if ( (v3 & 2) != 0 )
    return 0;
LABEL_14:
  if ( (v6 & 4) != 0 )
  {
    v14 = *((unsigned int *)SecurityDescriptorInput + 4);
    if ( (_DWORD)v14 )
    {
      if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v14, SecurityDescriptorLength, 8LL, &v21) )
        return 0;
      v16 = (ACL *)((char *)SecurityDescriptorInput + v15);
      if ( v21 < v16->AclSize || !RtlValidAcl(v16) )
        return 0;
    }
  }
  if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 0x10) == 0 )
    return 1;
  v18 = *((unsigned int *)SecurityDescriptorInput + 3);
  if ( !(_DWORD)v18 )
    return 1;
  if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v18, SecurityDescriptorLength, 8LL, v22) )
    return 0;
  v20 = (ACL *)((char *)SecurityDescriptorInput + v19);
  if ( v22[0] < v20->AclSize )
    return 0;
  return RtlValidAcl(v20) != 0;
}
