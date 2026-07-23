/*
 * XREFs of IopParseDevice @ 0x14072CF50
 * Callers:
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 *     IopParseFile @ 0x1407BBF10 (IopParseFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     MmIsDriverVerifying @ 0x14020A570 (MmIsDriverVerifying.c)
 *     PsIsServerSilo @ 0x14020C020 (PsIsServerSilo.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     IopQueueThreadIrp @ 0x14022EE70 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x14022F000 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x14022F080 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     SeAccessCheck @ 0x140231720 (SeAccessCheck.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 *     PsGetCurrentProcessSessionId @ 0x1402A2070 (PsGetCurrentProcessSessionId.c)
 *     RtlCopyUnicodeString @ 0x1402AF260 (RtlCopyUnicodeString.c)
 *     IopCheckDeviceAndDriver @ 0x1402AF2E0 (IopCheckDeviceAndDriver.c)
 *     IoFreeIrp @ 0x1402AF4A0 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x1402AF6A0 (IoGetAttachedDevice.c)
 *     IopCheckVpbMounted @ 0x1402AF6D0 (IopCheckVpbMounted.c)
 *     SepPrivilegeCheck @ 0x1402AF920 (SepPrivilegeCheck.c)
 *     IopDequeueIrpFromThread @ 0x1402AF9C0 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     PsIsHostSilo @ 0x1402AFB90 (PsIsHostSilo.c)
 *     IopDecrementDeviceObjectRef @ 0x1402B0040 (IopDecrementDeviceObjectRef.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     IopDeleteFileObjectExtension @ 0x1402BBAA0 (IopDeleteFileObjectExtension.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402C0B10 (PsGetServerSiloServiceSessionId.c)
 *     IopSymlinkGetECP @ 0x1402FDB40 (IopSymlinkGetECP.c)
 *     IopSymlinkRemoveECP @ 0x1402FDB64 (IopSymlinkRemoveECP.c)
 *     IopGetSetSpecificExtension @ 0x1403017F8 (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x14030192C (IopGetFileObjectExtension.c)
 *     IopIncrementVpbRefCount @ 0x140302A10 (IopIncrementVpbRefCount.c)
 *     IopGetDevicePDO @ 0x140302C48 (IopGetDevicePDO.c)
 *     IopSetFileObjectExtensionFlag @ 0x140302D9C (IopSetFileObjectExtensionFlag.c)
 *     IoGetSilo @ 0x140302DE0 (IoGetSilo.c)
 *     IopDereferenceVpbAndFree @ 0x14031A1E0 (IopDereferenceVpbAndFree.c)
 *     IoSetActivityIdThread @ 0x14031E900 (IoSetActivityIdThread.c)
 *     PsReleaseSiloHardReference @ 0x1403546F0 (PsReleaseSiloHardReference.c)
 *     IopCreateSecurityCheck @ 0x14035A8EC (IopCreateSecurityCheck.c)
 *     RtlGetActiveConsoleId @ 0x14035EE60 (RtlGetActiveConsoleId.c)
 *     PsAcquireSiloHardReference @ 0x1403664F0 (PsAcquireSiloHardReference.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IopCheckSessionDeviceAccess @ 0x140557CE8 (IopCheckSessionDeviceAccess.c)
 *     IopAllowRemoteDASD @ 0x140559284 (IopAllowRemoteDASD.c)
 *     SeFastTraverseCheck @ 0x1405B7E64 (SeFastTraverseCheck.c)
 *     PsGetParentSilo @ 0x1406831E0 (PsGetParentSilo.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0560 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeUnlockSubjectContext @ 0x1406C3160 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406C31A0 (SeLockSubjectContext.c)
 *     RtlEqualUnicodeString @ 0x1406DA320 (RtlEqualUnicodeString.c)
 *     IopAllocRealFileObject @ 0x14072F500 (IopAllocRealFileObject.c)
 *     IopCloseFile @ 0x1407301F0 (IopCloseFile.c)
 *     IopRetrieveTransactionParameters @ 0x1407308F0 (IopRetrieveTransactionParameters.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140739F60 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14073E310 (FsRtlFreeExtraCreateParameter.c)
 *     IopQueryXxxInformation @ 0x14075D47C (IopQueryXxxInformation.c)
 *     IoGetIrpExtraCreateParameter @ 0x140765520 (IoGetIrpExtraCreateParameter.c)
 *     IopCheckTopDeviceHint @ 0x140767D68 (IopCheckTopDeviceHint.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407A5DD0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     IopQueryInformation @ 0x1407ABAF0 (IopQueryInformation.c)
 *     SeAppendPrivileges @ 0x1407B66C0 (SeAppendPrivileges.c)
 *     IopSymlinkCreateECP @ 0x1407CDA94 (IopSymlinkCreateECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1407CDC68 (IopSymlinkInitializeSymlinkInfo.c)
 *     SeTokenIsAdmin @ 0x1407D0770 (SeTokenIsAdmin.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1407D96F8 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkProcessReparse @ 0x1407DFCEC (IopSymlinkProcessReparse.c)
 *     IopSymlinkUpdateECP @ 0x14088099C (IopSymlinkUpdateECP.c)
 *     IopSymlinkSetFoExtension @ 0x140881590 (IopSymlinkSetFoExtension.c)
 *     IopCancelAlertedRequest @ 0x14094457C (IopCancelAlertedRequest.c)
 *     IoCancelFileOpen @ 0x140946F00 (IoCancelFileOpen.c)
 *     IopCheckAndUpdateStopOnSymlinkEcp @ 0x140947AA4 (IopCheckAndUpdateStopOnSymlinkEcp.c)
 *     IopGetNetworkOpenInformation @ 0x140948230 (IopGetNetworkOpenInformation.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x140949004 (IopSymlinkEnforceEnabledTypes.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140ACB224 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140ACB2FC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopParseDevice(
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
  PDEVICE_OBJECT v11; // rbx
  __int64 v12; // r12
  __int64 v13; // r9
  __int64 v14; // rdx
  ULONG_PTR v15; // rdi
  unsigned __int64 DeviceType; // rcx
  __int64 result; // rax
  bool v18; // al
  __int64 v19; // rax
  _QWORD *v20; // rax
  ULONG_PTR v21; // rbx
  ULONG_PTR v22; // r8
  ULONG_PTR v23; // r9
  void *v24; // r10
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  void *v27; // r11
  __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  _DWORD *DevicePDO; // rax
  void *v31; // rbx
  PACCESS_STATE v32; // r10
  signed int RemainingDesiredAccess; // eax
  int OriginalDesiredAccess; // eax
  ACCESS_MASK v35; // esi
  char v36; // r11
  char v37; // r14
  int v38; // edx
  char v39; // r12
  char v40; // r15
  ULONG Flags; // ecx
  int v42; // ebx
  unsigned int v43; // edi
  __int64 ClientToken; // rcx
  char v45; // al
  int v46; // edi
  __int64 PrimaryToken; // rcx
  bool v48; // zf
  char v49; // dl
  __int64 v50; // rcx
  int v51; // r9d
  int v52; // edi
  struct _DEVICE_OBJECT *v53; // r14
  int v54; // eax
  ULONG ActiveConsoleId; // ebx
  __int64 v56; // rax
  int v57; // ebx
  bool v58; // di
  PACCESS_STATE v59; // r15
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rbx
  PACCESS_TOKEN v61; // rcx
  int v62; // ecx
  PSECURITY_DESCRIPTOR *p_SecurityDescriptor; // rdi
  BOOLEAN v64; // al
  ACCESS_MASK v65; // eax
  struct _ACCESS_STATE *v66; // r15
  char v67; // al
  char v68; // di
  PCUNICODE_STRING v69; // r15
  unsigned __int16 Length; // r8
  __int64 v71; // rbx
  __int64 v72; // rdx
  PDEVICE_OBJECT AttachedDevice; // rdi
  int v74; // r9d
  PDEVICE_OBJECT v75; // rcx
  int v76; // r9d
  __int64 v77; // rax
  ULONG Characteristics; // ecx
  struct _ACCESS_STATE *v79; // r15
  int v80; // eax
  __int64 Irp; // rax
  __int64 v82; // r13
  char v83; // dl
  __int64 v84; // r14
  int v85; // eax
  char v86; // al
  PFILE_OBJECT v87; // r15
  _QWORD *v88; // rbx
  unsigned __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  _DWORD *Silo; // rbx
  NTSTATUS SetSpecificExtension; // eax
  _DWORD *v94; // rdi
  __int64 v95; // rax
  int v96; // edx
  unsigned __int16 v97; // ax
  __int64 Pool2; // rax
  wchar_t *Buffer; // rcx
  unsigned __int16 v100; // ax
  __int64 v101; // rax
  PVOID v102; // rsi
  struct _ECP_LIST *v103; // rcx
  NTSTATUS v104; // eax
  __int16 *v105; // rdx
  __int64 v106; // rax
  NTSTATUS updated; // eax
  KEVENT *p_Event; // rsi
  _QWORD *v109; // r14
  char v110; // dl
  _BYTE *v111; // rax
  struct _LIST_ENTRY *v113; // rbx
  NTSTATUS v114; // edi
  unsigned __int8 v115; // al
  int v116; // edx
  BOOLEAN v117; // di
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v119; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v122; // eax
  unsigned __int8 v123; // cl
  struct _KPRCB *v124; // r10
  _DWORD *v125; // r9
  int v126; // eax
  NTSTATUS v127; // eax
  struct _ECP_LIST *v128; // rcx
  int v129; // edi
  unsigned __int8 v130; // r12
  struct _ECP_LIST *v131; // rax
  _DWORD *v132; // rbx
  __int64 v133; // rcx
  __int64 v134; // rcx
  char v135; // al
  int v136; // r8d
  int v137; // ecx
  int v138; // ecx
  __int64 v139; // rax
  _WORD *v140; // rbx
  int v141; // edi
  ULONG_PTR v142; // rsi
  __int64 RelatedFileObject; // rcx
  __int64 FileObjectExtension; // rsi
  FSRTL_ALLOCATE_ECP_FLAGS v145; // r8d
  int v146; // ecx
  unsigned int v147; // r14d
  ULONG_PTR v148; // rax
  __int64 v149; // r13
  unsigned __int64 v150; // rcx
  __int64 v151; // rax
  PUNICODE_STRING v152; // rcx
  wchar_t *v153; // rdi
  wchar_t *v154; // rcx
  __int64 v155; // rax
  _QWORD *v156; // r14
  ULONG_PTR v157; // rdx
  PFILE_OBJECT v158; // rcx
  PFILE_OBJECT v159; // rbx
  PVOID v160; // rcx
  int v161; // ecx
  void *v162; // rcx
  __int64 v163; // r8
  int v164; // ecx
  unsigned __int64 v165; // rax
  __int64 v166; // r10
  unsigned int v167; // ecx
  PACCESS_STATE v168; // r15
  __int64 v169; // rbx
  __int64 v170; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  ULONG_PTR Vpb; // rcx
  __int64 v173; // rbx
  struct _FILE_OBJECT *v174; // rax
  NTSTATUS XxxInformation; // eax
  char v176; // si
  struct _DRIVER_OBJECT *DriverObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  void *v179; // r14
  PFILE_OBJECT *FastIoQueryBasicInfo; // rbx
  void *v181; // rbx
  __int64 (__fastcall *FastIoQueryNetworkOpenInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v183; // rbx
  NTSTATUS v184; // eax
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-1B8h]
  int GenericMapping; // [rsp+30h] [rbp-1A8h]
  int AccessMode; // [rsp+38h] [rbp-1A0h]
  int GrantedAccess; // [rsp+40h] [rbp-198h]
  ACCESS_MASK GrantedAccessa; // [rsp+40h] [rbp-198h]
  NTSTATUS AccessStatus; // [rsp+60h] [rbp-178h] BYREF
  char v191; // [rsp+64h] [rbp-174h]
  int v192; // [rsp+68h] [rbp-170h]
  char v193; // [rsp+6Ch] [rbp-16Ch]
  char v194; // [rsp+6Dh] [rbp-16Bh]
  char v195[2]; // [rsp+6Eh] [rbp-16Ah] BYREF
  ACCESS_MASK DesiredAccess[2]; // [rsp+70h] [rbp-168h] BYREF
  PACCESS_STATE AccessState; // [rsp+78h] [rbp-160h]
  PVOID Object; // [rsp+80h] [rbp-158h]
  PFILE_OBJECT FileObject; // [rsp+88h] [rbp-150h] BYREF
  int v200; // [rsp+90h] [rbp-148h]
  ACCESS_MASK v201; // [rsp+94h] [rbp-144h] BYREF
  PUNICODE_STRING AbsoluteObjectName; // [rsp+98h] [rbp-140h]
  PCUNICODE_STRING SourceString; // [rsp+A0h] [rbp-138h]
  PPRIVILEGE_SET v204; // [rsp+A8h] [rbp-130h] BYREF
  __int64 v205; // [rsp+B0h] [rbp-128h]
  __int64 v206; // [rsp+B8h] [rbp-120h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-118h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+C8h] [rbp-110h] BYREF
  char v209; // [rsp+D0h] [rbp-108h]
  _DWORD Size[3]; // [rsp+D4h] [rbp-104h] BYREF
  PVOID EcpContext; // [rsp+E0h] [rbp-F8h] BYREF
  PVOID P; // [rsp+E8h] [rbp-F0h]
  __int64 v213; // [rsp+F0h] [rbp-E8h]
  int v214; // [rsp+F8h] [rbp-E0h]
  PFILE_OBJECT *v215; // [rsp+100h] [rbp-D8h]
  ULONG_PTR BugCheckParameter4[2]; // [rsp+108h] [rbp-D0h] BYREF
  _DWORD *v217; // [rsp+118h] [rbp-C0h] BYREF
  _QWORD *v218; // [rsp+120h] [rbp-B8h]
  UNICODE_STRING ObjectTypeName; // [rsp+128h] [rbp-B0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+138h] [rbp-A0h]
  _DWORD *v221; // [rsp+140h] [rbp-98h]
  __int128 v222; // [rsp+148h] [rbp-90h] BYREF
  __int64 v223; // [rsp+158h] [rbp-80h]
  _BYTE *v224; // [rsp+160h] [rbp-78h]
  void *v225; // [rsp+168h] [rbp-70h]
  __int64 v226; // [rsp+170h] [rbp-68h]
  struct _PRIVILEGE_SET Privileges; // [rsp+178h] [rbp-60h] BYREF
  struct _LIST_ENTRY v228; // [rsp+190h] [rbp-48h] BYREF

  v191 = a4;
  AccessState = a3;
  v11 = BugCheckParameter2;
  DeviceObject = BugCheckParameter2;
  AbsoluteObjectName = a6;
  SourceString = a7;
  v12 = a8;
  v205 = a8;
  v226 = a8;
  v213 = a10;
  v215 = a11;
  v201 = 0;
  AccessStatus = 0;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  v222 = 0LL;
  v223 = 0LL;
  v214 = 0;
  LOBYTE(v200) = 0;
  memset(Size, 0, sizeof(Size));
  ObjectTypeName = 0LL;
  v204 = 0LL;
  P = 0LL;
  ExtraCreateParameter = 0LL;
  if ( a2 != IoFileObjectType )
    return 3221225508LL;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v192) = 4;
  RtlInitUnicodeString(&ObjectTypeName, L"File");
  *a11 = 0LL;
  FileObject = 0LL;
  if ( !a8 )
    return 3221225508LL;
  while ( 1 )
  {
    v13 = 0x60010000110040LL;
    v14 = 0x1080020004LL;
    if ( *(_WORD *)v12 != 8 || *(_WORD *)(v12 + 2) != 224 )
      return 3221225508LL;
    v15 = (ULONG_PTR)v11;
    Object = v11;
    v221 = (_DWORD *)(v12 + 32);
    if ( *(_DWORD *)(v12 + 32) == 1 )
    {
      *(_DWORD *)(v12 + 32) = -1096154543;
      *(_QWORD *)(v12 + 40) = v11;
      *(_DWORD *)(v12 + 16) = 0;
      ObfReferenceObject(v11);
      return 0LL;
    }
    if ( (*(_DWORD *)(v12 + 152) & 0x10) != 0 )
    {
      DeviceType = v11->DeviceType;
      if ( *(_QWORD *)(v12 + 24) == 2684354563LL )
      {
        if ( (_DWORD)DeviceType != 7 && ((unsigned int)DeviceType > 0x24 || !_bittest64(&v14, DeviceType)) )
          goto LABEL_11;
      }
      else
      {
        LOBYTE(v14) = (_DWORD)DeviceType == 7 || (unsigned int)DeviceType <= 0x24 && _bittest64(&v14, DeviceType);
        v18 = (unsigned int)DeviceType <= 0x36 && _bittest64(&v13, DeviceType);
        if ( !(_BYTE)v14 && !v18 )
        {
LABEL_11:
          *(_DWORD *)(v12 + 16) = -1073741192;
          return 3221226104LL;
        }
        result = IopSymlinkEnforceEnabledTypes(*(_BYTE *)(v12 + 152) & 8, v14, *(_QWORD *)(v12 + 168));
        AccessStatus = result;
        if ( (int)result < 0 )
          goto LABEL_419;
      }
    }
    v19 = *(_QWORD *)(v12 + 40);
    if ( v19 )
    {
      v15 = *(_QWORD *)(v19 + 8);
      Object = (PVOID)v15;
    }
    if ( *(_DWORD *)(v15 + 72) == 7 )
    {
      v20 = (_QWORD *)v15;
      v21 = v15;
      v22 = v15;
      v23 = v15;
      v24 = (void *)v15;
      do
      {
        v25 = (_QWORD *)v22;
        v26 = (_QWORD *)v23;
        v27 = v24;
        if ( v20[7] )
          break;
        v20 = *(_QWORD **)(v21 + 24);
        *(_QWORD *)DesiredAccess = v20;
        v21 = (ULONG_PTR)v20;
        v22 = (ULONG_PTR)v20;
        v25 = v20;
        v23 = (ULONG_PTR)v20;
        v26 = v20;
        v24 = v20;
        v27 = v20;
      }
      while ( v20 );
      if ( v25 && v26 != (_QWORD *)v15 )
      {
        *(_DWORD *)(v12 + 152) |= 2u;
        v15 = (ULONG_PTR)v27;
        Object = v27;
      }
    }
    result = IopCheckDeviceAndDriver(v12, v15);
    AccessStatus = result;
    if ( (int)result < 0 )
      goto LABEL_419;
    if ( (*(_DWORD *)(*(_QWORD *)(v15 + 312) + 32LL) & 0x400) != 0 && !*(_QWORD *)(v12 + 40) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( ServerSiloServiceSessionId != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && (*(_DWORD *)(v12 + 64) & 0x40000) == 0 )
      {
        DevicePDO = IopGetDevicePDO(v15);
        v31 = DevicePDO;
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess((__int64)DevicePDO) )
          {
            ObfDereferenceObject(v31);
            IopDecrementDeviceObjectRef(v15, 0);
            *(_DWORD *)(v12 + 16) = -1073741790;
            return 3221225506LL;
          }
          ObfDereferenceObject(v31);
        }
      }
    }
    v32 = AccessState;
    RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
    if ( RemainingDesiredAccess < 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 19);
    if ( (RemainingDesiredAccess & 0x40000000) != 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 20);
    if ( (RemainingDesiredAccess & 0x20000000) != 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 21);
    if ( (RemainingDesiredAccess & 0x10000000) != 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 22);
    AccessState->RemainingDesiredAccess = RemainingDesiredAccess & 0xFFFFFFF;
    OriginalDesiredAccess = v32->OriginalDesiredAccess;
    if ( OriginalDesiredAccess < 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 19);
    if ( (OriginalDesiredAccess & 0x40000000) != 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 20);
    if ( (OriginalDesiredAccess & 0x20000000) != 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 21);
    if ( (OriginalDesiredAccess & 0x10000000) != 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 22);
    v32->OriginalDesiredAccess = OriginalDesiredAccess & 0xFFFFFFF;
    *(_OWORD *)((char *)v32->AuxData + 8) = *(_OWORD *)((char *)IoFileObjectType + 76);
    v35 = v32->RemainingDesiredAccess;
    DesiredAccess[0] = v35;
    v36 = v191;
    v37 = v191 || (*(_DWORD *)(v12 + 84) & 1) != 0;
    v38 = *(_DWORD *)(v12 + 88);
    memset(&Privileges, 0, sizeof(Privileges));
    v39 = 0;
    v40 = 0;
    Flags = v32->Flags;
    if ( (Flags & 0x100) != 0 )
    {
      v12 = v205;
      goto LABEL_92;
    }
    if ( (*(_DWORD *)(v205 + 64) & 0x4000) == 0 )
    {
      v12 = v205;
      goto LABEL_92;
    }
    v32->Flags = Flags | 0x100;
    v42 = v35 | 0x11F01BF;
    if ( (v35 & 0x2000000) == 0 )
      v42 = v35;
    if ( ((v38 - 1) & 0xFFFFFFF9) != 0 || v38 == 7 )
    {
      v40 = 1;
      v43 = v42;
      goto LABEL_77;
    }
    v43 = v42;
    if ( (v42 & 0x11200A9) != 0 )
    {
      Privileges.PrivilegeCount = 1;
      Privileges.Control = 1;
      Privileges.Privilege[0].Luid = SeBackupPrivilege;
      Privileges.Privilege[0].Attributes = 0;
      if ( !v37 )
        goto LABEL_75;
      ClientToken = (__int64)v32->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        if ( v32->SubjectSecurityContext.ImpersonationLevel < SecurityImpersonation )
          goto LABEL_76;
      }
      else
      {
        ClientToken = (__int64)v32->SubjectSecurityContext.PrimaryToken;
      }
      v45 = SepPrivilegeCheck(ClientToken, (__int64)Privileges.Privilege, 1u, 1, v37);
      v32 = AccessState;
      if ( v45 )
      {
LABEL_75:
        v39 = 1;
        SeAppendPrivileges(v32, &Privileges);
        v32 = AccessState;
        AccessState->PreviouslyGrantedAccess |= v42 & 0x11200A9;
        v32->RemainingDesiredAccess &= 0xFEEDFF56;
        v43 = v42 & 0xFEEDFF56;
        v32->Flags |= 2u;
      }
    }
LABEL_76:
    v35 = DesiredAccess[0];
LABEL_77:
    v46 = v43 & 0x11F0116;
    if ( v46 || v40 )
    {
      Privileges.PrivilegeCount = 1;
      Privileges.Control = 1;
      Privileges.Privilege[0].Luid = SeRestorePrivilege;
      Privileges.Privilege[0].Attributes = 0;
      if ( !v37 )
        goto LABEL_85;
      PrimaryToken = (__int64)v32->SubjectSecurityContext.ClientToken;
      if ( PrimaryToken )
      {
        if ( v32->SubjectSecurityContext.ImpersonationLevel < SecurityImpersonation )
          goto LABEL_88;
      }
      else
      {
        PrimaryToken = (__int64)v32->SubjectSecurityContext.PrimaryToken;
      }
      if ( !SepPrivilegeCheck(PrimaryToken, (__int64)Privileges.Privilege, 1u, 1, v37) )
      {
        v32 = AccessState;
      }
      else
      {
LABEL_85:
        v39 = 1;
        SeAppendPrivileges(AccessState, &Privileges);
        v32 = AccessState;
        AccessState->PreviouslyGrantedAccess |= v46;
        v32->RemainingDesiredAccess &= 0xFEE0FEE9;
        v32->Flags |= 4u;
      }
    }
LABEL_88:
    v36 = v191;
    v48 = v39 == 0;
    v12 = v205;
    if ( v48 )
      *(_DWORD *)(v205 + 64) &= ~0x4000u;
LABEL_92:
    v49 = *(_BYTE *)(v12 + 136);
    if ( v49 && !SourceString->Length || (v32->Flags & 0x100) != 0 )
      v35 |= v32->PreviouslyGrantedAccess;
    v50 = *(_QWORD *)(v12 + 40);
    LOBYTE(v51) = v200;
    if ( v50 && (*(_DWORD *)(v50 + 80) & 0x400000) != 0 )
    {
      v51 = (unsigned __int8)v200;
      if ( !SourceString->Length )
        v51 = 1;
      v200 = v51;
    }
    if ( !v36 && (*(_DWORD *)(v12 + 84) & 1) == 0 || v50 && !(_BYTE)v51 )
    {
      v53 = (struct _DEVICE_OBJECT *)Object;
      v52 = v192;
      goto LABEL_140;
    }
    v52 = v192;
    v53 = (struct _DEVICE_OBJECT *)Object;
    if ( !v49 )
    {
      LOBYTE(v52) = v192 & 0xDF;
      v192 = v52;
      v54 = *((_DWORD *)Object + 13);
      if ( !SourceString->Length )
      {
        v58 = 0;
        if ( (v54 & 0x40001) != 0 && (v35 & 0xFFEDFF7F) != 0 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
          {
            v56 = PsGetCurrentServerSilo();
            v57 = PsGetServerSiloServiceSessionId(v56);
            if ( v57 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
              v58 = 1;
          }
        }
        v204 = 0LL;
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        v59 = AccessState;
        p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
        SeLockSubjectContext(&AccessState->SubjectSecurityContext);
        LOBYTE(v192) = v192 | 0x20;
        if ( !v58 )
          goto LABEL_119;
        v61 = p_SubjectSecurityContext->ClientToken;
        if ( !p_SubjectSecurityContext->ClientToken )
          v61 = v59->SubjectSecurityContext.PrimaryToken;
        if ( SeTokenIsAdmin(v61) )
        {
LABEL_119:
          p_SecurityDescriptor = &v53->SecurityDescriptor;
          v64 = SeAccessCheck(
                  v53->SecurityDescriptor,
                  p_SubjectSecurityContext,
                  (v192 & 0x20) != 0,
                  v35,
                  0,
                  &v204,
                  (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                  1,
                  &v201,
                  &AccessStatus);
          v62 = v192;
          LOBYTE(v62) = (v192 ^ v64) & 1 ^ v192;
          v192 = v62;
          if ( v204 )
          {
            SeAppendPrivileges(v59, v204);
            CmSiFreeMemory(v204);
            LOBYTE(v62) = v192;
          }
          if ( (v62 & 1) != 0 )
          {
            v65 = v201;
            v59->PreviouslyGrantedAccess |= v201;
            v59->RemainingDesiredAccess &= ~(v65 | 0x2000000);
            *(_BYTE *)(v12 + 136) = 1;
          }
        }
        else
        {
          v62 = v192;
          LOBYTE(v62) = v192 & 0xFE;
          v192 = v62;
          AccessStatus = -1073741790;
          p_SecurityDescriptor = &v53->SecurityDescriptor;
        }
        SeOpenObjectAuditAlarmWithTransaction(
          &ObjectTypeName,
          v53,
          AbsoluteObjectName,
          *p_SecurityDescriptor,
          v59,
          0,
          v62 & 1,
          1,
          0LL,
          &v59->GenerateOnClose);
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v52 = v192;
        goto LABEL_136;
      }
      if ( (v54 & 0x20100) == 0x20000 || !v36 )
      {
        p_SubjectSecurityContext = &v32->SubjectSecurityContext;
      }
      else
      {
        v193 = 0;
        p_SubjectSecurityContext = &v32->SubjectSecurityContext;
        SeIsAppContainerOrIdentifyLevelContext(&v32->SubjectSecurityContext);
        if ( v193 )
        {
          LOBYTE(v52) = (v52 ^ IopCreateSecurityCheck(
                                 (__int64)v53,
                                 0LL,
                                 AccessState,
                                 v35 | 0x20,
                                 1,
                                 v204,
                                 &v201,
                                 AbsoluteObjectName,
                                 &ObjectTypeName,
                                 (__int64)CurrentThread,
                                 0)) & 1 ^ v52;
LABEL_136:
          if ( (v52 & 0x20) != 0 )
            SeUnlockSubjectContext(p_SubjectSecurityContext);
          if ( (v52 & 1) == 0 )
            goto LABEL_188;
          v32 = AccessState;
          v36 = v191;
          goto LABEL_140;
        }
        v32 = AccessState;
      }
      if ( (v32->Flags & 1) != 0 )
      {
        LOBYTE(v52) = v52 | 1;
      }
      else
      {
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        v66 = AccessState;
        LOBYTE(v52) = (v52 ^ SeFastTraverseCheck((__int64)v53->SecurityDescriptor, (__int64)AccessState, 32)) & 1 ^ v52;
        if ( (v52 & 1) == 0 )
        {
          v204 = 0LL;
          SeLockSubjectContext(p_SubjectSecurityContext);
          LOBYTE(v52) = ((v52 | 0x20) ^ SeAccessCheck(
                                          v53->SecurityDescriptor,
                                          p_SubjectSecurityContext,
                                          1u,
                                          0x20u,
                                          0,
                                          &v204,
                                          (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                          1,
                                          &v201,
                                          &AccessStatus)) & 1 ^ (v52 | 0x20);
          if ( v204 )
          {
            SeAppendPrivileges(v66, v204);
            CmSiFreeMemory(v204);
          }
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
      goto LABEL_136;
    }
LABEL_140:
    v67 = *(_BYTE *)(v12 + 137) || *(_BYTE *)(v12 + 138) ? 64 : 0;
    v68 = v67 | v52 & 0xBF;
    v69 = SourceString;
    Length = SourceString->Length;
    if ( SourceString->Length || *(_QWORD *)(v12 + 40) || (v35 & 0xFEE1FF7F) != 0 || (v68 & 0x40) != 0 )
      LOBYTE(v52) = v68 & 0xF7;
    else
      LOBYTE(v52) = v68 | 8;
    v192 = v52;
    v71 = 0LL;
    v206 = 0LL;
    v72 = *(_QWORD *)(v12 + 40);
    if ( !v72 || (*(_DWORD *)(v72 + 80) & 0x800) != 0 )
    {
      AttachedDevice = v53;
      *(_QWORD *)DesiredAccess = v53;
      v75 = v53;
      v76 = v192;
      if ( v53->Vpb && (v192 & 8) == 0 )
      {
        if ( (v53->Characteristics & 0x100) != 0
          && (v53->DeviceObjectExtension->ExtensionFlags & 0x800) == 0
          && (v36 || (*(_DWORD *)(v12 + 84) & 1) != 0)
          && (v72 || Length)
          && !(_BYTE)v200 )
        {
          v204 = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v53,
                  v53,
                  v32,
                  v35,
                  *(_DWORD *)(v12 + 88),
                  0LL,
                  &v201,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_188;
        }
        v77 = IopCheckVpbMounted(v12, (ULONG_PTR)v53, (__int64)v69, &AccessStatus);
        v71 = v77;
        v206 = v77;
        if ( !v77 )
          return (unsigned int)AccessStatus;
        AttachedDevice = *(PDEVICE_OBJECT *)(v77 + 8);
        *(_QWORD *)DesiredAccess = AttachedDevice;
        v75 = AttachedDevice;
        v76 = v192;
      }
      if ( (*(_DWORD *)(v12 + 152) & 1) != 0 )
      {
        LOBYTE(v76) = v76 | 2;
        v192 = v76;
      }
      else if ( v75->AttachedDevice )
      {
        AttachedDevice = IoGetAttachedDevice(AttachedDevice);
        *(_QWORD *)DesiredAccess = AttachedDevice;
      }
    }
    else
    {
      AttachedDevice = DeviceObject;
      *(_QWORD *)DesiredAccess = DeviceObject;
      if ( *(_QWORD *)(v72 + 16) )
      {
        v71 = *(_QWORD *)(v72 + 16);
        v206 = v71;
        if ( (v53->Characteristics & 0x100) != 0
          && (v53->DeviceObjectExtension->ExtensionFlags & 0x800) == 0
          && (v36 || (*(_DWORD *)(v12 + 84) & 1) != 0)
          && !(_BYTE)v200 )
        {
          v204 = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v53,
                  v53,
                  v32,
                  v35,
                  *(_DWORD *)(v12 + 88),
                  0LL,
                  &v201,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_188;
        }
        IopIncrementVpbRefCount(v71, 1);
      }
      if ( (*(_DWORD *)(v12 + 152) & 1) != 0 )
      {
        if ( v71 )
        {
          AttachedDevice = *(PDEVICE_OBJECT *)(v71 + 8);
          *(_QWORD *)DesiredAccess = AttachedDevice;
        }
        v74 = v192;
        LOBYTE(v74) = v192 | 2;
        v192 = v74;
      }
    }
    Characteristics = v53->Characteristics;
    if ( (Characteristics & 0x40001) == 0 || (v53->Flags & 0x600100) != 0 )
    {
      v79 = AccessState;
    }
    else
    {
      v79 = AccessState;
      if ( (Characteristics & 0x100) == 0 )
      {
        v194 = 0;
        SeIsAppContainerOrIdentifyLevelContext(&AccessState->SubjectSecurityContext);
        if ( v194 )
        {
          if ( !v71 )
            goto LABEL_188;
          if ( (*(_DWORD *)(*(_QWORD *)(v71 + 8) + 48LL) & 0x20000) == 0 )
          {
            IopDereferenceVpbAndFree(v71);
LABEL_188:
            IopDecrementDeviceObjectRef((ULONG_PTR)v53, 0);
            return 3221225506LL;
          }
        }
      }
    }
    if ( (v192 & 2) != 0 )
      break;
LABEL_193:
    v80 = *(_DWORD *)(v12 + 152);
    if ( (v80 & 0x10) != 0 )
      *(_DWORD *)(v12 + 152) = v80 & 0xFFFFFFEF;
    if ( ((AttachedDevice->Characteristics & 0x100) != 0
       || IopRequireDeviceAccessCheck && (v53->Characteristics & 0x100000) != 0)
      && (v191 || (*(_DWORD *)(v12 + 84) & 1) != 0)
      && (*(_QWORD *)(v12 + 40) || SourceString->Length)
      && !(_BYTE)v200 )
    {
      v204 = 0LL;
      if ( !IopCreateSecurityCheck(
              (__int64)v53,
              AttachedDevice,
              v79,
              v35,
              *(_DWORD *)(v12 + 88),
              0LL,
              &v201,
              AbsoluteObjectName,
              &ObjectTypeName,
              (__int64)CurrentThread,
              1) )
      {
        IopDecrementDeviceObjectRef((ULONG_PTR)v53, 0);
        if ( v71 )
          IopDereferenceVpbAndFree(v71);
        return 3221225506LL;
      }
    }
    Irp = IopAllocateIrpExReturn((__int64)AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, 0LL);
    v82 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef((ULONG_PTR)v53, 0);
      if ( v71 )
        IopDereferenceVpbAndFree(v71);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    v83 = v191;
    *(_BYTE *)(Irp + 64) = v191;
    *(_DWORD *)(Irp + 16) = 2180;
    *(_QWORD *)&v222 = a9;
    *((_QWORD *)&v222 + 1) = v79;
    LODWORD(v223) = v35;
    HIDWORD(v223) = *(_DWORD *)(v12 + 64);
    v84 = *(_QWORD *)(Irp + 184) - 72LL;
    v224 = (_BYTE *)v84;
    *(_BYTE *)(v84 + 3) = 0;
    v85 = *(_DWORD *)(v12 + 120);
    if ( v85 )
    {
      if ( v85 == 1 )
        *(_BYTE *)v84 = 1;
      else
        *(_BYTE *)v84 = 19;
      *(_QWORD *)(v84 + 32) = *(_QWORD *)(v12 + 128);
    }
    else
    {
      *(_BYTE *)v84 = 0;
      *(_DWORD *)(v84 + 32) = *(_DWORD *)(v12 + 80);
      v86 = *(_BYTE *)(v12 + 84);
      *(_BYTE *)(v84 + 2) = v86;
      if ( (a5 & 0x40) == 0 )
        *(_BYTE *)(v84 + 2) = v86 | 0x80;
    }
    *(_QWORD *)(v82 + 88) = *(_QWORD *)(v12 + 56);
    *(_QWORD *)(v82 + 24) = *(_QWORD *)(v12 + 72);
    *(_DWORD *)(v84 + 16) = (*(_DWORD *)(v12 + 88) << 24) | *(_DWORD *)(v12 + 64) & 0xFFFFFF;
    *(_WORD *)(v84 + 24) = *(_WORD *)(v12 + 68);
    *(_WORD *)(v84 + 26) = *(_WORD *)(v12 + 70);
    *(_QWORD *)(v84 + 8) = &v222;
    *(_QWORD *)(v82 + 112) = *(_QWORD *)(v12 + 168);
    *(_QWORD *)(v82 + 72) = BugCheckParameter4;
    *(_QWORD *)(v82 + 8) = 0LL;
    *(_BYTE *)(v82 + 65) = 0;
    *(_BYTE *)(v82 + 68) = 0;
    *(_QWORD *)(v82 + 80) = 0LL;
    *(_QWORD *)(v82 + 104) = 0LL;
    *(_QWORD *)(v82 + 160) = 0LL;
    if ( *(_BYTE *)(v12 + 137) )
    {
      v88 = *(_QWORD **)(v12 + 144);
      memset(v88, 0, 0x110uLL);
      v87 = (PFILE_OBJECT)(v88 + 6);
      FileObject = (PFILE_OBJECT)(v88 + 6);
      *((_BYTE *)v88 + 24) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v88);
      *v88 = 1LL;
      if ( (a5 & 0x40) == 0 )
        *((_DWORD *)v88 + 32) |= 0x20000u;
      v87->Type = 5;
      *((_WORD *)v88 + 25) = 216;
      v88[14] = *(_QWORD *)(v12 + 40);
      v88[7] = Object;
      if ( (*(_DWORD *)(v12 + 152) & 0x20) != 0 )
      {
        if ( v191 )
        {
          if ( (AttachedDevice->Flags & 0x40000) != 0
            || (v89 = AttachedDevice->DeviceType, (_DWORD)v89 == 8)
            || (unsigned int)v89 <= 0x35 && (v90 = 0x20000100100008LL, _bittest64(&v90, v89)) )
          {
            AccessStatus = IopRetrieveTransactionParameters(AttachedDevice, v12, v35, v88 + 6);
            if ( AccessStatus < 0 )
            {
LABEL_420:
              IoFreeIrp((PIRP)v82);
              IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
              if ( v206 )
              {
                IopDereferenceVpbAndFree(v206);
                result = (unsigned int)AccessStatus;
                *(_DWORD *)(v12 + 16) = AccessStatus;
                return result;
              }
LABEL_418:
              result = (unsigned int)AccessStatus;
LABEL_419:
              *(_DWORD *)(v12 + 16) = result;
              return result;
            }
          }
        }
      }
      if ( !PsIsHostSilo(*(_QWORD *)(v213 + 8)) || v88[14] && (v91 = IoGetSilo(v88[14]), !PsIsHostSilo(v91)) )
      {
        v217 = 0LL;
        if ( v88[14] && PsIsServerSilo(*(_QWORD *)(v213 + 8)) )
          Silo = (_DWORD *)IoGetSilo(v88[14]);
        else
          Silo = *(_DWORD **)(v213 + 8);
        if ( !PsIsHostSilo((__int64)Silo) )
        {
          AccessStatus = PsAcquireSiloHardReference(Silo);
          if ( AccessStatus < 0 )
            goto LABEL_420;
          SetSpecificExtension = IopGetSetSpecificExtension((__int64)v87, 7u, 0x10u, 1, &v217, 0LL);
          AccessStatus = SetSpecificExtension;
          if ( SetSpecificExtension < 0 )
          {
            PsReleaseSiloHardReference(Silo);
            SetSpecificExtension = AccessStatus;
          }
          v94 = v217;
          if ( SetSpecificExtension < 0 )
            goto LABEL_420;
          *v217 = 16;
          *((_QWORD *)v94 + 1) = Silo;
          v94[1] |= 1u;
          ObfReferenceObjectWithTag(Silo, 0x70536F49u);
        }
        AttachedDevice = *(PDEVICE_OBJECT *)DesiredAccess;
      }
    }
    else
    {
      AccessStatus = IopAllocRealFileObject(
                       (unsigned int)&FileObject,
                       (_DWORD)AttachedDevice,
                       (_DWORD)Object,
                       a5,
                       v83,
                       v12,
                       v213,
                       0,
                       v35);
      if ( AccessStatus < 0 )
      {
        IoFreeIrp((PIRP)v82);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
        if ( v71 )
          IopDereferenceVpbAndFree(v71);
        v158 = FileObject;
        if ( FileObject )
        {
          FileObject->DeviceObject = 0LL;
          ObfDereferenceObject(v158);
        }
        goto LABEL_418;
      }
      v87 = FileObject;
    }
    if ( (v192 & 8) != 0 )
      v87->Flags |= 0x800u;
    v95 = *(_QWORD *)(v12 + 216);
    if ( (v95 & 1) != 0 )
    {
      v96 = 32;
LABEL_244:
      IopSetFileObjectExtensionFlag((__int64)v87, v96, 1);
      goto LABEL_245;
    }
    if ( (v95 & 2) != 0 )
    {
      v96 = 64;
      goto LABEL_244;
    }
LABEL_245:
    *(_QWORD *)(v82 + 192) = v87;
    *(_QWORD *)(v84 + 48) = v87;
    v97 = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( v97 >= 0x38u )
      {
        if ( v97 >= 0x78u )
        {
          if ( v97 < 0xF8u )
            v97 = 248;
        }
        else
        {
          v97 = 120;
        }
      }
      else
      {
        v97 = 56;
      }
      v87->FileName.MaximumLength = v97;
      Pool2 = ExAllocatePool2(256LL, v97, 1833856841LL);
      v87->FileName.Buffer = (wchar_t *)Pool2;
      if ( !Pool2 )
      {
        IoFreeIrp((PIRP)v82);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
        if ( v206 )
          IopDereferenceVpbAndFree(v206);
        v87->DeviceObject = 0LL;
        if ( !*(_BYTE *)(v12 + 137) )
        {
          ObfDereferenceObject(v87);
          return 3221225626LL;
        }
        if ( v87->FileObjectExtension )
        {
          IopDeleteFileObjectExtension((__int64)v87);
          return 3221225626LL;
        }
        return 3221225626LL;
      }
    }
    RtlCopyUnicodeString(&v87->FileName, SourceString);
    if ( *(_BYTE *)(v12 + 137) )
    {
      v195[0] = 0;
      AccessStatus = IopQueryInformation(v12, AttachedDevice, v82, v84, v195);
      if ( AccessStatus < 0 || v195[0] )
      {
        v161 = *(_DWORD *)(v82 + 48);
        *(_DWORD *)(v12 + 16) = v161;
        *(_QWORD *)(v12 + 24) = *(_QWORD *)(v82 + 56);
        if ( v161 == 260 )
        {
          v162 = *(void **)(v82 + 160);
          if ( v162 )
          {
            ExFreePoolWithTag(v162, 0);
            *(_QWORD *)(v82 + 160) = 0LL;
            *(_QWORD *)(v12 + 40) = 0LL;
          }
        }
        if ( v87->FileName.Length )
          ExFreePoolWithTag(v87->FileName.Buffer, 0);
        if ( v87->FileObjectExtension )
          IopDeleteFileObjectExtension((__int64)v87);
        v160 = Object;
        goto LABEL_446;
      }
      if ( !RtlEqualUnicodeString(&v87->FileName, SourceString, 0) )
      {
        Buffer = v87->FileName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          RtlInitUnicodeString(&v87->FileName, 0LL);
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
          v87->FileName.MaximumLength = v100;
          v101 = ExAllocatePool2(256LL, v100, 1833856841LL);
          v87->FileName.Buffer = (wchar_t *)v101;
          if ( !v101 )
          {
            if ( v87->FileObjectExtension )
              IopDeleteFileObjectExtension((__int64)v87);
            IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
            if ( v206 )
              IopDereferenceVpbAndFree(v206);
            IoFreeIrp((PIRP)v82);
            return 3221225626LL;
          }
          RtlCopyUnicodeString(&v87->FileName, SourceString);
        }
      }
      GrantedAccessa = v35;
      v102 = Object;
      AccessStatus = IopAllocRealFileObject(
                       (unsigned int)&FileObject,
                       (_DWORD)AttachedDevice,
                       (_DWORD)Object,
                       a5,
                       v191,
                       v12,
                       v213,
                       1,
                       GrantedAccessa);
      if ( AccessStatus < 0 )
      {
        v159 = FileObject;
        if ( FileObject->FileName.Length )
          ExFreePoolWithTag(FileObject->FileName.Buffer, 0);
        if ( v159->FileObjectExtension )
          IopDeleteFileObjectExtension((__int64)v159);
        v160 = v102;
LABEL_446:
        IopDecrementDeviceObjectRef((ULONG_PTR)v160, 0);
        if ( v206 )
          IopDereferenceVpbAndFree(v206);
        IoFreeIrp((PIRP)v82);
        return (unsigned int)AccessStatus;
      }
      v87 = FileObject;
      *(_QWORD *)(v84 + 48) = FileObject;
      *(_QWORD *)(v82 + 192) = v87;
    }
    if ( !*(_DWORD *)(v12 + 120) )
    {
      v103 = 0LL;
      if ( (*(_DWORD *)(v82 + 16) & 0x80) != 0 )
        v103 = *(struct _ECP_LIST **)(v82 + 112);
      v104 = -1073741811;
      if ( (*(_DWORD *)(v82 + 16) & 0x80) != 0 )
        v104 = 0;
      AccessStatus = v104;
      if ( v103 && IopSymlinkGetECP(v103, (PVOID *)&Size[1]) != -1073741275 )
      {
        v105 = *(__int16 **)&Size[1];
        if ( *(_QWORD *)(*(_QWORD *)&Size[1] + 8LL) )
        {
          v106 = *(_QWORD *)(*(_QWORD *)&Size[1] + 8LL);
          do
          {
            v105 = (__int16 *)v106;
            v106 = *(_QWORD *)(v106 + 8);
          }
          while ( v106 );
        }
        if ( !v105[2] )
        {
          updated = IopSymlinkUpdateECP((PIRP)v82, v105, AbsoluteObjectName->Length - SourceString->Length, v105[1]);
          AccessStatus = updated;
          if ( updated < 0 )
          {
            *(_DWORD *)(v82 + 48) = updated;
            *(_QWORD *)(v82 + 56) = 0LL;
            LOBYTE(v192) = v192 & 0xFB;
          }
        }
      }
    }
    p_Event = &v87->Event;
    KeInitializeEvent(&v87->Event, NotificationEvent, 0);
    v109 = (_QWORD *)(v12 + 8);
    v218 = (_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = v87;
    v110 = v192;
    if ( (v192 & 4) != 0 )
    {
      IopQueueThreadIrp(v82);
      if ( *(char *)(v82 + 71) >= 0 && (v111 = *(_BYTE **)(v82 + 200)) != 0LL && (*v111 & 2) != 0 )
      {
        v228 = 0LL;
        v228 = *(struct _LIST_ENTRY *)(*(_QWORD *)(v82 + 200) + 24LL);
        v113 = IoSetActivityIdThread(&v228);
        v114 = IofCallDriver(AttachedDevice, (PIRP)v82);
        IoSetActivityIdThread(v113);
      }
      else
      {
        v114 = IofCallDriver(AttachedDevice, (PIRP)v82);
      }
      AccessStatus = v114;
      v110 = v192;
    }
    else
    {
      v114 = AccessStatus;
    }
    if ( v114 == 259 )
    {
      v115 = v110 | 0x80;
      v116 = v110 & 0x7F;
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 )
        v116 = v115;
      v192 = v116;
      v117 = (unsigned __int8)v116 >> 7;
      AccessStatus = KeWaitForSingleObject(&v87->Event, Executive, 0, (unsigned __int8)v116 >> 7, 0LL);
      if ( AccessStatus == 257 )
      {
        while ( 1 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          v87 = FileObject;
          if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
            || !FileObject->Event.Header.SignalState && *(_BYTE *)(v82 + 68) )
          {
            break;
          }
          if ( (_DWORD)KiIrqlFlags )
          {
            v119 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v119 <= 0xFu && CurrentIrql <= 0xFu && v119 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v122 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v48 = (v122 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v122;
              if ( v48 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              v87 = FileObject;
            }
          }
          __writecr8(CurrentIrql);
          AccessStatus = KeWaitForSingleObject(p_Event, Executive, 0, v117, 0LL);
          if ( AccessStatus != 257 )
            goto LABEL_321;
        }
        if ( (_DWORD)KiIrqlFlags )
        {
          v123 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v123 <= 0xFu && CurrentIrql <= 0xFu && v123 >= 2u )
          {
            v124 = KeGetCurrentPrcb();
            v125 = v124->SchedulerAssist;
            v126 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v48 = (v126 & v125[5]) == 0;
            v125[5] &= v126;
            if ( v48 )
              KiRemoveSystemWorkPriorityKick((__int64)v124);
            v87 = FileObject;
          }
        }
        __writecr8(CurrentIrql);
        IopCancelAlertedRequest(&v87->Event, (PIRP)v82);
      }
      else
      {
        v87 = FileObject;
      }
LABEL_321:
      AccessStatus = BugCheckParameter4[0];
    }
    if ( (*(_DWORD *)(v82 + 16) & 0x80u) != 0 )
    {
      v128 = *(struct _ECP_LIST **)(v82 + 112);
      ExtraCreateParameter = v128;
      v127 = 0;
    }
    else
    {
      v127 = -1073741811;
      v128 = ExtraCreateParameter;
    }
    AccessStatus = v127;
    v129 = *(_DWORD *)(v12 + 84) & 8;
    v130 = v129 != 0;
    if ( *(_DWORD *)(v82 + 48) != 260 )
      goto LABEL_356;
    P = *(PVOID *)(v82 + 160);
    if ( v128 && IopSymlinkGetECP(v128, (PVOID *)&Size[1]) != -1073741275 )
      goto LABEL_332;
    AccessStatus = IopSymlinkCreateECP((PIRP)v82, (__int64)&Size[1]);
    if ( AccessStatus < 0 )
    {
      *(_QWORD *)(v82 + 56) = 0LL;
      *(_DWORD *)(v82 + 48) = AccessStatus;
LABEL_332:
      v131 = ExtraCreateParameter;
      goto LABEL_333;
    }
    v131 = ExtraCreateParameter;
    if ( !ExtraCreateParameter )
    {
      AccessStatus = IoGetIrpExtraCreateParameter((PIRP)v82, &ExtraCreateParameter);
      goto LABEL_332;
    }
LABEL_333:
    if ( *(_DWORD *)(v82 + 48) == 260 )
    {
      v132 = P;
      if ( v129 && v131 )
        v130 = IopCheckAndUpdateStopOnSymlinkEcp(v131, *(unsigned int *)(v82 + 56), P);
      IopSymlinkProcessReparse(v82, v87, v132, v130);
      v133 = *(_QWORD *)(v82 + 56);
      if ( v133 == 2684354563LL || v133 == 2684354572LL || v133 == 2684354585LL )
      {
        if ( *(int *)(v82 + 48) < 0 )
          goto LABEL_354;
        v134 = *((unsigned __int16 *)v132 + 3);
        v135 = 0;
        if ( !(_WORD)v134 )
          v135 = 16;
        v136 = v192;
        LOBYTE(v136) = v135 | v192 & 0xEF;
        v192 = v136;
        if ( (v136 & 0x10) == 0 && *(wchar_t *)((char *)SourceString->Buffer + SourceString->Length - v134) != 58 )
          goto LABEL_354;
        v137 = *(_DWORD *)(v205 + 64);
        if ( (v137 & 0x41) != 0 || *v224 )
          goto LABEL_354;
        if ( *v132 == -1610612733 )
          goto LABEL_352;
        if ( *v132 != -1610612724 )
          goto LABEL_354;
        if ( (int)v132[4] < 0 )
        {
LABEL_352:
          v138 = v137 | 1;
LABEL_353:
          *(_DWORD *)(v205 + 64) = v138;
        }
        else if ( (v132[4] & 0x40000000) != 0 )
        {
          v138 = v137 | 0x40;
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
LABEL_356:
    v139 = v205;
    if ( *(_DWORD *)(v82 + 48) || *(_DWORD *)(v205 + 120) )
    {
      v142 = *(_QWORD *)DesiredAccess;
      goto LABEL_379;
    }
    v140 = 0LL;
    EcpContext = 0LL;
    if ( !ExtraCreateParameter )
      goto LABEL_367;
    IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContext);
    v140 = EcpContext;
    if ( EcpContext )
    {
      if ( (*((_BYTE *)EcpContext + 2) & 1) == 0 )
        goto LABEL_361;
LABEL_367:
      if ( v140 )
        goto LABEL_375;
    }
    RelatedFileObject = (__int64)v87->RelatedFileObject;
    if ( !RelatedFileObject )
    {
LABEL_361:
      v141 = 0;
      goto LABEL_362;
    }
    FileObjectExtension = IopGetFileObjectExtension(RelatedFileObject, 5, 0LL);
    if ( !FileObjectExtension )
    {
      v141 = 0;
      goto LABEL_362;
    }
    v146 = AbsoluteObjectName->Length + 2;
    v147 = v146 + *(unsigned __int16 *)(FileObjectExtension + 16);
    if ( v147 >= 0xFFFF )
    {
      v141 = -1073741562;
LABEL_362:
      if ( v140 )
      {
        IopSymlinkFreeRelatedMountPointChain(v140);
        FsRtlFreeExtraCreateParameter(v140);
      }
      goto LABEL_364;
    }
    v141 = FsRtlAllocateExtraCreateParameterFromLookasideList(
             &IopSymlinkECPGuid,
             (unsigned __int16)(v146 + *(_WORD *)(FileObjectExtension + 16)) + 32,
             v145,
             IopSymlinkCleanupECP,
             &IopSymlinkInfoLookasideList,
             &EcpContext);
    v140 = EcpContext;
    if ( v141 < 0 )
      goto LABEL_362;
    LOWORD(GrantedAccess) = *(_WORD *)(FileObjectExtension + 2);
    LOWORD(AccessMode) = *(_WORD *)(FileObjectExtension + 4);
    LOWORD(GenericMapping) = *(_WORD *)(FileObjectExtension + 16);
    LOWORD(PreviouslyGrantedAccess) = 0;
    IopSymlinkInitializeSymlinkInfo(
      EcpContext,
      v147 + 32,
      AbsoluteObjectName->Buffer,
      AbsoluteObjectName->Length,
      PreviouslyGrantedAccess,
      *(_QWORD *)(FileObjectExtension + 24),
      GenericMapping,
      AccessMode,
      GrantedAccess,
      0LL);
    *v140 = *(_WORD *)FileObjectExtension + v140[8] - *(_WORD *)(FileObjectExtension + 16);
LABEL_375:
    v141 = IopSymlinkSetFoExtension(v87, v140);
    if ( v141 < 0 )
      goto LABEL_362;
    IopSymlinkFreeRelatedMountPointChain(v140);
    EcpContext = 0LL;
LABEL_364:
    AccessStatus = v141;
    v142 = *(_QWORD *)DesiredAccess;
    if ( v141 < 0 )
    {
      IoCancelFileOpen(*(PDEVICE_OBJECT *)DesiredAccess, v87);
      *(_QWORD *)(v82 + 56) = 0LL;
      *(_DWORD *)(v82 + 48) = AccessStatus;
    }
    v109 = v218;
    v139 = v205;
LABEL_379:
    if ( ExtraCreateParameter )
      *(_QWORD *)(v139 + 168) = ExtraCreateParameter;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v82 + 48);
    AccessStatus = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    v87->Event.Header.SignalState = 1;
    if ( (v192 & 4) != 0 )
    {
      *(_QWORD *)(v82 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v82);
    }
    if ( (*(_BYTE *)(v82 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v82 + 24), 0);
    IoFreeIrp((PIRP)v82);
    v148 = BugCheckParameter4[1];
    v149 = v205;
    *(_QWORD *)(v205 + 24) = BugCheckParameter4[1];
    if ( AccessStatus < 0 )
    {
      if ( (v87->Flags & 0x200000) != 0 )
      {
        ObfDereferenceObject(v87);
        *v109 = 0LL;
        result = (unsigned int)AccessStatus;
        *(_DWORD *)(v149 + 16) = AccessStatus;
      }
      else
      {
        if ( v87->FileName.Length )
        {
          ExFreePoolWithTag(v87->FileName.Buffer, 0);
          v87->FileName.Length = 0;
        }
        v87->DeviceObject = 0LL;
        ObfDereferenceObject(v87);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
        if ( v206 )
          IopDereferenceVpbAndFree(v206);
        *v109 = 0LL;
        result = (unsigned int)AccessStatus;
        *(_DWORD *)(v149 + 16) = AccessStatus;
      }
      return result;
    }
    if ( AccessStatus != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(v87);
      if ( (PDEVICE_OBJECT)v142 != RelatedDeviceObject )
      {
        Vpb = (ULONG_PTR)v87->Vpb;
        v173 = v206;
        if ( Vpb != v206 )
        {
          if ( Vpb )
            IopIncrementVpbRefCount(Vpb, 1);
          if ( v173 )
            IopDereferenceVpbAndFree(v173);
        }
      }
      if ( (v192 & 0x40) == 0 )
      {
        *v215 = v87;
        *v221 = -1096154543;
        ObfReferenceObject(v87);
        v174 = v87->RelatedFileObject;
        if ( (!v174 || (v174->Flags & 0x400000) != 0)
          && !v87->FileName.Length
          && (RelatedDeviceObject->DeviceType == 3
           || RelatedDeviceObject->DeviceType == 8
           || RelatedDeviceObject->DeviceType == 9
           || RelatedDeviceObject->DeviceType == 32) )
        {
          v87->Flags |= 0x400000u;
        }
        result = LODWORD(BugCheckParameter4[0]);
        *(_DWORD *)(v149 + 16) = BugCheckParameter4[0];
        return result;
      }
      if ( *(_BYTE *)(v149 + 137) )
      {
        if ( *(_BYTE *)(v149 + 208) )
        {
          XxxInformation = IopQueryXxxInformation(v87, *(_QWORD *)(v149 + 112), v149 + 204, 1);
          goto LABEL_519;
        }
        v176 = 0;
        DriverObject = RelatedDeviceObject->DriverObject;
        FastIoDispatch = DriverObject->FastIoDispatch;
        if ( *(_BYTE *)(v149 + 139) )
        {
          if ( FastIoDispatch )
          {
            if ( FastIoDispatch->SizeOfFastIoDispatch > 0x70 )
            {
              FastIoQueryNetworkOpenInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryNetworkOpenInfo;
              if ( FastIoQueryNetworkOpenInfo )
              {
                v183 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject)
                     ? (void *)VfFastIoSnapState()
                     : 0LL;
                LOBYTE(v170) = 1;
                v176 = FastIoQueryNetworkOpenInfo(
                         v87,
                         v170,
                         *(_QWORD *)(v149 + 104),
                         BugCheckParameter4,
                         RelatedDeviceObject);
                if ( v183 )
                  VfFastIoCheckState(v183);
              }
            }
          }
          if ( !v176 )
          {
            v184 = IopQueryXxxInformation(v87, *(_QWORD *)(v149 + 104), (__int64)Size, 1);
            AccessStatus = v184;
            if ( v184 == -1073741811 || v184 == -1073741822 )
            {
              XxxInformation = IopGetNetworkOpenInformation(v87);
LABEL_519:
              AccessStatus = XxxInformation;
            }
          }
        }
        else
        {
          v179 = 0LL;
          *(_QWORD *)&Size[1] = 0LL;
          if ( FastIoDispatch )
            FastIoQueryBasicInfo = (PFILE_OBJECT *)FastIoDispatch->FastIoQueryBasicInfo;
          else
            FastIoQueryBasicInfo = 0LL;
          v215 = FastIoQueryBasicInfo;
          if ( FastIoQueryBasicInfo )
          {
            if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject) )
              v179 = (void *)VfFastIoSnapState();
            v225 = v179;
            LOBYTE(v170) = 1;
            v176 = ((__int64 (__fastcall *)(PFILE_OBJECT, __int64, _QWORD, ULONG_PTR *, PDEVICE_OBJECT))FastIoQueryBasicInfo)(
                     v87,
                     v170,
                     *(_QWORD *)(v149 + 96),
                     BugCheckParameter4,
                     RelatedDeviceObject);
            v209 = v176;
            if ( v179 )
              VfFastIoCheckState(v179);
          }
          if ( v176 )
          {
            AccessStatus = BugCheckParameter4[0];
          }
          else
          {
            v181 = (void *)ExAllocatePool2(64LL, 40LL, 538996553LL);
            *(_QWORD *)&Size[1] = v181;
            if ( v181 )
            {
              AccessStatus = IopQueryXxxInformation(v87, (__int64)v181, (__int64)Size, 1);
              if ( AccessStatus >= 0 )
                memmove(*(void **)(v149 + 96), v181, Size[0]);
              ExFreePoolWithTag(v181, 0);
            }
            else
            {
              AccessStatus = -1073741670;
            }
          }
        }
      }
      *v221 = -1096154543;
      IopCloseFile(0LL, v87, 1LL, 1LL);
      ObfDereferenceObject(v87);
      *v218 = 0LL;
      result = (unsigned int)AccessStatus;
      *(_DWORD *)(v149 + 16) = AccessStatus;
      return result;
    }
    if ( (v148 & 0xFFFFFFFFFFFFFFFDuLL) == 0
      || (v150 = v148 - 2684354563u, v148 - 2684354563u <= 0x16) && (v151 = 4194817LL, _bittest64(&v151, v150)) && !v130 )
    {
      v152 = AbsoluteObjectName;
      if ( AbsoluteObjectName->MaximumLength < v87->FileName.Length )
      {
        v153 = (wchar_t *)ExAllocatePool2(256LL, v87->FileName.Length, 1665560393LL);
        if ( !v153 )
        {
          *(_DWORD *)(v149 + 16) = -1073741670;
          return 3221225626LL;
        }
        v154 = AbsoluteObjectName->Buffer;
        if ( v154 )
          ExFreePoolWithTag(v154, 0);
        v152 = AbsoluteObjectName;
        AbsoluteObjectName->Buffer = v153;
        v152->MaximumLength = v87->FileName.Length;
      }
      RtlCopyUnicodeString(v152, &v87->FileName);
      if ( BugCheckParameter4[1] - 2684354563u <= 0x16 )
      {
        v155 = 4194817LL;
        if ( _bittest64(&v155, BugCheckParameter4[1] - 2684354563u) )
          *(_QWORD *)(v149 + 40) = 0LL;
      }
    }
    if ( v87->FileName.Length )
    {
      ExFreePoolWithTag(v87->FileName.Buffer, 0);
      v87->FileName.Length = 0;
    }
    v87->DeviceObject = 0LL;
    ObfDereferenceObject(v87);
    *v109 = 0LL;
    v156 = Object;
    IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
    if ( v206 )
      IopDereferenceVpbAndFree(v206);
    v157 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(v149 + 40) = 0LL;
      v163 = 4194817LL;
      if ( v157 - 2684354563u <= 0x16 && _bittest64(&v163, v157 - 2684354563u) )
      {
        v164 = *(_DWORD *)(v149 + 152) | 0x10;
        *(_DWORD *)(v149 + 152) = v164;
        v165 = *((unsigned int *)v156 + 18);
        if ( (_DWORD)v165 == 7 || (unsigned int)v165 <= 0x24 && (v166 = 0x1080020004LL, _bittest64(&v166, v165)) )
          v167 = v164 | 8;
        else
          v167 = v164 & 0xFFFFFFF7;
        *(_DWORD *)(v149 + 152) = v167;
      }
      if ( *(_BYTE *)(v149 + 136) )
        KeBugCheckEx(0xF9u, (ULONG_PTR)v156, v142, (ULONG_PTR)AbsoluteObjectName, v157);
      if ( (*(_DWORD *)(v156[39] + 32LL) & 0x800) == 0 )
      {
        v168 = AccessState;
        *(_QWORD *)&AccessState->RemainingDesiredAccess = AccessState->OriginalDesiredAccess;
        v168->Flags &= ~0x100u;
      }
      if ( v157 - 2684354563u <= 0x16 && _bittest64(&v163, v157 - 2684354563u) && v130 )
      {
        *(_QWORD *)(v149 + 24) = P;
        *(_DWORD *)(v149 + 16) = -2147483603;
        return 2147483693LL;
      }
      else if ( v157 == 2684354585 || v157 == 2 )
      {
        v169 = v213;
        *(_QWORD *)(v169 + 8) = PsGetParentSilo(*(_QWORD *)(v213 + 8));
        return 872LL;
      }
      else
      {
        return 260LL;
      }
    }
    if ( (unsigned int)++v214 > 0x20 )
      return 3221225473LL;
    *v215 = 0LL;
    FileObject = 0LL;
    v12 = v205;
    v11 = DeviceObject;
  }
  AccessStatus = IopCheckTopDeviceHint(DesiredAccess, v12, (v192 & 8) != 0, SourceString);
  if ( AccessStatus >= 0 )
  {
    AttachedDevice = *(PDEVICE_OBJECT *)DesiredAccess;
    goto LABEL_193;
  }
  if ( v71 )
    IopDereferenceVpbAndFree(v71);
  IopDecrementDeviceObjectRef((ULONG_PTR)v53, 0);
  return (unsigned int)AccessStatus;
}
