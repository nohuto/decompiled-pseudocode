/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x1406C0AEC
 * Callers:
 *     ObpCreateHandle @ 0x1406E4540 (ObpCreateHandle.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14022E310 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     RtlGetDaclSecurityDescriptor @ 0x1402978D0 (RtlGetDaclSecurityDescriptor.c)
 *     ObpReferenceNamedObject @ 0x14035C128 (ObpReferenceNamedObject.c)
 *     ObpDereferenceNamedObject @ 0x14035C168 (ObpDereferenceNamedObject.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObpDeleteDirectoryEntry @ 0x140697854 (ObpDeleteDirectoryEntry.c)
 *     RtlGetControlSecurityDescriptor @ 0x14069E2C0 (RtlGetControlSecurityDescriptor.c)
 *     ObReleaseObjectSecurityEx @ 0x1406C30E0 (ObReleaseObjectSecurityEx.c)
 *     ObpUnlockDirectory @ 0x1406C3278 (ObpUnlockDirectory.c)
 *     ObpIncrementHandleCountEx @ 0x1406E7090 (ObpIncrementHandleCountEx.c)
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 *     ObpGetObjectSecurity @ 0x140736410 (ObpGetObjectSecurity.c)
 *     SeReleaseSecurityDescriptor @ 0x1407375C0 (SeReleaseSecurityDescriptor.c)
 *     ObpDecrementHandleCount @ 0x140740144 (ObpDecrementHandleCount.c)
 *     ObpGrantAccess @ 0x1407B64C4 (ObpGrantAccess.c)
 *     ObpAssignSecurity @ 0x1407BC9C0 (ObpAssignSecurity.c)
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
  ULONG_PTR v9; // r12
  char *v11; // r13
  char *v12; // rdi
  char v13; // bl
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v15; // eax
  __int64 v16; // r9
  NTSTATUS ObjectSecurity; // ebx
  __int64 v18; // rcx
  __int64 v19; // r14
  char v20; // r12
  _OWORD *v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  char *v25; // rdi
  __int64 v26; // r9
  int v27; // eax
  PVOID v28; // rdx
  void *v29; // rcx
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  _QWORD *v38; // r8
  _QWORD *v39; // rcx
  int v40; // [rsp+28h] [rbp-D8h]
  char v41; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclPresent[3]; // [rsp+71h] [rbp-8Fh] BYREF
  WORD Control; // [rsp+74h] [rbp-8Ch] BYREF
  BOOLEAN DaclDefaulted[4]; // [rsp+78h] [rbp-88h] BYREF
  int v45; // [rsp+7Ch] [rbp-84h]
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  ULONG Revision[2]; // [rsp+88h] [rbp-78h] BYREF
  PVOID v48; // [rsp+90h] [rbp-70h]
  ULONG_PTR v49; // [rsp+98h] [rbp-68h]
  __int64 v50[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-50h]
  PACL Dacl; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v53; // [rsp+C0h] [rbp-40h]
  PVOID *v54; // [rsp+C8h] [rbp-38h]
  _OWORD v55[10]; // [rsp+D0h] [rbp-30h] BYREF

  *(_QWORD *)Revision = a3;
  v48 = a2;
  v9 = BugCheckParameter1;
  v49 = BugCheckParameter1;
  v54 = a7;
  Control = 0;
  DaclPresent[0] = 0;
  Object = 0LL;
  *(_OWORD *)v50 = 0LL;
  v51 = 0LL;
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
  v53 = (unsigned __int64)v11 >> 8;
  v15 = ObpLookupObjectName(
          *((_QWORD *)a6 + 1),
          (v13 & 2) == 0,
          0,
          *((_QWORD *)a6 + 5),
          v48,
          (__int64)CurrentSilo,
          a4,
          (__int64)v50,
          0LL,
          (__int64)&Object);
  v16 = 0LL;
  ObjectSecurity = v15;
  if ( v15 < 0 )
  {
LABEL_46:
    ObpDecrementHandleCount(v9);
    return (unsigned int)ObjectSecurity;
  }
  if ( Object != v48 )
  {
    v25 = 0LL;
    if ( v50[0] )
    {
      v25 = (char *)Object - 48;
      ObpReferenceNamedObject((__int64)Object - 48);
      if ( v50[0] )
        ObpUnlockDirectory(v50);
    }
    ObpDecrementHandleCount(v9);
    if ( (*a6 & 0x80u) == 0 )
    {
      if ( v25 )
        ObpDereferenceNamedObject((__int64)v25);
      ObjectSecurity = -1073741771;
    }
    else
    {
      v27 = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(a4 + 20) = 0;
      v28 = Object;
      *(_DWORD *)(a4 + 16) = v27;
      LOBYTE(v26) = a5;
      ObjectSecurity = ObpGrantAccess(1LL, v28, a4, v26, *a6, a3);
      if ( ObjectSecurity < 0 )
      {
        if ( v25 )
          ObpDereferenceNamedObject((__int64)v25);
      }
      else
      {
        ObjectSecurity = ObpIncrementHandleCountEx(1, Revision[0], v9, (_DWORD)Object, a5, *a6, 0LL);
        if ( v25 )
          ObpDereferenceNamedObject((__int64)v25);
        if ( ObjectSecurity >= 0 )
          goto LABEL_19;
      }
    }
    ObfDereferenceObject(Object);
    return (unsigned int)ObjectSecurity;
  }
  v18 = *(_QWORD *)v12;
  v19 = 0LL;
  *(_QWORD *)Revision = 0LL;
  v41 = 0;
  v45 = 0;
  if ( v18 )
  {
    if ( (*(_DWORD *)(v18 + 336) & 8) != 0 || ObpObjectSecurityInheritance )
      v45 = 3;
    LOBYTE(v16) = a5;
    ObjectSecurity = ObpGetObjectSecurity(v18, Revision, &v41, v16);
    if ( ObjectSecurity < 0 )
      goto LABEL_53;
    v19 = *(_QWORD *)Revision;
  }
  v20 = 0;
  if ( !*(_QWORD *)v12 || (*(_DWORD *)(*(_QWORD *)v12 + 336LL) & 8) == 0 && !ObpObjectSecurityInheritance )
    goto LABEL_13;
  v29 = *(void **)(a4 + 64);
  if ( !v29 )
    goto LABEL_13;
  ObjectSecurity = RtlGetDaclSecurityDescriptor(v29, DaclPresent, &Dacl, DaclDefaulted);
  if ( ObjectSecurity < 0
    || (ObjectSecurity = RtlGetControlSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a4 + 64), &Control, Revision),
        ObjectSecurity < 0) )
  {
    if ( v19 )
      goto LABEL_16;
    goto LABEL_49;
  }
  if ( !Dacl && (Control & 0x1000) == 0 )
  {
    v30 = *(_OWORD *)(a4 + 16);
    v55[0] = *(_OWORD *)a4;
    v31 = *(_OWORD *)(a4 + 32);
    v55[1] = v30;
    v32 = *(_OWORD *)(a4 + 48);
    v55[2] = v31;
    v33 = *(_OWORD *)(a4 + 64);
    v55[3] = v32;
    v34 = *(_OWORD *)(a4 + 80);
    v55[4] = v33;
    v35 = *(_OWORD *)(a4 + 96);
    v55[5] = v34;
    v36 = *(_OWORD *)(a4 + 128);
    v55[6] = v35;
    v55[7] = *(_OWORD *)(a4 + 112);
    v37 = *(_OWORD *)(a4 + 144);
    v55[8] = v36;
    v55[9] = v37;
    *(_QWORD *)&v55[4] = 0LL;
    v21 = v55;
  }
  else
  {
LABEL_13:
    v21 = (_OWORD *)a4;
  }
  if ( !*((_QWORD *)v21 + 8) && v45 )
    v20 = 1;
  LOBYTE(v40) = v20;
  v22 = ObpAssignSecurity(v21, v19, v48, ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v11[24] ^ v53)], v45, v40);
  ObjectSecurity = v22;
  if ( v19 )
  {
LABEL_16:
    LOBYTE(v23) = v41;
    ObReleaseObjectSecurityEx(v19, v23, *(_QWORD *)v12);
    if ( ObjectSecurity >= 0 )
      goto LABEL_17;
    goto LABEL_49;
  }
  if ( v22 < 0 )
  {
LABEL_49:
    v9 = v49;
LABEL_53:
    v38 = (_QWORD *)v50[1];
    v39 = *(_QWORD **)v50[1];
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[1] + 8LL)
              - 48LL
              - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v50[1] + 8LL) - 48LL + 26) & 3]) = 0LL;
    *v38 = *v39;
    *v39 = 0LL;
    ObpDeleteDirectoryEntry(v39, (void **)v50);
    if ( v50[0] )
      ObpUnlockDirectory(v50);
    goto LABEL_46;
  }
  LOBYTE(v23) = *((_BYTE *)a6 + 16);
  SeReleaseSecurityDescriptor(*((_QWORD *)a6 + 4), v23, 1LL, 0LL);
  *((_QWORD *)a6 + 4) = 0LL;
  *(_QWORD *)(a4 + 64) = 0LL;
LABEL_17:
  if ( v50[0] )
    ObpUnlockDirectory(v50);
LABEL_19:
  *v54 = Object;
  return (unsigned int)ObjectSecurity;
}
