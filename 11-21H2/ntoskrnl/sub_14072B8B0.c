/*
 * XREFs of sub_14072B8B0 @ 0x14072B8B0
 * Callers:
 *     sub_1406B4800 @ 0x1406B4800 (sub_1406B4800.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 * Callees:
 *     sub_140203B8C @ 0x140203B8C (sub_140203B8C.c)
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14020A400 @ 0x14020A400 (sub_14020A400.c)
 *     PsReleaseSiloHardReference @ 0x14020B0E0 (PsReleaseSiloHardReference.c)
 *     PsAcquireSiloHardReference @ 0x14020B190 (PsAcquireSiloHardReference.c)
 *     sub_14024011C @ 0x14024011C (sub_14024011C.c)
 *     sub_14024013C @ 0x14024013C (sub_14024013C.c)
 *     sub_14024B8BC @ 0x14024B8BC (sub_14024B8BC.c)
 *     sub_14024C714 @ 0x14024C714 (sub_14024C714.c)
 *     PsGetCurrentProcessSessionId @ 0x140287F00 (PsGetCurrentProcessSessionId.c)
 *     sub_1402A34C8 @ 0x1402A34C8 (sub_1402A34C8.c)
 *     sub_1402A38B4 @ 0x1402A38B4 (sub_1402A38B4.c)
 *     sub_1402A3A14 @ 0x1402A3A14 (sub_1402A3A14.c)
 *     sub_1402A3EAC @ 0x1402A3EAC (sub_1402A3EAC.c)
 *     IoGetSilo @ 0x1402A3FD0 (IoGetSilo.c)
 *     sub_1402A4000 @ 0x1402A4000 (sub_1402A4000.c)
 *     sub_1402A4C30 @ 0x1402A4C30 (sub_1402A4C30.c)
 *     sub_1402A4DEC @ 0x1402A4DEC (sub_1402A4DEC.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     sub_1402A70F0 @ 0x1402A70F0 (sub_1402A70F0.c)
 *     sub_1402A7190 @ 0x1402A7190 (sub_1402A7190.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     sub_1402A7720 @ 0x1402A7720 (sub_1402A7720.c)
 *     IoGetAttachedDevice @ 0x1402A78F0 (IoGetAttachedDevice.c)
 *     sub_1402A7910 @ 0x1402A7910 (sub_1402A7910.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AE1B0 @ 0x1402AE1B0 (sub_1402AE1B0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     IoSetActivityIdThread @ 0x1402DE9B0 (IoSetActivityIdThread.c)
 *     RtlGetActiveConsoleId @ 0x1402DEB60 (RtlGetActiveConsoleId.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402DF7B0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     sub_1403489B0 @ 0x1403489B0 (sub_1403489B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140417C90 @ 0x140417C90 (sub_140417C90.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140557F6C @ 0x140557F6C (sub_140557F6C.c)
 *     sub_140559190 @ 0x140559190 (sub_140559190.c)
 *     sub_14065863C @ 0x14065863C (sub_14065863C.c)
 *     sub_140661958 @ 0x140661958 (sub_140661958.c)
 *     sub_140661B8C @ 0x140661B8C (sub_140661B8C.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066EF20 (FsRtlFreeExtraCreateParameter.c)
 *     SeTokenIsAdmin @ 0x140695DA0 (SeTokenIsAdmin.c)
 *     IoGetIrpExtraCreateParameter @ 0x14069B6E0 (IoGetIrpExtraCreateParameter.c)
 *     SeAppendPrivileges @ 0x1406A8AD0 (SeAppendPrivileges.c)
 *     sub_1406B9A14 @ 0x1406B9A14 (sub_1406B9A14.c)
 *     sub_1406B9B78 @ 0x1406B9B78 (sub_1406B9B78.c)
 *     sub_1406B9CBC @ 0x1406B9CBC (sub_1406B9CBC.c)
 *     sub_1406B9DC4 @ 0x1406B9DC4 (sub_1406B9DC4.c)
 *     sub_1406B9F74 @ 0x1406B9F74 (sub_1406B9F74.c)
 *     sub_1406DF940 @ 0x1406DF940 (sub_1406DF940.c)
 *     sub_1406EACD8 @ 0x1406EACD8 (sub_1406EACD8.c)
 *     sub_14071C4C0 @ 0x14071C4C0 (sub_14071C4C0.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14071E5C0 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     sub_14071E6BC @ 0x14071E6BC (sub_14071E6BC.c)
 *     SeLockSubjectContext @ 0x140722AE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140723F40 (SeUnlockSubjectContext.c)
 *     sub_14072A9B0 @ 0x14072A9B0 (sub_14072A9B0.c)
 *     sub_14072B200 @ 0x14072B200 (sub_14072B200.c)
 *     SePrivilegeCheck @ 0x14072B5E0 (SePrivilegeCheck.c)
 *     sub_14072DDC0 @ 0x14072DDC0 (sub_14072DDC0.c)
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 *     sub_1407EF848 @ 0x1407EF848 (sub_1407EF848.c)
 *     PsGetParentSilo @ 0x1407FC3C0 (PsGetParentSilo.c)
 *     IoCancelFileOpen @ 0x140935F60 (IoCancelFileOpen.c)
 *     sub_1409369D0 @ 0x1409369D0 (sub_1409369D0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A8A8D4 @ 0x140A8A8D4 (sub_140A8A8D4.c)
 *     sub_140A8A9AC @ 0x140A8A9AC (sub_140A8A9AC.c)
 */

