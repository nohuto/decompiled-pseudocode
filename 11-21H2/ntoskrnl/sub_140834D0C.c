/*
 * XREFs of sub_140834D0C @ 0x140834D0C
 * Callers:
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 *     sub_140834684 @ 0x140834684 (sub_140834684.c)
 *     sub_140B15C50 @ 0x140B15C50 (sub_140B15C50.c)
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 *     sub_140B16904 @ 0x140B16904 (sub_140B16904.c)
 * Callees:
 *     RtlGetAce @ 0x1402A4750 (RtlGetAce.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1402E0B30 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

ACL *sub_140834D0C()
{
  unsigned __int8 *PoolWithTag; // r13
  unsigned __int8 *v1; // r15
  unsigned __int8 *v2; // r12
  unsigned __int8 *v3; // rsi
  unsigned __int8 *v4; // rax
  unsigned __int8 *v5; // r14
  ULONG v6; // edi
  ACL *v7; // rax
  ACL *v8; // rbx
  NTSTATUS Acl; // eax
  int v10; // eax
  ACL *v11; // rax
  ACL *v12; // rdi
  _SID_IDENTIFIER_AUTHORITY v14; // [rsp+38h] [rbp-69h] BYREF
  PVOID Ace; // [rsp+40h] [rbp-61h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+48h] [rbp-59h] BYREF
  size_t v17; // [rsp+50h] [rbp-51h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-49h] BYREF
  unsigned __int8 CapabilitySid[48]; // [rsp+68h] [rbp-39h] BYREF
  _BYTE CapabilityGroupSid[48]; // [rsp+98h] [rbp-9h] BYREF

  *(_QWORD *)&UnicodeString.Length = 1703960LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  UnicodeString.Buffer = L"registryRead";
  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  *(_DWORD *)v14.Value = 0;
  *(_WORD *)&v14.Value[4] = 1280;
  LODWORD(v17) = 0;
  WORD2(v17) = 3840;
  Ace = 0LL;
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x20204D43u);
  v1 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x20204D43u);
  v2 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x20204D43u);
  v3 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x20204D43u);
  v4 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x20204D43u);
  v5 = v4;
  if ( !PoolWithTag || !v1 || !v2 || !v3 || !v4 )
    KeBugCheckEx(0x51u, 0xBuLL, 1uLL, 0LL, 0LL);
  if ( RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 1u) < 0
    || RtlInitializeSid(v1, &v14, 1u) < 0
    || RtlInitializeSid(v2, &v14, 1u) < 0
    || RtlInitializeSid(v3, &v14, 2u) < 0
    || RtlInitializeSid(v5, (PSID_IDENTIFIER_AUTHORITY)&v17, 2u) < 0 )
  {
    KeBugCheckEx(0x51u, 0xBuLL, 2uLL, 0LL, 0LL);
  }
  *RtlSubAuthoritySid(PoolWithTag, 0) = 0;
  *RtlSubAuthoritySid(v1, 0) = 12;
  *RtlSubAuthoritySid(v2, 0) = 18;
  *RtlSubAuthoritySid(v3, 0) = 32;
  *RtlSubAuthoritySid(v3, 1u) = 544;
  *RtlSubAuthoritySid(v5, 0) = 2;
  *RtlSubAuthoritySid(v5, 1u) = 1;
  if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid) < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 3uLL, 0LL, 0LL);
  v6 = 4 * (CapabilitySid[1] + PoolWithTag[1] + v1[1] + v2[1] + v3[1] + v5[1]) + 104;
  v17 = v6;
  v7 = (ACL *)ExAllocatePoolWithTag(PagedPool, v6, 0x20204D43u);
  v8 = v7;
  if ( !v7 )
    KeBugCheckEx(0x51u, 0xBuLL, 4uLL, 0LL, 0LL);
  Acl = RtlCreateAcl(v7, v6, 2u);
  if ( Acl < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 5uLL, Acl, 0LL);
  v10 = sub_1407B4900(v8, 2u, 0, 983103, v2, 0);
  if ( v10 < 0
    || (v10 = sub_1407B4900(v8, 2u, 0, 983103, v3, 0), v10 < 0)
    || (v10 = sub_1407B4900(v8, 2u, 0, 131097, PoolWithTag, 0), v10 < 0)
    || (v10 = sub_1407B4900(v8, 2u, 0, 131097, v1, 0), v10 < 0)
    || (v10 = sub_1407B4900(v8, 2u, 0, 131097, v5, 0), v10 < 0)
    || (v10 = sub_1407B4900(v8, 2u, 0, 131097, CapabilitySid, 0), v10 < 0) )
  {
    KeBugCheckEx(0x51u, 0xBuLL, 6uLL, v10, 0LL);
  }
  RtlGetAce(v8, 0, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v8, 1u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v8, 2u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v8, 3u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v8, 4u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v8, 5u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  v11 = (ACL *)ExAllocatePoolWithTag(PagedPool, v6 + 40LL, 0x20204D43u);
  v12 = v11;
  if ( !v11 )
    KeBugCheckEx(0x51u, 0xBuLL, 7uLL, 0LL, 0LL);
  memmove(&v11[5], v8, v17);
  *(_DWORD *)v14.Value = RtlCreateSecurityDescriptor(v12, 1u);
  if ( *(int *)v14.Value < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 8uLL, *(int *)v14.Value, 0LL);
  }
  *(_DWORD *)v14.Value = RtlSetDaclSecurityDescriptor(v12, 1u, v12 + 5, 0);
  if ( *(int *)v14.Value < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 9uLL, *(int *)v14.Value, 0LL);
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  ExFreePoolWithTag(v1, 0);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(v5, 0);
  ExFreePoolWithTag(v8, 0);
  return v12;
}
