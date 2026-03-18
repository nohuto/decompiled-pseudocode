/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x14066915C
 * Callers:
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 * Callees:
 *     ObpDereferenceNamedObject @ 0x140202270 (ObpDereferenceNamedObject.c)
 *     ObpReferenceNamedObject @ 0x1402022BC (ObpReferenceNamedObject.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140203DD0 (RtlGetDaclSecurityDescriptor.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObpDeleteDirectoryEntry @ 0x140668C60 (ObpDeleteDirectoryEntry.c)
 *     ObpUnlockDirectory @ 0x14066960C (ObpUnlockDirectory.c)
 *     ObpAssignSecurity @ 0x140669694 (ObpAssignSecurity.c)
 *     ObpGrantAccess @ 0x140669830 (ObpGrantAccess.c)
 *     RtlGetControlSecurityDescriptor @ 0x140678850 (RtlGetControlSecurityDescriptor.c)
 *     ObReleaseObjectSecurityEx @ 0x140722890 (ObReleaseObjectSecurityEx.c)
 *     ObpGetObjectSecurity @ 0x1407248C0 (ObpGetObjectSecurity.c)
 *     ObpIncrementHandleCountEx @ 0x140733B40 (ObpIncrementHandleCountEx.c)
 *     ObpDecrementHandleCount @ 0x1407A2FA0 (ObpDecrementHandleCount.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 */

__int64 __fastcall ObpInsertOrLocateNamedObject(
        ULONG_PTR BugCheckParameter1,
        char *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _DWORD *a6,
        PVOID *a7)
{
  char *v11; // r13
  char *v12; // rdi
  char v13; // bl
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v15; // eax
  __int64 v16; // r9
  NTSTATUS ObjectSecurity; // ebx
  __int64 v18; // rcx
  __int64 v19; // r14
  BOOLEAN v20; // r12
  __int64 v21; // rax
  _OWORD *v22; // r10
  int v23; // eax
  __int64 v24; // rdx
  char *v26; // rdi
  __int64 v27; // r9
  int v28; // eax
  PVOID v29; // rdx
  ULONG_PTR v30; // rcx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  _QWORD *v39; // r8
  _QWORD *v40; // rcx
  BOOLEAN DaclDefaulted; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclPresent[3]; // [rsp+71h] [rbp-8Fh] BYREF
  __int16 v43; // [rsp+74h] [rbp-8Ch] BYREF
  int v44; // [rsp+78h] [rbp-88h]
  int v45; // [rsp+7Ch] [rbp-84h]
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  __int64 v47; // [rsp+88h] [rbp-78h] BYREF
  PVOID v48; // [rsp+90h] [rbp-70h]
  __int64 v49[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-58h]
  PACL Dacl; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v52; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v53; // [rsp+C0h] [rbp-40h]
  PVOID *v54; // [rsp+C8h] [rbp-38h]
  _OWORD v55[10]; // [rsp+D0h] [rbp-30h] BYREF

  v47 = a3;
  v48 = a2;
  v53 = BugCheckParameter1;
  v54 = a7;
  v43 = 0;
  DaclPresent[0] = 0;
  Object = 0LL;
  *(_OWORD *)v49 = 0LL;
  v50 = 0LL;
  memset(v55, 0, sizeof(v55));
  *a7 = 0LL;
  Dacl = 0LL;
  v11 = a2 - 48;
  if ( (*(a2 - 22) & 2) != 0 )
    v12 = &v11[-ObpInfoMaskToOffset[*(a2 - 22) & 3]];
  else
    v12 = 0LL;
  v13 = v11[27];
  CurrentSilo = PsGetCurrentSilo();
  v52 = (unsigned __int64)v11 >> 8;
  v15 = ObpLookupObjectName(
          *((_QWORD *)a6 + 1),
          (v13 & 2) == 0,
          0LL,
          *((_QWORD *)a6 + 5),
          v48,
          (__int64)CurrentSilo,
          a4,
          (__int64)v49,
          0LL,
          (__int64)&Object);
  v16 = 0LL;
  ObjectSecurity = v15;
  if ( v15 < 0 )
  {
    v30 = BugCheckParameter1;
LABEL_46:
    ObpDecrementHandleCount(v30);
    return (unsigned int)ObjectSecurity;
  }
  if ( Object != v48 )
  {
    v26 = 0LL;
    if ( v49[0] )
    {
      v26 = (char *)Object - 48;
      ObpReferenceNamedObject((__int64)Object - 48);
      if ( v49[0] )
        ObpUnlockDirectory(v49);
    }
    ObpDecrementHandleCount(BugCheckParameter1);
    if ( (*a6 & 0x80u) == 0 )
    {
      if ( v26 )
        ObpDereferenceNamedObject((__int64)v26);
      ObjectSecurity = -1073741771;
    }
    else
    {
      v28 = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(a4 + 20) = 0;
      v29 = Object;
      *(_DWORD *)(a4 + 16) = v28;
      LOBYTE(v27) = a5;
      ObjectSecurity = ObpGrantAccess(1LL, v29, a4, v27, *a6, a3);
      if ( ObjectSecurity < 0 )
      {
        if ( v26 )
          ObpDereferenceNamedObject((__int64)v26);
      }
      else
      {
        ObjectSecurity = ObpIncrementHandleCountEx(1, v47, BugCheckParameter1, (_DWORD)Object, a5, *a6, 0LL);
        if ( v26 )
          ObpDereferenceNamedObject((__int64)v26);
        if ( ObjectSecurity >= 0 )
          goto LABEL_19;
      }
    }
    ObfDereferenceObject(Object);
    return (unsigned int)ObjectSecurity;
  }
  v18 = *(_QWORD *)v12;
  v19 = 0LL;
  v47 = 0LL;
  v20 = 0;
  DaclDefaulted = 0;
  v45 = 0;
  if ( v18 )
  {
    if ( (*(_DWORD *)(v18 + 336) & 8) != 0 || ObpObjectSecurityInheritance )
      v45 = 3;
    LOBYTE(v16) = a5;
    ObjectSecurity = ObpGetObjectSecurity(v18, &v47, &DaclDefaulted, v16);
    if ( ObjectSecurity < 0 )
      goto LABEL_53;
    v19 = v47;
    v20 = DaclDefaulted;
  }
  v21 = *(_QWORD *)v12;
  LOBYTE(v18) = 0;
  v44 = v18;
  if ( v21 && ((*(_DWORD *)(v21 + 336) & 8) != 0 || ObpObjectSecurityInheritance) && *(_QWORD *)(a4 + 64) )
  {
    ObjectSecurity = RtlGetDaclSecurityDescriptor(
                       *(PSECURITY_DESCRIPTOR *)(a4 + 64),
                       DaclPresent,
                       &Dacl,
                       &DaclDefaulted);
    if ( ObjectSecurity < 0
      || (ObjectSecurity = RtlGetControlSecurityDescriptor(*(_QWORD *)(a4 + 64), &v43, &v47), ObjectSecurity < 0) )
    {
      if ( v19 )
        goto LABEL_16;
      goto LABEL_53;
    }
    if ( !Dacl && (v43 & 0x1000) == 0 )
    {
      v31 = *(_OWORD *)(a4 + 16);
      v22 = v55;
      v55[0] = *(_OWORD *)a4;
      v32 = *(_OWORD *)(a4 + 32);
      v55[1] = v31;
      v33 = *(_OWORD *)(a4 + 48);
      v55[2] = v32;
      v34 = *(_OWORD *)(a4 + 64);
      v55[3] = v33;
      v35 = *(_OWORD *)(a4 + 80);
      v55[4] = v34;
      v36 = *(_OWORD *)(a4 + 96);
      v55[5] = v35;
      v37 = *(_OWORD *)(a4 + 128);
      v55[6] = v36;
      v55[7] = *(_OWORD *)(a4 + 112);
      v38 = *(_OWORD *)(a4 + 144);
      v55[8] = v37;
      v55[9] = v38;
      LOBYTE(v18) = v44;
      *(_QWORD *)&v55[4] = 0LL;
      goto LABEL_14;
    }
    LOBYTE(v18) = v44;
  }
  v22 = (_OWORD *)a4;
LABEL_14:
  if ( !*((_QWORD *)v22 + 8) && v45 )
    LOBYTE(v18) = 1;
  v23 = ObpAssignSecurity(
          (_DWORD)v22,
          v19,
          (_DWORD)v48,
          ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v52 ^ *((char *)v48 - 24))],
          v45,
          v18);
  ObjectSecurity = v23;
  if ( v19 )
  {
LABEL_16:
    LOBYTE(v24) = v20;
    ObReleaseObjectSecurityEx(v19, v24, *(_QWORD *)v12, 0LL);
    if ( ObjectSecurity >= 0 )
      goto LABEL_17;
    goto LABEL_53;
  }
  if ( v23 < 0 )
  {
LABEL_53:
    v39 = (_QWORD *)v49[1];
    v40 = *(_QWORD **)v49[1];
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v49[1] + 8LL)
              - 48LL
              - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v49[1] + 8LL) - 48LL + 26) & 3]) = 0LL;
    *v39 = *v40;
    *v40 = 0LL;
    ObpDeleteDirectoryEntry(v40, (void **)v49);
    if ( v49[0] )
      ObpUnlockDirectory(v49);
    v30 = v53;
    goto LABEL_46;
  }
  LOBYTE(v24) = *((_BYTE *)a6 + 16);
  SeReleaseSecurityDescriptor(*((_QWORD *)a6 + 4), v24, 1LL, 0LL);
  *((_QWORD *)a6 + 4) = 0LL;
  *(_QWORD *)(a4 + 64) = 0LL;
LABEL_17:
  if ( v49[0] )
    ObpUnlockDirectory(v49);
LABEL_19:
  *v54 = Object;
  return (unsigned int)ObjectSecurity;
}