int __fastcall sub_14072B8B0(
        struct _DEVICE_OBJECT *BugCheckParameter2,
        POBJECT_TYPE *a2,
        struct _ACCESS_STATE *a3,
        char a4,
        int a5,
        UNICODE_STRING *a6,
        const UNICODE_STRING *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PFILE_OBJECT *a11)
{
  PDEVICE_OBJECT v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r9
  __int64 v14; // rdx
  ULONG_PTR v15; // rdi
  unsigned __int64 DeviceType; // rcx
  int result; // eax
  char v18; // dl
  bool v19; // al
  __int64 v20; // rax
  _QWORD *v21; // rax
  void *v22; // rcx
  __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  _DWORD *v25; // rax
  void *v26; // rbx
  POBJECT_TYPE *v27; // rdx
  PACCESS_STATE v28; // r10
  int RemainingDesiredAccess; // ecx
  POBJECT_TYPE *v30; // rdx
  int OriginalDesiredAccess; // ecx
  ACCESS_MASK v32; // esi
  char v33; // r11
  KPROCESSOR_MODE v34; // r14
  int v35; // edx
  char v36; // r12
  char v37; // r15
  ULONG Flags; // ecx
  int v39; // edi
  unsigned int v40; // ebx
  __int64 ClientToken; // rcx
  char v42; // al
  int v43; // ebx
  char v44; // dl
  PCUNICODE_STRING v45; // r15
  __int64 v46; // rcx
  int v47; // r8d
  int v48; // r12d
  struct _DEVICE_OBJECT *v49; // r14
  char v50; // r12
  int v51; // eax
  ULONG ActiveConsoleId; // ebx
  __int64 v53; // rax
  int v54; // ebx
  bool v55; // bl
  PACCESS_STATE v56; // r15
  PACCESS_TOKEN PrimaryToken; // rcx
  ACCESS_MASK v58; // eax
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rbx
  struct _ACCESS_STATE *v60; // rdi
  char v61; // al
  char v62; // r12
  unsigned __int16 Length; // r8
  __int64 v64; // rdx
  __int64 v65; // r12
  PDEVICE_OBJECT AttachedDevice; // rdi
  int v67; // r9d
  int v68; // r9d
  __int64 v69; // rax
  ULONG Characteristics; // ecx
  struct _ACCESS_STATE *v71; // r15
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // r13
  char v75; // dl
  __int64 v76; // r14
  int v77; // eax
  char v78; // al
  PFILE_OBJECT v79; // r15
  _QWORD *v80; // rbx
  unsigned __int64 v81; // rax
  __int64 v82; // rcx
  __int64 RelatedFileObject; // rcx
  __int64 v84; // rax
  __int64 v85; // rdx
  _DWORD *Silo; // rbx
  NTSTATUS v87; // eax
  _DWORD *v88; // rdi
  __int64 v89; // rax
  int v90; // edx
  unsigned __int16 v91; // ax
  __int64 Pool2; // rax
  __int64 v93; // r12
  unsigned __int64 v94; // r8
  wchar_t *Buffer; // rdx
  wchar_t *v96; // r9
  wchar_t *v97; // r10
  signed __int64 v98; // r9
  wchar_t *v99; // rcx
  unsigned __int16 v100; // ax
  __int64 v101; // rax
  PVOID v102; // rsi
  struct _ECP_LIST *v103; // rcx
  NTSTATUS v104; // eax
  __int64 v105; // rdx
  NTSTATUS v106; // eax
  KEVENT *p_Event; // rsi
  char v108; // dl
  _BYTE *v109; // rax
  __int64 v111; // rbx
  NTSTATUS v112; // edi
  unsigned __int8 v113; // al
  int v114; // edx
  BOOLEAN v115; // di
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v117; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v119; // r9
  int v120; // eax
  bool v121; // zf
  unsigned __int8 v122; // al
  struct _KPRCB *v123; // r10
  __int64 v124; // r9
  int v125; // eax
  NTSTATUS v126; // eax
  struct _ECP_LIST *v127; // rcx
  __int64 v128; // rsi
  int v129; // edi
  char v130; // r12
  struct _ECP_LIST *v131; // rax
  _DWORD *v132; // rbx
  unsigned __int64 v133; // rcx
  __int64 v134; // rax
  char v135; // al
  __int64 v136; // rcx
  int v137; // r8d
  char *v138; // rdx
  __int64 v139; // rax
  int v140; // ecx
  int v141; // ecx
  _WORD *v142; // rbx
  __int64 v143; // rcx
  __int64 v144; // rsi
  FSRTL_ALLOCATE_ECP_FLAGS v145; // r8d
  int v146; // ecx
  unsigned int v147; // r14d
  NTSTATUS v148; // edi
  PDEVICE_OBJECT v149; // r14
  ULONG_PTR v150; // rax
  __int64 v151; // r13
  _QWORD *v152; // rsi
  ULONG_PTR v153; // rdx
  PUNICODE_STRING v154; // rsi
  __int64 v155; // rdi
  wchar_t *v156; // rcx
  PFILE_OBJECT v157; // rcx
  PFILE_OBJECT v158; // rbx
  PVOID v159; // rcx
  int v160; // ecx
  void *v161; // rcx
  __int64 v162; // r8
  int v163; // ecx
  unsigned __int64 v164; // rax
  __int64 v165; // r10
  unsigned int v166; // ecx
  PACCESS_STATE v167; // rdi
  __int64 v168; // rbx
  __int64 v169; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  ULONG_PTR Vpb; // rcx
  __int64 v172; // rdi
  struct _FILE_OBJECT *v173; // rax
  unsigned __int64 v174; // rax
  __int64 v175; // rcx
  NTSTATUS v176; // eax
  char v177; // di
  struct _DRIVER_OBJECT *DriverObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  __int64 v180; // r14
  PFILE_OBJECT *FastIoQueryBasicInfo; // rbx
  __int64 v182; // r12
  struct _IRP *v183; // rbx
  PFAST_IO_QUERY_NETWORK_OPEN_INFO FastIoQueryNetworkOpenInfo; // r14
  __int64 v185; // rbx
  __int64 v186; // r12
  NTSTATUS v187; // eax
  ACCESS_MASK GrantedAccess; // [rsp+40h] [rbp-188h]
  NTSTATUS AccessStatus; // [rsp+60h] [rbp-168h] BYREF
  char v190; // [rsp+64h] [rbp-164h]
  int v191; // [rsp+68h] [rbp-160h]
  __int64 v192; // [rsp+70h] [rbp-158h]
  char v193; // [rsp+78h] [rbp-150h]
  char v194; // [rsp+79h] [rbp-14Fh]
  char v195[6]; // [rsp+7Ah] [rbp-14Eh] BYREF
  PACCESS_STATE AccessState; // [rsp+80h] [rbp-148h]
  PDEVICE_OBJECT v197; // [rsp+88h] [rbp-140h] BYREF
  PVOID Object; // [rsp+90h] [rbp-138h]
  PFILE_OBJECT FileObject; // [rsp+98h] [rbp-130h] BYREF
  int v200; // [rsp+A0h] [rbp-128h]
  ACCESS_MASK v201; // [rsp+A4h] [rbp-124h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+A8h] [rbp-120h]
  PPRIVILEGE_SET v203; // [rsp+B0h] [rbp-118h] BYREF
  PUNICODE_STRING AbsoluteObjectName; // [rsp+B8h] [rbp-110h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-108h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+C8h] [rbp-100h] BYREF
  __int64 v207; // [rsp+D0h] [rbp-F8h]
  char v208; // [rsp+D8h] [rbp-F0h]
  _DWORD Size[3]; // [rsp+DCh] [rbp-ECh] BYREF
  PVOID EcpContext; // [rsp+E8h] [rbp-E0h] BYREF
  PVOID P; // [rsp+F0h] [rbp-D8h]
  __int64 v212; // [rsp+F8h] [rbp-D0h]
  int v213; // [rsp+100h] [rbp-C8h]
  PFILE_OBJECT *v214; // [rsp+108h] [rbp-C0h]
  ULONG_PTR BugCheckParameter4[2]; // [rsp+110h] [rbp-B8h] BYREF
  _DWORD *v216; // [rsp+120h] [rbp-A8h] BYREF
  UNICODE_STRING ObjectTypeName; // [rsp+128h] [rbp-A0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+138h] [rbp-90h]
  __int128 v219; // [rsp+140h] [rbp-88h] BYREF
  __int64 v220; // [rsp+150h] [rbp-78h]
  __int64 v221; // [rsp+158h] [rbp-70h]
  __int64 v222; // [rsp+160h] [rbp-68h]
  _PRIVILEGE_SET Privileges; // [rsp+168h] [rbp-60h] BYREF
  __int128 v224; // [rsp+180h] [rbp-48h] BYREF

  v190 = a4;
  AccessState = a3;
  v11 = BugCheckParameter2;
  DeviceObject = BugCheckParameter2;
  AbsoluteObjectName = a6;
  SourceString = a7;
  v12 = a8;
  v192 = a8;
  v222 = a8;
  v212 = a10;
  v214 = a11;
  v201 = 0;
  AccessStatus = 0;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  v219 = 0LL;
  v220 = 0LL;
  v213 = 0;
  LOBYTE(v200) = 0;
  memset(Size, 0, sizeof(Size));
  ObjectTypeName = 0LL;
  v203 = 0LL;
  P = 0LL;
  ExtraCreateParameter = 0LL;
  if ( a2 != IoFileObjectType )
    return -1073741788;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v191) = 4;
  RtlInitUnicodeString(&ObjectTypeName, L"File");
  *a11 = 0LL;
  FileObject = 0LL;
  if ( !a8 )
    return -1073741788;
  while ( 1 )
  {
    v13 = 0x60010000110040LL;
    v14 = 0x1080020084LL;
    if ( *(_WORD *)v12 != 8 || *(_WORD *)(v12 + 2) != 224 )
      return -1073741788;
    v15 = (ULONG_PTR)v11;
    Object = v11;
    if ( *(_DWORD *)(v12 + 32) == 1 )
    {
      *(_DWORD *)(v12 + 32) = -1096154543;
      *(_QWORD *)(v12 + 40) = v11;
      *(_DWORD *)(v12 + 16) = 0;
      ObfReferenceObject(v11);
      return 0;
    }
    if ( (*(_DWORD *)(v12 + 152) & 0x10) != 0 )
    {
      DeviceType = v11->DeviceType;
      if ( *(_QWORD *)(v12 + 24) == 2684354563LL )
      {
        if ( (unsigned int)DeviceType > 0x24 || !_bittest64(&v14, DeviceType) )
          goto LABEL_10;
      }
      else
      {
        v18 = (unsigned int)DeviceType <= 0x24 && _bittest64(&v14, DeviceType);
        v19 = (unsigned int)DeviceType <= 0x36 && _bittest64(&v13, DeviceType);
        if ( !v18 && !v19 )
        {
LABEL_10:
          *(_DWORD *)(v12 + 16) = -1073741192;
          return -1073741192;
        }
        result = sub_1406EACD8(*(_BYTE *)(v12 + 152) & 8, v18, *(struct _ECP_LIST **)(v12 + 168));
        AccessStatus = result;
        if ( result < 0 )
          goto LABEL_418;
      }
    }
    v20 = *(_QWORD *)(v12 + 40);
    if ( v20 )
    {
      v15 = *(_QWORD *)(v20 + 8);
      Object = (PVOID)v15;
    }
    if ( *(_DWORD *)(v15 + 72) == 7 )
    {
      v21 = (_QWORD *)v15;
      v22 = (void *)v15;
      do
      {
        if ( v21[7] )
          break;
        v21 = (_QWORD *)v21[3];
        v22 = v21;
      }
      while ( v21 );
      if ( v22 && v22 != (void *)v15 )
      {
        *(_DWORD *)(v12 + 152) |= 2u;
        v15 = (ULONG_PTR)v22;
        Object = v22;
      }
    }
    result = sub_1402A7720(v12, v15);
    AccessStatus = result;
    if ( result < 0 )
      goto LABEL_418;
    if ( (*(_DWORD *)(*(_QWORD *)(v15 + 312) + 32LL) & 0x400) != 0 && !*(_QWORD *)(v12 + 40) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( ServerSiloServiceSessionId != (unsigned int)PsGetCurrentProcessSessionId()
        || (v12 = v192, dword_140D011AC) && (*(_DWORD *)(v192 + 64) & 0x40000) == 0 )
      {
        v25 = sub_1402A4000(v15);
        v26 = v25;
        if ( v25 )
        {
          if ( !sub_140557F6C((__int64)v25) )
          {
            ObfDereferenceObject(v26);
            sub_1402A7190(v15, 0);
            *(_DWORD *)(v192 + 16) = -1073741790;
            return -1073741790;
          }
          ObfDereferenceObject(v26);
        }
        v12 = v192;
      }
    }
    v27 = IoFileObjectType;
    v28 = AccessState;
    RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
    if ( RemainingDesiredAccess < 0 )
    {
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 19);
      AccessState->RemainingDesiredAccess = RemainingDesiredAccess;
    }
    if ( (RemainingDesiredAccess & 0x40000000) != 0 )
    {
      RemainingDesiredAccess |= *((_DWORD *)v27 + 20);
      v28->RemainingDesiredAccess = RemainingDesiredAccess;
    }
    if ( (RemainingDesiredAccess & 0x20000000) != 0 )
    {
      RemainingDesiredAccess |= *((_DWORD *)v27 + 21);
      v28->RemainingDesiredAccess = RemainingDesiredAccess;
    }
    if ( (RemainingDesiredAccess & 0x10000000) != 0 )
      RemainingDesiredAccess |= *((_DWORD *)v27 + 22);
    v28->RemainingDesiredAccess = RemainingDesiredAccess & 0xFFFFFFF;
    v30 = IoFileObjectType;
    OriginalDesiredAccess = v28->OriginalDesiredAccess;
    if ( OriginalDesiredAccess < 0 )
    {
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 19);
      v28->OriginalDesiredAccess = OriginalDesiredAccess;
    }
    if ( (OriginalDesiredAccess & 0x40000000) != 0 )
    {
      OriginalDesiredAccess |= *((_DWORD *)v30 + 20);
      v28->OriginalDesiredAccess = OriginalDesiredAccess;
    }
    if ( (OriginalDesiredAccess & 0x20000000) != 0 )
    {
      OriginalDesiredAccess |= *((_DWORD *)v30 + 21);
      v28->OriginalDesiredAccess = OriginalDesiredAccess;
    }
    if ( (OriginalDesiredAccess & 0x10000000) != 0 )
      OriginalDesiredAccess |= *((_DWORD *)v30 + 22);
    v28->OriginalDesiredAccess = OriginalDesiredAccess & 0xFFFFFFF;
    *(_OWORD *)((char *)v28->AuxData + 8) = *(_OWORD *)((char *)IoFileObjectType + 76);
    v32 = v28->RemainingDesiredAccess;
    LODWORD(v197) = v32;
    v33 = v190;
    v34 = v190 || (*(_DWORD *)(v12 + 84) & 1) != 0;
    v35 = *(_DWORD *)(v12 + 88);
    memset(&Privileges, 0, sizeof(Privileges));
    v36 = 0;
    v37 = 0;
    Flags = v28->Flags;
    if ( (Flags & 0x100) == 0 && (*(_DWORD *)(v12 + 64) & 0x4000) != 0 )
    {
      v28->Flags = Flags | 0x100;
      v39 = v32 | 0x11F01BF;
      if ( (v32 & 0x2000000) == 0 )
        v39 = v32;
      if ( ((v35 - 1) & 0xFFFFFFF9) != 0 || v35 == 7 )
      {
        v37 = 1;
        v40 = v39;
LABEL_76:
        v43 = v40 & 0x11F0116;
        if ( v43 || v37 )
        {
          Privileges.PrivilegeCount = 1;
          Privileges.Control = 1;
          Privileges.Privilege[0].Luid = stru_140D3CA70;
          Privileges.Privilege[0].Attributes = 0;
          if ( SePrivilegeCheck(&Privileges, &v28->SubjectSecurityContext, v34) )
          {
            v36 = 1;
            SeAppendPrivileges(AccessState, &Privileges);
            v28 = AccessState;
            AccessState->PreviouslyGrantedAccess |= v43;
            v28->RemainingDesiredAccess &= 0xFEE0FEE9;
            v28->Flags |= 4u;
          }
          else
          {
            v28 = AccessState;
          }
        }
        v12 = v192;
        v33 = v190;
        if ( !v36 )
          *(_DWORD *)(v192 + 64) &= ~0x4000u;
        goto LABEL_84;
      }
      v40 = v39;
      if ( (v39 & 0x11200A9) != 0 )
      {
        Privileges.PrivilegeCount = 1;
        Privileges.Control = 1;
        Privileges.Privilege[0].Luid = stru_140D3CA58;
        Privileges.Privilege[0].Attributes = 0;
        if ( !v34 )
        {
LABEL_74:
          v36 = 1;
          SeAppendPrivileges(v28, &Privileges);
          v28 = AccessState;
          AccessState->PreviouslyGrantedAccess |= v39 & 0x11200A9;
          v28->RemainingDesiredAccess &= 0xFEEDFF56;
          v40 = v39 & 0xFEEDFF56;
          v28->Flags |= 2u;
          goto LABEL_75;
        }
        ClientToken = (__int64)v28->SubjectSecurityContext.ClientToken;
        if ( ClientToken )
        {
          if ( v28->SubjectSecurityContext.ImpersonationLevel < SecurityImpersonation )
            goto LABEL_75;
        }
        else
        {
          ClientToken = (__int64)v28->SubjectSecurityContext.PrimaryToken;
        }
        v42 = sub_1402A70F0(ClientToken, (__int64)Privileges.Privilege, 1u, 1, v34);
        v28 = AccessState;
        if ( v42 )
          goto LABEL_74;
      }
LABEL_75:
      v32 = (unsigned int)v197;
      goto LABEL_76;
    }
