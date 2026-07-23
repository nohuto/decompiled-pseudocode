/*
 * XREFs of NtSetInformationToken @ 0x1407EF750
 * Callers:
 *     <none>
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140224DF8 (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlEqualSid @ 0x14022A880 (RtlEqualSid.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     RtlSubAuthorityCountSid @ 0x140297D50 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x140297D60 (RtlSubAuthoritySid.c)
 *     SepLinkLogonSessions @ 0x140354440 (SepLinkLogonSessions.c)
 *     SepRemoveAceFromTokenDefaultDacl @ 0x1403705C8 (SepRemoveAceFromTokenDefaultDacl.c)
 *     SepLocateTokenIntegrity @ 0x140370E18 (SepLocateTokenIntegrity.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeReleaseAcl @ 0x1406BA35C (SeReleaseAcl.c)
 *     SeCaptureAcl @ 0x1406BA378 (SeCaptureAcl.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1406BB168 (SeReleaseLuidAndAttributesArray.c)
 *     SeReleaseSid @ 0x1406BB2D4 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406BB2FC (SeCaptureSid.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406BCC80 (SeCaptureSidAndAttributesArray.c)
 *     SepIdAssignableAsOwner @ 0x1406C7A68 (SepIdAssignableAsOwner.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1407EF49C (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceCachedHandlesEntry @ 0x1407EF5EC (SepDereferenceCachedHandlesEntry.c)
 *     SeSetMandatoryPolicyToken @ 0x1407F0AD8 (SeSetMandatoryPolicyToken.c)
 *     SepStopReferencingLogonSession @ 0x1407F0B70 (SepStopReferencingLogonSession.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x1407F0BB0 (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1407F0BF0 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepShouldSetDelinkFlags @ 0x1407F1340 (SepShouldSetDelinkFlags.c)
 *     SeSetSessionIdToken @ 0x1407F1444 (SeSetSessionIdToken.c)
 *     SepExpandDynamic @ 0x1407F153C (SepExpandDynamic.c)
 *     SepFreeDefaultDacl @ 0x1407F1624 (SepFreeDefaultDacl.c)
 *     SepAppendDefaultDacl @ 0x1407F1670 (SepAppendDefaultDacl.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1407F16D0 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSetPrivateNameSpaceToken @ 0x1409C97A8 (SeSetPrivateNameSpaceToken.c)
 *     SeSetVirtualizationToken @ 0x1409C99EC (SeSetVirtualizationToken.c)
 *     SepAppendPrimaryGroup @ 0x1409C9A8C (SepAppendPrimaryGroup.c)
 *     SepFreePrimaryGroup @ 0x1409C9AF8 (SepFreePrimaryGroup.c)
 *     SepModifyTokenPolicyCounter @ 0x1409C9B58 (SepModifyTokenPolicyCounter.c)
 *     SepCaptureAuditPolicy @ 0x1409CD8C0 (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x1409CDDC0 (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x1409CDE98 (SepIdAssignableAsGroup.c)
 *     SepRemoveTokenLogonSession @ 0x1409D0534 (SepRemoveTokenLogonSession.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  NTSTATUS v8; // edi
  char PreviousMode; // r15
  __int64 v10; // rcx
  ACCESS_MASK v11; // edx
  NTSTATUS result; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  PERESOURCE *v16; // rsi
  __int32 v17; // ebx
  __int32 v18; // ebx
  __int32 v19; // ebx
  __int32 v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  NTSTATUS v24; // ebx
  int v25; // eax
  struct _KTHREAD *v26; // rax
  PVOID v27; // rbx
  _QWORD *v28; // rdx
  struct _ERESOURCE *v29; // rcx
  struct _KTHREAD *v30; // rax
  char v31; // bl
  int v32; // edx
  int v33; // r8d
  int v34; // r9d
  struct _KTHREAD *v35; // rax
  struct _KTHREAD *v36; // rax
  _QWORD *v37; // r8
  char *v38; // rbx
  _OWORD *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  ULONG v42; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v44; // r15
  ULONG v45; // ebx
  char *v46; // rcx
  struct _KTHREAD *v47; // rax
  PERESOURCE *v48; // rsi
  PVOID v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  char *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r14
  PERESOURCE *v56; // rcx
  unsigned int v57; // esi
  struct _KTHREAD *v58; // rax
  PERESOURCE *v59; // r13
  _QWORD *v60; // rbx
  __int64 v61; // rax
  unsigned int v62; // ebx
  struct _KTHREAD *v63; // rax
  char v64; // al
  struct _KTHREAD *v65; // rax
  _QWORD *v66; // rdx
  int v67; // eax
  unsigned int v68; // eax
  __int32 v69; // ebx
  __int32 v70; // ebx
  __int32 v71; // ebx
  __int32 v72; // ebx
  int v73; // ebx
  int v74; // ebx
  struct _KTHREAD *v75; // rax
  PERESOURCE *v76; // rbx
  ULONG v77; // ebx
  int v78; // r14d
  PVOID v79; // rbx
  bool v80; // si
  struct _KTHREAD *v81; // rax
  PERESOURCE *v82; // r13
  int *v83; // rdx
  _DWORD *v84; // rbx
  struct _KTHREAD *v85; // rax
  int v86; // eax
  void *v87; // r13
  unsigned __int16 *v88; // rbx
  int v89; // ecx
  int v90; // ecx
  ULONG v91; // r12d
  struct _KTHREAD *v92; // rax
  char *v93; // rbx
  PVOID *TokenIntegrity; // rax
  UCHAR v95; // r13
  ULONG v96; // esi
  ULONG v97; // eax
  ULONG v98; // eax
  int v99; // eax
  int v100; // eax
  void *v101; // rcx
  void *v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rdx
  signed __int32 v105[8]; // [rsp+0h] [rbp-118h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-F0h]
  __int64 v108; // [rsp+30h] [rbp-E8h]
  PVOID Token; // [rsp+50h] [rbp-C8h] BYREF
  NTSTATUS v110; // [rsp+58h] [rbp-C0h]
  char v111; // [rsp+5Ch] [rbp-BCh]
  char v112; // [rsp+5Dh] [rbp-BBh]
  unsigned int v113; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v115; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v116; // [rsp+70h] [rbp-A8h] BYREF
  PSID Sid1; // [rsp+78h] [rbp-A0h] BYREF
  PVOID v118; // [rsp+80h] [rbp-98h] BYREF
  PVOID Sid; // [rsp+88h] [rbp-90h]
  _OWORD *v120; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v121; // [rsp+98h] [rbp-80h] BYREF
  ULONG v122; // [rsp+9Ch] [rbp-7Ch]
  ULONG v123; // [rsp+A0h] [rbp-78h] BYREF
  ULONG v124; // [rsp+A4h] [rbp-74h]
  __int64 v125; // [rsp+A8h] [rbp-70h] BYREF
  PVOID P; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v127; // [rsp+B8h] [rbp-60h] BYREF
  PSID *v128; // [rsp+C0h] [rbp-58h]
  ULONG v129; // [rsp+C8h] [rbp-50h]
  ULONG v130; // [rsp+CCh] [rbp-4Ch]
  ULONG v131; // [rsp+D0h] [rbp-48h]
  ULONG v132; // [rsp+D4h] [rbp-44h]
  ULONG v133; // [rsp+D8h] [rbp-40h]
  __int64 v134; // [rsp+E0h] [rbp-38h]
  PERESOURCE *v135; // [rsp+E8h] [rbp-30h]
  void *v136; // [rsp+F0h] [rbp-28h]

  v8 = 0;
  v111 = 0;
  v113 = 0;
  v121 = 0;
  Sid1 = 0LL;
  v116 = 0LL;
  v115 = 0LL;
  P = 0LL;
  v127 = 0LL;
  LODWORD(v125) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v112 = PreviousMode;
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
  v16 = (PERESOURCE *)Token;
  Sid = Token;
  if ( result >= 0 )
  {
    if ( TokenInformationClass <= TokenVirtualizationAllowed )
    {
      if ( TokenInformationClass != TokenVirtualizationAllowed )
      {
        v17 = TokenInformationClass - 4;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 6;
              if ( v20 )
              {
                v21 = v20 - 2;
                if ( !v21 )
                {
                  if ( TokenInformationLength != 4 )
                    goto LABEL_25;
                  v42 = *(_DWORD *)TokenInformation;
                  v129 = *(_DWORD *)TokenInformation;
                  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                  {
                    if ( v42 )
                    {
                      v24 = -1073741811;
                      goto LABEL_93;
                    }
                    CurrentThread = KeGetCurrentThread();
                    --CurrentThread->KernelApcDisable;
                    v44 = Token;
                    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                    _InterlockedOr(v105, 0);
                    v16 = (PERESOURCE *)Token;
                    if ( (*((_DWORD *)Token + 50) & 0x20) == 0 )
                    {
                      if ( HIDWORD(NlsMbOemCodePageTag) )
                        SepRemoveTokenLogonSession(Token);
                      v24 = SepStopReferencingLogonSession(v16);
                      v110 = v24;
                      if ( v24 < 0 )
                        goto LABEL_93;
                    }
                    _InterlockedOr(v105, 0);
                    v29 = (struct _ERESOURCE *)*((_QWORD *)v44 + 6);
                    goto LABEL_48;
                  }
                  goto LABEL_52;
                }
                v22 = v21 - 2;
                if ( v22 )
                {
                  v23 = v22 - 1;
                  if ( v23 )
                  {
                    if ( v23 == 2 )
                    {
                      if ( TokenInformationLength != 8 )
                      {
LABEL_25:
                        v24 = -1073741820;
LABEL_93:
                        v56 = v16;
                        goto LABEL_94;
                      }
                      v136 = *(void **)TokenInformation;
                      v25 = SepLinkLogonSessions((__int64)Token, v136, PreviousMode);
LABEL_54:
                      v24 = v25;
                      goto LABEL_93;
                    }
                    return -1073741811;
                  }
                  if ( TokenInformationLength != 8 )
                    goto LABEL_25;
                  v134 = *(_QWORD *)TokenInformation;
                  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                  {
                    v26 = KeGetCurrentThread();
                    --v26->KernelApcDisable;
                    v27 = Token;
                    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                    _InterlockedOr(v105, 0);
                    v28 = Token;
                    if ( !*((_QWORD *)Token + 28) )
                      *((_QWORD *)Token + 28) = v134;
                    v28[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                    _InterlockedOr(v105, 0);
                    v29 = (struct _ERESOURCE *)*((_QWORD *)v27 + 6);
                    goto LABEL_48;
                  }
                  goto LABEL_52;
                }
                v120 = 0LL;
                if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                  goto LABEL_52;
                v30 = KeGetCurrentThread();
                --v30->KernelApcDisable;
                ExAcquireResourceSharedLite(v16[6], 1u);
                v31 = *((_BYTE *)v16 + 119);
                ExReleaseResourceLite(v16[6]);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                if ( v31 )
                {
                  v24 = -1073741811;
LABEL_49:
                  v16 = (PERESOURCE *)Token;
                  goto LABEL_93;
                }
                if ( !TokenInformation )
                {
                  v35 = KeGetCurrentThread();
                  --v35->KernelApcDisable;
                  ExAcquireResourceExclusiveLite(v16[6], 1u);
                  _InterlockedOr(v105, 0);
                  *((_BYTE *)v16 + 119) = 1;
                  *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v105, 0);
                  v29 = v16[6];
LABEL_48:
                  ExReleaseResourceLite(v29);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                  v24 = 0;
                  goto LABEL_49;
                }
                LOBYTE(v32) = PreviousMode;
                v24 = SepCaptureAuditPolicy(
                        (_DWORD)TokenInformation,
                        v32,
                        v33,
                        v34,
                        (_DWORD)Object,
                        (_DWORD)HandleInformation,
                        (__int64)&v120);
                v110 = v24;
                if ( v24 < 0 )
                  goto LABEL_49;
                v36 = KeGetCurrentThread();
                --v36->KernelApcDisable;
                ExAcquireResourceExclusiveLite(v16[6], 1u);
                _InterlockedOr(v105, 0);
                *((_BYTE *)v16 + 119) = 2;
                v37 = Token;
                v38 = (char *)Token + 88;
                v39 = v120;
                *(_OWORD *)((char *)Token + 88) = *v120;
                *((_QWORD *)v38 + 2) = *((_QWORD *)v39 + 2);
                *((_DWORD *)v38 + 6) = *((_DWORD *)v39 + 6);
                *((_WORD *)v38 + 14) = *((_WORD *)v39 + 14);
                v38[30] = *((_BYTE *)v39 + 30);
                v37[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v105, 0);
                ExReleaseResourceLite(v16[6]);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                LOBYTE(v40) = 1;
                SepModifyTokenPolicyCounter(v38, v40);
                ObfDereferenceObject(Token);
                LOBYTE(v41) = PreviousMode;
                SepReleaseAuditPolicy(v120, v41);
                return 0;
              }
              if ( TokenInformationLength == 4 )
              {
                v45 = *(_DWORD *)TokenInformation;
                v130 = *(_DWORD *)TokenInformation;
                if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                {
                  v25 = SeSetSessionIdToken(v16, v45);
                  goto LABEL_54;
                }
                goto LABEL_52;
              }
LABEL_91:
              ObfDereferenceObject(Token);
              return -1073741820;
            }
            if ( TokenInformationLength < 8 )
              goto LABEL_91;
            v46 = *(char **)TokenInformation;
            v115 = (__int64)v46;
            if ( v46 )
            {
              v24 = SeCaptureAcl(v46, PreviousMode, v14, v15, 1, (int)HandleInformation, (PVOID *)&v115, &v113);
              v110 = v24;
            }
            else
            {
              v113 = 0;
              v24 = 0;
              v110 = 0;
            }
            if ( v24 < 0 )
              goto LABEL_93;
            v47 = KeGetCurrentThread();
            --v47->KernelApcDisable;
            v48 = (PERESOURCE *)Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v105, 0);
            v49 = Token;
            v50 = v113 + 8 + 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL);
            v113 = v50;
            if ( (unsigned int)v50 <= *((_DWORD *)Token + 34) )
            {
              v110 = SepExpandDynamic(Token, v50);
              if ( v110 >= 0 )
              {
                v53 = (char *)*((_QWORD *)v49 + 23);
                if ( !v53 || (v110 = SeCaptureAcl(v53, 0, v51, v52, 1, (int)HandleInformation, &P, &v121), v110 >= 0) )
                {
                  SepFreeDefaultDacl(v49);
                  v55 = v115;
                  if ( v115 )
                    SepAppendDefaultDacl(v49, v115);
                  SeTokenDefaultDaclChangedAuditAlarm(v54, v49, TokenHandle, P, v55);
                  *((_QWORD *)v49 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v105, 0);
                  ExReleaseResourceLite(v48[6]);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                  ObfDereferenceObject(Token);
                  if ( v115 )
                    SeReleaseAcl((void *)v115, PreviousMode);
                  if ( P )
                    ExFreePoolWithTag(P, 0);
                  return 0;
                }
              }
              _InterlockedOr(v105, 0);
              ExReleaseResourceLite(v48[6]);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              ObfDereferenceObject(Token);
              if ( v115 )
                SeReleaseAcl((void *)v115, PreviousMode);
              return v110;
            }
            else
            {
              _InterlockedOr(v105, 0);
              ExReleaseResourceLite(v48[6]);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              ObfDereferenceObject(Token);
              if ( v115 )
                SeReleaseAcl((void *)v115, PreviousMode);
              return -1073741671;
            }
          }
          else
          {
            if ( TokenInformationLength < 8 )
              goto LABEL_91;
            v116 = *(_QWORD *)TokenInformation;
            v24 = SeCaptureSid((char *)v116, PreviousMode, v14, v15, (int)Object, 1, (PSID *)&v116);
            v110 = v24;
            v56 = v16;
            if ( v24 < 0 )
            {
LABEL_94:
              ObfDereferenceObject(v56);
              return v24;
            }
            if ( (unsigned __int8)SepIdAssignableAsGroup(v16, v116) )
            {
              v57 = 4 * *(unsigned __int8 *)(v116 + 1) + 8;
              v113 = v57;
              v58 = KeGetCurrentThread();
              --v58->KernelApcDisable;
              v59 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v105, 0);
              v60 = Token;
              v61 = *((_QWORD *)Token + 23);
              if ( v61 )
              {
                v57 += *(unsigned __int16 *)(v61 + 2);
                v113 = v57;
              }
              if ( v57 <= *((_DWORD *)Token + 34) )
              {
                v110 = SepExpandDynamic(Token, v113);
                if ( v110 >= 0 )
                {
                  SepFreePrimaryGroup(v60);
                  SepAppendPrimaryGroup(v60, v116);
                  v60[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v105, 0);
                  ExReleaseResourceLite(v59[6]);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                }
                else
                {
                  _InterlockedOr(v105, 0);
                  ExReleaseResourceLite(v59[6]);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                  v8 = v110;
                }
              }
              else
              {
                _InterlockedOr(v105, 0);
                ExReleaseResourceLite(v59[6]);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                v8 = -1073741671;
              }
              v16 = (PERESOURCE *)Token;
            }
            else
            {
              v8 = -1073741733;
            }
            ObfDereferenceObject(v16);
            SeReleaseSid((void *)v116, PreviousMode, 1);
            return v8;
          }
        }
        else
        {
          if ( TokenInformationLength < 8 )
            goto LABEL_91;
          Sid1 = *(PSID *)TokenInformation;
          v24 = SeCaptureSid((char *)Sid1, PreviousMode, v14, v15, (int)Object, 1, &Sid1);
          v110 = v24;
          if ( v24 < 0 )
            goto LABEL_93;
          v62 = 0;
          v63 = KeGetCurrentThread();
          --v63->KernelApcDisable;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v105, 0);
          while ( 1 )
          {
            if ( v62 >= *((_DWORD *)v16 + 31) )
            {
              _InterlockedOr(v105, 0);
              ExReleaseResourceLite(v16[6]);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              ObfDereferenceObject(v16);
              SeReleaseSid(Sid1, PreviousMode, 1);
              return -1073741734;
            }
            if ( RtlEqualSid(Sid1, (&v16[19]->SystemResourcesList.Flink)[2 * v62]) )
              break;
            ++v62;
          }
          if ( SepIdAssignableAsOwner((__int64)v16, v62) )
          {
            *((_DWORD *)v16 + 36) = v62;
            v64 = 1;
            v111 = 1;
            v110 = 0;
          }
          else
          {
            v110 = -1073741734;
            v64 = v111;
          }
          if ( v64 )
          {
            v128 = (PSID *)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
            v16[7] = (PERESOURCE)v128;
          }
          _InterlockedOr(v105, 0);
          ExReleaseResourceLite(v16[6]);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          ObfDereferenceObject(v16);
          SeReleaseSid(Sid1, PreviousMode, 1);
          return v110;
        }
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_25;
      v122 = *(_DWORD *)TokenInformation;
      if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
        goto LABEL_52;
      v65 = KeGetCurrentThread();
      --v65->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v105, 0);
      v66 = Token;
      v67 = *((_DWORD *)Token + 50);
      if ( v122 )
        v68 = v67 | 0x200;
      else
        v68 = v67 & 0xFFFFFDFF;
LABEL_152:
      *((_DWORD *)Token + 50) = v68;
      v66[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v105, 0);
      v29 = (struct _ERESOURCE *)*((_QWORD *)Token + 6);
      goto LABEL_48;
    }
    v69 = TokenInformationClass - 24;
    if ( !v69 )
    {
      if ( TokenInformationLength == 4 )
      {
        v133 = *(_DWORD *)TokenInformation;
        SeSetVirtualizationToken(Token, v133);
        v24 = 0;
        goto LABEL_93;
      }
      goto LABEL_25;
    }
    v70 = v69 - 1;
    if ( v70 )
    {
      v71 = v70 - 1;
      if ( v71 )
      {
        v72 = v71 - 1;
        if ( !v72 )
        {
          if ( TokenInformationLength != 4 )
            goto LABEL_25;
          v123 = *(_DWORD *)TokenInformation;
          if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            if ( *((_BYTE *)v16 + 204) )
            {
              v24 = -1073741525;
              goto LABEL_93;
            }
            v25 = SeSetMandatoryPolicyToken(v16, &v123);
            goto LABEL_54;
          }
          goto LABEL_52;
        }
        v73 = v72 - 12;
        if ( !v73 )
        {
          v118 = 0LL;
          if ( !TokenInformation || TokenInformationLength < 0x10 )
            goto LABEL_25;
          LOBYTE(v13) = PreviousMode;
          v78 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, v13, &v118);
          if ( v78 >= 0 )
          {
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              v78 = -1073741727;
            v110 = v78;
            if ( v78 >= 0 )
            {
              v79 = v118;
              v80 = (unsigned __int8)SepShouldSetDelinkFlags(*((_QWORD *)v118 + 1), *(_QWORD *)v118) != 0;
              v81 = KeGetCurrentThread();
              --v81->KernelApcDisable;
              v82 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v105, 0);
              v83 = (int *)*((_QWORD *)v79 + 1);
              v84 = Token;
              v110 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)Token + 97), v83, *(_QWORD *)v118);
              if ( v110 >= 0 && v80 )
                v84[50] |= 0x20000u;
              *((_QWORD *)v84 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v105, 0);
              ExReleaseResourceLite(v82[6]);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              SepReleaseTokenSecurityAttributesAndOperationsInformation(v118);
              v24 = v110;
              goto LABEL_49;
            }
            SepReleaseTokenSecurityAttributesAndOperationsInformation(v118);
          }
          v24 = v78;
          goto LABEL_93;
        }
        v74 = v73 - 3;
        if ( !v74 )
        {
          if ( TokenInformationLength != 4 )
            goto LABEL_25;
          v77 = *(_DWORD *)TokenInformation;
          v132 = *(_DWORD *)TokenInformation;
          if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            v25 = SeSetPrivateNameSpaceToken(v16, v77);
            goto LABEL_54;
          }
          goto LABEL_52;
        }
        if ( v74 != 3 )
          return -1073741811;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
LABEL_52:
          v24 = -1073741727;
          goto LABEL_93;
        }
        if ( TokenInformationLength != 4 )
          goto LABEL_25;
        v131 = *(_DWORD *)TokenInformation;
        if ( !v131 && ((_DWORD)v16[25] & 0x80000) != 0 )
        {
          v75 = KeGetCurrentThread();
          --v75->KernelApcDisable;
          v76 = (PERESOURCE *)Token;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v105, 0);
          *((_DWORD *)v16 + 50) &= ~0x80000u;
          *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          _InterlockedOr(v105, 0);
          ExReleaseResourceLite(v76[6]);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v16 = (PERESOURCE *)Token;
        }
        ObfDereferenceObject(v16);
        return 0;
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_25;
      v124 = *(_DWORD *)TokenInformation;
      if ( v124 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        goto LABEL_52;
      v85 = KeGetCurrentThread();
      --v85->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v105, 0);
      v66 = Token;
      v86 = *((_DWORD *)Token + 50);
      if ( v124 )
        v68 = v86 | 0x1000;
      else
        v68 = v86 & 0xFFFFEFFF;
      goto LABEL_152;
    }
    if ( TokenInformationLength < 0x10 )
      goto LABEL_25;
    v25 = SeCaptureSidAndAttributesArray(
            (char *)TokenInformation,
            1u,
            PreviousMode,
            0LL,
            0,
            (int)HandleInformation,
            v108,
            (PVOID *)&v127,
            (unsigned int *)&v125);
    v110 = v25;
    if ( v25 < 0 )
      goto LABEL_54;
    v87 = (void *)v127;
    v88 = *(unsigned __int16 **)v127;
    v89 = *(_DWORD *)(*(_QWORD *)v127 + 2LL) - *(_DWORD *)((char *)SeUntrustedMandatorySid + 2);
    if ( !v89 )
      v89 = v88[3] - *((unsigned __int16 *)SeUntrustedMandatorySid + 3);
    if ( v89 )
    {
LABEL_158:
      ObfDereferenceObject(v16);
      SeReleaseLuidAndAttributesArray(v87, PreviousMode);
      return -1073740730;
    }
    v90 = *RtlSubAuthorityCountSid(*(PSID *)v127);
    if ( (_BYTE)v90 )
    {
      v91 = *RtlSubAuthoritySid(v88, v90 - 1);
      if ( v91 > 0x4000 )
        goto LABEL_158;
    }
    else
    {
      v91 = 0;
    }
    v92 = KeGetCurrentThread();
    --v92->KernelApcDisable;
    v135 = (PERESOURCE *)Token;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
    _InterlockedOr(v105, 0);
    v93 = (char *)Token;
    TokenIntegrity = (PVOID *)SepLocateTokenIntegrity((__int64)Token);
    v128 = TokenIntegrity;
    if ( !TokenIntegrity )
    {
      v24 = -1073740730;
LABEL_194:
      _InterlockedOr(v105, 0);
      ExReleaseResourceLite(v135[6]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ObfDereferenceObject(Token);
      SeReleaseLuidAndAttributesArray((void *)v127, PreviousMode);
      return v24;
    }
    Sid = *TokenIntegrity;
    v95 = *RtlSubAuthorityCountSid(Sid);
    v96 = v95 - 1;
    if ( v95 )
      v97 = *RtlSubAuthoritySid(Sid, v96);
    else
      v97 = 0;
    if ( v91 <= v97 )
    {
      if ( v95 )
        v98 = *RtlSubAuthoritySid(Sid, v96);
      else
        v98 = 0;
      if ( v91 < v98 )
        *((_DWORD *)v93 + 50) &= ~0x1000u;
    }
    else
    {
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        v24 = -1073741727;
        goto LABEL_194;
      }
      if ( v93[204] )
      {
        v24 = -1073741525;
        goto LABEL_194;
      }
    }
    v99 = *((unsigned __int8 *)*v128 + 1);
    if ( (_BYTE)v99 )
    {
      *RtlSubAuthoritySid(*v128, v99 - 1) = v91;
      if ( v91 < 0x3000 )
      {
        *((_QWORD *)v93 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
        *((_QWORD *)v93 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
      }
      v100 = *((_DWORD *)v93 + 50);
      if ( v91 >= 0x2000 )
      {
        if ( (v100 & 0x4000) != 0 )
        {
          SepRemoveAceFromTokenDefaultDacl((__int64)v93, *((_WORD **)v93 + 98));
          *((_DWORD *)v93 + 50) &= ~0x4000u;
          v101 = (void *)*((_QWORD *)v93 + 98);
          if ( v101 )
          {
            ExFreePoolWithTag(v101, 0);
            *((_QWORD *)v93 + 98) = 0LL;
          }
          v102 = (void *)*((_QWORD *)v93 + 99);
          if ( v102 )
          {
            ExFreePoolWithTag(v102, 0);
            *((_QWORD *)v93 + 99) = 0LL;
            *((_DWORD *)v93 + 200) = 0;
            memset(v93 + 808, 0, 0x110uLL);
          }
          v103 = *((_QWORD *)v93 + 135);
          if ( v103 )
          {
            SepDereferenceLowBoxNumberEntry(*((_DWORD *)v93 + 30), v103);
            *((_QWORD *)v93 + 135) = 0LL;
          }
          v104 = *((_QWORD *)v93 + 136);
          if ( v104 )
          {
            SepDereferenceCachedHandlesEntry(*((_QWORD *)v93 + 27), v104);
            *((_QWORD *)v93 + 136) = 0LL;
          }
        }
        *((_DWORD *)v93 + 50) |= 0x2000u;
      }
      else
      {
        *((_QWORD *)v93 + 9) &= 0x202800000uLL;
        *((_QWORD *)v93 + 10) &= 0x202800000uLL;
        *((_DWORD *)v93 + 50) = v100 & 0xFFFFDFFF;
      }
      *((_QWORD *)v93 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      v24 = 0;
    }
    else
    {
      v24 = -1073741811;
    }
    goto LABEL_194;
  }
  return result;
}
