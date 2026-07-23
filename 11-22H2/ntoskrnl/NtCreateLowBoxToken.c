/*
 * XREFs of NtCreateLowBoxToken @ 0x1407F2AC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x14022A790 (RtlEqualSid.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     RtlSubAuthoritySid @ 0x1402979B0 (RtlSubAuthoritySid.c)
 *     SepSidInTokenSidHash @ 0x1402B6650 (SepSidInTokenSidHash.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x14036FE1C (SepAppendAceToTokenDefaultDacl.c)
 *     SepLocateTokenIntegrity @ 0x140370628 (SepLocateTokenIntegrity.c)
 *     SepCaptureHandles @ 0x140370994 (SepCaptureHandles.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1406BB138 (SeReleaseLuidAndAttributesArray.c)
 *     SeReleaseSid @ 0x1406BB2A4 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406BB2CC (SeCaptureSid.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406BCC50 (SeCaptureSidAndAttributesArray.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1406BD110 (SepAppendAceToTokenObjectAcl.c)
 *     SepSetTokenCapabilities @ 0x1406BD618 (SepSetTokenCapabilities.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     SepSetTokenPackage @ 0x140714E10 (SepSetTokenPackage.c)
 *     SepFinalizeTokenAcls @ 0x14071DE50 (SepFinalizeTokenAcls.c)
 *     SepDuplicateToken @ 0x140729BF0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x14076BDA0 (ObCloseHandle.c)
 *     SeSetMandatoryPolicyToken @ 0x1407F0D88 (SeSetMandatoryPolicyToken.c)
 *     RtlIsCapabilitySid @ 0x1407F3128 (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x1407F33A4 (RtlIsPackageSid.c)
 *     RtlGetAppContainerSidType @ 0x1407F4A10 (RtlGetAppContainerSidType.c)
 *     SepCheckCreateLowBox @ 0x1407F4A84 (SepCheckCreateLowBox.c)
 *     SepSetTokenCachedHandles @ 0x1407F4B10 (SepSetTokenCachedHandles.c)
 *     SepSetTokenLowboxNumber @ 0x1407F4DBC (SepSetTokenLowboxNumber.c)
 *     SepCheckCapabilities @ 0x1409CF30C (SepCheckCapabilities.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateLowBoxToken(
        PHANDLE TokenHandle,
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PSID PackageSid,
        ULONG CapabilityCount,
        PSID_AND_ATTRIBUTES Capabilities,
        ULONG HandleCount,
        HANDLE *Handles)
{
  POBJECT_ATTRIBUTES v9; // r14
  char PreviousMode; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  HANDLE *v16; // rcx
  NTSTATUS result; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE *v20; // rdi
  NTSTATUS appended; // ebx
  ACCESS_MASK GrantedAccess; // r13d
  ULONG v23; // ebx
  PSID *v24; // rsi
  unsigned int v25; // r14d
  PSID v26; // r12
  char v27; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 TokenIntegrity; // rax
  void *v30; // rcx
  int v31; // eax
  signed __int32 v32[8]; // [rsp+0h] [rbp-E8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-C0h]
  __int64 v35; // [rsp+30h] [rbp-B8h]
  char v36; // [rsp+50h] [rbp-98h]
  char v37; // [rsp+51h] [rbp-97h]
  PVOID v38; // [rsp+58h] [rbp-90h] BYREF
  __int64 v39; // [rsp+60h] [rbp-88h] BYREF
  PSID Sid; // [rsp+68h] [rbp-80h] BYREF
  __int64 v41; // [rsp+70h] [rbp-78h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+78h] [rbp-70h] BYREF
  PVOID Token; // [rsp+80h] [rbp-68h] BYREF
  __int64 v44; // [rsp+88h] [rbp-60h] BYREF
  PVOID P; // [rsp+90h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-50h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v47; // [rsp+A0h] [rbp-48h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-40h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-30h]

  v9 = ObjectAttributes;
  v41 = 0LL;
  v44 = 0x100000000LL;
  P = 0LL;
  Sid = 0LL;
  v47 = 0LL;
  Handle = 0LL;
  v38 = 0LL;
  v37 = 0;
  v36 = 0;
  AppContainerSidType = NotAppContainerSidType;
  LOBYTE(v39) = 0;
  v48 = 0LL;
  v49 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TokenHandle < 0x7FFFFFFF0000LL )
      v14 = (__int64)TokenHandle;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = HandleCount;
    if ( v15 * 8 )
    {
      if ( ((unsigned __int8)Handles & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = &Handles[v15];
      if ( (unsigned __int64)v16 > 0x7FFFFFFF0000LL || v16 < Handles )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( !PackageSid )
    return -1073741811;
  if ( !HandleCount )
  {
    if ( !Handles )
      goto LABEL_13;
    return -1073741776;
  }
  if ( !Handles )
    return -1073741776;
LABEL_13:
  Token = 0LL;
  result = ObReferenceObjectByHandle(
             ExistingTokenHandle,
             2u,
             (POBJECT_TYPE)SeTokenObjectType,
             PreviousMode,
             &Token,
             &v47);
  if ( result < 0 )
    return result;
  result = SeCaptureSid((char *)PackageSid, PreviousMode, v18, v19, (int)Object, 1, &Sid);
  if ( result < 0 )
    return result;
  v20 = Sid;
  result = SepCheckCreateLowBox(Sid);
  appended = result;
  if ( result < 0 )
    return result;
  if ( *((_DWORD *)Token + 48) != 1 && *((int *)Token + 49) < 2 )
  {
    ObfDereferenceObject(Token);
    return -1073741659;
  }
  GrantedAccess = v47.GrantedAccess;
  if ( DesiredAccess )
    GrantedAccess = DesiredAccess;
  if ( Capabilities )
    appended = SeCaptureSidAndAttributesArray(
                 (char *)Capabilities,
                 CapabilityCount,
                 PreviousMode,
                 0LL,
                 0,
                 (int)HandleInformation,
                 v35,
                 (PVOID *)&v41,
                 (unsigned int *)&v44);
  if ( appended < 0 )
    goto LABEL_75;
  appended = SepCaptureHandles(HandleCount, (__int64)Handles, (__int64 *)&P);
  if ( appended < 0 )
    goto LABEL_75;
  if ( !RtlIsPackageSid(v20) )
    goto LABEL_74;
  if ( ((v20[1] - 8) & 0xFB) != 0 )
  {
    appended = -1073700350;
    goto LABEL_75;
  }
  v23 = 0;
  if ( CapabilityCount )
  {
    v24 = (PSID *)v41;
    while ( RtlIsCapabilitySid(*v24) )
    {
      v25 = 0;
      if ( v23 )
      {
        v26 = *v24;
        while ( !RtlEqualSid(v26, *(PSID *)(v41 + 16LL * v25)) )
        {
          if ( ++v25 >= v23 )
            goto LABEL_32;
        }
        appended = -1073741811;
        goto LABEL_75;
      }
LABEL_32:
      ++v23;
      v24 += 2;
      if ( v23 >= CapabilityCount )
      {
        v9 = ObjectAttributes;
        goto LABEL_34;
      }
    }
LABEL_74:
    appended = -1073741811;
    goto LABEL_75;
  }
LABEL_34:
  appended = RtlGetAppContainerSidType(v20, &AppContainerSidType);
  if ( appended < 0 )
  {
LABEL_75:
    v27 = v36;
    goto LABEL_56;
  }
  if ( AppContainerSidType == ChildAppContainerSidType )
  {
    appended = SepCheckCapabilities(Token, (__int64)&v39);
    if ( !(_BYTE)v39 )
    {
      appended = -1073741790;
      goto LABEL_75;
    }
  }
  if ( appended < 0 )
    goto LABEL_75;
  appended = SepDuplicateToken((__int128 *)Token, (__int64)v9, 0, 1, 0, PreviousMode, 0, (__int64 *)&v38);
  if ( appended < 0 )
    goto LABEL_75;
  v27 = 1;
  appended = SeSetMandatoryPolicyToken((__int64)v38, (_DWORD *)&v44 + 1);
  if ( appended < 0 )
    goto LABEL_56;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v38 + 6), 1u);
  _InterlockedOr(v32, 0);
  v37 = 1;
  TokenIntegrity = SepLocateTokenIntegrity((__int64)v38);
  if ( TokenIntegrity )
  {
    v30 = *(void **)TokenIntegrity;
    v31 = *(unsigned __int8 *)(*(_QWORD *)TokenIntegrity + 1LL);
    if ( (_BYTE)v31 )
      *RtlSubAuthoritySid(v30, v31 - 1) = 4096;
    *((_QWORD *)v38 + 9) &= 0x200800000uLL;
    *((_QWORD *)v38 + 10) &= 0x200800000uLL;
    *((_QWORD *)v38 + 8) &= 0x200800000uLL;
    *((_DWORD *)v38 + 50) &= ~0x2000u;
    *((_DWORD *)v38 + 50) |= 0x4000u;
  }
  else
  {
    appended = -1073740730;
  }
  v20 = Sid;
  if ( appended < 0 )
    goto LABEL_56;
  appended = SepSetTokenCapabilities((__int64)v38, Sid, (char *)v41, CapabilityCount);
  if ( appended < 0 )
    goto LABEL_56;
  appended = SepSetTokenLowboxNumber(v38, v20);
  if ( appended < 0 )
    goto LABEL_56;
  *((_QWORD *)&v48 + 1) = v20;
  appended = SepSetTokenCachedHandles(v38, &v48, HandleCount, P, Object, HandleInformation, v35);
  if ( appended < 0 )
    goto LABEL_56;
  appended = SepSetTokenPackage((__int64)v38, v20);
  if ( appended < 0 )
    goto LABEL_56;
  appended = SepAppendAceToTokenDefaultDacl((__int64)v38, v20);
  if ( appended < 0 )
    goto LABEL_56;
  if ( SepSidInTokenSidHash((_DWORD *)v38 + 202, 0LL, (unsigned __int8 *)SePermissiveLearningModeCapabilitySid, 0, 1, 0) )
  {
    _InterlockedIncrement(&SepLearningModeTokenCount);
    *((_DWORD *)v38 + 50) |= 0x3000000u;
  }
  else
  {
    *((_DWORD *)v38 + 50) &= 0xFCFFFFFF;
    if ( SepSidInTokenSidHash((_DWORD *)v38 + 202, 0LL, (unsigned __int8 *)SeLearningModeLoggingCapabilitySid, 0, 1, 0) )
    {
      _InterlockedIncrement(&SepLearningModeTokenCount);
      *((_DWORD *)v38 + 50) |= 0x1000000u;
    }
  }
  *((_QWORD *)v38 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v32, 0);
  ExReleaseResourceLite(*((PERESOURCE *)v38 + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v37 = 0;
  appended = ObInsertObjectEx((char *)v38, 0LL, GrantedAccess, 1, 0, 0LL, &Handle);
  v20 = Sid;
  if ( appended < 0 )
    goto LABEL_55;
  appended = SepAppendAceToTokenObjectAcl((__int64)v38, 983551, Sid);
  if ( appended >= 0 )
  {
    SepFinalizeTokenAcls(v38);
    ObfDereferenceObject(v38);
LABEL_55:
    v27 = 0;
  }
LABEL_56:
  if ( v37 )
  {
    if ( appended >= 0 )
      *((_QWORD *)v38 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v32, 0);
    ExReleaseResourceLite(*((PERESOURCE *)v38 + 6));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v20 = Sid;
  }
  if ( appended < 0 )
  {
    if ( v27 )
      ObfDereferenceObject(v38);
    if ( Handle )
      ObCloseHandle(Handle, PreviousMode);
  }
  if ( v41 )
    SeReleaseLuidAndAttributesArray((void *)v41, PreviousMode);
  if ( v20 )
    SeReleaseSid(v20, PreviousMode, 1);
  ObfDereferenceObject(Token);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( appended >= 0 )
    *TokenHandle = Handle;
  return appended;
}