LABEL_84:
    v44 = *(_BYTE *)(v12 + 136);
    v45 = SourceString;
    if ( v44 && !SourceString->Length || (v28->Flags & 0x100) != 0 )
      v32 |= v28->PreviouslyGrantedAccess;
    v46 = *(_QWORD *)(v12 + 40);
    LOBYTE(v47) = v200;
    if ( v46 && (*(_DWORD *)(v46 + 80) & 0x400000) != 0 )
    {
      v47 = (unsigned __int8)v200;
      if ( !SourceString->Length )
        v47 = 1;
      v200 = v47;
    }
    if ( !v33 && (*(_DWORD *)(v12 + 84) & 1) == 0 || v46 && !(_BYTE)v47 )
    {
      v48 = v191;
      v49 = (struct _DEVICE_OBJECT *)Object;
      goto LABEL_133;
    }
    v48 = v191;
    v49 = (struct _DEVICE_OBJECT *)Object;
    if ( !v44 )
    {
      v50 = v191 & 0xDF;
      v51 = *((_DWORD *)Object + 13);
      if ( !SourceString->Length )
      {
        v55 = 0;
        if ( (v51 & 0x40001) != 0 && (v32 & 0xFFEDFF7F) != 0 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
          {
            v53 = PsGetCurrentServerSilo();
            v54 = PsGetServerSiloServiceSessionId(v53);
            if ( v54 != (unsigned int)PsGetCurrentProcessSessionId() && !sub_140559190() )
              v55 = 1;
          }
        }
        v203 = 0LL;
        --*((_WORD *)CurrentThread + 242);
        ExAcquireResourceSharedLite(&Resource, 1u);
        v56 = AccessState;
        SeLockSubjectContext(&AccessState->SubjectSecurityContext);
        LOBYTE(v48) = v50 | 0x20;
        if ( !v55 )
          goto LABEL_111;
        PrimaryToken = v56->SubjectSecurityContext.ClientToken;
        if ( !PrimaryToken )
          PrimaryToken = v56->SubjectSecurityContext.PrimaryToken;
        if ( SeTokenIsAdmin(PrimaryToken) )
        {
LABEL_111:
          LOBYTE(v48) = (v48 ^ SeAccessCheck(
                                 v49->SecurityDescriptor,
                                 &v56->SubjectSecurityContext,
                                 (v48 & 0x20) != 0,
                                 v32,
                                 0,
                                 &v203,
                                 (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                 1,
                                 &v201,
                                 &AccessStatus)) & 1 ^ v48;
          v191 = v48;
          if ( v203 )
          {
            SeAppendPrivileges(v56, v203);
            SeFreePrivileges(v203);
          }
          if ( (v48 & 1) != 0 )
          {
            v58 = v201;
            v56->PreviouslyGrantedAccess |= v201;
            v56->RemainingDesiredAccess &= ~(v58 | 0x2000000);
            *(_BYTE *)(v192 + 136) = 1;
            v48 = v191;
          }
        }
        else
        {
          LOBYTE(v48) = v48 & 0xFE;
          AccessStatus = -1073741790;
        }
        SeOpenObjectAuditAlarmWithTransaction(
          &ObjectTypeName,
          v49,
          AbsoluteObjectName,
          v49->SecurityDescriptor,
          v56,
          0,
          v48 & 1,
          1,
          0LL,
          &v56->GenerateOnClose);
        ExReleaseResourceLite(&Resource);
        sub_1402AC800((__int64)CurrentThread);
        v28 = v56;
        v45 = SourceString;
        goto LABEL_128;
      }
      if ( (v51 & 0x20100) == 0x20000 || !v33 )
      {
        p_SubjectSecurityContext = &v28->SubjectSecurityContext;
      }
      else
      {
        v193 = 0;
        p_SubjectSecurityContext = &v28->SubjectSecurityContext;
        sub_1407EF848(&v28->SubjectSecurityContext);
        if ( v193 )
        {
          LOBYTE(v48) = (v50 ^ sub_14024B8BC(
                                 (__int64)v49,
                                 0LL,
                                 AccessState,
                                 v32 | 0x20,
                                 1,
                                 v203,
                                 &v201,
                                 AbsoluteObjectName,
                                 &ObjectTypeName,
                                 (__int64)CurrentThread,
                                 0)) & 1 ^ v50;
          v28 = AccessState;
LABEL_128:
          if ( (v48 & 0x20) != 0 )
            SeUnlockSubjectContext(&v28->SubjectSecurityContext);
          if ( (v48 & 1) == 0 )
            goto LABEL_180;
          v12 = v192;
          v28 = AccessState;
          v33 = v190;
          goto LABEL_133;
        }
        v28 = AccessState;
      }
      if ( (v28->Flags & 1) != 0 )
      {
        LOBYTE(v48) = v50 | 1;
      }
      else
      {
        --*((_WORD *)CurrentThread + 242);
        ExAcquireResourceSharedLite(&Resource, 1u);
        v60 = AccessState;
        LOBYTE(v48) = (v50 ^ sub_14024C714((__int64)v49->SecurityDescriptor, (__int64)AccessState, 32)) & 1 ^ v50;
        if ( (v48 & 1) == 0 )
        {
          v203 = 0LL;
          SeLockSubjectContext(p_SubjectSecurityContext);
          LOBYTE(v48) = ((v48 | 0x20) ^ SeAccessCheck(
                                          v49->SecurityDescriptor,
                                          p_SubjectSecurityContext,
                                          1u,
                                          0x20u,
                                          0,
                                          &v203,
                                          (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                          1,
                                          &v201,
                                          &AccessStatus)) & 1 ^ (v48 | 0x20);
          if ( v203 )
          {
            SeAppendPrivileges(v60, v203);
            SeFreePrivileges(v203);
          }
        }
        ExReleaseResourceLite(&Resource);
        sub_1402AC800((__int64)CurrentThread);
        v28 = v60;
      }
      goto LABEL_128;
    }
LABEL_133:
    v61 = *(_BYTE *)(v12 + 137) || *(_BYTE *)(v12 + 138) ? 64 : 0;
    v62 = v61 | v48 & 0xBF;
    Length = v45->Length;
    if ( v45->Length || (v64 = *(_QWORD *)(v12 + 40)) != 0 || (v32 & 0xFEE1FF7F) != 0 || (v62 & 0x40) != 0 )
    {
      LOBYTE(v48) = v62 & 0xF7;
      v64 = *(_QWORD *)(v12 + 40);
    }
    else
    {
      LOBYTE(v48) = v62 | 8;
    }
    v191 = v48;
    v65 = 0LL;
    v207 = 0LL;
    if ( !v64 || (*(_DWORD *)(v64 + 80) & 0x800) != 0 )
    {
      AttachedDevice = v49;
      v197 = v49;
      v68 = v191;
      if ( v49->Vpb && (v191 & 8) == 0 )
      {
        if ( (v49->Characteristics & 0x100) != 0
          && (v49->DeviceObjectExtension->ExtensionFlags & 0x800) == 0
          && (v33 || (*(_DWORD *)(v12 + 84) & 1) != 0)
          && (v64 || Length)
          && !(_BYTE)v200 )
        {
          v203 = 0LL;
          if ( !sub_14024B8BC(
                  (__int64)v49,
                  v49,
                  v28,
                  v32,
                  *(_DWORD *)(v12 + 88),
                  0LL,
                  &v201,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_180;
        }
        v69 = sub_1402A7910(v12, (ULONG_PTR)v49, (__int64)v45, &AccessStatus);
        v65 = v69;
        v207 = v69;
        if ( !v69 )
          return AccessStatus;
        AttachedDevice = *(PDEVICE_OBJECT *)(v69 + 8);
        v197 = AttachedDevice;
        v68 = v191;
      }
      if ( (*(_DWORD *)(v12 + 152) & 1) != 0 )
      {
        LOBYTE(v68) = v68 | 2;
        v191 = v68;
      }
      else if ( AttachedDevice->AttachedDevice )
      {
        AttachedDevice = IoGetAttachedDevice(AttachedDevice);
        v197 = AttachedDevice;
      }
    }
    else
    {
      AttachedDevice = DeviceObject;
      v197 = DeviceObject;
      if ( *(_QWORD *)(v64 + 16) )
      {
        v65 = *(_QWORD *)(v64 + 16);
        v207 = v65;
        if ( (v49->Characteristics & 0x100) != 0
          && (v49->DeviceObjectExtension->ExtensionFlags & 0x800) == 0
          && (v33 || (*(_DWORD *)(v12 + 84) & 1) != 0)
          && !(_BYTE)v200 )
        {
          v203 = 0LL;
          if ( !sub_14024B8BC(
                  (__int64)v49,
                  v49,
                  v28,
                  v32,
                  *(_DWORD *)(v12 + 88),
                  0LL,
                  &v201,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_180;
        }
        sub_1402A3EAC(v65, 1);
      }
      if ( (*(_DWORD *)(v12 + 152) & 1) != 0 )
      {
        if ( v65 )
        {
          AttachedDevice = *(PDEVICE_OBJECT *)(v65 + 8);
          v197 = AttachedDevice;
        }
        v67 = v191;
        LOBYTE(v67) = v191 | 2;
        v191 = v67;
      }
    }
    Characteristics = v49->Characteristics;
    if ( (Characteristics & 0x40001) == 0 || (v49->Flags & 0x600100) != 0 )
    {
      v71 = AccessState;
    }
    else
    {
      v71 = AccessState;
      if ( (Characteristics & 0x100) == 0 )
      {
        v194 = 0;
        sub_1407EF848(&AccessState->SubjectSecurityContext);
        if ( v194 )
        {
          if ( !v65 )
            goto LABEL_180;
          if ( (*(_DWORD *)(*(_QWORD *)(v65 + 8) + 48LL) & 0x20000) == 0 )
          {
            sub_1402A4C30(v65);
LABEL_180:
            sub_1402A7190((ULONG_PTR)v49, 0);
            return -1073741790;
          }
        }
      }
    }
    if ( (v191 & 2) != 0 )
      break;
LABEL_185:
    v72 = *(_DWORD *)(v12 + 152);
    if ( (v72 & 0x10) != 0 )
      *(_DWORD *)(v12 + 152) = v72 & 0xFFFFFFEF;
    if ( ((AttachedDevice->Characteristics & 0x100) != 0 || dword_140C0C62C && (v49->Characteristics & 0x100000) != 0)
      && (v190 || (*(_DWORD *)(v12 + 84) & 1) != 0)
      && (*(_QWORD *)(v12 + 40) || SourceString->Length)
      && !(_BYTE)v200 )
    {
      v203 = 0LL;
      if ( !sub_14024B8BC(
              (__int64)v49,
              AttachedDevice,
              v71,
              v32,
              *(_DWORD *)(v12 + 88),
              0LL,
              &v201,
              AbsoluteObjectName,
              &ObjectTypeName,
              (__int64)CurrentThread,
              1) )
      {
        sub_1402A7190((ULONG_PTR)v49, 0);
        if ( v65 )
          sub_1402A4C30(v65);
        return -1073741790;
      }
    }
    v73 = sub_1402AACA0((__int64)AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, 0LL);
    v74 = v73;
    if ( !v73 )
    {
      sub_1402A7190((ULONG_PTR)v49, 0);
      if ( v65 )
        sub_1402A4C30(v65);
      return -1073741670;
    }
    *(_QWORD *)(v73 + 152) = CurrentThread;
    v75 = v190;
    *(_BYTE *)(v73 + 64) = v190;
    *(_DWORD *)(v73 + 16) = 2180;
    *(_QWORD *)&v219 = a9;
    *((_QWORD *)&v219 + 1) = v71;
    LODWORD(v220) = v32;
    HIDWORD(v220) = *(_DWORD *)(v12 + 64);
    v76 = *(_QWORD *)(v73 + 184);
    *(_BYTE *)(v76 - 69) = 0;
    v77 = *(_DWORD *)(v12 + 120);
    if ( v77 )
    {
      if ( v77 == 1 )
        *(_BYTE *)(v76 - 72) = 1;
      else
        *(_BYTE *)(v76 - 72) = 19;
      *(_QWORD *)(v76 - 40) = *(_QWORD *)(v12 + 128);
    }
    else
    {
      *(_BYTE *)(v76 - 72) = 0;
      *(_DWORD *)(v76 - 40) = *(_DWORD *)(v12 + 80);
      v78 = *(_BYTE *)(v12 + 84);
      *(_BYTE *)(v76 - 70) = v78;
      if ( (a5 & 0x40) == 0 )
        *(_BYTE *)(v76 - 70) = v78 | 0x80;
    }
    *(_QWORD *)(v74 + 88) = *(_QWORD *)(v12 + 56);
    *(_QWORD *)(v74 + 24) = *(_QWORD *)(v12 + 72);
    *(_DWORD *)(v76 - 56) = *(_DWORD *)(v12 + 64) & 0xFFFFFF | (*(_DWORD *)(v12 + 88) << 24);
    *(_WORD *)(v76 - 48) = *(_WORD *)(v12 + 68);
    *(_WORD *)(v76 - 46) = *(_WORD *)(v12 + 70);
    *(_QWORD *)(v76 - 64) = &v219;
    *(_QWORD *)(v74 + 112) = *(_QWORD *)(v12 + 168);
    *(_QWORD *)(v74 + 72) = BugCheckParameter4;
    *(_QWORD *)(v74 + 8) = 0LL;
    *(_BYTE *)(v74 + 65) = 0;
    *(_BYTE *)(v74 + 68) = 0;
    *(_QWORD *)(v74 + 80) = 0LL;
    *(_QWORD *)(v74 + 104) = 0LL;
    *(_QWORD *)(v74 + 160) = 0LL;
    if ( *(_BYTE *)(v12 + 137) )
    {
      v80 = *(_QWORD **)(v12 + 144);
      memset(v80, 0, 0x110uLL);
      v79 = (PFILE_OBJECT)(v80 + 6);
      FileObject = (PFILE_OBJECT)(v80 + 6);
      *((_BYTE *)v80 + 24) = dword_140D06C0C ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v80);
      *v80 = 1LL;
      if ( (a5 & 0x40) == 0 )
        *((_DWORD *)v80 + 32) |= 0x20000u;
      *(_DWORD *)&v79->Type = 14155781;
      v12 = v192;
      v79->RelatedFileObject = *(struct _FILE_OBJECT **)(v192 + 40);
      v79->DeviceObject = (PDEVICE_OBJECT)Object;
      if ( (*(_DWORD *)(v12 + 152) & 0x20) != 0 )
      {
        if ( v190 )
        {
          if ( (AttachedDevice->Flags & 0x40000) != 0
            || (v81 = AttachedDevice->DeviceType, (unsigned int)v81 <= 0x35)
            && (v82 = 0x20000100100108LL, _bittest64(&v82, v81)) )
          {
            AccessStatus = sub_14072B200((__int64)AttachedDevice, v12, v32, (__int64)v79);
            if ( AccessStatus < 0 )
            {
LABEL_419:
              IoFreeIrp((PIRP)v74);
              sub_1402A7190((ULONG_PTR)Object, 0);
              if ( v65 )
              {
                sub_1402A4C30(v65);
                result = AccessStatus;
                *(_DWORD *)(v192 + 16) = AccessStatus;
                return result;
              }
LABEL_417:
              result = AccessStatus;
LABEL_418:
              *(_DWORD *)(v192 + 16) = result;
              return result;
            }
          }
        }
      }
      if ( !PsIsHostSilo(*(_QWORD *)(v212 + 8))
        || (RelatedFileObject = (__int64)v79->RelatedFileObject) != 0
        && (v84 = IoGetSilo(RelatedFileObject), !PsIsHostSilo(v84)) )
      {
        v216 = 0LL;
        if ( v79->RelatedFileObject && sub_14020A400(*(_QWORD *)(v212 + 8)) )
          Silo = (_DWORD *)IoGetSilo(v85);
        else
          Silo = *(_DWORD **)(v212 + 8);
        if ( !PsIsHostSilo((__int64)Silo) )
        {
          AccessStatus = PsAcquireSiloHardReference(Silo);
          if ( AccessStatus < 0 )
            goto LABEL_419;
          v87 = sub_1402A38B4((__int64)v79, 7u, 0x10u, 1, &v216, 0LL);
          AccessStatus = v87;
          if ( v87 < 0 )
          {
            PsReleaseSiloHardReference(Silo);
            v87 = AccessStatus;
          }
          v88 = v216;
          if ( v87 < 0 )
            goto LABEL_419;
          *v216 = 16;
          *((_QWORD *)v88 + 1) = Silo;
          v88[1] |= 1u;
          ObfReferenceObjectWithTag(Silo, 0x70536F49u);
        }
        v12 = v192;
        AttachedDevice = v197;
      }
    }
    else
    {
      AccessStatus = sub_14072DDC0(
                       (unsigned int)&FileObject,
                       (_DWORD)AttachedDevice,
                       (_DWORD)Object,
                       a5,
                       v75,
                       v12,
                       v212,
                       0,
                       v32);
      if ( AccessStatus < 0 )
      {
        IoFreeIrp((PIRP)v74);
        sub_1402A7190((ULONG_PTR)Object, 0);
        if ( v65 )
          sub_1402A4C30(v65);
        v157 = FileObject;
        if ( FileObject )
        {
          FileObject->DeviceObject = 0LL;
          ObfDereferenceObject(v157);
        }
        goto LABEL_417;
      }
      v79 = FileObject;
    }
    if ( (v191 & 8) != 0 )
      v79->Flags |= 0x800u;
    if ( dword_140C0959C == 1 || dword_140C0959C && sub_14065863C() )
    {
      v89 = *(_QWORD *)(v12 + 216);
      if ( (v89 & 1) != 0 )
      {
        v90 = 32;
LABEL_238:
        sub_1402A34C8((__int64)v79, v90, 1);
        goto LABEL_239;
      }
      if ( (v89 & 2) != 0 )
      {
        v90 = 64;
        goto LABEL_238;
      }
    }
LABEL_239:
    *(_QWORD *)(v74 + 192) = v79;
    *(_QWORD *)(v76 - 24) = v79;
    v91 = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( v91 >= 0x38u )
      {
        if ( v91 >= 0x78u )
        {
          if ( v91 < 0xF8u )
            v91 = 248;
        }
        else
        {
          v91 = 120;
        }
      }
      else
      {
        v91 = 56;
      }
      v79->FileName.MaximumLength = v91;
      Pool2 = ExAllocatePool2(256LL, v91, 1833856841LL);
      v79->FileName.Buffer = (wchar_t *)Pool2;
      if ( !Pool2 )
      {
        IoFreeIrp((PIRP)v74);
        sub_1402A7190((ULONG_PTR)Object, 0);
        if ( v65 )
          sub_1402A4C30(v65);
        v79->DeviceObject = 0LL;
        if ( !*(_BYTE *)(v12 + 137) )
        {
          ObfDereferenceObject(v79);
          return -1073741670;
        }
        if ( v79->FileObjectExtension )
        {
          sub_140203B8C((__int64)v79);
          return -1073741670;
        }
        return -1073741670;
      }
    }
    RtlCopyUnicodeString(&v79->FileName, SourceString);
    v93 = v192;
    if ( !*(_BYTE *)(v192 + 137) )
      goto LABEL_273;
    v195[0] = 0;
    AccessStatus = sub_14072A9B0(v192, AttachedDevice, v74, v76 - 72, v195);
    if ( AccessStatus < 0 || v195[0] )
    {
      v160 = *(_DWORD *)(v74 + 48);
      *(_DWORD *)(v93 + 16) = v160;
      *(_QWORD *)(v93 + 24) = *(_QWORD *)(v74 + 56);
      if ( v160 == 260 )
      {
        v161 = *(void **)(v74 + 160);
        if ( v161 )
        {
          ExFreePoolWithTag(v161, 0);
          *(_QWORD *)(v74 + 160) = 0LL;
          *(_QWORD *)(v93 + 40) = 0LL;
        }
      }
      if ( v79->FileName.Length )
        ExFreePoolWithTag(v79->FileName.Buffer, 0);
      if ( v79->FileObjectExtension )
        sub_140203B8C((__int64)v79);
      v159 = Object;
      goto LABEL_445;
    }
    sub_140347DB0();
    v94 = v79->FileName.Length;
    if ( (_DWORD)v94 != SourceString->Length )
      goto LABEL_260;
    Buffer = v79->FileName.Buffer;
    v96 = SourceString->Buffer;
    v97 = (wchar_t *)((char *)Buffer + v94);
    if ( v94 >= 8 )
    {
      do
      {
        if ( *(_QWORD *)Buffer != *(_QWORD *)v96 )
          break;
        LODWORD(v94) = v94 - 8;
        if ( !(_DWORD)v94 )
          goto LABEL_271;
        Buffer += 4;
        v96 += 4;
      }
      while ( (unsigned int)v94 >= 8 );
    }
    if ( Buffer < v97 )
    {
      v98 = (char *)v96 - (char *)Buffer;
      while ( *Buffer == *(wchar_t *)((char *)Buffer + v98) )
      {
        if ( ++Buffer >= v97 )
          goto LABEL_271;
      }
LABEL_260:
      v99 = v79->FileName.Buffer;
      if ( v99 )
      {
        ExFreePoolWithTag(v99, 0);
        RtlInitUnicodeString(&v79->FileName, 0LL);
      }
      v100 = SourceString->Length;
      if ( SourceString->Length )
      {
        if ( v100 >= 0x38u )
        {
          if ( v100 >= 0x78u )
          {
            if ( v100 < 0xF8u )
              v100 = 248;
          }
          else
          {
            v100 = 120;
          }
        }
        else
        {
          v100 = 56;
        }
        v79->FileName.MaximumLength = v100;
        v101 = ExAllocatePool2(256LL, v100, 1833856841LL);
        v79->FileName.Buffer = (wchar_t *)v101;
        if ( !v101 )
        {
          if ( v79->FileObjectExtension )
            sub_140203B8C((__int64)v79);
          sub_1402A7190((ULONG_PTR)Object, 0);
          if ( v207 )
            sub_1402A4C30(v207);
          IoFreeIrp((PIRP)v74);
          return -1073741670;
        }
        RtlCopyUnicodeString(&v79->FileName, SourceString);
      }
    }
LABEL_271:
    GrantedAccess = v32;
    v102 = Object;
    AccessStatus = sub_14072DDC0(
                     (unsigned int)&FileObject,
                     (_DWORD)AttachedDevice,
                     (_DWORD)Object,
                     a5,
                     v190,
                     v93,
                     v212,
                     1,
                     GrantedAccess);
    if ( AccessStatus < 0 )
    {
      v158 = FileObject;
      if ( FileObject->FileName.Length )
        ExFreePoolWithTag(FileObject->FileName.Buffer, 0);
      if ( v158->FileObjectExtension )
        sub_140203B8C((__int64)v158);
      v159 = v102;
LABEL_445:
      sub_1402A7190((ULONG_PTR)v159, 0);
      if ( v207 )
        sub_1402A4C30(v207);
      IoFreeIrp((PIRP)v74);
      return AccessStatus;
    }
    v79 = FileObject;
    *(_QWORD *)(v76 - 24) = FileObject;
    *(_QWORD *)(v74 + 192) = v79;
LABEL_273:
    if ( !*(_DWORD *)(v93 + 120) )
    {
      v103 = 0LL;
      if ( (*(_DWORD *)(v74 + 16) & 0x80) != 0 )
        v103 = *(struct _ECP_LIST **)(v74 + 112);
      v104 = -1073741811;
      if ( (*(_DWORD *)(v74 + 16) & 0x80) != 0 )
        v104 = 0;
      AccessStatus = v104;
      if ( v103 )
      {
        if ( sub_14024013C(v103, (PVOID *)&Size[1]) != -1073741275 )
        {
          v105 = sub_14024011C(*(__int64 *)&Size[1]);
          if ( !*(_WORD *)(v105 + 4) )
          {
            v106 = sub_1406B9A14(
                     (PIRP)v74,
                     (UNICODE_STRING *)v105,
                     *(_WORD *)v105,
                     AbsoluteObjectName,
                     AbsoluteObjectName->Length - SourceString->Length,
                     *(_WORD *)(v105 + 2));
            AccessStatus = v106;
            if ( v106 < 0 )
            {
              *(_DWORD *)(v74 + 48) = v106;
              *(_QWORD *)(v74 + 56) = 0LL;
              LOBYTE(v191) = v191 & 0xFB;
            }
          }
        }
      }
    }
    p_Event = &v79->Event;
    KeInitializeEvent(&v79->Event, NotificationEvent, 0);
    *(_QWORD *)(v93 + 8) = v79;
    v108 = v191;
    if ( (v191 & 4) != 0 )
    {
      sub_1402AE1B0(v74);
      if ( *(char *)(v74 + 71) >= 0 && (v109 = *(_BYTE **)(v74 + 200)) != 0LL && (*v109 & 2) != 0 )
      {
        v224 = *(_OWORD *)(*(_QWORD *)(v74 + 200) + 24LL);
        v111 = IoSetActivityIdThread((__int64)&v224);
        v112 = IofCallDriver(AttachedDevice, (PIRP)v74);
        IoSetActivityIdThread(v111);
      }
      else
      {
        v112 = IofCallDriver(AttachedDevice, (PIRP)v74);
      }
      AccessStatus = v112;
      v108 = v191;
    }
    else
    {
      v112 = AccessStatus;
    }
    if ( v112 == 259 )
    {
      v113 = v108 | 0x80;
      v114 = v108 & 0x7F;
      if ( (*((_DWORD *)KeGetCurrentThread() + 29) & 0x400) == 0 )
        v114 = v113;
      v191 = v114;
      v115 = (unsigned __int8)v114 >> 7;
      AccessStatus = KeWaitForSingleObject(&v79->Event, Executive, 0, (unsigned __int8)v114 >> 7, 0LL);
      if ( AccessStatus == 257 )
      {
        while ( 1 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          v79 = FileObject;
          if ( (*((_DWORD *)KeGetCurrentThread() + 344) & 1) != 0
            || !FileObject->Event.Header.SignalState && *(_BYTE *)(v74 + 68) )
          {
            break;
          }
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v117 = KeGetCurrentIrql();
              if ( v117 <= 0xFu && CurrentIrql <= 0xFu && v117 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v119 = *((_QWORD *)CurrentPrcb + 4375);
                v120 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v121 = (v120 & *(_DWORD *)(v119 + 20)) == 0;
                *(_DWORD *)(v119 + 20) &= v120;
                if ( v121 )
                  sub_140418E4C((__int64)CurrentPrcb);
                v79 = FileObject;
              }
            }
          }
          __writecr8(CurrentIrql);
          AccessStatus = KeWaitForSingleObject(p_Event, Executive, 0, v115, 0LL);
          if ( AccessStatus != 257 )
            goto LABEL_321;
        }
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v122 = KeGetCurrentIrql();
            if ( v122 <= 0xFu && CurrentIrql <= 0xFu && v122 >= 2u )
            {
              v123 = KeGetCurrentPrcb();
              v124 = *((_QWORD *)v123 + 4375);
              v125 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v121 = (v125 & *(_DWORD *)(v124 + 20)) == 0;
              *(_DWORD *)(v124 + 20) &= v125;
              if ( v121 )
                sub_140418E4C((__int64)v123);
              v79 = FileObject;
            }
          }
        }
        __writecr8(CurrentIrql);
        sub_140661B8C(p_Event, (PIRP)v74);
        AccessStatus = BugCheckParameter4[0];
      }
      else
      {
        v79 = FileObject;
LABEL_321:
        AccessStatus = BugCheckParameter4[0];
      }
    }
    if ( (*(_DWORD *)(v74 + 16) & 0x80u) != 0 )
    {
      v127 = *(struct _ECP_LIST **)(v74 + 112);
      ExtraCreateParameter = v127;
      v126 = 0;
    }
    else
    {
      v126 = -1073741811;
      v127 = ExtraCreateParameter;
    }
    AccessStatus = v126;
    v128 = v192;
    v129 = *(_DWORD *)(v192 + 84) & 8;
    v130 = v129 != 0;
    if ( *(_DWORD *)(v74 + 48) != 260 )
      goto LABEL_356;
    P = *(PVOID *)(v74 + 160);
    if ( v127 && sub_14024013C(v127, (PVOID *)&Size[1]) != -1073741275 )
      goto LABEL_332;
    AccessStatus = sub_1406B9CBC(
                     (PIRP)v74,
                     (__int64)v79,
                     &AbsoluteObjectName->Length,
                     AbsoluteObjectName->Length - SourceString->Length,
                     &Size[1]);
    if ( AccessStatus < 0 )
    {
      *(_QWORD *)(v74 + 56) = 0LL;
      *(_DWORD *)(v74 + 48) = AccessStatus;
LABEL_332:
      v131 = ExtraCreateParameter;
      goto LABEL_333;
    }
    v131 = ExtraCreateParameter;
    if ( !ExtraCreateParameter )
    {
      AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v74, &ExtraCreateParameter);
      goto LABEL_332;
    }
