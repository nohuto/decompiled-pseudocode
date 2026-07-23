/*
 * XREFs of sub_1406EE2AC @ 0x1406EE2AC
 * Callers:
 *     sub_1406EDF6C @ 0x1406EDF6C (sub_1406EDF6C.c)
 *     sub_140817CD8 @ 0x140817CD8 (sub_140817CD8.c)
 *     sub_1409EC6F0 @ 0x1409EC6F0 (sub_1409EC6F0.c)
 * Callees:
 *     sub_140261C40 @ 0x140261C40 (sub_140261C40.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     sub_140300B40 @ 0x140300B40 (sub_140300B40.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14062CE58 @ 0x14062CE58 (sub_14062CE58.c)
 *     sub_14063383C @ 0x14063383C (sub_14063383C.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 *     sub_1406D1830 @ 0x1406D1830 (sub_1406D1830.c)
 *     sub_1406D1CF4 @ 0x1406D1CF4 (sub_1406D1CF4.c)
 *     sub_1406EDB48 @ 0x1406EDB48 (sub_1406EDB48.c)
 *     sub_1406EF170 @ 0x1406EF170 (sub_1406EF170.c)
 *     sub_1406EF280 @ 0x1406EF280 (sub_1406EF280.c)
 *     sub_1406EF58C @ 0x1406EF58C (sub_1406EF58C.c)
 *     sub_1406EF8B8 @ 0x1406EF8B8 (sub_1406EF8B8.c)
 *     sub_1406EF910 @ 0x1406EF910 (sub_1406EF910.c)
 *     sub_1406EFB1C @ 0x1406EFB1C (sub_1406EFB1C.c)
 *     sub_1406EFB84 @ 0x1406EFB84 (sub_1406EFB84.c)
 *     sub_1406EFBC8 @ 0x1406EFBC8 (sub_1406EFBC8.c)
 *     sub_1406EFD44 @ 0x1406EFD44 (sub_1406EFD44.c)
 *     sub_1406F01A4 @ 0x1406F01A4 (sub_1406F01A4.c)
 *     sub_1406F0238 @ 0x1406F0238 (sub_1406F0238.c)
 *     sub_1406F0614 @ 0x1406F0614 (sub_1406F0614.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     SeCreateClientSecurity @ 0x1407271D0 (SeCreateClientSecurity.c)
 *     sub_140794404 @ 0x140794404 (sub_140794404.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_140797BD4 @ 0x140797BD4 (sub_140797BD4.c)
 *     sub_14079805C @ 0x14079805C (sub_14079805C.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     sub_1407FC710 @ 0x1407FC710 (sub_1407FC710.c)
 *     sub_1408141A0 @ 0x1408141A0 (sub_1408141A0.c)
 *     sub_14081C500 @ 0x14081C500 (sub_14081C500.c)
 *     sub_1409E08A8 @ 0x1409E08A8 (sub_1409E08A8.c)
 *     sub_1409E0AEC @ 0x1409E0AEC (sub_1409E0AEC.c)
 *     sub_1409E491C @ 0x1409E491C (sub_1409E491C.c)
 *     sub_1409EB7FC @ 0x1409EB7FC (sub_1409EB7FC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406EE2AC(ULONGLONG a1, __int64 a2)
{
  int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // r15d
  int v7; // eax
  int v8; // edi
  ACCESS_MASK v9; // esi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  ULONGLONG v18; // rcx
  unsigned int v19; // esi
  unsigned int *v20; // r13
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  signed __int64 v25; // rdx
  ULONGLONG Ptr; // r13
  __int64 v27; // rax
  unsigned int *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r8
  unsigned int v31; // eax
  int v32; // eax
  int v33; // ecx
  unsigned int v34; // eax
  UNICODE_STRING *v35; // rbx
  int v36; // eax
  __int64 v37; // rdx
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // ecx
  int v42; // edx
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rbx
  __int64 CurrentServerSilo; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  char v52; // al
  __int64 v53; // rcx
  unsigned int v54; // ebx
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned int v57; // ecx
  __int64 v58; // rbx
  unsigned int v59; // ebx
  const WCHAR *v60; // rdx
  bool v61; // zf
  __int64 Pool2; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // ecx
  int v66; // edx
  __int64 v67; // rdx
  unsigned int v68; // eax
  void *v69; // rcx
  __int64 v70; // rbx
  int v71; // ecx
  int v72; // r8d
  unsigned int v73; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int8 v74; // [rsp+44h] [rbp-55h]
  unsigned int v75; // [rsp+48h] [rbp-51h]
  int v76; // [rsp+4Ch] [rbp-4Dh]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-49h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-31h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+78h] [rbp-21h]
  __int64 v81; // [rsp+80h] [rbp-19h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+88h] [rbp-11h] BYREF
  UUID Buf2; // [rsp+98h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp+Fh] BYREF

  UserData.Ptr = a1;
  v73 = 0;
  *(_WORD *)(&ClientSecurityQos.EffectiveOnly + 1) = 0;
  SecurityDescriptor = 0LL;
  v76 = 0;
  v75 = 8;
  Buf2 = 0LL;
  UnicodeString = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v4 = *(_DWORD *)(a2 + 64);
  v5 = v4 & 0x9DECE5FF;
  if ( (*(_BYTE *)(a2 + 64) & 3) == 0 && ((v4 & 8) != 0 || (v4 & 4) != 0) )
    v5 = *(_DWORD *)(a2 + 64) & 0x9DECE5FE | 1;
  v6 = v5 | 0x80;
  if ( (v5 & 0x40000) == 0 )
    v6 = v5;
  if ( (v6 & 0x80000) != 0 && (v6 & 0x1000000) != 0 )
    v6 &= ~0x1000000u;
  if ( (v6 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a2 + 136) || (v6 & 0xF) != 0 )
      goto LABEL_144;
    v57 = v6 & 0xFFFFFEFF;
    if ( (v6 & 0x100) == 0 )
      v57 = v6;
    v6 = v57;
    if ( *(_DWORD *)(a2 + 68) )
      *(_DWORD *)(a2 + 68) = 0;
    if ( *(_DWORD *)(a2 + 76) )
      *(_DWORD *)(a2 + 76) = 0;
  }
  if ( (v6 & 3) == 3
    || (v6 & 0xC000) == 0xC000
    || (v6 & 0x700) == 0 && !*(_QWORD *)(a2 + 136)
    || (v6 & 6) == 6
    || (v6 & 2) != 0 && !*(_DWORD *)(a2 + 60)
    || (v6 & 0x20) != 0 && (!*(_DWORD *)(a2 + 60) || (v4 & 0xC) != 0)
    || (v6 & 0x40) != 0
    && ((*(_DWORD *)(a2 + 112) & 2) == 0 || (v6 & 0x402) == 0 && ((v6 & 0x100) == 0 || *(_QWORD *)(a2 + 136)))
    || (v6 & 0xC00000) == 0xC00000 )
  {
    goto LABEL_144;
  }
  if ( (v6 & 8) != 0 )
  {
    if ( !*(_QWORD *)(a2 + 136)
      || (v6 & 2) != 0
      || !*(_DWORD *)(a2 + 60)
      || (*(_DWORD *)(a2 + 112) & 2) != 0
      || (v4 & 0x2000000) != 0 )
    {
      goto LABEL_144;
    }
    v55 = *(_QWORD *)(a2 + 24) - 0x11D232049E814AADLL;
    if ( *(_QWORD *)(a2 + 24) == 0x11D232049E814AADLL )
      v55 = *(_QWORD *)(a2 + 32) - 0x3969A8086000829ALL;
    if ( !v55 )
      goto LABEL_144;
    v56 = *(_QWORD *)(a2 + 24) - 0x42A4ED1F54DEA73ALL;
    if ( *(_QWORD *)(a2 + 24) == 0x42A4ED1F54DEA73ALL )
      v56 = *(_QWORD *)(a2 + 32) - 0x74F156D0633E71AFLL;
    if ( !v56 || (v6 & 4) != 0 )
      goto LABEL_144;
  }
  if ( (v4 & 0x3000000) == 0x3000000 || (v4 & 0x4000000) != 0 && (v4 & 0x106) != 0 || (v4 & 0x10000) != 0 )
    goto LABEL_144;
  if ( (*(_BYTE *)(a2 + 80) & 4) != 0 )
  {
    if ( !qword_140D3CE38 )
    {
      v8 = -1073741637;
      goto LABEL_284;
    }
    if ( (v4 & 0x400) == 0 || (v4 & 0x1000000) != 0 )
      goto LABEL_144;
  }
  v7 = *(_DWORD *)(a2 + 112);
  if ( v7 < 0 )
  {
    if ( byte_140C15F70 || (v7 & 2) == 0 || (v4 & 0x2000000) == 0 || ((*(_DWORD *)(a2 + 40) - 2) & 0xFFFFFFFD) == 0 )
      goto LABEL_144;
    v63 = *(_QWORD *)(a2 + 24);
    if ( !v63 )
      v63 = *(_QWORD *)(a2 + 32);
    if ( !v63 )
      goto LABEL_144;
  }
  v8 = sub_1406F0238(a2);
  if ( v8 < 0 )
    goto LABEL_284;
  v9 = ((v6 & 0x100 | 0x400) >> 3) | 0x40;
  if ( !*(_WORD *)(a2 + 128) )
    v9 = (v6 & 0x100 | 0x400) >> 3;
  DesiredAccess = v9;
  if ( !*(_WORD *)(a2 + 144) || !*(_QWORD *)(a2 + 152) )
  {
LABEL_144:
    v8 = -1073741811;
    goto LABEL_284;
  }
  v8 = sub_1406EF170(a2 + 144, &DestinationString);
  if ( v8 )
    goto LABEL_284;
  if ( !(unsigned int)sub_1406F01A4(a1, &DestinationString, &v73) )
    goto LABEL_236;
  v10 = *(_QWORD *)(a2 + 24);
  if ( !v10 )
    v10 = *(_QWORD *)(a2 + 32);
  if ( v10 )
  {
    Buf2 = *(UUID *)(a2 + 24);
  }
  else
  {
    v8 = ExUuidCreate(&Buf2);
    if ( v8 < 0 )
      goto LABEL_284;
  }
  if ( (v6 & 0xC00000) == 0 )
  {
    if ( *((_BYTE *)KeGetCurrentThread() + 562) && (unsigned int)sub_140300B40(*((_QWORD *)KeGetCurrentThread() + 23)) )
      v6 |= 0x400000u;
    else
      v6 |= 0x800000u;
  }
  v11 = *(_QWORD *)&Buf2.Data1;
  v12 = *(_QWORD *)(a1 + 456);
  v13 = *(_QWORD *)&Buf2.Data1 - 0x11D232049E814AADLL;
  v14 = *(_QWORD *)Buf2.Data4;
  v81 = v12;
  if ( *(_QWORD *)&Buf2.Data1 == 0x11D232049E814AADLL )
    v13 = *(_QWORD *)Buf2.Data4 - 0x3969A8086000829ALL;
  if ( !v13 )
    goto LABEL_204;
  v15 = *(_QWORD *)&Buf2.Data1 - 0x42A4ED1F54DEA73ALL;
  if ( *(_QWORD *)&Buf2.Data1 == 0x42A4ED1F54DEA73ALL )
    v15 = *(_QWORD *)Buf2.Data4 - 0x74F156D0633E71AFLL;
  if ( !v15 )
  {
LABEL_204:
    RtlFreeUnicodeString(&DestinationString);
    v58 = v11 - 0x11D232049E814AADLL;
    if ( !v58 )
      v58 = v14 - 0x3969A8086000829ALL;
    if ( v58 )
    {
      v59 = 2;
      v75 = 1;
      v60 = L"Circular Kernel Context Logger";
    }
    else
    {
      v59 = 0;
      v75 = 0;
      v60 = L"NT Kernel Logger";
    }
    v73 = v59;
    if ( !RtlCreateUnicodeString(&DestinationString, v60) )
      goto LABEL_252;
    v6 |= 0x80u;
    if ( (v6 & 0x1000000) == 0 )
    {
      v61 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8LL * v59), v12 | 1, 1LL) == 1;
      goto LABEL_214;
    }
    goto LABEL_144;
  }
  v16 = *(_QWORD *)&Buf2.Data1 - 0x11D2AA84E8908ABCLL;
  if ( *(_QWORD *)&Buf2.Data1 == 0x11D2AA84E8908ABCLL )
    v16 = *(_QWORD *)Buf2.Data4 + 0x39287AA07FFF6C66LL;
  if ( !v16 )
  {
    v73 = 1;
    if ( sub_1406EFB84(a2, 1LL) )
    {
      if ( (v6 & 0x1000000) != 0 )
        goto LABEL_144;
      RtlFreeUnicodeString(&DestinationString);
      if ( !RtlCreateUnicodeString(&DestinationString, L"NT Kernel Logger") )
        goto LABEL_252;
      v75 = 0;
    }
    v61 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8), v12 | 1, 1LL) == 1;
LABEL_214:
    if ( !v61 )
      goto LABEL_236;
    v14 = *(_QWORD *)Buf2.Data4;
    v11 = *(_QWORD *)&Buf2.Data1;
LABEL_65:
    Ptr = UserData.Ptr;
    ExAcquireRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(UserData.Ptr + 448) + 8LL * v73),
      1u);
    if ( *(int *)(a2 + 112) >= 0 )
    {
      sub_140797BD4(&Buf2, &SecurityDescriptor);
      v8 = sub_140794404(SecurityDescriptor, v9);
      if ( v8 < 0 )
        goto LABEL_283;
      v14 = *(_QWORD *)Buf2.Data4;
      v11 = *(_QWORD *)&Buf2.Data1;
    }
    v27 = 0x4B886180222962ABLL - v11;
    if ( v11 == 0x4B886180222962ABLL )
      v27 = 0x4AA2F2756B3425A8LL - v14;
    if ( v27 )
      v74 = memcmp(&qword_14000EF30, &Buf2, 0x10uLL) != 0 ? 9 : 1;
    else
      v74 = 0;
    if ( (*(_DWORD *)(a2 + 64) & 0x2000000) != 0 && v75 == 8 )
    {
      if ( *(int *)(a2 + 112) >= 0 )
      {
        v8 = sub_1409EB7FC(&qword_14000EEE0, 128LL);
        if ( v8 < 0 )
          goto LABEL_283;
      }
      v54 = 2;
      v75 = 2;
      while ( _bittest((const signed __int32 *)(Ptr + 4248), v54) )
      {
        v75 = ++v54;
        if ( v54 >= 8 )
        {
          v75 = v54;
          if ( v54 != 8 )
            break;
          v8 = -1073741670;
          goto LABEL_283;
        }
      }
    }
    v28 = (unsigned int *)sub_1406EFD44(&DestinationString, v6);
    v29 = sub_1406EFB84(a2, 6LL);
    if ( v29 )
    {
      if ( 4 * *(_WORD *)v29 == 12 )
      {
        v8 = sub_14063383C((__int64 *)v28 + 165, *(_QWORD *)(v29 + 4), v30);
        if ( v8 < 0 )
          goto LABEL_274;
      }
    }
    RtlFreeUnicodeString(&DestinationString);
    if ( v28 )
    {
      *(UUID *)(v28 + 69) = Buf2;
      v28[73] = *(_DWORD *)(a2 + 60);
      if ( (*(_BYTE *)(a2 + 80) & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)v28 + 204, 0x10u);
      v28[50] = *(_DWORD *)(a2 + 40);
      if ( (*(_BYTE *)(a2 + 80) & 2) != 0 )
      {
        v8 = sub_14062CE58((__int64)v28);
        if ( v8 < 0 )
          goto LABEL_274;
      }
      if ( (*(_BYTE *)(a2 + 80) & 8) != 0 )
        v28[204] |= 0x40000000u;
      v31 = *(_DWORD *)(a2 + 68);
      if ( v31 )
      {
        v28[52] = v31;
      }
      else if ( (v6 & 0x100) != 0 )
      {
        v28[52] = (v6 & 0x10) != 0 ? 1000 : 1;
      }
      v32 = *(_DWORD *)(a2 + 76);
      v33 = v32;
      if ( v32 && (v28[52] || v32 < 0) )
      {
        *(_DWORD *)(a2 + 76) = 0;
        v33 = 0;
      }
      v34 = v73;
      v8 = 0;
      v28[53] = v33;
      *v28 = v34;
      *((_QWORD *)v28 + 137) = Ptr;
      if ( *(_WORD *)(a2 + 128) )
      {
        if ( *(_QWORD *)(a2 + 136) )
        {
          v8 = sub_1406EF170(a2 + 128, &UnicodeString);
          if ( v8 < 0 )
            goto LABEL_274;
        }
      }
      if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
      {
        v28[74] = *(_DWORD *)(a2 + 96);
        *(_DWORD *)(a2 + 96) = 0;
      }
      v35 = (UNICODE_STRING *)(v28 + 38);
      if ( (v28[3] & 8) != 0 )
      {
        *(UNICODE_STRING *)(v28 + 42) = UnicodeString;
        RtlInitUnicodeString(&UnicodeString, 0LL);
        v8 = sub_1407FC710(v28 + 42, v28 + 74, v28 + 38);
        if ( v8 < 0 )
          goto LABEL_273;
        v35 = (UNICODE_STRING *)(v28 + 38);
      }
      else
      {
        *v35 = UnicodeString;
        RtlInitUnicodeString(&UnicodeString, 0LL);
      }
      if ( *(int *)(a2 + 112) >= 0 )
      {
        ClientSecurityQos.Length = 12;
        ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
        *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
        v8 = SeCreateClientSecurity(KeGetCurrentThread(), &ClientSecurityQos, 0, (PSECURITY_CLIENT_CONTEXT)(v28 + 176));
      }
      if ( v8 >= 0 )
      {
        if ( (v28[3] & 0x100) != 0 )
          _InterlockedOr((volatile signed __int32 *)v28 + 204, 8u);
        else
          _InterlockedAnd((volatile signed __int32 *)v28 + 204, 0xFFFFFFF7);
        v36 = *(_DWORD *)(a2 + 112);
        if ( (v36 & 2) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v28 + 204, 2u);
          v36 = *(_DWORD *)(a2 + 112);
        }
        if ( v36 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v28 + 204, 0x80000000);
          v36 = *(_DWORD *)(a2 + 112);
        }
        if ( (v36 & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v28 + 204, 1u);
          v36 = *(_DWORD *)(a2 + 112);
        }
        if ( (v36 & 0x4000) != 0 )
          _InterlockedOr((volatile signed __int32 *)v28 + 204, 0x4000u);
        sub_1406EFBC8(v28);
        v37 = v75;
        if ( v75 < 8 )
        {
          v28[3] |= 0x2000000u;
          *((_BYTE *)v28 + 818) = v37;
          if ( (unsigned int)v37 <= 1 )
            _InterlockedOr((volatile signed __int32 *)v28 + 204, 0x20u);
          Ptr = UserData.Ptr;
          *(_BYTE *)(UserData.Ptr + 2 * v37 + 4232) = v73;
          if ( v28[50] - 1 >= 4 )
            v52 = 1;
          else
            v52 = *((_BYTE *)v28 + 200);
          *(_BYTE *)(Ptr + 2 * v37 + 4233) = v52;
          _interlockedbittestandset((volatile signed __int32 *)(Ptr + 4248), v37);
        }
        else
        {
          Ptr = UserData.Ptr;
        }
        v8 = sub_1406EFB1C(a2, v28);
        if ( v8 < 0 )
          goto LABEL_274;
        v38 = *(_DWORD *)(a2 + 52);
        if ( v38 )
          v28[56] = v38;
        v39 = *(_DWORD *)(a2 + 56);
        if ( v39 )
          v28[59] = v39;
        v40 = *(_DWORD *)(a2 + 48);
        if ( v40 )
        {
          if ( v40 > 0x4000 )
          {
            *(_DWORD *)(a2 + 48) = 0x4000;
            v40 = 0x4000;
          }
          v28[1] = v40 << 10;
        }
        if ( (*(_BYTE *)(a2 + 80) & 4) != 0 )
        {
          v28[1] = (v28[1] + 0x1FFFFF) & 0xFFE00000;
          _InterlockedOr((volatile signed __int32 *)v28 + 204, 0x20000000u);
        }
        if ( v35->Length )
        {
          *((_QWORD *)v28 + 4) = KeGetCurrentThread();
          while ( 1 )
          {
            _InterlockedOr((volatile signed __int32 *)v28 + 206, 1u);
            v8 = sub_1406F0614((CEnumMediaTypes *)v28);
            if ( v8 >= 0 )
              break;
            if ( v8 != -1073741306 )
              goto LABEL_274;
            v65 = v28[1];
            v66 = ~(v76 - 1) & (v65 + v76 - 1);
            if ( v65 == v66 )
              goto LABEL_274;
            v28[1] = v66;
          }
        }
        v41 = v28[1];
        if ( v41 < 0x1000 && (v35->Length || (v28[3] & 0x400) != 0) )
        {
          _InterlockedOr((volatile signed __int32 *)v28 + 204, 0x1000u);
          v41 = v28[1];
        }
        v42 = 0xFFFF;
        if ( (unsigned __int64)v41 - 72 < 0xFFFF )
          v42 = v41 - 72;
        v28[2] = v42 & 0xFFFFFFF8;
        v8 = sub_1406EF910(v28);
        if ( v8 < 0 )
          goto LABEL_268;
        if ( (v6 & 0x4000000) != 0 && (v6 & 0x400) == 0 )
        {
          Pool2 = ExAllocatePool2(64LL, v28[1], 1517777989LL);
          *((_QWORD *)v28 + 144) = Pool2;
          if ( !Pool2 )
          {
            v8 = -1073741801;
LABEL_274:
            if ( (v28[3] & 0x2000000) != 0 )
              _interlockedbittestandreset((volatile signed __int32 *)(Ptr + 4248), v75);
            v68 = v28[204];
            if ( (v68 & 0x80u) != 0 )
            {
              ExFreePoolWithTag(*((PVOID *)v28 + 125), 0);
              v68 = v28[204];
            }
            if ( (v68 & 0x2000) != 0 )
              _InterlockedDecrement(&dword_140C5A6C0);
            RtlFreeUnicodeString((PUNICODE_STRING)(v28 + 38));
            RtlFreeUnicodeString((PUNICODE_STRING)(v28 + 42));
            v69 = (void *)*((_QWORD *)v28 + 100);
            if ( v69 )
              ZwClose(v69);
            ExFreePoolWithTag(v28, 0);
            goto LABEL_283;
          }
        }
        v43 = v28[73];
        if ( (_DWORD)v43 && (v28[3] & 0x2000) == 0 )
          v44 = v43 << 20;
        else
          v44 = 10485760LL;
        v45 = v28[1] * v28[59];
        if ( v44 <= (unsigned int)(2 * v45) )
          v44 = (unsigned int)(2 * v45);
        *((_QWORD *)v28 + 52) = v44;
        if ( *(int *)(a2 + 112) >= 0 )
        {
          v8 = sub_1406EF8B8(v28, SecurityDescriptor);
          sub_14079805C(&SecurityDescriptor);
          if ( v8 < 0 )
          {
LABEL_268:
            sub_1406D1CF4(v28);
            goto LABEL_274;
          }
        }
        _InterlockedAdd((volatile signed __int32 *)(Ptr + 4132), 1u);
        v46 = v73;
        ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(Ptr + 448) + 8LL * v73), 1u);
        if ( (v28[3] & 0x400) == 0 && *(int *)(a2 + 112) >= 0 )
        {
          CurrentServerSilo = PsGetCurrentServerSilo();
          v8 = sub_140261C40(CurrentServerSilo, (__int64)v28);
          if ( v8 < 0 )
          {
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(Ptr + 448) + 8 * v46),
              1u);
LABEL_270:
            sub_1406D1830((char *)v28);
            return (unsigned int)v8;
          }
        }
        if ( EtwEventEnabled(qword_140C15FA8, &stru_14000EF20) )
          sub_1409E0AEC(v48, &stru_14000EF20, v28);
        KeWaitForSingleObject(v28 + 158, Executive, 0, 0, 0LL);
        _InterlockedExchange64((volatile __int64 *)(v81 + 8 * v46), (__int64)v28);
        sub_1406EF58C(v28, 5LL);
        if ( (v28[3] & 0x2000000) == 0 )
          goto LABEL_138;
        if ( Ptr == qword_140D05008 )
        {
          LOBYTE(v49) = 1;
          v8 = sub_14081C500(v28, a2, v49);
          if ( v8 < 0 )
          {
LABEL_271:
            v28[10] = v8;
            sub_1406EDB48((unsigned __int64)v28);
            if ( (v28[3] & 0x400) != 0 )
            {
              sub_1406EF280(a2, v28);
              LOBYTE(v67) = 1;
              sub_1407981E8(v28, v67);
              goto LABEL_270;
            }
LABEL_138:
            if ( v74 != 9 )
              sub_1409E491C(a2, Ptr, *v28, v74);
            sub_1406EF280(a2, v28);
            LOBYTE(v50) = 1;
            sub_1407981E8(v28, v50);
            return (unsigned int)v8;
          }
          v53 = 5LL * v75;
          *((_WORD *)&unk_140C15EC0 + 2 * v53) = 1;
          *((_DWORD *)&unk_140C15EC0 + v53 + 1) = 42;
        }
        v8 = sub_1408141A0(v28, a2);
        if ( v8 >= 0 )
          goto LABEL_138;
        goto LABEL_271;
      }
LABEL_273:
      Ptr = UserData.Ptr;
      goto LABEL_274;
    }
    v8 = -1073741801;
LABEL_283:
    v70 = v73;
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(Ptr + 448) + 8LL * v73), 1u);
    _InterlockedExchange64((volatile __int64 *)(v81 + 8 * v70), 1LL);
    goto LABEL_284;
  }
  v17 = *(_QWORD *)&Buf2.Data1 + 0x459547FDF1991DF5LL;
  if ( *(_QWORD *)&Buf2.Data1 == 0xBA6AB8020E66E20BuLL )
    v17 = *(_QWORD *)Buf2.Data4 + 0x6A2DF162E6CE8D6ELL;
  if ( !v17 )
  {
    v73 = 3;
    if ( (v6 & 0x1000000) == 0 )
    {
      RtlFreeUnicodeString(&DestinationString);
      if ( RtlCreateUnicodeString(&DestinationString, L"Eventlog-Security") )
      {
        v6 |= 0x80u;
        v61 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 24), v12 | 1, 1LL) == 1;
        goto LABEL_214;
      }
LABEL_252:
      v8 = -1073741801;
      goto LABEL_284;
    }
    goto LABEL_144;
  }
  if ( !wcsicmp(DestinationString.Buffer, L"Eventlog-Security") )
  {
    v64 = v11 + 0x459547FDF1991DF5LL;
    if ( v11 == 0xBA6AB8020E66E20BuLL )
      v64 = v14 + 0x6A2DF162E6CE8D6ELL;
    if ( v64 )
      goto LABEL_236;
  }
  v18 = UserData.Ptr;
  v19 = 4;
  v20 = (unsigned int *)(UserData.Ptr + 16);
  v21 = *(_DWORD *)(UserData.Ptr + 16);
  if ( v21 <= 4 )
    goto LABEL_58;
  while ( 1 )
  {
    v22 = sub_140797594(v18, v19, 0LL);
    if ( !v22 )
      goto LABEL_52;
    v23 = *(_QWORD *)(v22 + 276) - v11;
    if ( !v23 )
      v23 = *(_QWORD *)(v22 + 284) - v14;
    if ( !v23 )
      break;
    sub_1407981E8(v22, 0LL);
LABEL_52:
    v21 = *v20;
    if ( ++v19 >= *v20 )
      goto LABEL_58;
    v18 = UserData.Ptr;
  }
  sub_1407981E8(v22, 0LL);
  v21 = *(_DWORD *)(UserData.Ptr + 16);
  if ( v19 < v21 )
  {
LABEL_236:
    v8 = -1073741771;
    goto LABEL_284;
  }
LABEL_58:
  v73 = 4;
  if ( v21 > 4 )
  {
    v24 = v81;
    v25 = v81 | 1;
    do
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 8LL * v73), v25, 1LL) == 1 )
        break;
      ++v73;
    }
    while ( v73 < *v20 );
    v14 = *(_QWORD *)Buf2.Data4;
    v11 = *(_QWORD *)&Buf2.Data1;
  }
  if ( v73 < *v20 )
  {
    v9 = DesiredAccess;
    goto LABEL_65;
  }
  if ( !byte_140D01B80 )
  {
    byte_140D01B80 = 1;
    UserData.Ptr = (ULONGLONG)v20;
    *(_QWORD *)&UserData.Size = 4LL;
    EtwWrite(qword_140C15FA8, &stru_1400398C0, 0LL, 1u, &UserData);
  }
  v8 = -1073741670;
LABEL_284:
  if ( EtwEventEnabled(qword_140C15FA8, &stru_140038D20) )
    sub_1409E08A8(
      v71,
      (unsigned int)&stru_140038D20,
      v72,
      (unsigned int)&DestinationString,
      (__int64)&UnicodeString,
      v8,
      v6);
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  sub_14079805C(&SecurityDescriptor);
  return (unsigned int)v8;
}
