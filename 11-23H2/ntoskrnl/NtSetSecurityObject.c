/*
 * XREFs of NtSetSecurityObject @ 0x1407BC000
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1409BE8B4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x1409BED58 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1407119B0 (RtlGetSaclSecurityDescriptor.c)
 *     ObSetSecurityObjectByPointer @ 0x140736890 (ObSetSecurityObjectByPointer.c)
 *     SeCaptureSecurityDescriptor @ 0x140736D40 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1407375C0 (SeReleaseSecurityDescriptor.c)
 *     SeSetSecurityAccessMask @ 0x1407BC354 (SeSetSecurityAccessMask.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1407BC3E0 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1407BC4F0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepRmGlobalSaclFind @ 0x1408A6802 (SepRmGlobalSaclFind.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  unsigned int v3; // r15d
  SECURITY_INFORMATION v5; // ebx
  SECURITY_INFORMATION v6; // edx
  int v7; // ecx
  int v8; // esi
  KPROCESSOR_MODE PreviousMode; // r12
  HANDLE v10; // r10
  NTSTATUS v11; // edi
  int v12; // eax
  _QWORD *v13; // r14
  void *v14; // r13
  __int64 v15; // rdx
  PVOID v16; // r15
  PVOID v17; // r12
  int v19; // eax
  NTSTATUS SaclSecurityDescriptor; // eax
  __int64 v21; // r9
  bool v22; // al
  BOOLEAN SaclDefaulted[8]; // [rsp+70h] [rbp-19h] BYREF
  PVOID v24; // [rsp+78h] [rbp-11h] BYREF
  PVOID P; // [rsp+80h] [rbp-9h] BYREF
  PVOID Object; // [rsp+88h] [rbp-1h] BYREF
  PVOID v27; // [rsp+90h] [rbp+7h] BYREF
  PVOID v28; // [rsp+98h] [rbp+Fh] BYREF
  _WORD *v29; // [rsp+A0h] [rbp+17h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 DesiredAccess; // [rsp+100h] [rbp+77h] BYREF
  KPROCESSOR_MODE v33; // [rsp+108h] [rbp+7Fh]

  v3 = 0;
  v29 = 0LL;
  v5 = SecurityInformation;
  LODWORD(DesiredAccess) = 0;
  HandleInformation = 0LL;
  v24 = 0LL;
  P = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  if ( !SecurityDescriptor )
    return -1073741819;
  v6 = SecurityInformation & 0x80;
  v7 = v5 & 0x100;
  if ( (v5 & 0x10000) != 0 )
  {
    v19 = v5 | 0x1FF;
    v5 = v5 & 0xFFFFFE00 | 0x17F;
    if ( v6 )
      v5 = v19;
    if ( !v7 )
      v5 &= ~0x100u;
  }
  SeSetSecurityAccessMask(v5, &DesiredAccess);
  v8 = DesiredAccess;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v33 = PreviousMode;
  v11 = ObReferenceObjectByHandle(v10, DesiredAccess, 0LL, PreviousMode, &Object, &HandleInformation);
  if ( v11 < 0 )
    return v11;
  v12 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, 1, 1, &v29);
  v13 = Object;
  v11 = v12;
  if ( v12 < 0 )
  {
LABEL_37:
    ObfDereferenceObject(v13);
    return v11;
  }
  v14 = v29;
  if ( (v29[1] & 0x10) == 0 && (v5 & 0x10000) != 0 )
    v5 &= 0xFFFFFE07;
  if ( ((v5 & 1) == 0 || *((_DWORD *)v29 + 1)) && ((v5 & 2) == 0 || *((_DWORD *)v29 + 2)) )
  {
    if ( (HandleInformation.HandleAttributes & 4) == 0 )
      v8 &= 0xFFF3FFFF;
    if ( !v8 )
      goto LABEL_18;
    v11 = ObpAllocateAndQuerySecurityDescriptorInfo(Object, 8LL, 0LL, &P);
    if ( v11 < 0 )
      goto LABEL_46;
    if ( (v8 & 0xFEFFFFFF) != 0 )
    {
      LOBYTE(DesiredAccess) = 0;
      SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                                 P,
                                 (PBOOLEAN)&DesiredAccess,
                                 (PACL *)&HandleInformation,
                                 SaclDefaulted);
      v11 = SaclSecurityDescriptor;
      v22 = DesiredAccess;
      if ( !(_BYTE)DesiredAccess )
      {
        DesiredAccess = 0LL;
        LOBYTE(v21) = 1;
        v22 = (unsigned int)SepRmGlobalSaclFind(
                              &DesiredAccess,
                              0LL,
                              ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ *((_BYTE *)v13 - 24) ^ ((unsigned __int16)((_WORD)v13 - 48) >> 8))]
                            + 16,
                              v21) != -1073741772;
      }
      if ( v11 < 0 )
        goto LABEL_46;
      if ( v22 )
      {
        if ( (v8 & 0x80000) != 0 )
          v3 = v5 & 0x13;
        v15 = v3 | 4;
        if ( (v8 & 0x40000) == 0 )
          v15 = v3;
        v11 = ObpAllocateAndQuerySecurityDescriptorInfo(v13, v15, 0LL, &v24);
        if ( v11 >= 0 )
          goto LABEL_18;
LABEL_46:
        v16 = v24;
LABEL_32:
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
        SeReleaseSecurityDescriptor(v14, PreviousMode, 1);
        goto LABEL_37;
      }
      v8 &= 0xFFF3FFFF;
    }
LABEL_18:
    v16 = v24;
    if ( ((v5 & 0x40) == 0
       || ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((_BYTE *)v13 - 24) ^ ((unsigned __int16)((_WORD)v13 - 48) >> 8))) == *((_BYTE *)IoFileObjectType + 40)
       && (*(_DWORD *)(v13[1] + 52LL) & 0x10) != 0
       || (v11 = ObpAllocateAndQuerySecurityDescriptorInfo(v13, 64LL, 0LL, &v27), v11 >= 0))
      && ((v5 & 0x20) == 0
       || ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((_BYTE *)v13 - 24) ^ ((unsigned __int16)((_WORD)v13 - 48) >> 8))) == *((_BYTE *)IoFileObjectType + 40)
       && (*(_DWORD *)(v13[1] + 52LL) & 0x10) != 0
       || (v11 = ObpAllocateAndQuerySecurityDescriptorInfo(v13, 32LL, 0LL, &v28), v11 >= 0))
      && (v11 = ObSetSecurityObjectByPointer((__int64)v13, v5, (__int64)v14), v11 >= 0)
      && (v8 || (v5 & 0x20) != 0) )
    {
      v17 = v27;
      SeSecurityDescriptorChangedAuditAlarm(
        0,
        (_DWORD)v13,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v13 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v13 - 48) >> 8)]
      + 16,
        0,
        (__int64)Handle,
        0,
        v8,
        v5,
        (__int64)v16,
        (__int64)P,
        (__int64)v28,
        (__int64)v27,
        (__int64)v14);
    }
    else
    {
      v17 = v27;
    }
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    if ( v28 )
      ExFreePoolWithTag(v28, 0);
    PreviousMode = v33;
    goto LABEL_32;
  }
  SeReleaseSecurityDescriptor(v29, PreviousMode, 1);
  ObfDereferenceObject(Object);
  return -1073741703;
}