LABEL_333:
    if ( *(_DWORD *)(v74 + 48) == 260 )
    {
      v132 = P;
      if ( v129 && v131 )
        v130 = sub_1409369D0(v131, *(unsigned int *)(v74 + 56), P);
      sub_1406B9F74(v74, (__int64)v79, (__int64)v132, v130);
      v133 = *(_QWORD *)(v74 + 56) - 2684354563LL;
      if ( v133 <= 0x16 )
      {
        v134 = 4194817LL;
        if ( _bittest64(&v134, v133) )
        {
          if ( (unsigned int)sub_140417C90() && *(int *)(v74 + 48) < 0 )
            goto LABEL_354;
          v135 = 0;
          v136 = *((unsigned __int16 *)v132 + 3);
          if ( !(_WORD)v136 )
            v135 = 16;
          v137 = v191;
          LOBYTE(v137) = v135 | v191 & 0xEF;
          v138 = (char *)SourceString->Buffer - v136;
          v139 = SourceString->Length;
          v191 = v137;
          if ( (v137 & 0x10) == 0 && *(_WORD *)&v138[v139] != 58 )
            goto LABEL_354;
          v140 = *(_DWORD *)(v128 + 64);
          if ( (v140 & 0x41) != 0 || *(_BYTE *)(v76 - 72) )
            goto LABEL_354;
          if ( *v132 == -1610612733 )
            goto LABEL_352;
          if ( *v132 != -1610612724 )
            goto LABEL_354;
          if ( (int)v132[4] < 0 )
          {
LABEL_352:
            v141 = v140 | 1;
LABEL_353:
            *(_DWORD *)(v128 + 64) = v141;
          }
          else if ( (v132[4] & 0x40000000) != 0 )
          {
            v141 = v140 | 0x40;
            goto LABEL_353;
          }
LABEL_354:
          if ( !v130 )
          {
            ExFreePoolWithTag(v132, 0);
            P = 0LL;
          }
        }
      }
    }
