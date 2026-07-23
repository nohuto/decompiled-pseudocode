/*
 * XREFs of SeMakeSystemToken @ 0x140B53B60
 * Callers:
 *     SepInitializationPhase0 @ 0x140B53588 (SepInitializationPhase0.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x14033B670 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD530 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140736770 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1407367A0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736810 (RtlCreateAcl.c)
 *     RtlAddProcessTrustLabelAce @ 0x140736BC0 (RtlAddProcessTrustLabelAce.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1407821E0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1407EF390 (RtlSetGroupSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1407EF700 (RtlAddAccessAllowedAce.c)
 *     SeSetMandatoryPolicyToken @ 0x1407F0AD8 (SeSetMandatoryPolicyToken.c)
 *     SepCreateToken @ 0x1408230F4 (SepCreateToken.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 SeMakeSystemToken()
{
  char *v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rax
  unsigned int v3; // r8d
  PSID v4; // r12
  PSID v5; // rbx
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v8; // r13d
  ULONG v9; // edi
  ACL *Pool2; // rax
  ACL *v11; // r14
  ULONG v12; // edi
  ACL *v13; // rax
  ACL *v14; // rsi
  void *v15; // rax
  void *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  ACL *v23; // rcx
  signed __int32 v24[8]; // [rsp+8h] [rbp-120h] BYREF
  UCHAR AceType[4]; // [rsp+28h] [rbp-100h]
  ACCESS_MASK AccessMask[2]; // [rsp+30h] [rbp-F8h]
  int v27; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-70h] BYREF
  int v30[2]; // [rsp+C0h] [rbp-68h] BYREF
  _SID_AND_ATTRIBUTES v31; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-50h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-48h]
  __int64 v34; // [rsp+E8h] [rbp-40h]
  int v35; // [rsp+F0h] [rbp-38h]
  int v36; // [rsp+F4h] [rbp-34h]
  void *v37; // [rsp+F8h] [rbp-30h]
  __int64 v38; // [rsp+100h] [rbp-28h]
  __m128i si128; // [rsp+108h] [rbp-20h] BYREF
  struct _ERESOURCE v40; // [rsp+118h] [rbp-10h] BYREF
  int v41; // [rsp+180h] [rbp+58h]
  LUID v42; // [rsp+184h] [rbp+5Ch]
  int v43; // [rsp+18Ch] [rbp+64h]
  __int64 v44; // [rsp+190h] [rbp+68h]
  int v45; // [rsp+198h] [rbp+70h]
  LUID v46; // [rsp+19Ch] [rbp+74h]
  int v47; // [rsp+1A4h] [rbp+7Ch]
  LUID v48; // [rsp+1A8h] [rbp+80h]
  int v49; // [rsp+1B0h] [rbp+88h]
  __int64 v50; // [rsp+1B4h] [rbp+8Ch]
  int v51; // [rsp+1BCh] [rbp+94h]
  LUID v52; // [rsp+1C0h] [rbp+98h]
  int v53; // [rsp+1C8h] [rbp+A0h]
  LUID v54; // [rsp+1CCh] [rbp+A4h]
  int v55; // [rsp+1D4h] [rbp+ACh]
  LUID v56; // [rsp+1D8h] [rbp+B0h]
  int v57; // [rsp+1E0h] [rbp+B8h]
  LUID v58; // [rsp+1E4h] [rbp+BCh]
  int v59; // [rsp+1ECh] [rbp+C4h]
  LUID v60; // [rsp+1F0h] [rbp+C8h]
  int v61; // [rsp+1F8h] [rbp+D0h]
  LUID v62; // [rsp+1FCh] [rbp+D4h]
  int v63; // [rsp+204h] [rbp+DCh]
  __int64 v64; // [rsp+208h] [rbp+E0h]
  int v65; // [rsp+210h] [rbp+E8h]
  __int64 v66; // [rsp+214h] [rbp+ECh]
  int v67; // [rsp+21Ch] [rbp+F4h]
  __int64 v68; // [rsp+220h] [rbp+F8h]
  int v69; // [rsp+228h] [rbp+100h]
  LUID v70; // [rsp+22Ch] [rbp+104h]
  int v71; // [rsp+234h] [rbp+10Ch]
  __int64 v72; // [rsp+238h] [rbp+110h]
  int v73; // [rsp+240h] [rbp+118h]
  __int64 v74; // [rsp+244h] [rbp+11Ch]
  int v75; // [rsp+24Ch] [rbp+124h]
  __int64 v76; // [rsp+250h] [rbp+128h]
  int v77; // [rsp+258h] [rbp+130h]
  LUID v78; // [rsp+25Ch] [rbp+134h]
  int v79; // [rsp+264h] [rbp+13Ch]
  __int64 v80; // [rsp+268h] [rbp+140h]
  int v81; // [rsp+270h] [rbp+148h]
  LUID v82; // [rsp+274h] [rbp+14Ch]
  int v83; // [rsp+27Ch] [rbp+154h]
  __int64 v84; // [rsp+280h] [rbp+158h]
  int v85; // [rsp+288h] [rbp+160h]
  _SID_AND_ATTRIBUTES v86; // [rsp+298h] [rbp+170h] BYREF
  PSID v87; // [rsp+2A8h] [rbp+180h]
  int v88; // [rsp+2B0h] [rbp+188h]
  __int64 v89; // [rsp+2B8h] [rbp+190h]
  int v90; // [rsp+2C0h] [rbp+198h]
  __int64 v91; // [rsp+2C8h] [rbp+1A0h]
  int v92; // [rsp+2D0h] [rbp+1A8h]

  v0 = (char *)ExLeapSecondData;
  *(_QWORD *)v30 = 0LL;
  *(&v31.Attributes + 1) = 0;
  HIDWORD(v32) = 0;
  v36 = 0;
  v29 = 0LL;
  v27 = 1;
  v28 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
  {
    RtlpTimeFieldsToTimeNoLeapSeconds(si128.m128i_i16, &v29);
    goto LABEL_6;
  }
  v1 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v24, 0);
  if ( !RtlpTimeFieldsToTimeNoLeapSeconds(si128.m128i_i16, &v28) )
    goto LABEL_6;
  v2 = v28;
  v3 = 0;
  if ( !v1 )
    goto LABEL_5;
  v20 = (__int64 *)(v0 + 8);
  while ( 1 )
  {
    v21 = *v20;
    if ( *v20 >= 0 )
    {
      if ( v2 < v21 + 10000000 )
      {
        if ( v2 < v21 )
          goto LABEL_5;
        v2 = 2 * v2 - v21;
      }
      else
      {
        v2 += 10000000LL;
      }
      goto LABEL_18;
    }
    v22 = v21 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v2 < v22 + 10000000 )
      break;
    v2 -= 10000000LL;
LABEL_18:
    ++v3;
    ++v20;
    if ( v3 >= v1 )
      goto LABEL_5;
  }
  if ( v2 < v22 )
LABEL_5:
    v29 = v2;
LABEL_6:
  v4 = SeAliasAdminsSid;
  v5 = SeLocalSystemSid;
  v88 = 7;
  v90 = 7;
  v87 = SeWorldSid;
  v31.Sid = SeLocalSystemSid;
  v31.Attributes = 0;
  v86.Sid = SeAliasAdminsSid;
  v89 = SeAuthenticatedUsersSid;
  v91 = SeSystemMandatorySid;
  v86.Attributes = 14;
  v92 = 96;
  v6 = ((4 * *(unsigned __int8 *)(SeAuthenticatedUsersSid + 1) + 11) & 0xFFFFFFFC)
     + ((4 * *((unsigned __int8 *)SeWorldSid + 1) + 11) & 0xFFFFFFFC)
     + ((4 * *((unsigned __int8 *)SeAliasAdminsSid + 1) + 11) & 0xFFFFFFFC);
  v7 = *(unsigned __int8 *)(SeSystemMandatorySid + 1);
  LODWORD(v40.SystemResourcesList.Blink) = 3;
  HIDWORD(v40.OwnerTable) = 0;
  LODWORD(v40.SharedWaiters) = 0;
  HIDWORD(v40.ExclusiveWaiters) = 3;
  v40.SystemResourcesList.Flink = (struct _LIST_ENTRY *)SeTcbPrivilege;
  v8 = v6 + ((4 * v7 + 11) & 0xFFFFFFFC) + 16;
  *(LUID *)((char *)&v40.SystemResourcesList.Blink + 4) = SeCreateTokenPrivilege;
  *(_QWORD *)&v40.ActiveCount = SeTakeOwnershipPrivilege;
  *(LUID *)((char *)&v40.SharedWaiters + 4) = SeCreatePagefilePrivilege;
  v40.OwnerEntry.OwnerThread = (ERESOURCE_THREAD)SeLockMemoryPrivilege;
  *(LUID *)(&v40.OwnerEntry.8 + 1) = SeAssignPrimaryTokenPrivilege;
  *(LUID *)&v40.NumberOfSharedWaiters = SeIncreaseQuotaPrivilege;
  *(LUID *)((char *)&v40.Reserved2 + 4) = SeIncreaseBasePriorityPrivilege;
  v40.SpinLock = (KSPIN_LOCK)SeCreatePermanentPrivilege;
  v42 = SeDebugPrivilege;
  v44 = SeAuditPrivilege;
  v46 = SeSecurityPrivilege;
  v48 = SeSystemEnvironmentPrivilege;
  v50 = SeChangeNotifyPrivilege;
  v52 = SeBackupPrivilege;
  v54 = SeRestorePrivilege;
  v40.OwnerEntry.TableSize = 3;
  v40.ContentionCount = 0;
  LODWORD(v40.Reserved2) = 0;
  HIDWORD(v40.CreatorBackTraceIndex) = 3;
  v41 = 3;
  v43 = 3;
  v45 = 3;
  v47 = 0;
  v49 = 0;
  v51 = 3;
  v53 = 0;
  v56 = SeShutdownPrivilege;
  v58 = SeLoadDriverPrivilege;
  v60 = SeProfileSingleProcessPrivilege;
  v62 = SeSystemtimePrivilege;
  v64 = SeUndockPrivilege;
  v66 = SeManageVolumePrivilege;
  v68 = SeImpersonatePrivilege;
  v70 = SeCreateGlobalPrivilege;
  v72 = SeTrustedCredManAccessPrivilege;
  v74 = SeRelabelPrivilege;
  v76 = SeIncreaseWorkingSetPrivilege;
  v78 = SeTimeZonePrivilege;
  v80 = SeCreateSymbolicLinkPrivilege;
  v82 = SeSystemProfilePrivilege;
  v61 = 3;
  v69 = 3;
  v71 = 3;
  v77 = 3;
  v79 = 3;
  v81 = 3;
  v83 = 3;
  v85 = 3;
  v84 = SeDelegateSessionUserImpersonatePrivilege;
  v55 = 0;
  v57 = 0;
  v59 = 0;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  v73 = 0;
  v75 = 0;
  v9 = 4 * *((unsigned __int8 *)SeLocalSystemSid + 1) + 24;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v9, 0x63416553u);
  v11 = Pool2;
  if ( Pool2 )
  {
    RtlCreateAcl(Pool2, v9, 2u);
    v12 = 4 * *((unsigned __int8 *)SeProcTrustWinTcbSid + 1) + 24;
    v13 = (ACL *)ExAllocatePool2(256LL, v12, 0x63416553u);
    v14 = v13;
    if ( v13 )
    {
      RtlCreateAcl(v13, v12, 2u);
      RtlAddAccessAllowedAce(v11, 2u, 0xF01FFu, SeLocalSystemSid);
      RtlAddProcessTrustLabelAce(v14, 2u, 0, SeProcTrustWinTcbSid, 0x14u, 0x20018u);
      v15 = (void *)ExAllocatePool2(256LL, 0x28uLL, 0x64536553u);
      v16 = v15;
      if ( v15 )
      {
        RtlCreateSecurityDescriptor(v15, 1u);
        RtlSetDaclSecurityDescriptor(v16, 1u, v11, 0);
        RtlSetSaclSecurityDescriptor(v16, 1u, v14, 0);
        RtlSetOwnerSecurityDescriptor(v16, SeAliasAdminsSid, 0);
        RtlSetGroupSecurityDescriptor(v16, SeAliasAdminsSid, 0);
        LODWORD(v32) = 48;
        v33 = 0LL;
        v35 = 0;
        v34 = 0LL;
        v38 = 0LL;
        v37 = v16;
        SepCreateToken(
          (HANDLE *)v30,
          v17,
          v18,
          &v32,
          *(int *)AceType,
          AccessMask[0],
          (__int64)&SeSystemAuthenticationId,
          &v29,
          &v31,
          4u,
          &v86,
          v8,
          0x1Fu,
          &v40,
          v4,
          v5,
          SeSystemDefaultDacl);
        SeSetMandatoryPolicyToken(*(__int64 *)v30, &v27);
        ExFreePoolWithTag(v11, 0);
        ExFreePoolWithTag(v14, 0);
        ExFreePoolWithTag(v16, 0);
        return *(_QWORD *)v30;
      }
      ExFreePoolWithTag(v11, 0);
      v23 = v14;
    }
    else
    {
      v23 = v11;
    }
    ExFreePoolWithTag(v23, 0);
  }
  return 0LL;
}
