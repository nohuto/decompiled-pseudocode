/*
 * XREFs of sub_140B2A324 @ 0x140B2A324
 * Callers:
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14041CDE0 @ 0x14041CDE0 (sub_14041CDE0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406CCBA0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1406CCC10 (RtlAddMandatoryAce.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

int sub_140B2A324()
{
  int result; // eax
  ULONG v1; // edi
  ACL *PoolWithTag; // rax
  ACL *v3; // rbx
  NTSTATUS Acl; // edi
  ULONG_PTR v5; // rcx
  ULONG v6; // esi
  ACL *v7; // rax
  ACL *v8; // rdi
  int v9; // esi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+44h] [rbp-BCh]
  __int64 v13; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+58h] [rbp-A8h]
  int v16; // [rsp+5Ch] [rbp-A4h]
  _OWORD *v17; // [rsp+60h] [rbp-A0h]
  __int64 v18; // [rsp+68h] [rbp-98h]
  _OWORD SecurityDescriptor[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+90h] [rbp-70h]
  _DWORD v21[32]; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+150h] [rbp+50h] BYREF
  PVOID Object; // [rsp+158h] [rbp+58h] BYREF

  DestinationString = 0LL;
  memset(v21, 0, 0x78uLL);
  v16 = 0;
  Handle = 0LL;
  v12 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v20 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"KeyedEvent");
  v21[2] = 0;
  v21[10] = 0;
  v21[11] = 0;
  BYTE2(v21[0]) |= 4u;
  v21[9] = 1;
  v21[7] = 983043;
  v21[6] = 983043;
  LOWORD(v21[0]) = 120;
  v21[3] = 131073;
  v21[4] = 131074;
  v21[5] = 0x20000;
  result = ObCreateObjectType(&DestinationString, (__int64)v21, 0LL, (__int64)&qword_140D05280);
  if ( result < 0 )
    return result;
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result < 0 )
    return result;
  v1 = 4
     * (*((unsigned __int8 *)Group + 1)
      + *((unsigned __int8 *)SidToCheck + 1)
      + *((unsigned __int8 *)qword_140C5AFA8 + 1))
     + 68;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v1, 0x6C636144u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  Acl = RtlCreateAcl(PoolWithTag, v1, 2u);
  v5 = (ULONG_PTR)v3;
  if ( Acl < 0
    || (Acl = RtlAddAccessAllowedAce(v3, 2u, 0x20003u, qword_140C5AFA8), v5 = (ULONG_PTR)v3, Acl < 0)
    || (Acl = RtlAddAccessAllowedAce(v3, 2u, 0xF0003u, SidToCheck), v5 = (ULONG_PTR)v3, Acl < 0) )
  {
LABEL_20:
    sub_140348B40(v5);
    return Acl;
  }
  Acl = RtlAddAccessAllowedAce(v3, 2u, 0xF0003u, Group);
  if ( Acl < 0 || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0), Acl < 0) )
  {
LABEL_19:
    v5 = (ULONG_PTR)v3;
    goto LABEL_20;
  }
  v6 = 4 * *((unsigned __int8 *)Sid + 1) + 28;
  v7 = (ACL *)ExAllocatePoolWithTag(PagedPool, v6, 0x6C636144u);
  v8 = v7;
  if ( !v7 )
  {
    Acl = -1073741670;
    goto LABEL_19;
  }
  v9 = RtlCreateAcl(v7, v6, 2u);
  if ( v9 < 0
    || (v9 = RtlAddMandatoryAce(v8, 2u, 0, Sid, 0x11u, 1u), v9 < 0)
    || (v9 = RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, v8, 0), v9 < 0) )
  {
    sub_140348B40((ULONG_PTR)v3);
    sub_140348B40((ULONG_PTR)v8);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\CritSecOutOfMemoryEvent");
    v13 = 0LL;
    v18 = 0LL;
    p_DestinationString = &DestinationString;
    v11 = 48;
    v17 = SecurityDescriptor;
    v15 = 16;
    v9 = sub_14041CDE0((__int64)&Handle, 983043LL);
    sub_140348B40((ULONG_PTR)v3);
    sub_140348B40((ULONG_PTR)v8);
    if ( v9 >= 0 )
    {
      Object = 0LL;
      v9 = ObReferenceObjectByHandle(Handle, 0xF0003u, qword_140D05280, 0, &Object, 0LL);
      qword_140C10D40 = (__int64)Object;
      ZwClose(Handle);
    }
  }
  return v9;
}