LABEL_356:
    v12 = v128;
    if ( *(_DWORD *)(v74 + 48) || *(_DWORD *)(v128 + 120) )
    {
      v149 = v197;
      goto LABEL_377;
    }
    v142 = 0LL;
    EcpContext = 0LL;
    if ( !ExtraCreateParameter )
      goto LABEL_361;
    sub_1402A4DEC(ExtraCreateParameter, &EcpContext);
    v142 = EcpContext;
    if ( EcpContext )
    {
      if ( (*((_BYTE *)EcpContext + 2) & 1) == 0 )
        goto LABEL_370;
LABEL_361:
      if ( v142 )
        goto LABEL_368;
    }
    v143 = (__int64)v79->RelatedFileObject;
    if ( !v143 || (v144 = sub_1402A3A14(v143, 5, 0LL)) == 0 )
    {
LABEL_370:
      v148 = 0;
LABEL_371:
      if ( v142 )
      {
        sub_1406B9B78((__int64)v142);
        FsRtlFreeExtraCreateParameter(v142);
      }
      goto LABEL_373;
    }
    v146 = AbsoluteObjectName->Length + 2;
    v147 = v146 + *(unsigned __int16 *)(v144 + 16);
    if ( v147 >= 0xFFFF )
    {
      v148 = -1073741562;
      goto LABEL_371;
    }
    v148 = FsRtlAllocateExtraCreateParameterFromLookasideList(
             &EcpType,
             (unsigned __int16)(v146 + *(_WORD *)(v144 + 16)) + 32,
             v145,
             (PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK)CleanupCallback,
             &unk_140CE2900,
             &EcpContext);
    v142 = EcpContext;
    if ( v148 < 0 )
      goto LABEL_371;
    sub_1406B9DC4(
      (__int64)EcpContext,
      v147 + 32,
      AbsoluteObjectName->Buffer,
      AbsoluteObjectName->Length,
      0,
      *(void **)(v144 + 24),
      *(_WORD *)(v144 + 16),
      *(_WORD *)(v144 + 4),
      *(_WORD *)(v144 + 2),
      0LL);
    *v142 = *(_WORD *)v144 + v142[8] - *(_WORD *)(v144 + 16);
