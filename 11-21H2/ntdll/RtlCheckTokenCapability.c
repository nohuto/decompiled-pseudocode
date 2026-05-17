/*
 * XREFs of RtlCheckTokenCapability @ 0x18004A710
 * Callers:
 *     RtlCapabilityCheck @ 0x180012560 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlCreateAcl @ 0x180010E90 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x180047FD8 (RtlpAddKnownAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180049B30 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180049B90 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x18004D6E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x18004D750 (RtlCreateSecurityDescriptor.c)
 *     RtlIsCapabilitySid @ 0x18004D780 (RtlIsCapabilitySid.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A4070 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A4490 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x1800A4650 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x1800A4670 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x1800A48B0 (NtDuplicateToken.c)
 */

__int64 __fastcall RtlCheckTokenCapability(void *a1, unsigned __int8 *a2, _BYTE *a3)
{
  __int64 v6; // r8
  HANDLE v7; // rcx
  __int64 v8; // rdx
  int v9; // ebx
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
  void *Src; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v25[2]; // [rsp+120h] [rbp+20h] BYREF
  __int16 v26; // [rsp+128h] [rbp+28h]
  char v27[160]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v28[56]; // [rsp+1D0h] [rbp+D0h] BYREF

  v11 = 0LL;
  *a3 = 0;
  if ( !(unsigned __int8)RtlIsCapabilitySid(a2) )
  {
    v9 = -1073741811;
    goto LABEL_9;
  }
  if ( a1 )
  {
    v7 = a1;
    v11 = a1;
    goto LABEL_4;
  }
  LOBYTE(v6) = 1;
  v9 = NtOpenThreadTokenEx(-2LL, 8LL, v6);
  if ( v9 == -1073741700 )
  {
    v9 = NtOpenProcessTokenEx(-1LL, 10LL, 0LL, &Handle);
    if ( v9 < 0 )
      goto LABEL_16;
    v18 = 0LL;
    v20 = 0;
    v19 = 0LL;
    v21 = 0LL;
    v22 = v25;
    v17 = 48;
    v25[0] = 12;
    v25[1] = 2;
    v26 = 1;
    v9 = NtDuplicateToken(Handle, 8LL, &v17, 0LL, 2, &v11);
    NtClose(Handle);
  }
  if ( v9 >= 0 )
  {
    v7 = v11;
LABEL_4:
    v12 = 88;
    NtQueryInformationToken(v7, 1LL, &Src, 88LL, &v12);
    RtlCreateSecurityDescriptor(v23, 1LL);
    RtlSetOwnerSecurityDescriptor((__int64)v23, (__int64)Src, 0);
    RtlSetGroupSecurityDescriptor((__int64)v23, (__int64)Src, 0);
    RtlCreateAcl((__int64)v27, 0xA0u, 2);
    RtlpAddKnownAce(v27, 2u, 0, 65537, (unsigned __int8 *)Src, 0);
    RtlpAddKnownAce(v27, 2u, 0, 65537, a2, 0);
    LOBYTE(v8) = 1;
    RtlSetDaclSecurityDescriptor(v23, v8, v27, 0LL);
    v13 = 56;
    v9 = ZwAccessCheck(v23, v11, 65537LL, &RtlpCheckTokenCapabilityGenericMapping, v28, &v13, &v15, &v14);
    if ( v9 >= 0 )
    {
      if ( !v14 && v15 == 65537 )
        *a3 = 1;
      v9 = 0;
    }
LABEL_9:
    if ( a1 )
      return (unsigned int)v9;
  }
LABEL_16:
  if ( v11 )
    NtClose(v11);
  return (unsigned int)v9;
}
