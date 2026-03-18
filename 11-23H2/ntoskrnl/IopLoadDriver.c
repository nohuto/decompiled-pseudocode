/*
 * XREFs of IopLoadDriver @ 0x1407945D8
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14068C35C (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadUnloadDriver @ 0x1407CEE50 (IopLoadUnloadDriver.c)
 *     IopInitializeSystemDrivers @ 0x140B3CA80 (IopInitializeSystemDrivers.c)
 * Callees:
 *     VfDifCaptureIoCallbacks @ 0x140209F20 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x140209F44 (VfDifCaptureDriverEntry.c)
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     RtlAppendUnicodeToString @ 0x14022A860 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     HeadlessKernelAddLogEntry @ 0x1403225EC (HeadlessKernelAddLogEntry.c)
 *     PnpDiagnosticTraceObject @ 0x140322B80 (PnpDiagnosticTraceObject.c)
 *     DbgPrint @ 0x14032A6F0 (DbgPrint.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x140362934 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140365C48 (PnpDiagnosticTraceObjectWithStatus.c)
 *     IopResurrectDriver @ 0x14036E520 (IopResurrectDriver.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     memset @ 0x140435A00 (memset.c)
 *     ObOpenObjectByName @ 0x14068C9D0 (ObOpenObjectByName.c)
 *     IopGetDriverNameFromKeyNode @ 0x14068CCD4 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x14068CE78 (IopGetRegistryValue.c)
 *     IopBuildFullDriverPath @ 0x14068DB7C (IopBuildFullDriverPath.c)
 *     PnpPrepareDriverLoading @ 0x14068F654 (PnpPrepareDriverLoading.c)
 *     KseShimDriverIoCallbacks @ 0x140693D74 (KseShimDriverIoCallbacks.c)
 *     MmUnloadSystemImage @ 0x140696020 (MmUnloadSystemImage.c)
 *     NtQueryKey @ 0x1406D6BB0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1406E2E70 (NtQueryValueKey.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
 *     MmLoadSystemImage @ 0x140703490 (MmLoadSystemImage.c)
 *     MiFreeDriverInitialization @ 0x1407034D4 (MiFreeDriverInitialization.c)
 *     MmAcquireLoadLock @ 0x1407045B0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x140704930 (MmReleaseLoadLock.c)
 *     ObCreateObjectEx @ 0x1407308B0 (ObCreateObjectEx.c)
 *     NtQueryObject @ 0x14075B390 (NtQueryObject.c)
 *     ObInsertObject @ 0x14076B590 (ObInsertObject.c)
 *     ObCloseHandle @ 0x14076B890 (ObCloseHandle.c)
 *     EtwTiLogDriverObjectLoad @ 0x1407DEA68 (EtwTiLogDriverObjectLoad.c)
 *     ObMakeTemporaryObject @ 0x1407E0C90 (ObMakeTemporaryObject.c)
 *     PnpCallDriverEntry @ 0x1407E1BC8 (PnpCallDriverEntry.c)
 *     IopReadyDeviceObjects @ 0x1407E3494 (IopReadyDeviceObjects.c)
 *     IopBootLog @ 0x1407E34CC (IopBootLog.c)
 *     PnpDriverLoadingFailed @ 0x140862C44 (PnpDriverLoadingFailed.c)
 *     IopCheckIfNotNativeDriver @ 0x1409445E4 (IopCheckIfNotNativeDriver.c)
 *     IopLogBlockedDriverEvent @ 0x14094524C (IopLogBlockedDriverEvent.c)
 *     IopSafebootDriverLoad @ 0x140945644 (IopSafebootDriverLoad.c)
 *     CmBootLastKnownGood @ 0x140A0A4C0 (CmBootLastKnownGood.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopLoadDriver(HANDLE Handle, char a2, unsigned __int8 a3, int *a4)
{
  int v4; // r14d
  wchar_t *Buffer; // r15
  int Key; // eax
  unsigned __int16 *v9; // rbx
  int DriverNameFromKeyNode; // esi
  __int64 v11; // rcx
  wchar_t *Pool2; // rax
  int SystemImage; // eax
  __int64 v14; // rax
  _QWORD *v15; // rbx
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v21; // eax
  char *v22; // r14
  __int64 v23; // rax
  void *v24; // rbx
  unsigned int MaximumLength; // edi
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // edx
  int v29; // r8d
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rbx
  struct _KTHREAD *Lock; // rdi
  __int64 v35; // rdx
  PVOID v36; // rbx
  PVOID *NewObject; // [rsp+20h] [rbp-E0h]
  PVOID *NewObjecta; // [rsp+20h] [rbp-E0h]
  bool v39; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v43; // [rsp+78h] [rbp-88h] BYREF
  char v44[4]; // [rsp+88h] [rbp-78h]
  ULONG ReturnLength[2]; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v46; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v47; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-50h] BYREF
  int v49; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR v50; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  PVOID P; // [rsp+D8h] [rbp-28h]
  int *v53; // [rsp+E0h] [rbp-20h]
  _DWORD v54[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING *v56; // [rsp+F8h] [rbp-8h]
  int v57; // [rsp+100h] [rbp+0h]
  int v58; // [rsp+104h] [rbp+4h]
  __int128 v59; // [rsp+108h] [rbp+8h]
  _WORD v60[40]; // [rsp+120h] [rbp+20h] BYREF

  v53 = a4;
  *a4 = 0;
  v4 = a3;
  P = 0LL;
  LODWORD(v41) = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  *(_QWORD *)&v43.Length = 0LL;
  Buffer = 0LL;
  v43.Buffer = 0LL;
  v54[1] = 0;
  v58 = 0;
  v50 = 0LL;
  *(_QWORD *)&v47.Length = 0LL;
  Object = 0LL;
  v48 = 0LL;
  *(_DWORD *)v44 = 0;
  v46 = 0LL;
  v47.Buffer = 0LL;
  Destination.Buffer = 0LL;
  v49 = 0;
  v39 = 0;
  Key = NtQueryKey(Handle, 0, 0LL, 0, (unsigned int *)&v41);
  if ( Key != -1073741789 && Key != -2147483643 )
  {
    DriverNameFromKeyNode = -1073741472;
    goto LABEL_40;
  }
  if ( (int)v41 + 8 < (unsigned int)v41 )
  {
    DriverNameFromKeyNode = -1073741675;
    goto LABEL_40;
  }
  P = (PVOID)ExAllocatePool2(64LL, (unsigned int)(v41 + 8), 1699442505LL);
  v9 = (unsigned __int16 *)P;
  if ( !P )
  {
LABEL_65:
    DriverNameFromKeyNode = -1073741670;
    goto LABEL_40;
  }
  DriverNameFromKeyNode = NtQueryKey(Handle, 0, (unsigned __int64)P, v41, (unsigned int *)&v41);
  if ( DriverNameFromKeyNode < 0 )
    goto LABEL_40;
  v11 = v9[6];
  Destination.Length = v11;
  Destination.MaximumLength = v11 + 8;
  Destination.Buffer = v9 + 8;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v11 + 2, 827223881LL);
  v43.Buffer = Pool2;
  Buffer = Pool2;
  if ( !Pool2 )
  {
    Destination.Buffer = 0LL;
    goto LABEL_65;
  }
  v43.Length = Destination.Length;
  v43.MaximumLength = Destination.Length + 2;
  memmove(Pool2, Destination.Buffer, Destination.Length);
  Buffer[(unsigned __int64)Destination.Length >> 1] = 0;
  RtlAppendUnicodeToString(&Destination, L".SYS");
  HeadlessKernelAddLogEntry();
  PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, &v43.Length);
  if ( a2 )
  {
    if ( (_DWORD)InitSafeBootMode )
    {
      ReturnLength[0] = 0;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"Group");
      memset(v60, 0, 0x4CuLL);
      LODWORD(NewObject) = 76;
      if ( (int)NtQueryValueKey(Handle, &DestinationString, 2, (char *)v60, (size_t)NewObject, ReturnLength) < 0
        || (DestinationString.Length = v60[4] - 2,
            DestinationString.MaximumLength = v60[4] - 2,
            DestinationString.Buffer = &v60[6],
            !(unsigned __int8)IopSafebootDriverLoad(&DestinationString)) )
      {
        if ( !(unsigned __int8)IopSafebootDriverLoad(&Destination) )
        {
          IopBootLog(&Destination);
          DbgPrint("SAFEBOOT: skipping device = %wZ(%wZ)\n", &Destination, &DestinationString);
          HeadlessKernelAddLogEntry();
          ObCloseHandle(Handle, 0);
          return 3221226335LL;
        }
      }
    }
  }
  DriverNameFromKeyNode = IopBuildFullDriverPath(&v43, Handle, &Destination);
  if ( DriverNameFromKeyNode < 0 )
  {
    Destination.Buffer = 0LL;
    goto LABEL_40;
  }
  DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &v47);
  if ( DriverNameFromKeyNode < 0 )
    goto LABEL_40;
  v54[0] = 48;
  v55 = 0LL;
  v56 = &v47;
  v57 = IopCaseInsensitive != 0 ? 592 : 528;
  v59 = 0LL;
  ExAcquireResourceExclusiveLite(&IopDriverLoadResource, 1u);
  SystemImage = MmLoadSystemImage((int)&Destination, 0, 0, 0, (__int64)&v50, (__int64)&v48);
  DriverNameFromKeyNode = SystemImage;
  if ( SystemImage < 0 )
  {
    if ( SystemImage == -1073741554 )
    {
      DriverNameFromKeyNode = ObOpenObjectByName(
                                (__int64)v54,
                                (__int64)IoDriverObjectType,
                                0,
                                0LL,
                                0,
                                0LL,
                                (__int64)&v46);
      if ( DriverNameFromKeyNode < 0 )
      {
        ExReleaseResourceLite(&IopDriverLoadResource);
        IopBootLog(&Destination);
        if ( DriverNameFromKeyNode == -1073741772 )
          DriverNameFromKeyNode = -1073740914;
        goto LABEL_40;
      }
      *(_QWORD *)ReturnLength = 0LL;
      DriverNameFromKeyNode = ObReferenceObjectByHandle(v46, 0, IoDriverObjectType, 0, (PVOID *)ReturnLength, 0LL);
      ZwClose(v46);
      if ( DriverNameFromKeyNode >= 0 )
      {
        DriverNameFromKeyNode = IopResurrectDriver(*(__int64 *)ReturnLength);
        ObfDereferenceObject(*(PVOID *)ReturnLength);
      }
    }
    else if ( (unsigned __int8)IopCheckIfNotNativeDriver((unsigned int)SystemImage, &Destination) == 1 )
    {
      DriverNameFromKeyNode = ((_BYTE)v4 != 0) - 1073740949;
      IopLogBlockedDriverEvent(&Destination, v35, (unsigned int)DriverNameFromKeyNode);
    }
    ExReleaseResourceLite(&IopDriverLoadResource);
    IopBootLog(&Destination);
    goto LABEL_40;
  }
  v14 = RtlImageNtHeader(v48);
  *(_WORD *)v44 = *(_WORD *)(v14 + 70);
  *(_WORD *)&v44[2] = *(_WORD *)(v14 + 68);
  DriverNameFromKeyNode = PnpPrepareDriverLoading((int)&v43, Handle, v48, v4, &v49, &v39);
  if ( DriverNameFromKeyNode < 0
    || (DriverNameFromKeyNode = ObCreateObjectEx(
                                  KeGetCurrentThread()->PreviousMode,
                                  IoDriverObjectType,
                                  (__int64)v54,
                                  0,
                                  (__int64)NewObjecta,
                                  416,
                                  0,
                                  0,
                                  &Object,
                                  0LL),
        DriverNameFromKeyNode < 0) )
  {
    MmUnloadSystemImage(v50);
    ExReleaseResourceLite(&IopDriverLoadResource);
LABEL_77:
    IopBootLog(&Destination);
LABEL_79:
    Buffer = v43.Buffer;
    goto LABEL_40;
  }
  v15 = Object;
  memset(Object, 0, 0x1A0uLL);
  v15[6] = v15 + 42;
  v15[42] = v15;
  v16 = 0;
  v17 = 0LL;
  do
  {
    v15[v17 + 14] = IopInvalidDeviceRequest;
    v17 = (unsigned int)(v16 + 1);
    v16 = v17;
  }
  while ( (unsigned int)v17 <= 0x1B );
  *(_DWORD *)v15 = 22020100;
  ReturnLength[0] = v17;
  v18 = RtlImageNtHeader(v48);
  *(_WORD *)v44 = *(_WORD *)(v18 + 70);
  *(_WORD *)&v44[2] = *(_WORD *)(v18 + 68);
  v19 = v48 + *(unsigned int *)(v18 + 40);
  if ( !_bittest16((const signed __int16 *)(v18 + 94), 0xDu) )
    *((_DWORD *)v15 + 4) |= 2u;
  v15[11] = v19;
  v15[5] = v50;
  v15[3] = v48;
  *((_DWORD *)v15 + 8) = *(_DWORD *)(v18 + 80);
  DriverNameFromKeyNode = ObInsertObject(v15, 0LL, 1u, 0, 0LL, &v46);
  ExReleaseResourceLite(&IopDriverLoadResource);
  if ( DriverNameFromKeyNode < 0 )
    goto LABEL_77;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v21 = ObReferenceObjectByHandle(v46, 0, IoDriverObjectType, PreviousMode, &Object, 0LL);
  if ( v21 )
    KeBugCheckEx(0x11Fu, (ULONG_PTR)v46, v21, (ULONG_PTR)Object, 0LL);
  ZwClose(v46);
  v22 = (char *)Object;
  *((_QWORD *)Object + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
  v23 = ExAllocatePool2(64LL, v47.MaximumLength, 827223881LL);
  *((_QWORD *)v22 + 8) = v23;
  if ( v23 )
  {
    *((_WORD *)v22 + 29) = v47.MaximumLength;
    *((_WORD *)v22 + 28) = v47.Length;
    memmove(*((void **)v22 + 8), v47.Buffer, v47.MaximumLength);
  }
  v24 = (void *)ExAllocatePool2(64LL, 4096LL, 538996553LL);
  if ( v24 )
  {
    DriverNameFromKeyNode = NtQueryObject(Handle, ObjectNameInformation, v24, 0x1000u, ReturnLength);
    if ( DriverNameFromKeyNode >= 0 )
    {
      Buffer = v43.Buffer;
      if ( v43.Buffer )
      {
        MaximumLength = v43.MaximumLength;
        *(_QWORD *)(*((_QWORD *)v22 + 6) + 32LL) = ExAllocatePool2(64LL, v43.MaximumLength, 827223881LL);
        v26 = *((_QWORD *)v22 + 6);
        if ( *(_QWORD *)(v26 + 32) )
        {
          *(_WORD *)(v26 + 26) = MaximumLength;
          *(_WORD *)(*((_QWORD *)v22 + 6) + 24LL) = v43.Length;
          memmove(*(void **)(*((_QWORD *)v22 + 6) + 32LL), Buffer, MaximumLength);
        }
      }
      if ( (v49 & 1) != 0 )
        *((_DWORD *)v22 + 4) |= 0x100u;
      if ( v39 )
        *((_DWORD *)v22 + 4) |= 0x1000u;
      PnpDiagnosticTraceObject(&KMPnPEvt_DriverInit_Start, (unsigned __int16 *)v24);
      VfDifCaptureDriverEntry((__int64)v22);
      DriverNameFromKeyNode = PnpCallDriverEntry(v22, v24);
      if ( DriverNameFromKeyNode >= 0 )
      {
        VfDifCaptureIoCallbacks((__int64)v22);
        KseShimDriverIoCallbacks((__int64 *)v22, v27, (__int64)&Destination);
      }
      PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverInit_Stop, (unsigned __int16 *)v24, DriverNameFromKeyNode);
      v28 = 0;
      v29 = 0;
      v30 = 0;
      *v53 = DriverNameFromKeyNode;
      if ( DriverNameFromKeyNode < 0 )
        DriverNameFromKeyNode = -1073740955;
      v31 = 0LL;
      do
      {
        if ( !*(_QWORD *)&v22[8 * v31 + 112] )
        {
          v28 = v29;
          *(_QWORD *)&v22[8 * v30 + 112] = IopInvalidDeviceRequest;
        }
        v31 = (unsigned int)(v28 + 1);
        v30 = v31;
        ++v28;
        v29 = v31;
      }
      while ( (unsigned int)v31 <= 0x1B );
      ExFreePoolWithTag(v24, 0);
      if ( DriverNameFromKeyNode < 0 )
      {
        ObMakeTemporaryObject(v22);
        ObfDereferenceObject(v22);
      }
      else
      {
        IopBootLog(&Destination);
        v32 = *((_QWORD *)v22 + 5);
        Lock = MmAcquireLoadLock();
        MiFreeDriverInitialization(v32);
        MmReleaseLoadLock((__int64)Lock);
        IopReadyDeviceObjects(v22);
        EtwTiLogDriverObjectLoad(v22 + 56);
      }
      goto LABEL_40;
    }
    ObMakeTemporaryObject(v22);
    ObfDereferenceObject(v22);
    ExFreePoolWithTag(v24, 0);
    goto LABEL_79;
  }
  ObMakeTemporaryObject(v22);
  ObfDereferenceObject(v22);
  Buffer = v43.Buffer;
  DriverNameFromKeyNode = -1073741670;
LABEL_40:
  HeadlessKernelAddLogEntry();
  if ( DriverNameFromKeyNode < 0 && DriverNameFromKeyNode != -1073741218 && DriverNameFromKeyNode != -1073740948 )
  {
    Object = 0LL;
    if ( DriverNameFromKeyNode != -1073741554 )
    {
      PnpDriverLoadingFailed(Handle);
      if ( DriverNameFromKeyNode != -1073740955 && IopGetRegistryValue(Handle, L"ErrorControl", 0, &Object) >= 0 )
      {
        v36 = Object;
        if ( *((_DWORD *)Object + 3) )
          CmBootLastKnownGood(
            *(unsigned int *)((char *)Object + *((unsigned int *)Object + 2)),
            (unsigned __int64)&v47 & -(__int64)(v47.Buffer != 0LL),
            (unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL),
            (unsigned int)DriverNameFromKeyNode);
        ExFreePoolWithTag(v36, 0);
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Buffer )
  {
    PnpDiagnosticTraceDriverFullInfo(&KMPnPEvt_DriverLoad_Stop, &v43.Length, DriverNameFromKeyNode, &v47, v44[0]);
    ExFreePoolWithTag(Buffer, 0);
  }
  if ( v47.Buffer )
    ExFreePoolWithTag(v47.Buffer, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  ObCloseHandle(Handle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
