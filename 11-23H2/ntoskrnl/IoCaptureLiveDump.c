/*
 * XREFs of IoCaptureLiveDump @ 0x14094BBE8
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14053C658 (DbgkCaptureLiveKernelDump.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x14093B858 (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140208AA0 (EtwActivityIdControl.c)
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExGetExtensionTable @ 0x1402FA6D0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA700 (ExReleaseExtensionTable.c)
 *     SecureDump_GetSecureDumpSettings @ 0x140395D24 (SecureDump_GetSecureDumpSettings.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14055A3FC (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsTracingEnabled @ 0x14055A450 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpOpenVMMemoryPartition @ 0x14055A598 (IopLiveDumpOpenVMMemoryPartition.c)
 *     IopLiveDumpTrace @ 0x14055A74C (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14055B05C (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14055B370 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14055B574 (IopLiveDumpTraceInterfaceStart.c)
 *     KeGetSupervisorStateExtensionHost @ 0x140572B8C (KeGetSupervisorStateExtensionHost.c)
 *     IoCreateNotificationEvent @ 0x1407E93C0 (IoCreateNotificationEvent.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14094C76C (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpInitRegistrySettings @ 0x14094E9CC (IopLiveDumpInitRegistrySettings.c)
 *     IopLiveDumpReleaseResources @ 0x14094F018 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpValidateParameters @ 0x14094F480 (IopLiveDumpValidateParameters.c)
 *     IopLiveDumpWriteDumpFile @ 0x14094F684 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14094FB58 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x140A9A728 (IopLiveDumpCaptureMemoryPages.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IoCaptureLiveDump(int a1, __int64 a2, __int64 a3, __int64 a4, void *a5, __int64 a6, __int64 *a7)
{
  PKEVENT v8; // rdi
  PKEVENT v9; // r15
  struct _EX_RUNDOWN_REF *v10; // r12
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int *v13; // r15
  HANDLE v14; // r13
  int SecureDumpSettings; // edi
  HANDLE v16; // rsi
  struct _EX_RUNDOWN_REF *SupervisorStateExtensionHost; // rax
  void (__fastcall **ExtensionTable)(__int64); // rax
  __int64 v19; // rcx
  __int64 Pool2; // rax
  int v21; // ecx
  unsigned int v22; // ecx
  __int64 v23; // rax
  _BYTE *v24; // rcx
  int v25; // eax
  __int64 MillisecondCounter; // r14
  int v27; // eax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  void *v31; // rsi
  int v32; // ecx
  const GUID *v33; // r9
  const GUID *v34; // r8
  char v36; // [rsp+38h] [rbp-D0h] BYREF
  bool v37; // [rsp+39h] [rbp-CFh] BYREF
  bool v38; // [rsp+3Ah] [rbp-CEh] BYREF
  char v39; // [rsp+3Bh] [rbp-CDh] BYREF
  HANDLE EventHandle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE v41; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A8h]
  __int64 v45; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+70h] [rbp-98h] BYREF
  __int64 v47; // [rsp+78h] [rbp-90h] BYREF
  __int64 v48; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  __int128 v50; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v52; // [rsp+C8h] [rbp-40h]
  __int64 v53; // [rsp+D0h] [rbp-38h]
  HANDLE *p_EventHandle; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-28h]
  __int64 *v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h]
  __int64 *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h]
  __int64 *v60; // [rsp+108h] [rbp+0h]
  __int64 v61; // [rsp+110h] [rbp+8h]
  __int64 *v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]
  HANDLE *v64; // [rsp+128h] [rbp+20h]
  __int64 v65; // [rsp+130h] [rbp+28h]
  char *v66; // [rsp+138h] [rbp+30h]
  __int64 v67; // [rsp+140h] [rbp+38h]
  bool *v68; // [rsp+148h] [rbp+40h]
  __int64 v69; // [rsp+150h] [rbp+48h]
  bool *v70; // [rsp+158h] [rbp+50h]
  __int64 v71; // [rsp+160h] [rbp+58h]
  HANDLE *p_Handle; // [rsp+168h] [rbp+60h]
  __int64 v73; // [rsp+170h] [rbp+68h]
  char *v74; // [rsp+178h] [rbp+70h]
  __int64 v75; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+188h] [rbp+80h] BYREF
  __int64 *v77; // [rsp+1A8h] [rbp+A0h]
  __int64 v78; // [rsp+1B0h] [rbp+A8h]
  __int64 *v79; // [rsp+1B8h] [rbp+B0h]
  __int64 v80; // [rsp+1C0h] [rbp+B8h]
  HANDLE *v81; // [rsp+1C8h] [rbp+C0h]
  __int64 v82; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 *v84; // [rsp+1F8h] [rbp+F0h]
  int v85; // [rsp+200h] [rbp+F8h]
  int v86; // [rsp+204h] [rbp+FCh]

  v48 = a4;
  v47 = a3;
  v8 = 0LL;
  v46 = a2;
  v9 = 0LL;
  LODWORD(v44) = a1;
  v10 = 0LL;
  v45 = a6;
  v11 = 0LL;
  EventHandle = 0LL;
  Handle = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  DestinationString = 0LL;
  v50 = 0LL;
  if ( !ForceDumpDisabled && AllowLiveDump )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    IopLiveDumpGetMillisecondCounter(1);
    if ( BufferChunkSizeInBytes != MEMORY[0xFFFFF78000000244] )
    {
      BufferChunkSizeInBytes = MEMORY[0xFFFFF78000000244];
      BufferChunkSizeInPages = MEMORY[0xFFFFF78000000244] >> 12;
    }
    IopLiveDumpTraceInterfaceStart();
    if ( a7 )
      *a7 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v36 = ExAcquireResourceExclusiveLite(&IopLiveDumpLock, 0);
    if ( v36 != 1 )
    {
      v13 = (int *)(a6 + 24);
      v14 = EventHandle;
      SecureDumpSettings = -1073741267;
      v16 = Handle;
LABEL_35:
      if ( IptInterface )
      {
        (*(void (__fastcall **)(_QWORD))IptInterface)(0LL);
        ExReleaseExtensionTable(v10);
        IptInterface = 0LL;
      }
      if ( v14 )
        ZwClose(v14);
      if ( v16 )
        ZwClose(v16);
      if ( v41 )
        ZwClose(v41);
      if ( (*v13 & 0x10) != 0 && SecureDumpSettings == -1073741248 && IopLiveDumpIsTracingEnabled() )
        EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_MEMORY_PRESSURE_ABORT, 0LL, 0, 0LL);
      if ( v36 )
      {
        IopLiveDumpContext = 0LL;
        ExReleaseResourceLite(&IopLiveDumpLock);
      }
      KeLeaveCriticalRegion();
      if ( SecureDumpSettings >= 0 )
      {
        SecureDumpSettings = SecureDump_GetSecureDumpSettings(v11 + 984);
        if ( SecureDumpSettings >= 0 )
        {
          if ( !*v24
            || (v25 = *(_DWORD *)(v11 + 992)) != 0
            && *(_BYTE *)(v11 + 985)
            && *(_DWORD *)(v11 + 988) == 4096
            && (v25 & 0xFFF) == 0 )
          {
            if ( (*(_DWORD *)(v11 + 40) & 8) != 0 )
            {
              SecureDumpSettings = -1073741802;
              *a7 = v11;
            }
            else
            {
              IopLiveDumpTrace();
              MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
              if ( *(_QWORD *)(v11 + 192) || *(_QWORD *)(v11 + 200) )
                v27 = IopLiveDumpWriteDumpFileWithExtraPages(v11);
              else
                v27 = IopLiveDumpWriteDumpFile(v11);
              SecureDumpSettings = v27;
              v28 = IopLiveDumpGetMillisecondCounter(0);
              if ( (unsigned int)dword_140C03870 > 5 && tlgKeywordOn((__int64)&dword_140C03870, 0x400000000000LL) )
              {
                v45 = 0x1000000LL;
                v77 = &v45;
                v29 = *(_QWORD *)(v11 + 560);
                v78 = 8LL;
                v80 = 8LL;
                v82 = 8LL;
                v30 = *(_QWORD *)(v29 + 4000);
                v79 = &v42;
                v42 = v30;
                v41 = (HANDLE)(v28 - MillisecondCounter);
                v81 = &v41;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140C03870,
                  (unsigned __int8 *)&byte_14002C0D7,
                  (const GUID *)(v11 + 968),
                  (const GUID *)(v11 + 952),
                  5u,
                  &v76);
              }
              IopLiveDumpTraceDumpFileWriteEnd(v11, v28 - MillisecondCounter, 0LL, SecureDumpSettings);
              if ( SecureDumpSettings >= 0 && (*(_DWORD *)(v11 + 80) & 2) != 0 )
                SecureDumpSettings = 261;
            }
          }
          else
          {
            SecureDumpSettings = -1073741823;
          }
        }
      }
      v31 = (void *)IopLiveDumpGetMillisecondCounter(0);
      IopLiveDumpTraceInterfaceEnd(v11, 0LL, SecureDumpSettings, v31);
      if ( (unsigned int)dword_140C03870 > 5 && tlgKeywordOn((__int64)&dword_140C03870, 0x400000000000LL) )
      {
        v32 = *v13;
        v52 = &v45;
        v45 = 0x1000000LL;
        p_EventHandle = &EventHandle;
        v42 = (unsigned int)v44;
        v53 = 8LL;
        v56 = &v42;
        v58 = &v46;
        v60 = &v47;
        v62 = &v48;
        v41 = a5;
        v64 = &v41;
        LODWORD(EventHandle) = SecureDumpSettings;
        v36 = (v32 & 8) != 0;
        v66 = &v36;
        v37 = (v32 & 0x10) != 0;
        v55 = 4LL;
        v68 = &v37;
        v70 = &v38;
        p_Handle = &Handle;
        v39 = IOSpaceEnabled;
        v74 = &v39;
        v57 = 8LL;
        v59 = 8LL;
        v61 = 8LL;
        v63 = 8LL;
        v65 = 8LL;
        v67 = 1LL;
        v69 = 1LL;
        v38 = (v32 & 0x20) != 0;
        v71 = 1LL;
        Handle = v31;
        v73 = 8LL;
        v75 = 1LL;
        if ( v11 )
        {
          v33 = (const GUID *)(v11 + 952);
          v34 = (const GUID *)(v11 + 968);
        }
        else
        {
          v33 = (const GUID *)&v50;
          v34 = (const GUID *)&v50;
        }
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C03870,
          (unsigned __int8 *)byte_14002BFD1,
          v34,
          v33,
          0xEu,
          &v51);
      }
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 40) & 8) == 0 )
          EtwActivityIdControl(2u, (LPGUID)(v11 + 952));
        if ( SecureDumpSettings != -1073741802 )
        {
          IopLiveDumpReleaseResources(v11);
          ExFreePoolWithTag((PVOID)v11, 0x706D644Cu);
        }
      }
      return (unsigned int)SecureDumpSettings;
    }
    SupervisorStateExtensionHost = (struct _EX_RUNDOWN_REF *)KeGetSupervisorStateExtensionHost();
    v10 = SupervisorStateExtensionHost;
    if ( SupervisorStateExtensionHost )
    {
      ExtensionTable = (void (__fastcall **)(__int64))ExGetExtensionTable(SupervisorStateExtensionHost);
      IptInterface = (__int64)ExtensionTable;
      if ( !ExtensionTable )
        goto LABEL_14;
      LOBYTE(v19) = 1;
      (*ExtensionTable)(v19);
      if ( !(*(unsigned __int8 (**)(void))(IptInterface + 8))() )
      {
        (*(void (__fastcall **)(_QWORD))IptInterface)(0LL);
        ExReleaseExtensionTable(v10);
        IptInterface = 0LL;
      }
      if ( !IptInterface )
LABEL_14:
        v10 = 0LL;
    }
    if ( (*(_DWORD *)(a6 + 24) & 0x10) != 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowNonPagedPoolCondition");
      v8 = IoCreateNotificationEvent(&DestinationString, &EventHandle);
      RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowMemoryCondition");
      v9 = IoCreateNotificationEvent(&DestinationString, &Handle);
      RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\HighCommitCondition");
      v42 = (__int64)IoCreateNotificationEvent(&DestinationString, &v41);
    }
    Pool2 = ExAllocatePool2(64LL, 1224LL, 1886217292LL);
    v11 = Pool2;
    if ( !Pool2 )
    {
      v13 = (int *)(a6 + 24);
      v14 = EventHandle;
      SecureDumpSettings = -1073741670;
      v16 = Handle;
      goto LABEL_35;
    }
    v21 = *(_DWORD *)(Pool2 + 80);
    *(_DWORD *)Pool2 = v44;
    v22 = v21 & 0xFFFFFFF3;
    *(_QWORD *)(Pool2 + 8) = v46;
    *(_QWORD *)(Pool2 + 16) = v47;
    *(_QWORD *)(Pool2 + 32) = a5;
    *(_QWORD *)(Pool2 + 904) = EventHandle;
    *(_QWORD *)(Pool2 + 912) = Handle;
    *(_QWORD *)(Pool2 + 920) = v41;
    v41 = 0LL;
    v23 = v42;
    *(_QWORD *)(v11 + 24) = a4;
    v14 = 0LL;
    EventHandle = 0LL;
    *(_QWORD *)(v11 + 928) = v8;
    *(_QWORD *)(v11 + 944) = v23;
    LODWORD(v23) = *(_DWORD *)(v11 + 40);
    IopLiveDumpContext = v11;
    *(_QWORD *)(v11 + 936) = v9;
    *(_QWORD *)(v11 + 1096) = 0LL;
    *(_QWORD *)(v11 + 1104) = 0LL;
    *(_DWORD *)(v11 + 80) = v22;
    if ( (v23 & 4) != 0 )
      *(_DWORD *)(v11 + 80) = v22 | 0x18000;
    *(_QWORD *)(v11 + 1208) = v11 + 1200;
    *(_QWORD *)(v11 + 1200) = v11 + 1200;
    IopLiveDumpInitRegistrySettings(v11);
    if ( AllowLiveDump && ((*(_DWORD *)(v11 + 80) & 0x200) == 0 || *(_QWORD *)(v11 + 1144)) )
    {
      EtwActivityIdControl(5u, (LPGUID)(v11 + 952));
      EtwActivityIdControl(1u, (LPGUID)(v11 + 968));
      if ( (unsigned int)dword_140C03870 > 5 && tlgKeywordOn((__int64)&dword_140C03870, 0x400000000000LL) )
      {
        v86 = 0;
        v84 = &v42;
        v42 = 0x1000000LL;
        v85 = 8;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C03870,
          (unsigned __int8 *)byte_14002C130,
          (const GUID *)(v11 + 968),
          (const GUID *)(v11 + 952),
          3u,
          &v83);
      }
      SecureDumpSettings = IopLiveDumpValidateParameters(v11, v45);
      v13 = (int *)(a6 + 24);
      if ( SecureDumpSettings < 0 )
        goto LABEL_34;
      if ( (*(_DWORD *)(v11 + 40) & 8) == 0 || a7 )
      {
        IopLiveDumpOpenVMMemoryPartition(v11);
        SecureDumpSettings = IopLiveDumpAllocAndInitResources(v11);
        if ( SecureDumpSettings >= 0 )
          SecureDumpSettings = IopLiveDumpCaptureMemoryPages(v11);
        goto LABEL_34;
      }
    }
    else
    {
      v13 = (int *)(a6 + 24);
    }
    SecureDumpSettings = -1073741811;
LABEL_34:
    v16 = EventHandle;
    goto LABEL_35;
  }
  if ( a7 )
    *a7 = 0LL;
  return 3221225659LL;
}