LABEL_368:
    v148 = sub_1406DF940((__int64)v79, (signed __int64)v142);
    if ( v148 < 0 )
      goto LABEL_371;
    sub_1406B9B78((__int64)v142);
    EcpContext = 0LL;
LABEL_373:
    AccessStatus = v148;
    v149 = v197;
    if ( v148 < 0 )
    {
      IoCancelFileOpen(v197, v79);
      *(_QWORD *)(v74 + 56) = 0LL;
      *(_DWORD *)(v74 + 48) = AccessStatus;
    }
    v12 = v192;
LABEL_377:
    if ( ExtraCreateParameter )
      *(_QWORD *)(v12 + 168) = ExtraCreateParameter;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v74 + 48);
    AccessStatus = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    v79->Event.Header.SignalState = 1;
    if ( (v191 & 4) != 0 )
    {
      *(_QWORD *)(v74 + 152) = CurrentThread;
      sub_1403489B0((_QWORD *)v74);
    }
    if ( (*(_BYTE *)(v74 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v74 + 24), 0);
    IoFreeIrp((PIRP)v74);
    v150 = BugCheckParameter4[1];
    *(_QWORD *)(v12 + 24) = BugCheckParameter4[1];
    if ( AccessStatus < 0 )
    {
      if ( (v79->Flags & 0x200000) != 0 )
      {
        ObfDereferenceObject(v79);
        *(_QWORD *)(v12 + 8) = 0LL;
        result = AccessStatus;
        *(_DWORD *)(v12 + 16) = AccessStatus;
      }
      else
      {
        if ( v79->FileName.Length )
        {
          ExFreePoolWithTag(v79->FileName.Buffer, 0);
          v79->FileName.Length = 0;
        }
        v79->DeviceObject = 0LL;
        ObfDereferenceObject(v79);
        sub_1402A7190((ULONG_PTR)Object, 0);
        if ( v207 )
          sub_1402A4C30(v207);
        *(_QWORD *)(v12 + 8) = 0LL;
        result = AccessStatus;
        *(_DWORD *)(v12 + 16) = AccessStatus;
      }
      return result;
    }
    if ( AccessStatus != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(v79);
      if ( v149 != RelatedDeviceObject )
      {
        Vpb = (ULONG_PTR)v79->Vpb;
        v172 = v207;
        if ( Vpb != v207 )
        {
          if ( Vpb )
            sub_1402A3EAC(Vpb, 1);
          if ( v172 )
            sub_1402A4C30(v172);
        }
      }
      if ( (v191 & 0x40) == 0 )
      {
        *v214 = v79;
        *(_DWORD *)(v12 + 32) = -1096154543;
        ObfReferenceObject(v79);
        v173 = v79->RelatedFileObject;
        if ( (!v173 || (v173->Flags & 0x400000) != 0) && !v79->FileName.Length )
        {
          v174 = RelatedDeviceObject->DeviceType;
          if ( (unsigned int)v174 <= 0x20 )
          {
            v175 = 0x100000308LL;
            if ( _bittest64(&v175, v174) )
              v79->Flags |= 0x400000u;
          }
        }
        result = BugCheckParameter4[0];
        *(_DWORD *)(v12 + 16) = BugCheckParameter4[0];
        return result;
      }
      if ( *(_BYTE *)(v12 + 137) )
      {
        if ( *(_BYTE *)(v12 + 208) )
        {
          v176 = sub_14071E6BC(
                   v79,
                   *(_DWORD *)(v12 + 200),
                   *(_DWORD *)(v12 + 204),
                   0,
                   *(struct _IRP **)(v12 + 112),
                   (_DWORD *)(v12 + 204),
                   1);
          goto LABEL_517;
        }
        v177 = 0;
        DriverObject = RelatedDeviceObject->DriverObject;
        FastIoDispatch = DriverObject->FastIoDispatch;
        if ( !*(_BYTE *)(v12 + 139) )
        {
          v180 = 0LL;
          *(_QWORD *)&Size[1] = 0LL;
          if ( FastIoDispatch )
            FastIoQueryBasicInfo = (PFILE_OBJECT *)FastIoDispatch->FastIoQueryBasicInfo;
          else
            FastIoQueryBasicInfo = 0LL;
          v214 = FastIoQueryBasicInfo;
          if ( FastIoQueryBasicInfo )
          {
            if ( (dword_140C29FC0 & 0x10) != 0 && MmIsDriverVerifying(DriverObject) )
              v180 = sub_140A8A9AC();
            v221 = v180;
            v182 = v192;
            LOBYTE(v169) = 1;
            v177 = sub_14042A5E0(v79, v169);
            v208 = v177;
            if ( v180 )
              sub_140A8A8D4(v180, FastIoQueryBasicInfo);
          }
          else
          {
            v182 = v192;
          }
          if ( v177 )
          {
            AccessStatus = BugCheckParameter4[0];
          }
          else
          {
            v183 = (struct _IRP *)ExAllocatePool2(64LL, 40LL, 538996553LL);
            *(_QWORD *)&Size[1] = v183;
            if ( v183 )
            {
              AccessStatus = sub_14071E6BC(v79, 4, 0x28u, 0, v183, Size, 1);
              if ( AccessStatus >= 0 )
                memmove(*(void **)(v182 + 96), v183, Size[0]);
              ExFreePoolWithTag(v183, 0);
            }
            else
            {
              AccessStatus = -1073741670;
            }
          }
          goto LABEL_519;
        }
        if ( FastIoDispatch )
        {
          if ( FastIoDispatch->SizeOfFastIoDispatch > 0x70 )
          {
            FastIoQueryNetworkOpenInfo = FastIoDispatch->FastIoQueryNetworkOpenInfo;
            if ( FastIoQueryNetworkOpenInfo )
            {
              if ( (dword_140C29FC0 & 0x10) != 0 && MmIsDriverVerifying(DriverObject) )
                v185 = sub_140A8A9AC();
              else
                v185 = 0LL;
              v186 = v192;
              LOBYTE(v169) = 1;
              v177 = sub_14042A5E0(v79, v169);
              if ( v185 )
                sub_140A8A8D4(v185, FastIoQueryNetworkOpenInfo);
              v12 = v186;
            }
          }
        }
        if ( !v177 )
        {
          v187 = sub_14071E6BC(v79, 34, 0x38u, 0, *(struct _IRP **)(v12 + 104), Size, 1);
          AccessStatus = v187;
          if ( v187 == -1073741811 || v187 == -1073741822 )
          {
            v176 = sub_140661958(v79, v12);
LABEL_517:
            AccessStatus = v176;
          }
        }
      }
      v182 = v192;
LABEL_519:
      *(_DWORD *)(v182 + 32) = -1096154543;
      sub_14072E9E0(0LL, v79, 1LL);
      ObfDereferenceObject(v79);
      *(_QWORD *)(v182 + 8) = 0LL;
      result = AccessStatus;
      *(_DWORD *)(v182 + 16) = AccessStatus;
      return result;
    }
    if ( (v150 & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      if ( v150 - 2684354563u > 0x16 )
        goto LABEL_389;
      v151 = 4194817LL;
      if ( !_bittest64(&v151, v150 - 2684354563u) || v130 )
        goto LABEL_389;
    }
    else
    {
      v151 = 4194817LL;
    }
    v154 = AbsoluteObjectName;
    if ( AbsoluteObjectName->MaximumLength < v79->FileName.Length )
    {
      v155 = ExAllocatePool2(256LL, v79->FileName.Length, 1665560393LL);
      if ( !v155 )
      {
        *(_DWORD *)(v192 + 16) = -1073741670;
        return -1073741670;
      }
      v156 = v154->Buffer;
      if ( v156 )
        ExFreePoolWithTag(v156, 0);
      v154->Buffer = (wchar_t *)v155;
      v154->MaximumLength = v79->FileName.Length;
    }
    RtlCopyUnicodeString(v154, &v79->FileName);
    v12 = v192;
    if ( BugCheckParameter4[1] - 2684354563u <= 0x16 && _bittest64(&v151, BugCheckParameter4[1] - 2684354563u) )
      *(_QWORD *)(v192 + 40) = 0LL;
LABEL_389:
    if ( v79->FileName.Length )
    {
      ExFreePoolWithTag(v79->FileName.Buffer, 0);
      v79->FileName.Length = 0;
    }
    v79->DeviceObject = 0LL;
    ObfDereferenceObject(v79);
    *(_QWORD *)(v12 + 8) = 0LL;
    v152 = Object;
    sub_1402A7190((ULONG_PTR)Object, 0);
    if ( v207 )
      sub_1402A4C30(v207);
    v153 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(v12 + 40) = 0LL;
      v162 = 4194817LL;
      if ( v153 - 2684354563u <= 0x16 && _bittest64(&v162, v153 - 2684354563u) )
      {
        *(_DWORD *)(v12 + 152) |= 0x10u;
        v163 = *(_DWORD *)(v12 + 152);
        v164 = *((unsigned int *)v152 + 18);
        if ( (unsigned int)v164 <= 0x24 && (v165 = 0x1080020084LL, _bittest64(&v165, v164)) )
          v166 = v163 | 8;
        else
          v166 = v163 & 0xFFFFFFF7;
        *(_DWORD *)(v12 + 152) = v166;
      }
      if ( *(_BYTE *)(v12 + 136) )
        KeBugCheckEx(0xF9u, (ULONG_PTR)v152, (ULONG_PTR)v149, (ULONG_PTR)AbsoluteObjectName, v153);
      if ( (*(_DWORD *)(v152[39] + 32LL) & 0x800) == 0 )
      {
        v167 = AccessState;
        *(_QWORD *)&AccessState->RemainingDesiredAccess = AccessState->OriginalDesiredAccess;
        v167->Flags &= ~0x100u;
      }
      if ( v153 - 2684354563u <= 0x16 && _bittest64(&v162, v153 - 2684354563u) && v130 )
      {
        *(_QWORD *)(v12 + 24) = P;
        *(_DWORD *)(v12 + 16) = -2147483603;
        return -2147483603;
      }
      else if ( v153 == 2684354585 || v153 == 2 )
      {
        v168 = v212;
        *(_QWORD *)(v168 + 8) = PsGetParentSilo(*(_QWORD *)(v212 + 8), v153, 4194817LL, -2684354563LL);
        return 872;
      }
      else
      {
        return 260;
      }
    }
    if ( (unsigned int)++v213 > 0x20 )
      return -1073741823;
    *v214 = 0LL;
    FileObject = 0LL;
    v11 = DeviceObject;
  }
  AccessStatus = sub_14071C4C0((unsigned int **)&v197, v12, (v191 & 8) != 0, SourceString);
  if ( AccessStatus >= 0 )
  {
    AttachedDevice = v197;
    goto LABEL_185;
  }
  if ( v65 )
    sub_1402A4C30(v65);
  sub_1402A7190((ULONG_PTR)v49, 0);
  return AccessStatus;
}
