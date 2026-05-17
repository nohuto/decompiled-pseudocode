/*
 * XREFs of RtlCheckTokenCapability @ 0x180018530
 * Callers:
 *     RtlCapabilityCheck @ 0x180011760 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlIsCapabilitySid @ 0x180014300 (RtlIsCapabilitySid.c)
 *     RtlCreateSecurityDescriptor @ 0x180014630 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180014660 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1800146C0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180014730 (RtlSetGroupSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1800184E0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x18001AA04 (RtlpAddKnownAce.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A0EB0 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A12D0 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x1800A1490 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x1800A14B0 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x1800A16F0 (NtDuplicateToken.c)
 */

__int64 __fastcall RtlCheckTokenCapability(void *a1, void *a2, _BYTE *a3)
{
  __int64 v6; // r8
  HANDLE v7; // rcx
  int v8; // ebx
  HANDLE *Src; // [rsp+20h] [rbp-E0h]
  HANDLE v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+4Ch] [rbp-B4h] BYREF
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h]
  __int64 v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+78h] [rbp-88h]
  __int64 v21; // [rsp+80h] [rbp-80h]
  _DWORD *v22; // [rsp+88h] [rbp-78h]
  _BYTE v23[48]; // [rsp+90h] [rbp-70h] BYREF
  void *v24; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v25[2]; // [rsp+120h] [rbp+20h] BYREF
  __int16 v26; // [rsp+128h] [rbp+28h]
  int v27[40]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v28[56]; // [rsp+1D0h] [rbp+D0h] BYREF

  v11 = 0LL;
  *a3 = 0;
  if ( !RtlIsCapabilitySid((__int64)a2) )
  {
    v8 = -1073741811;
    goto LABEL_9;
  }
  if ( a1 )
  {
    v7 = a1;
    v11 = a1;
    goto LABEL_4;
  }
  LOBYTE(v6) = 1;
  Src = &v11;
  v8 = NtOpenThreadTokenEx(-2LL, 8LL, v6);
  if ( v8 == -1073741700 )
  {
    v8 = NtOpenProcessTokenEx(-1LL, 10LL, 0LL, &Handle);
    if ( v8 < 0 )
      goto LABEL_16;
    v18 = 0LL;
    v20 = 0;
    v19 = 0LL;
    v21 = 0LL;
    v22 = v25;
    LODWORD(Src) = 2;
    v17 = 48;
    v25[0] = 12;
    v25[1] = 2;
    v26 = 1;
    v8 = NtDuplicateToken(Handle, 8LL, &v17, 0LL, Src, &v11);
    NtClose(Handle);
  }
  if ( v8 >= 0 )
  {
    v7 = v11;
LABEL_4:
    v12 = 88;
    NtQueryInformationToken(v7, 1LL, &v24, 88LL, &v12);
    RtlCreateSecurityDescriptor((__int64)v23, 1);
    RtlSetOwnerSecurityDescriptor((__int64)v23, (__int64)v24, 0);
    RtlSetGroupSecurityDescriptor((__int64)v23, (__int64)v24, 0);
    RtlCreateAcl((__int64)v27, 0xA0u, 2);
    RtlpAddKnownAce((int)v27, 2, 0, 65537, v24, 0);
    RtlpAddKnownAce((int)v27, 2, 0, 65537, a2, 0);
    RtlSetDaclSecurityDescriptor((__int64)v23, 1, (__int64)v27, 0);
    v13 = 56;
    v8 = ZwAccessCheck(v23, v11, 65537LL, &RtlpCheckTokenCapabilityGenericMapping, v28, &v13, &v15, &v14);
    if ( v8 >= 0 )
    {
      if ( !v14 && v15 == 65537 )
        *a3 = 1;
      v8 = 0;
    }
LABEL_9:
    if ( a1 )
      return (unsigned int)v8;
  }
LABEL_16:
  if ( v11 )
    NtClose(v11);
  return (unsigned int)v8;
}
