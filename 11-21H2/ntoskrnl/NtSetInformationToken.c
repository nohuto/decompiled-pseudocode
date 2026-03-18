/*
 * XREFs of NtSetInformationToken @ 0x140754810
 * Callers:
 *     <none>
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140204870 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepRemoveAceFromTokenDefaultDacl @ 0x140254F94 (SepRemoveAceFromTokenDefaultDacl.c)
 *     SepLinkLogonSessions @ 0x14025CB88 (SepLinkLogonSessions.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     SepLocateTokenIntegrity @ 0x1402ED9BC (SepLocateTokenIntegrity.c)
 *     RtlSubAuthorityCountSid @ 0x1402EF420 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeReleaseAcl @ 0x140663448 (SeReleaseAcl.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1406651C8 (SeReleaseLuidAndAttributesArray.c)
 *     SeReleaseSid @ 0x140668444 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x14066846C (SeCaptureSid.c)
 *     SepDereferenceCachedHandlesEntry @ 0x140696EC8 (SepDereferenceCachedHandlesEntry.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1406AB17C (SepDereferenceLowBoxNumberEntry.c)
 *     SepIdAssignableAsOwner @ 0x1406BBF6C (SepIdAssignableAsOwner.c)
 *     SeSetVirtualizationToken @ 0x1406E6FE8 (SeSetVirtualizationToken.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     SeSetSessionIdToken @ 0x1407530D0 (SeSetSessionIdToken.c)
 *     SepExpandDynamic @ 0x1407531C4 (SepExpandDynamic.c)
 *     SepFreeDefaultDacl @ 0x1407532AC (SepFreeDefaultDacl.c)
 *     SepAppendDefaultDacl @ 0x1407532F8 (SepAppendDefaultDacl.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140753358 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeCaptureAcl @ 0x140753E4C (SeCaptureAcl.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140753F8C (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepShouldSetDelinkFlags @ 0x1407546B8 (SepShouldSetDelinkFlags.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x140754718 (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     SeSetMandatoryPolicyToken @ 0x14075563C (SeSetMandatoryPolicyToken.c)
 *     SepStopReferencingLogonSession @ 0x1407556D4 (SepStopReferencingLogonSession.c)
 *     SeCaptureSidAndAttributesArray @ 0x140799DB0 (SeCaptureSidAndAttributesArray.c)
 *     SeSetPrivateNameSpaceToken @ 0x1409C6248 (SeSetPrivateNameSpaceToken.c)
 *     SepAppendPrimaryGroup @ 0x1409C64AC (SepAppendPrimaryGroup.c)
 *     SepFreePrimaryGroup @ 0x1409C6518 (SepFreePrimaryGroup.c)
 *     SepModifyTokenPolicyCounter @ 0x1409C6578 (SepModifyTokenPolicyCounter.c)
 *     SepCaptureAuditPolicy @ 0x1409CA42C (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x1409CA904 (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x1409CA9E4 (SepIdAssignableAsGroup.c)
 *     SepRemoveTokenLogonSession @ 0x1409CD6CC (SepRemoveTokenLogonSession.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  NTSTATUS v8; // edi
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v10; // rcx
  ACCESS_MASK v11; // edx
  NTSTATUS result; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  PERESOURCE *v15; // rsi
  __int32 v16; // ebx
  __int32 v17; // ebx
  __int32 v18; // ebx
  __int32 v19; // ebx
  int v20; // ebx
  int v21; // ebx
  struct _KTHREAD *v22; // rax
  PVOID v23; // rsi
  char v24; // bl
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  struct _KTHREAD *v28; // rax
  struct _ERESOURCE *v29; // rcx
  NTSTATUS v30; // ebx
  PERESOURCE *v31; // rcx
  __int32 v32; // ebx
  __int32 v33; // ebx
  __int32 v34; // ebx
  __int32 v35; // ebx
  int v36; // eax
  int v37; // ebx
  struct _KTHREAD *v38; // rax
  PVOID v39; // r15
  int v40; // ebx
  NTSTATUS v41; // r14d
  PVOID v42; // rbx
  bool v43; // si
  struct _KTHREAD *v44; // rax
  PERESOURCE *v45; // r13
  int *v46; // rdx
  _DWORD *v47; // rbx
  char *v48; // rcx
  struct _KTHREAD *v49; // rax
  PERESOURCE *v50; // rsi
  PVOID v51; // rbx
  unsigned int v52; // edx
  __int64 v53; // r8
  __int64 v54; // r9
  char *v55; // rcx
  __int64 v56; // rcx
  ACL *v57; // r14
  ULONG v58; // ebx
  void *v59; // r13
  unsigned __int16 *v60; // rbx
  int v61; // ecx
  int v62; // ecx
  ULONG v63; // r12d
  struct _KTHREAD *v64; // rax
  char *v65; // rbx
  PSID *TokenIntegrity; // rax
  PSID *v67; // rsi
  PSID v68; // r13
  int v69; // ecx
  ULONG v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // ebx
  struct _KTHREAD *v74; // rax
  PERESOURCE *v75; // rbx
  _QWORD *v76; // rdx
  void *v77; // rcx
  void *v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rdx
  struct _KTHREAD *v81; // rax
  int v82; // eax
  unsigned int v83; // eax
  unsigned int v84; // ebx
  struct _KTHREAD *v85; // rax
  char v86; // al
  struct _KTHREAD *CurrentThread; // rax
  PVOID v88; // rbx
  _QWORD *v89; // rdx
  int v90; // eax
  unsigned int v91; // eax
  struct _KTHREAD *v92; // rax
  _QWORD *v93; // r8
  char *v94; // rbx
  _OWORD *v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rdx
  unsigned int v98; // esi
  struct _KTHREAD *v99; // rax
  PERESOURCE *v100; // r13
  _QWORD *v101; // rbx
  __int64 v102; // rax
  int v103; // ebx
  struct _KTHREAD *v104; // rax
  PERESOURCE *v105; // rbx
  unsigned int v106; // ebx
  signed __int32 v107[8]; // [rsp+0h] [rbp-118h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-F0h]
  __int64 v110; // [rsp+30h] [rbp-E8h]
  PVOID Token; // [rsp+50h] [rbp-C8h] BYREF
  NTSTATUS v112; // [rsp+58h] [rbp-C0h]
  char v113; // [rsp+5Ch] [rbp-BCh]
  KPROCESSOR_MODE v114; // [rsp+5Dh] [rbp-BBh]
  unsigned int v115; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v117; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v118; // [rsp+70h] [rbp-A8h] BYREF
  PSID Sid1; // [rsp+78h] [rbp-A0h] BYREF
  PVOID v120; // [rsp+80h] [rbp-98h] BYREF
  _OWORD *v121; // [rsp+88h] [rbp-90h] BYREF
  unsigned int v122; // [rsp+90h] [rbp-88h] BYREF
  int v123; // [rsp+94h] [rbp-84h]
  int v124; // [rsp+98h] [rbp-80h] BYREF
  int v125; // [rsp+9Ch] [rbp-7Ch]
  __int64 v126; // [rsp+A0h] [rbp-78h] BYREF
  PVOID P; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v128; // [rsp+B0h] [rbp-68h] BYREF
  PERESOURCE *v129; // [rsp+B8h] [rbp-60h]
  PVOID v130; // [rsp+C0h] [rbp-58h]
  int v131; // [rsp+C8h] [rbp-50h]
  int v132; // [rsp+CCh] [rbp-4Ch]
  int v133; // [rsp+D0h] [rbp-48h]
  int v134; // [rsp+D4h] [rbp-44h]
  int v135; // [rsp+D8h] [rbp-40h]
  __int64 v136; // [rsp+E0h] [rbp-38h]
  void *v137; // [rsp+E8h] [rbp-30h]
  struct _KTHREAD *v138; // [rsp+F0h] [rbp-28h]

  v8 = 0;
  v113 = 0;
  v115 = 0;
  v122 = 0;
  Sid1 = 0LL;
  v118 = 0LL;
  v117 = 0LL;
  P = 0LL;
  v128 = 0LL;
  LODWORD(v126) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v114 = PreviousMode;
  if ( PreviousMode && TokenInformationLength )
  {
    if ( ((unsigned __int8)TokenInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)TokenInformation + TokenInformationLength > 0x7FFFFFFF0000LL
      || (char *)TokenInformation + TokenInformationLength < TokenInformation )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( (unsigned int)TokenInformationClass > TokenChildProcessFlags )
    return -1073741821;
  v10 = 0x24800F8B5070LL;
  if ( !_bittest64(&v10, TokenInformationClass) )
    return -1073741821;
  v11 = 128;
  if ( TokenInformationClass == TokenSessionId )
  {
    v11 = 384;
  }
  else if ( TokenInformationClass == TokenLinkedToken )
  {
    v11 = 136;
  }
  Token = 0LL;
  result = ObReferenceObjectByHandle(TokenHandle, v11, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  v15 = (PERESOURCE *)Token;
  v130 = Token;
  if ( result < 0 )
    return result;
  if ( TokenInformationClass > TokenVirtualizationAllowed )
  {
    v32 = TokenInformationClass - 24;
    if ( !v32 )
    {
      if ( TokenInformationLength == 4 )
      {
        v135 = *(_DWORD *)TokenInformation;
        SeSetVirtualizationToken((__int64)Token, v135);
        v30 = 0;
        goto LABEL_28;
      }
      goto LABEL_144;
    }
    v33 = v32 - 1;
    if ( v33 )
    {
      v34 = v33 - 1;
      if ( !v34 )
      {
        if ( TokenInformationLength == 4 )
        {
          v125 = *(_DWORD *)TokenInformation;
          if ( !v125 || SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v88 = Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v107, 0);
            v89 = Token;
            v90 = *((_DWORD *)Token + 50);
            if ( v125 )
              v91 = v90 | 0x1000;
            else
              v91 = v90 & 0xFFFFEFFF;
            *((_DWORD *)Token + 50) = v91;
            v89[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v107, 0);
            v29 = (struct _ERESOURCE *)*((_QWORD *)v88 + 6);
            goto LABEL_26;
          }
          goto LABEL_149;
        }
        goto LABEL_144;
      }
      v35 = v34 - 1;
      if ( v35 )
      {
        v40 = v35 - 12;
        if ( !v40 )
        {
          v120 = 0LL;
          if ( TokenInformation && TokenInformationLength >= 0x10 )
          {
            v41 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, PreviousMode, &v120);
            if ( v41 >= 0 )
            {
              wil_details_FeatureReporting_ReportUsageToService(
                (__int64)&Feature_RelaxTcbForUWP__private_reporting,
                0xFC13FCu,
                0,
                0,
                (__int64)&Feature_PdttSupport_logged_traits,
                0,
                v110);
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                v41 = -1073741727;
              v112 = v41;
              if ( v41 >= 0 )
              {
                v42 = v120;
                v43 = SepShouldSetDelinkFlags(*((_DWORD **)v120 + 1), *(_QWORD *)v120) != 0;
                v44 = KeGetCurrentThread();
                --v44->KernelApcDisable;
                v45 = (PERESOURCE *)Token;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                _InterlockedOr(v107, 0);
                v46 = (int *)*((_QWORD *)v42 + 1);
                v47 = Token;
                v112 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)Token + 97), v46, *(_QWORD *)v120);
                if ( v112 >= 0 && v43 )
                  v47[50] |= 0x20000u;
                *((_QWORD *)v47 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v107, 0);
                ExReleaseResourceLite(v45[6]);
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                SepReleaseTokenSecurityAttributesAndOperationsInformation((PVOID *)v120, PreviousMode);
                v30 = v112;
                goto LABEL_27;
              }
              SepReleaseTokenSecurityAttributesAndOperationsInformation((PVOID *)v120, PreviousMode);
            }
            v30 = v41;
            goto LABEL_28;
          }
          goto LABEL_144;
        }
        v103 = v40 - 3;
        if ( !v103 )
        {
          if ( TokenInformationLength != 4 )
            goto LABEL_144;
          v106 = *(_DWORD *)TokenInformation;
          v134 = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_149;
          v36 = SeSetPrivateNameSpaceToken(v15, v106);
          goto LABEL_40;
        }
        if ( v103 == 3 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_149;
          if ( TokenInformationLength == 4 )
          {
            v133 = *(_DWORD *)TokenInformation;
            if ( !v133 && ((_DWORD)v15[25] & 0x80000) != 0 )
            {
              v104 = KeGetCurrentThread();
              --v104->KernelApcDisable;
              v105 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v107, 0);
              *((_DWORD *)v15 + 50) &= ~0x80000u;
              *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v107, 0);
              ExReleaseResourceLite(v105[6]);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              v15 = (PERESOURCE *)Token;
            }
            ObfDereferenceObject(v15);
            return 0;
          }
          goto LABEL_144;
        }
        return -1073741811;
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_144;
      v124 = *(_DWORD *)TokenInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        goto LABEL_149;
      if ( *((_BYTE *)v15 + 204) )
      {
        v30 = -1073741525;
        goto LABEL_28;
      }
      v36 = SeSetMandatoryPolicyToken(v15, &v124);
LABEL_40:
      v30 = v36;
      goto LABEL_28;
    }
    if ( TokenInformationLength < 0x10 )
      goto LABEL_144;
    v36 = SeCaptureSidAndAttributesArray(
            TokenInformation,
            0,
            (int)HandleInformation,
            v110,
            (__int64)&v128,
            (__int64)&v126);
    v112 = v36;
    if ( v36 < 0 )
      goto LABEL_40;
    v59 = (void *)v128;
    v60 = *(unsigned __int16 **)v128;
    v61 = *(_DWORD *)(*(_QWORD *)v128 + 2LL) - *(_DWORD *)((char *)SeUntrustedMandatorySid + 2);
    if ( !v61 )
      v61 = v60[3] - *((unsigned __int16 *)SeUntrustedMandatorySid + 3);
    if ( !v61 )
    {
      v62 = *RtlSubAuthorityCountSid(*(PSID *)v128);
      if ( !(_BYTE)v62 )
      {
        v63 = 0;
LABEL_85:
        v64 = KeGetCurrentThread();
        --v64->KernelApcDisable;
        v129 = (PERESOURCE *)Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v107, 0);
        v65 = (char *)Token;
        TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)Token);
        v67 = TokenIntegrity;
        if ( TokenIntegrity )
        {
          v68 = *TokenIntegrity;
          v69 = *RtlSubAuthorityCountSid(*TokenIntegrity);
          if ( (_BYTE)v69 )
            v70 = *RtlSubAuthoritySid(v68, v69 - 1);
          else
            v70 = 0;
          if ( v63 <= v70 )
          {
LABEL_89:
            v71 = *((unsigned __int8 *)*v67 + 1);
            if ( (_BYTE)v71 )
            {
              *RtlSubAuthoritySid(*v67, v71 - 1) = v63;
              if ( v63 < 0x3000 )
              {
                *((_QWORD *)v65 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
                *((_QWORD *)v65 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
              }
              v72 = *((_DWORD *)v65 + 50);
              if ( v63 >= 0x2000 )
              {
                if ( (v72 & 0x4000) != 0 )
                {
                  SepRemoveAceFromTokenDefaultDacl((__int64)v65, *((_QWORD *)v65 + 98));
                  *((_DWORD *)v65 + 50) &= ~0x4000u;
                  v77 = (void *)*((_QWORD *)v65 + 98);
                  if ( v77 )
                  {
                    ExFreePoolWithTag(v77, 0);
                    *((_QWORD *)v65 + 98) = 0LL;
                  }
                  v78 = (void *)*((_QWORD *)v65 + 99);
                  if ( v78 )
                  {
                    ExFreePoolWithTag(v78, 0);
                    *((_QWORD *)v65 + 99) = 0LL;
                    *((_DWORD *)v65 + 200) = 0;
                    memset(v65 + 808, 0, 0x110uLL);
                  }
                  v79 = *((_QWORD *)v65 + 135);
                  if ( v79 )
                  {
                    SepDereferenceLowBoxNumberEntry(*((_DWORD *)v65 + 30), v79);
                    *((_QWORD *)v65 + 135) = 0LL;
                  }
                  v80 = *((_QWORD *)v65 + 136);
                  if ( v80 )
                  {
                    SepDereferenceCachedHandlesEntry(*((_QWORD *)v65 + 27), v80);
                    *((_QWORD *)v65 + 136) = 0LL;
                  }
                }
                *((_DWORD *)v65 + 50) |= 0x2000u;
              }
              else
              {
                *((_QWORD *)v65 + 9) &= 0x202800000uLL;
                *((_QWORD *)v65 + 10) &= 0x202800000uLL;
                *((_DWORD *)v65 + 50) = v72 & 0xFFFFDFFF;
              }
              *((_QWORD *)v65 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              v30 = 0;
            }
            else
            {
              v30 = -1073741811;
            }
            goto LABEL_95;
          }
          if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            if ( !v65[204] )
              goto LABEL_89;
            v30 = -1073741525;
          }
          else
          {
            v30 = -1073741727;
          }
        }
        else
        {
          v30 = -1073740730;
        }
LABEL_95:
        _InterlockedOr(v107, 0);
        ExReleaseResourceLite(v129[6]);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Token);
        SeReleaseLuidAndAttributesArray((void *)v128, PreviousMode);
        return v30;
      }
      v63 = *RtlSubAuthoritySid(v60, v62 - 1);
      if ( v63 <= 0x4000 )
        goto LABEL_85;
    }
    ObfDereferenceObject(v15);
    SeReleaseLuidAndAttributesArray(v59, PreviousMode);
    return -1073740730;
  }
  if ( TokenInformationClass == TokenVirtualizationAllowed )
  {
    if ( TokenInformationLength == 4 )
    {
      v123 = *(_DWORD *)TokenInformation;
      if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
        goto LABEL_149;
      v81 = KeGetCurrentThread();
      --v81->KernelApcDisable;
      v75 = (PERESOURCE *)Token;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v107, 0);
      v76 = Token;
      v82 = *((_DWORD *)Token + 50);
      if ( v123 )
        v83 = v82 | 0x200;
      else
        v83 = v82 & 0xFFFFFDFF;
      *((_DWORD *)Token + 50) = v83;
      goto LABEL_103;
    }
LABEL_144:
    v30 = -1073741820;
    goto LABEL_28;
  }
  v16 = TokenInformationClass - 4;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 6;
        if ( v19 )
        {
          v20 = v19 - 2;
          if ( !v20 )
          {
            if ( TokenInformationLength == 4 )
            {
              v37 = *(_DWORD *)TokenInformation;
              v131 = *(_DWORD *)TokenInformation;
              if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              {
                if ( v37 )
                {
                  v30 = -1073741811;
                  goto LABEL_28;
                }
                v38 = KeGetCurrentThread();
                --v38->KernelApcDisable;
                v39 = Token;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                _InterlockedOr(v107, 0);
                v15 = (PERESOURCE *)Token;
                if ( (*((_DWORD *)Token + 50) & 0x20) == 0 )
                {
                  if ( HIDWORD(NlsMbOemCodePageTag) )
                    SepRemoveTokenLogonSession(Token);
                  v30 = SepStopReferencingLogonSession(v15);
                  v112 = v30;
                  if ( v30 < 0 )
                    goto LABEL_28;
                }
                _InterlockedOr(v107, 0);
                v29 = (struct _ERESOURCE *)*((_QWORD *)v39 + 6);
                goto LABEL_26;
              }
              goto LABEL_149;
            }
            goto LABEL_144;
          }
          v21 = v20 - 2;
          if ( !v21 )
          {
            v121 = 0LL;
            if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            {
              v22 = KeGetCurrentThread();
              --v22->KernelApcDisable;
              v23 = Token;
              ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
              v24 = *((_BYTE *)v23 + 118);
              ExReleaseResourceLite(*((PERESOURCE *)v23 + 6));
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              if ( v24 )
              {
                v30 = -1073741811;
                goto LABEL_27;
              }
              if ( !TokenInformation )
              {
                v28 = KeGetCurrentThread();
                --v28->KernelApcDisable;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)v23 + 6), 1u);
                _InterlockedOr(v107, 0);
                *((_BYTE *)v23 + 118) = 1;
                *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v107, 0);
                v29 = (struct _ERESOURCE *)*((_QWORD *)v23 + 6);
LABEL_26:
                ExReleaseResourceLite(v29);
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                v30 = 0;
LABEL_27:
                v15 = (PERESOURCE *)Token;
LABEL_28:
                v31 = v15;
LABEL_29:
                ObfDereferenceObject(v31);
                return v30;
              }
              LOBYTE(v25) = PreviousMode;
              v30 = SepCaptureAuditPolicy(
                      (_DWORD)TokenInformation,
                      v25,
                      v26,
                      v27,
                      (_DWORD)Object,
                      (_DWORD)HandleInformation,
                      (__int64)&v121);
              v112 = v30;
              if ( v30 < 0 )
                goto LABEL_27;
              v92 = KeGetCurrentThread();
              --v92->KernelApcDisable;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)v23 + 6), 1u);
              _InterlockedOr(v107, 0);
              *((_BYTE *)v23 + 118) = 2;
              v93 = Token;
              v94 = (char *)Token + 88;
              v95 = v121;
              *(_OWORD *)((char *)Token + 88) = *v121;
              *((_QWORD *)v94 + 2) = *((_QWORD *)v95 + 2);
              *((_DWORD *)v94 + 6) = *((_DWORD *)v95 + 6);
              *((_WORD *)v94 + 14) = *((_WORD *)v95 + 14);
              v93[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v107, 0);
              ExReleaseResourceLite(*((PERESOURCE *)v23 + 6));
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              LOBYTE(v96) = 1;
              SepModifyTokenPolicyCounter(v94, v96);
              ObfDereferenceObject(Token);
              LOBYTE(v97) = PreviousMode;
              SepReleaseAuditPolicy(v121, v97);
              return 0;
            }
LABEL_149:
            v30 = -1073741727;
            goto LABEL_28;
          }
          v73 = v21 - 1;
          if ( !v73 )
          {
            if ( TokenInformationLength == 8 )
            {
              v136 = *(_QWORD *)TokenInformation;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_149;
              v74 = KeGetCurrentThread();
              --v74->KernelApcDisable;
              v75 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v107, 0);
              v76 = Token;
              if ( !*((_QWORD *)Token + 28) )
                *((_QWORD *)Token + 28) = v136;
LABEL_103:
              v76[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v107, 0);
              ExReleaseResourceLite(v75[6]);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              v30 = 0;
              goto LABEL_27;
            }
            goto LABEL_144;
          }
          if ( v73 == 2 )
          {
            if ( TokenInformationLength != 8 )
              goto LABEL_144;
            v137 = *(void **)TokenInformation;
            v36 = SepLinkLogonSessions((__int64)Token, v137, PreviousMode);
            goto LABEL_40;
          }
          return -1073741811;
        }
        if ( TokenInformationLength == 4 )
        {
          v58 = *(_DWORD *)TokenInformation;
          v132 = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_149;
          v36 = SeSetSessionIdToken(v15, v58);
          goto LABEL_40;
        }
LABEL_169:
        ObfDereferenceObject(Token);
        return -1073741820;
      }
      if ( TokenInformationLength < 8 )
        goto LABEL_169;
      v48 = *(char **)TokenInformation;
      v117 = (__int64)v48;
      if ( v48 )
      {
        v30 = SeCaptureAcl(v48, PreviousMode, v13, v14, 1, (int)HandleInformation, (PVOID *)&v117, &v115);
        v112 = v30;
      }
      else
      {
        v115 = 0;
        v30 = 0;
        v112 = 0;
      }
      if ( v30 < 0 )
        goto LABEL_28;
      v49 = KeGetCurrentThread();
      --v49->KernelApcDisable;
      v50 = (PERESOURCE *)Token;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v107, 0);
      v51 = Token;
      v52 = v115 + 8 + 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL);
      v115 = v52;
      if ( v52 > *((_DWORD *)Token + 34) )
      {
        _InterlockedOr(v107, 0);
        ExReleaseResourceLite(v50[6]);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Token);
        if ( v117 )
          SeReleaseAcl((void *)v117, PreviousMode);
        return -1073741671;
      }
      else
      {
        v112 = SepExpandDynamic((__int64)Token, v52);
        if ( v112 >= 0 )
        {
          v55 = (char *)*((_QWORD *)v51 + 23);
          if ( !v55 || (v112 = SeCaptureAcl(v55, 0, v53, v54, 1, (int)HandleInformation, &P, &v122), v112 >= 0) )
          {
            SepFreeDefaultDacl((__int64)v51);
            v57 = (ACL *)v117;
            if ( v117 )
              SepAppendDefaultDacl((__int64)v51, (unsigned __int16 *)v117);
            SeTokenDefaultDaclChangedAuditAlarm(v56, (__int64)v51, (__int64)TokenHandle, (ACL *)P, v57);
            *((_QWORD *)v51 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v107, 0);
            ExReleaseResourceLite(v50[6]);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            ObfDereferenceObject(Token);
            if ( v117 )
              SeReleaseAcl((void *)v117, PreviousMode);
            if ( P )
              ExFreePoolWithTag(P, 0);
            return 0;
          }
        }
        _InterlockedOr(v107, 0);
        ExReleaseResourceLite(v50[6]);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Token);
        if ( v117 )
          SeReleaseAcl((void *)v117, PreviousMode);
        return v112;
      }
    }
    else
    {
      if ( TokenInformationLength < 8 )
        goto LABEL_169;
      v118 = *(_QWORD *)TokenInformation;
      v30 = SeCaptureSid((char *)v118, PreviousMode, v13, v14, (int)Object, 1, (PSID *)&v118);
      v112 = v30;
      v31 = v15;
      if ( v30 < 0 )
        goto LABEL_29;
      if ( (unsigned __int8)SepIdAssignableAsGroup(v15, v118) )
      {
        v98 = 4 * *(unsigned __int8 *)(v118 + 1) + 8;
        v115 = v98;
        v99 = KeGetCurrentThread();
        --v99->KernelApcDisable;
        v100 = (PERESOURCE *)Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v107, 0);
        v101 = Token;
        v102 = *((_QWORD *)Token + 23);
        if ( v102 )
        {
          v98 += *(unsigned __int16 *)(v102 + 2);
          v115 = v98;
        }
        if ( v98 <= *((_DWORD *)Token + 34) )
        {
          v112 = SepExpandDynamic((__int64)Token, v115);
          if ( v112 >= 0 )
          {
            SepFreePrimaryGroup(v101);
            SepAppendPrimaryGroup(v101, v118);
            v101[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v107, 0);
            ExReleaseResourceLite(v100[6]);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          }
          else
          {
            _InterlockedOr(v107, 0);
            ExReleaseResourceLite(v100[6]);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            v8 = v112;
          }
        }
        else
        {
          _InterlockedOr(v107, 0);
          ExReleaseResourceLite(v100[6]);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v8 = -1073741671;
        }
        v15 = (PERESOURCE *)Token;
      }
      else
      {
        v8 = -1073741733;
      }
      ObfDereferenceObject(v15);
      SeReleaseSid((void *)v118, PreviousMode, 1);
      return v8;
    }
  }
  else
  {
    if ( TokenInformationLength < 8 )
      goto LABEL_169;
    Sid1 = *(PSID *)TokenInformation;
    v30 = SeCaptureSid((char *)Sid1, PreviousMode, v13, v14, (int)Object, 1, &Sid1);
    v112 = v30;
    if ( v30 < 0 )
      goto LABEL_28;
    v84 = 0;
    v85 = KeGetCurrentThread();
    --v85->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
    _InterlockedOr(v107, 0);
    while ( 1 )
    {
      if ( v84 >= *((_DWORD *)v15 + 31) )
      {
        _InterlockedOr(v107, 0);
        ExReleaseResourceLite(v15[6]);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObject(v15);
        SeReleaseSid(Sid1, PreviousMode, 1);
        return -1073741734;
      }
      if ( RtlEqualSid(Sid1, (&v15[19]->SystemResourcesList.Flink)[2 * v84]) )
        break;
      ++v84;
    }
    if ( SepIdAssignableAsOwner((__int64)v15, v84) )
    {
      *((_DWORD *)v15 + 36) = v84;
      v86 = 1;
      v113 = 1;
      v112 = 0;
    }
    else
    {
      v112 = -1073741734;
      v86 = v113;
    }
    if ( v86 )
    {
      v129 = (PERESOURCE *)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
      v15[7] = (PERESOURCE)v129;
    }
    _InterlockedOr(v107, 0);
    ExReleaseResourceLite(v15[6]);
    v138 = KeGetCurrentThread();
    KiLeaveCriticalRegionUnsafe((__int64)v138);
    ObfDereferenceObject(v15);
    SeReleaseSid(Sid1, PreviousMode, 1);
    return v112;
  }
}
