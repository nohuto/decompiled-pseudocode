/*
 * XREFs of NtCreateLowBoxToken @ 0x1407F2540
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x14022A770 (RtlEqualSid.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     RtlSubAuthoritySid @ 0x140297AD0 (RtlSubAuthoritySid.c)
 *     SepSidInTokenSidHash @ 0x1402B6680 (SepSidInTokenSidHash.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x14037046C (SepAppendAceToTokenDefaultDacl.c)
 *     SepLocateTokenIntegrity @ 0x140370C78 (SepLocateTokenIntegrity.c)
 *     SepCaptureHandles @ 0x140370FE4 (SepCaptureHandles.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1406BB138 (SeReleaseLuidAndAttributesArray.c)
 *     SeReleaseSid @ 0x1406BB2A4 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406BB2CC (SeCaptureSid.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406BCC50 (SeCaptureSidAndAttributesArray.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1406BD110 (SepAppendAceToTokenObjectAcl.c)
 *     SepSetTokenCapabilities @ 0x1406BD618 (SepSetTokenCapabilities.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
 *     SepSetTokenPackage @ 0x140714D60 (SepSetTokenPackage.c)
 *     SepFinalizeTokenAcls @ 0x14071DDE0 (SepFinalizeTokenAcls.c)
 *     SepDuplicateToken @ 0x140729B80 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x1407359D0 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x14076B890 (ObCloseHandle.c)
 *     SeSetMandatoryPolicyToken @ 0x1407F0808 (SeSetMandatoryPolicyToken.c)
 *     RtlIsCapabilitySid @ 0x1407F2BA8 (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x1407F2E24 (RtlIsPackageSid.c)
 *     RtlGetAppContainerSidType @ 0x1407F43A0 (RtlGetAppContainerSidType.c)
 *     SepCheckCreateLowBox @ 0x1407F4414 (SepCheckCreateLowBox.c)
 *     SepSetTokenCachedHandles @ 0x1407F44A0 (SepSetTokenCachedHandles.c)
 *     SepSetTokenLowboxNumber @ 0x1407F474C (SepSetTokenLowboxNumber.c)
 *     SepCheckCapabilities @ 0x1409CF25C (SepCheckCapabilities.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00B60 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

int __fastcall NtCreateLowBoxToken(
        HANDLE *a1,
        void *a2,
        ACCESS_MASK a3,
        __int64 a4,
        char *Src,
        unsigned int a6,
        char *a7,
        unsigned int a8,
        unsigned __int64 a9)
{
  __int64 v9; // r14
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  int result; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE *v20; // rdi
  int AppContainerSidType; // ebx
  ACCESS_MASK GrantedAccess; // r13d
  unsigned int v23; // ebx
  _QWORD *v24; // rsi
  unsigned int v25; // r14d
  void *v26; // r12
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
  int v42; // [rsp+78h] [rbp-70h]
  PVOID Token; // [rsp+80h] [rbp-68h] BYREF
  __int64 v44; // [rsp+88h] [rbp-60h] BYREF
  PVOID P; // [rsp+90h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-50h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v47; // [rsp+A0h] [rbp-48h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-40h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-30h]

  v9 = a4;
  v41 = 0LL;
  v44 = 0x100000000LL;
  P = 0LL;
  Sid = 0LL;
  v47 = 0LL;
  Handle = 0LL;
  v38 = 0LL;
  v37 = 0;
  v36 = 0;
  v42 = 0;
  LOBYTE(v39) = 0;
  v48 = 0LL;
  v49 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a1;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = 8LL * a8;
    if ( v15 )
    {
      if ( (a9 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = a9 + v15;
      if ( v16 > 0x7FFFFFFF0000LL || v16 < a9 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( !Src )
    return -1073741811;
  if ( !a8 )
  {
    if ( !a9 )
      goto LABEL_13;
    return -1073741776;
  }
  if ( !a9 )
    return -1073741776;
LABEL_13:
  Token = 0LL;
  result = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, &v47);
  if ( result < 0 )
    return result;
  result = SeCaptureSid(Src, PreviousMode, v18, v19, (int)Object, 1, &Sid);
  if ( result < 0 )
    return result;
  v20 = Sid;
  result = SepCheckCreateLowBox(Sid);
  AppContainerSidType = result;
  if ( result < 0 )
    return result;
  if ( *((_DWORD *)Token + 48) != 1 && *((int *)Token + 49) < 2 )
  {
    ObfDereferenceObject(Token);
    return -1073741659;
  }
  GrantedAccess = v47.GrantedAccess;
  if ( a3 )
    GrantedAccess = a3;
  if ( a7 )
    AppContainerSidType = SeCaptureSidAndAttributesArray(
                            a7,
                            a6,
                            PreviousMode,
                            0LL,
                            0,
                            (int)HandleInformation,
                            v35,
                            (PVOID *)&v41,
                            (unsigned int *)&v44);
  if ( AppContainerSidType < 0 )
    goto LABEL_75;
  AppContainerSidType = SepCaptureHandles(a8, a9, (__int64 *)&P);
  if ( AppContainerSidType < 0 )
    goto LABEL_75;
  if ( !(unsigned __int8)RtlIsPackageSid(v20) )
    goto LABEL_74;
  if ( ((v20[1] - 8) & 0xFB) != 0 )
  {
    AppContainerSidType = -1073700350;
    goto LABEL_75;
  }
  v23 = 0;
  if ( a6 )
  {
    v24 = (_QWORD *)v41;
    while ( (unsigned __int8)RtlIsCapabilitySid(*v24) )
    {
      v25 = 0;
      if ( v23 )
      {
        v26 = (void *)*v24;
        while ( !RtlEqualSid(v26, *(PSID *)(v41 + 16LL * v25)) )
        {
          if ( ++v25 >= v23 )
            goto LABEL_32;
        }
        AppContainerSidType = -1073741811;
        goto LABEL_75;
      }
LABEL_32:
      ++v23;
      v24 += 2;
      if ( v23 >= a6 )
      {
        v9 = a4;
        goto LABEL_34;
      }
    }
LABEL_74:
    AppContainerSidType = -1073741811;
    goto LABEL_75;
  }
LABEL_34:
  AppContainerSidType = RtlGetAppContainerSidType(v20);
  if ( AppContainerSidType < 0 )
  {
LABEL_75:
    v27 = v36;
    goto LABEL_56;
  }
  if ( v42 == 1 )
  {
    AppContainerSidType = SepCheckCapabilities(Token, (__int64)&v39);
    if ( !(_BYTE)v39 )
    {
      AppContainerSidType = -1073741790;
      goto LABEL_75;
    }
  }
  if ( AppContainerSidType < 0 )
    goto LABEL_75;
  AppContainerSidType = SepDuplicateToken((__int128 *)Token, v9, 0, 1, 0, PreviousMode, 0, (__int64 *)&v38);
  if ( AppContainerSidType < 0 )
    goto LABEL_75;
  v27 = 1;
  AppContainerSidType = SeSetMandatoryPolicyToken((__int64)v38, (_DWORD *)&v44 + 1);
  if ( AppContainerSidType < 0 )
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
    AppContainerSidType = -1073740730;
  }
  v20 = Sid;
  if ( AppContainerSidType < 0 )
    goto LABEL_56;
  AppContainerSidType = SepSetTokenCapabilities((__int64)v38, Sid, (char *)v41, a6);
  if ( AppContainerSidType < 0 )
    goto LABEL_56;
  AppContainerSidType = SepSetTokenLowboxNumber(v38, v20);
  if ( AppContainerSidType < 0 )
    goto LABEL_56;
  *((_QWORD *)&v48 + 1) = v20;
  AppContainerSidType = SepSetTokenCachedHandles(v38, &v48, a8, P, Object, HandleInformation, v35);
  if ( AppContainerSidType < 0 )
    goto LABEL_56;
  AppContainerSidType = SepSetTokenPackage((__int64)v38, v20);
  if ( AppContainerSidType < 0 )
    goto LABEL_56;
  AppContainerSidType = SepAppendAceToTokenDefaultDacl((__int64)v38, v20);
  if ( AppContainerSidType < 0 )
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
  AppContainerSidType = ObInsertObjectEx((char *)v38, 0LL, GrantedAccess, 1, 0, 0LL, &Handle);
  v20 = Sid;
  if ( AppContainerSidType < 0 )
    goto LABEL_55;
  AppContainerSidType = SepAppendAceToTokenObjectAcl((__int64)v38, 983551, Sid);
  if ( AppContainerSidType >= 0 )
  {
    SepFinalizeTokenAcls(v38);
    ObfDereferenceObject(v38);
LABEL_55:
    v27 = 0;
  }
LABEL_56:
  if ( v37 )
  {
    if ( AppContainerSidType >= 0 )
      *((_QWORD *)v38 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v32, 0);
    ExReleaseResourceLite(*((PERESOURCE *)v38 + 6));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v20 = Sid;
  }
  if ( AppContainerSidType < 0 )
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
  if ( AppContainerSidType >= 0 )
    *a1 = Handle;
  return AppContainerSidType;
}
