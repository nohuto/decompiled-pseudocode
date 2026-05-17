/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x180014560
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18000B7E8 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCapabilityCheck @ 0x180011970 (RtlCapabilityCheck.c)
 *     RtlCheckTokenMembership @ 0x1800F0E30 (RtlCheckTokenMembership.c)
 * Callees:
 *     RtlInitializeSidEx @ 0x180012FF0 (RtlInitializeSidEx.c)
 *     RtlCreateSecurityDescriptor @ 0x180014840 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180014870 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1800148D0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180014930 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1800186F0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x18001ABE4 (RtlpAddKnownAce.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x18009EDF0 (ZwAccessCheck.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenThreadTokenEx @ 0x18009F3D0 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x18009F3F0 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x18009F630 (NtDuplicateToken.c)
 */

__int64 __fastcall RtlCheckTokenMembershipEx(void *a1, void *a2, int a3, _BYTE *a4)
{
  char v5; // si
  __int64 v8; // rdx
  int v9; // ebx
  HANDLE *Src; // [rsp+20h] [rbp-E0h]
  HANDLE v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  int v14; // [rsp+4Ch] [rbp-B4h] BYREF
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h]
  __int64 v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+78h] [rbp-88h]
  __int64 v21; // [rsp+80h] [rbp-80h]
  _DWORD *v22; // [rsp+88h] [rbp-78h]
  _BYTE v23[40]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v24[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v25; // [rsp+C0h] [rbp-40h]
  _BYTE v26[80]; // [rsp+D0h] [rbp-30h] BYREF
  int v27[60]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v28[56]; // [rsp+210h] [rbp+110h] BYREF

  v12 = 0LL;
  *a4 = 0;
  v5 = a3;
  if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( a1 )
    {
      v12 = a1;
    }
    else
    {
      Src = &v12;
      v9 = NtOpenThreadTokenEx(-2LL, 8LL, 0LL);
      if ( v9 == -1073741700 )
      {
        v9 = NtOpenProcessTokenEx(-1LL, 10LL, 0LL, &Handle);
        if ( v9 < 0 )
          goto LABEL_19;
        v18 = 0LL;
        v20 = 0;
        v19 = 0LL;
        v21 = 0LL;
        v22 = v24;
        LODWORD(Src) = 2;
        v17 = 48;
        v24[0] = 12;
        v24[1] = 2;
        v25 = 1;
        v9 = NtDuplicateToken(Handle, 12LL, &v17, 0LL, Src, &v12);
        NtClose(Handle);
      }
      if ( v9 < 0 )
      {
LABEL_19:
        if ( v12 )
          NtClose(v12);
        return (unsigned int)v9;
      }
    }
    RtlCreateSecurityDescriptor(v23, 1LL);
    RtlSetOwnerSecurityDescriptor(v23, a2, 0LL);
    RtlSetGroupSecurityDescriptor(v23, a2, 0LL);
    RtlCreateAcl(v27, 236LL, 2LL);
    RtlpAddKnownAce((int)v27, 2, 0, 1, a2, 0);
    if ( (v5 & 3) != 0 )
    {
      RtlInitializeSidEx((__int64)v26, (__int64)&RtlpAppPackageAuthority, 2LL, 2LL);
      RtlpAddKnownAce((int)v27, 2, 0, 1, v26, 0);
    }
    if ( (v5 & 2) != 0 )
    {
      RtlInitializeSidEx((__int64)v26, (__int64)&RtlpAppPackageAuthority, 2LL, 2LL);
      RtlpAddKnownAce((int)v27, 2, 0, 1, v26, 0);
    }
    LOBYTE(v8) = 1;
    RtlSetDaclSecurityDescriptor(v23, v8, v27, 0LL);
    v13 = 56;
    v9 = ZwAccessCheck(v23, v12, 1LL, &RtlpCheckTokenMembershipGenericMapping, v28, &v13, &v15, &v14);
    if ( v9 >= 0 )
    {
      v9 = 0;
      if ( v14 )
      {
        if ( v14 == -1073741790 )
          goto LABEL_11;
      }
      else if ( v15 == 1 )
      {
        *a4 = 1;
        goto LABEL_11;
      }
      v9 = v14;
    }
LABEL_11:
    if ( a1 )
      return (unsigned int)v9;
    goto LABEL_19;
  }
  return 3221225485LL;
}
