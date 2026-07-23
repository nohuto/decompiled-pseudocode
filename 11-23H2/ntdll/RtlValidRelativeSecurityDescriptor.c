/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x18007B5C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidAcl @ 0x18001B1D0 (RtlValidAcl.c)
 *     RtlpValidateSDOffsetAndSize @ 0x18007B720 (RtlpValidateSDOffsetAndSize.c)
 */

BOOLEAN __cdecl RtlValidRelativeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptorInput,
        ULONG SecurityDescriptorLength,
        SECURITY_INFORMATION RequiredInformation)
{
  char v3; // r10
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  ACL *v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  ACL *v17; // rcx
  unsigned int v18; // [rsp+38h] [rbp+10h] BYREF

  v3 = RequiredInformation;
  if ( SecurityDescriptorLength < 0x14
    || *(_BYTE *)SecurityDescriptorInput != 1
    || *((__int16 *)SecurityDescriptorInput + 1) >= 0 )
  {
    return 0;
  }
  v6 = *((unsigned int *)SecurityDescriptorInput + 1);
  v7 = 12LL;
  if ( (_DWORD)v6 )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v6, SecurityDescriptorLength, 12LL, &v18)
      || *((_BYTE *)SecurityDescriptorInput + v13) != 1
      || *((_BYTE *)SecurityDescriptorInput + v13 + 1) > 0xFu
      || v18 < 4 * (unsigned int)*((unsigned __int8 *)SecurityDescriptorInput + v13 + 1) + 8 )
    {
      return 0;
    }
  }
  else if ( (v3 & 1) != 0 )
  {
    return 0;
  }
  v8 = *((unsigned int *)SecurityDescriptorInput + 2);
  if ( (_DWORD)v8 )
  {
    if ( (unsigned __int8)RtlpValidateSDOffsetAndSize(v8, SecurityDescriptorLength, v7, &v18)
      && *((_BYTE *)SecurityDescriptorInput + v14) == 1
      && *((_BYTE *)SecurityDescriptorInput + v14 + 1) <= 0xFu
      && v18 >= 4 * (unsigned int)*((unsigned __int8 *)SecurityDescriptorInput + v14 + 1) + 8 )
    {
      goto LABEL_8;
    }
    return 0;
  }
  if ( (v3 & 2) != 0 )
    return 0;
LABEL_8:
  if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 4) != 0 )
  {
    v9 = *((unsigned int *)SecurityDescriptorInput + 4);
    if ( (_DWORD)v9 )
    {
      if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v9, SecurityDescriptorLength, 8LL, &v18) )
        return 0;
      v11 = (ACL *)((char *)SecurityDescriptorInput + v10);
      if ( v18 < v11->AclSize || !RtlValidAcl(v11) )
        return 0;
    }
  }
  if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 0x10) == 0 )
    return 1;
  v15 = *((unsigned int *)SecurityDescriptorInput + 3);
  if ( !(_DWORD)v15 )
    return 1;
  if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v15, SecurityDescriptorLength, 8LL, &v18) )
    return 0;
  v17 = (ACL *)((char *)SecurityDescriptorInput + v16);
  if ( v18 < v17->AclSize )
    return 0;
  return RtlValidAcl(v17) != 0;
}
