/*
 * XREFs of RtlCapabilityCheck @ 0x180011970
 * Callers:
 *     RtlCapabilityCheckForSingleSessionSku @ 0x180089240 (RtlCapabilityCheckForSingleSessionSku.c)
 * Callees:
 *     RtlIsMultiSessionSku @ 0x180009D80 (RtlIsMultiSessionSku.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18000B7E8 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlQueryPerformanceCounter @ 0x180010B40 (RtlQueryPerformanceCounter.c)
 *     RtlInitializeSid @ 0x180013050 (RtlInitializeSid.c)
 *     RtlCheckTokenMembershipEx @ 0x180014560 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180018740 (RtlCheckTokenCapability.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18002AEB0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlpLogCapabilityCheckLatency @ 0x18007C550 (RtlpLogCapabilityCheckLatency.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 */

__int64 __fastcall RtlCapabilityCheck(__int64 a1, __int64 a2, char *a3)
{
  char v4; // si
  char v5; // di
  char v6; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r8
  int v20; // eax
  int v21; // r8d
  int v22; // r9d
  int v24; // eax
  __int64 v25; // r8
  int v26; // eax
  char v27; // [rsp+30h] [rbp-D0h] BYREF
  char v28; // [rsp+31h] [rbp-CFh] BYREF
  char v29; // [rsp+32h] [rbp-CEh] BYREF
  char v30; // [rsp+33h] [rbp-CDh] BYREF
  char v31; // [rsp+34h] [rbp-CCh] BYREF
  char v32; // [rsp+35h] [rbp-CBh]
  int v33; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v34; // [rsp+3Ch] [rbp-C4h]
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  char v38[8]; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+88h] [rbp-78h]
  __int128 v44; // [rsp+90h] [rbp-70h]
  __int128 v45; // [rsp+A0h] [rbp-60h] BYREF
  char v46[8]; // [rsp+B0h] [rbp-50h] BYREF
  int v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+BCh] [rbp-44h]
  _BYTE v49[48]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v50[48]; // [rsp+F0h] [rbp-10h] BYREF

  v34 = 1280;
  Handle = 0LL;
  v32 = 0;
  v33 = 0;
  DestinationString = 0LL;
  v31 = 0;
  v4 = 0;
  v45 = 0LL;
  v27 = 0;
  v5 = 0;
  v28 = 0;
  v6 = 0;
  v29 = 0;
  v30 = 0;
  v37 = 0LL;
  v36 = 0LL;
  RtlQueryPerformanceCounter(&v37, a2);
  if ( !a2 || !a3 )
  {
    v11 = -1073741811;
    goto LABEL_21;
  }
  *a3 = 0;
  v11 = RtlDeriveCapabilitySidsFromName(a2, v49, v50);
  if ( v11 < 0 )
    goto LABEL_21;
  if ( RtlIsMultiSessionSku(v10, v9, v12, v13) )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities");
    v41 = 0LL;
    p_DestinationString = &DestinationString;
    v40 = 48;
    v43 = 64;
    v44 = 0LL;
    if ( (int)NtOpenKey(&Handle, 0x80000000LL, &v40) >= 0 && (int)NtQueryValueKey(Handle, a2, 2LL, &v45, 16, v38) >= 0 )
    {
      LOBYTE(v14) = 1;
      v32 = 1;
      RtlInitializeSid(v46, &v33, v14);
      v47 = 18;
      v24 = RtlCheckTokenMembershipEx(a1, v46, 0LL, &v28);
      v5 = v28;
      v11 = v24;
      if ( v24 < 0 )
        goto LABEL_21;
      if ( !v28 )
      {
        LOBYTE(v25) = 2;
        RtlInitializeSid(v46, &v33, v25);
        v47 = 32;
        v48 = 544;
        v26 = RtlCheckTokenMembershipEx(a1, v46, 0LL, &v27);
        v4 = v27;
        v11 = v26;
        if ( v26 < 0 )
          goto LABEL_21;
        if ( !v27 )
          goto LABEL_17;
      }
      goto LABEL_15;
    }
  }
  v11 = RtlCheckTokenMembershipEx(a1, v49, 2LL, &v30);
  if ( v11 < 0 )
    goto LABEL_21;
  if ( v30 )
    goto LABEL_15;
  LOBYTE(v15) = 1;
  RtlInitializeSid(v46, &v33, v15);
  v47 = 18;
  v16 = RtlCheckTokenMembershipEx(a1, v46, 0LL, &v28);
  v5 = v28;
  v11 = v16;
  if ( v16 < 0 )
    goto LABEL_21;
  if ( v28 )
    goto LABEL_15;
  LOBYTE(v17) = 2;
  RtlInitializeSid(v46, &v33, v17);
  v47 = 32;
  v48 = 544;
  v18 = RtlCheckTokenMembershipEx(a1, v46, 0LL, &v27);
  v4 = v27;
  v11 = v18;
  if ( v18 < 0 )
    goto LABEL_21;
  if ( v27 )
    goto LABEL_15;
  LOBYTE(v19) = 1;
  RtlInitializeSid(v46, &v33, v19);
  v47 = 4;
  v20 = RtlCheckTokenMembershipEx(a1, v46, 2LL, &v29);
  v6 = v29;
  v11 = v20;
  if ( v20 < 0 )
    goto LABEL_21;
  if ( v29 )
  {
LABEL_15:
    v11 = RtlCheckTokenCapability(a1, v50, &v31);
    if ( v11 < 0 )
      goto LABEL_21;
    *a3 = v31;
  }
LABEL_17:
  if ( *a3 && !v4 && !v5 )
    v11 = RtlpCapabilityCheckSystemCapability(a1, a2, a3);
LABEL_21:
  if ( Handle )
    NtClose(Handle);
  RtlQueryPerformanceCounter(&v36, v9);
  if ( !v5 )
  {
    LOBYTE(v22) = v6;
    LOBYTE(v21) = v4;
    RtlpLogCapabilityCheckLatency((unsigned int)&v37, (unsigned int)&v36, v21, v22, v32, *a3);
  }
  return (unsigned int)v11;
}
