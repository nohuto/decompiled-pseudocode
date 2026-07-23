/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x18007EE30
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidAcl @ 0x180048180 (RtlValidAcl.c)
 *     RtlpValidateSDOffsetAndSize @ 0x18007EF90 (RtlpValidateSDOffsetAndSize.c)
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
  __int64 v11; // rcx
  __int64 v12; // rcx
  ACL *v13; // rcx
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
      || *((_BYTE *)SecurityDescriptorInput + v8) != 1
      || *((_BYTE *)SecurityDescriptorInput + v8 + 1) > 0xFu
      || v18 < 4 * (unsigned int)*((unsigned __int8 *)SecurityDescriptorInput + v8 + 1) + 8 )
    {
      return 0;
    }
  }
  else if ( (v3 & 1) != 0 )
  {
    return 0;
  }
  v9 = *((unsigned int *)SecurityDescriptorInput + 2);
  if ( (_DWORD)v9 )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v9, SecurityDescriptorLength, v7, &v18)
      || *((_BYTE *)SecurityDescriptorInput + v10) != 1
      || *((_BYTE *)SecurityDescriptorInput + v10 + 1) > 0xFu
      || v18 < 4 * (unsigned int)*((unsigned __int8 *)SecurityDescriptorInput + v10 + 1) + 8 )
    {
      return 0;
    }
  }
  else if ( (v3 & 2) != 0 )
  {
    return 0;
  }
  if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 4) == 0
    || (v11 = *((unsigned int *)SecurityDescriptorInput + 4), !(_DWORD)v11)
    || (unsigned __int8)RtlpValidateSDOffsetAndSize(v11, SecurityDescriptorLength, 8LL, &v18)
    && (v13 = (ACL *)((char *)SecurityDescriptorInput + v12), v18 >= v13->AclSize)
    && RtlValidAcl(v13) )
  {
    if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 0x10) == 0 )
      return 1;
    v15 = *((unsigned int *)SecurityDescriptorInput + 3);
    if ( !(_DWORD)v15 )
      return 1;
    if ( (unsigned __int8)RtlpValidateSDOffsetAndSize(v15, SecurityDescriptorLength, 8LL, &v18) )
    {
      v17 = (ACL *)((char *)SecurityDescriptorInput + v16);
      if ( v18 >= v17->AclSize )
      {
        if ( RtlValidAcl(v17) )
          return 1;
      }
    }
  }
  return 0;
}
