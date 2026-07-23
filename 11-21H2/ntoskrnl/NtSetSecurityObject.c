/*
 * XREFs of NtSetSecurityObject @ 0x1406B57C0
 * Callers:
 *     sub_1407F8298 @ 0x1407F8298 (sub_1407F8298.c)
 *     sub_1409BB4D8 @ 0x1409BB4D8 (sub_1409BB4D8.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14066FE80 (RtlGetSaclSecurityDescriptor.c)
 *     sub_1406B5B10 @ 0x1406B5B10 (sub_1406B5B10.c)
 *     sub_1406B5B9C @ 0x1406B5B9C (sub_1406B5B9C.c)
 *     sub_1406B5E34 @ 0x1406B5E34 (sub_1406B5E34.c)
 *     ObSetSecurityObjectByPointer @ 0x140724D30 (ObSetSecurityObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1407B3DD0 (SeCaptureSecurityDescriptor.c)
 *     sub_140882B96 @ 0x140882B96 (sub_140882B96.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  int v3; // r14d
  SECURITY_INFORMATION v4; // ebx
  SECURITY_INFORMATION v5; // edx
  int v6; // ecx
  int v7; // esi
  KPROCESSOR_MODE v8; // r15
  HANDLE v9; // r10
  int v10; // edx
  int v11; // edi
  int v12; // r9d
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // r14
  __int64 v17; // r13
  __int64 v18; // rdx
  PVOID v19; // r12
  PVOID v20; // r15
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rdx
  int v26; // eax
  unsigned int v27; // r15d
  NTSTATUS SaclSecurityDescriptor; // eax
  bool v29; // al
  BOOLEAN SaclDefaulted[8]; // [rsp+70h] [rbp-19h] BYREF
  PVOID SecurityDescriptora; // [rsp+78h] [rbp-11h] BYREF
  PVOID v32; // [rsp+80h] [rbp-9h] BYREF
  PVOID Object; // [rsp+88h] [rbp-1h] BYREF
  PVOID v34; // [rsp+90h] [rbp+7h] BYREF
  PVOID P; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v36; // [rsp+A0h] [rbp+17h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 DesiredAccess; // [rsp+100h] [rbp+77h] BYREF
  KPROCESSOR_MODE v40; // [rsp+108h] [rbp+7Fh]

  v3 = (int)SecurityDescriptor;
  v36 = 0LL;
  v4 = SecurityInformation;
  LODWORD(DesiredAccess) = 0;
  HandleInformation = 0LL;
  v32 = 0LL;
  SecurityDescriptora = 0LL;
  P = 0LL;
  v34 = 0LL;
  if ( !SecurityDescriptor )
    return -1073741819;
  v5 = SecurityInformation & 0x80;
  v6 = v4 & 0x100;
  if ( (v4 & 0x10000) != 0 )
  {
    v26 = v4 | 0x1FF;
    v4 = v4 & 0xFFFFFE00 | 0x17F;
    if ( v5 )
      v4 = v26;
    if ( !v6 )
      v4 &= ~0x100u;
  }
  sub_1406B5B10(v4, &DesiredAccess);
  v7 = DesiredAccess;
  Object = 0LL;
  v8 = *((_BYTE *)KeGetCurrentThread() + 562);
  v40 = v8;
  v11 = ObReferenceObjectByHandle(v9, DesiredAccess, 0LL, v8, &Object, &HandleInformation);
  if ( v11 < 0 )
    return v11;
  LOBYTE(v12) = 1;
  LOBYTE(v10) = v8;
  v13 = SeCaptureSecurityDescriptor(v3, v10, 1, v12, (__int64)&v36);
  v16 = Object;
  v11 = v13;
  if ( v13 < 0 )
  {
LABEL_30:
    ObfDereferenceObject(v16);
    return v11;
  }
  v17 = v36;
  v18 = 4LL;
  if ( (*(_WORD *)(v36 + 2) & 0x10) == 0 && (v4 & 0x10000) != 0 )
    v4 &= 0xFFFFFE07;
  if ( ((v4 & 1) == 0 || *(_DWORD *)(v36 + 4)) && ((v4 & 2) == 0 || *(_DWORD *)(v36 + 8)) )
  {
    if ( (HandleInformation.HandleAttributes & 4) == 0 )
      v7 &= 0xFFF3FFFF;
    if ( !v7 )
      goto LABEL_12;
    v11 = sub_1406B5E34(Object, 8LL, 0LL, &SecurityDescriptora);
    if ( v11 < 0 )
    {
      v20 = v32;
      v19 = SecurityDescriptora;
    }
    else
    {
      if ( (v7 & 0xFEFFFFFF) == 0 )
      {
LABEL_12:
        v19 = SecurityDescriptora;
        goto LABEL_13;
      }
      LOBYTE(DesiredAccess) = 0;
      v27 = 0;
      v19 = SecurityDescriptora;
      SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                                 SecurityDescriptora,
                                 (PBOOLEAN)&DesiredAccess,
                                 (PACL *)&HandleInformation,
                                 SaclDefaulted);
      v11 = SaclSecurityDescriptor;
      v29 = DesiredAccess;
      if ( !(_BYTE)DesiredAccess )
      {
        DesiredAccess = 0LL;
        LOBYTE(v23) = 1;
        v29 = (unsigned int)sub_140882B96(
                              &DesiredAccess,
                              0LL,
                              qword_140D07490[(unsigned __int8)(dword_140D06C0C ^ *((_BYTE *)v16 - 24) ^ ((unsigned __int16)((_WORD)v16 - 48) >> 8))]
                            + 16,
                              v23) != -1073741772;
      }
      if ( v11 >= 0 )
      {
        if ( !v29 )
        {
          v7 &= 0xFFF3FFFF;
LABEL_13:
          v20 = v32;
          if ( (v4 & 0x40) == 0
            || ((unsigned __int8)dword_140D06C0C ^ (unsigned __int8)(*((_BYTE *)v16 - 24) ^ ((unsigned __int16)((_WORD)v16 - 48) >> 8))) == *((_BYTE *)IoFileObjectType + 40)
            && (*(_DWORD *)(v16[1] + 52LL) & 0x10) != 0
            || (v11 = sub_1406B5E34(v16, 64LL, 0LL, &v34), v11 >= 0) )
          {
            if ( (LODWORD(DesiredAccess) = v4 & 0x20, (v4 & 0x20) == 0)
              || ((unsigned __int8)dword_140D06C0C ^ (unsigned __int8)(*((_BYTE *)v16 - 24) ^ ((unsigned __int16)((_WORD)v16 - 48) >> 8))) == *((_BYTE *)IoFileObjectType + 40)
              && (*(_DWORD *)(v16[1] + 52LL) & 0x10) != 0
              || (v11 = sub_1406B5E34(v16, 32LL, 0LL, &P), v11 >= 0) )
            {
              v11 = ObSetSecurityObjectByPointer(v16, v4, v17);
              if ( v11 >= 0 && (v7 || (_DWORD)DesiredAccess) )
                sub_1406B5B9C(
                  0,
                  (_DWORD)v16,
                  LODWORD(qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *((unsigned __int8 *)v16 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v16 - 48) >> 8)])
                + 16,
                  0,
                  (__int64)Handle,
                  0,
                  v7,
                  v4,
                  (__int64)v20,
                  (__int64)v19,
                  (__int64)P,
                  (__int64)v34,
                  v17);
            }
          }
          if ( v34 )
            ExFreePoolWithTag(v34, 0);
          if ( P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_25;
        }
        if ( (v7 & 0x80000) != 0 )
          v27 = v4 & 0x13;
        v25 = v27 | 4;
        if ( (v7 & 0x40000) == 0 )
          v25 = v27;
        v11 = sub_1406B5E34(v16, v25, 0LL, &v32);
        if ( v11 >= 0 )
          goto LABEL_13;
      }
      v20 = v32;
    }
LABEL_25:
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    LOBYTE(v21) = v40;
    LOBYTE(v22) = 1;
    SeReleaseSecurityDescriptor(v17, v21, v22, v23);
    goto LABEL_30;
  }
  LOBYTE(v14) = 1;
  LOBYTE(v18) = v8;
  SeReleaseSecurityDescriptor(v36, v18, v14, v15);
  ObfDereferenceObject(Object);
  return -1073741703;
}
