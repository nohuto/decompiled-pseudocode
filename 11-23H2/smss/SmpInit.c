/*
 * XREFs of SmpInit @ 0x14000DDE0
 * Callers:
 *     wmain @ 0x140001BC0 (wmain.c)
 * Callees:
 *     SmpLoadDataFromRegistry @ 0x14000B688 (SmpLoadDataFromRegistry.c)
 *     SmpInitializeKnownSubSystems @ 0x14000E5E0 (SmpInitializeKnownSubSystems.c)
 *     InitializeWow64OnBoot @ 0x14000E6B0 (InitializeWow64OnBoot.c)
 *     SmpInitializePendingRename @ 0x14000E7D0 (SmpInitializePendingRename.c)
 *     SmpCreateSecurityDescriptors @ 0x14000EAB0 (SmpCreateSecurityDescriptors.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     memset_0 @ 0x140014B4F (memset_0.c)
 */

__int64 SmpInit()
{
  NTSTATUS v0; // eax
  unsigned int v1; // edx
  signed __int32 v2; // ecx
  __int64 v3; // rax
  NTSTATUS v5; // edx
  __int64 v6; // rax
  int v7; // eax
  signed __int32 v8; // ecx
  NTSTATUS v9; // eax
  unsigned int v10; // ecx
  _BYTE *Heap; // rax
  _BYTE *v12; // r15
  __int64 v13; // rcx
  NTSTATUS v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rcx
  int SecurityDescriptors; // eax
  signed __int32 v18; // ecx
  int v19; // eax
  signed __int32 v20; // ecx
  NTSTATUS v21; // eax
  signed __int32 v22; // ecx
  unsigned int v23; // ecx
  ULONG i; // r15d
  NTSTATUS v25; // r12d
  __int64 v26; // rax
  int v27; // eax
  signed __int32 v28; // ecx
  int DataFromRegistry; // r15d
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  ULONG ProcessInformation; // [rsp+28h] [rbp-E0h] BYREF
  int ProcessInformation_4; // [rsp+2Ch] [rbp-DCh] BYREF
  void *EventHandle; // [rsp+30h] [rbp-D8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v38[2]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v39[2]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD SystemInformation[260]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v41[4]; // [rsp+498h] [rbp+390h] BYREF
  __int64 v42; // [rsp+4A8h] [rbp+3A0h]
  __int64 v43; // [rsp+4B8h] [rbp+3B0h]

  LODWORD(v38[0]) = 1441812;
  v38[1] = L"\\SmApiPort";
  LODWORD(v39[0]) = 4456514;
  v39[1] = L"\\Device\\VolumesSafeForWriteAccess";
  ProcessInformation = 0;
  SmpInitSaveGlobals = (__int64)&SmpInitLastCall;
  SmBaseTag = RtlCreateTagHeap(
                *(HANDLE *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                0,
                (PWSTR)L"SMSS!",
                (PWSTR)L"INIT");
  v0 = NtQuerySystemInformation(SystemBasicInformation, &SmpSystemInfo, 0x40u, 0LL);
  v1 = v0;
  if ( v0 < 0 )
  {
    SmpInitProgressByLine = 1712;
    SmpInitReturnStatus = v0;
    SmpInitLastCall = (__int64)NtQuerySystemInformation;
    v2 = _InterlockedIncrement(SmpGlobalLog) % 64;
    v3 = 2LL * v2;
    SmpGlobalLog[4 * v2 + 2] = 1714;
LABEL_3:
    SmpGlobalLog[2 * v3 + 3] = v1;
    *(_QWORD *)&SmpGlobalLog[2 * v3 + 4] = 0LL;
    return v1;
  }
  v5 = NtQuerySystemInformation(SystemSessionPoolTagInformation|0x80, &SmpSystemWriteConstraintInfo, 8u, 0LL);
  if ( v5 < 0 )
  {
    v6 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpSystemWriteConstraintInfo = 0;
    SmpGlobalLog[2 * v6 + 2] = 1734;
    SmpGlobalLog[2 * v6 + 3] = v5;
    *(_QWORD *)&SmpGlobalLog[2 * v6 + 4] = 0LL;
  }
  ProcessInformation_4 = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDefaultHardErrorMode, &ProcessInformation_4, 4u);
  v7 = SmpInitializeKnownSubSystems();
  v1 = v7;
  if ( v7 < 0 )
  {
    SmpInitProgressByLine = 1755;
    SmpInitReturnStatus = v7;
    SmpInitLastCall = (__int64)SmpInitializeKnownSubSystems;
    v8 = _InterlockedIncrement(SmpGlobalLog) % 64;
    v3 = 2LL * v8;
    SmpGlobalLog[4 * v8 + 2] = 1756;
    goto LABEL_3;
  }
  SmpManufacturingMode = 0;
  v9 = NtQuerySystemInformation(SystemSummaryMemoryInformation|0x80, 0LL, 0, &ProcessInformation);
  v10 = v9;
  if ( v9 >= 0 )
  {
    SmpInitProgressByLine = 1821;
    SmpInitReturnStatus = v9;
    SmpInitLastCall = (__int64)NtQuerySystemInformation;
    v33 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v33 + 2] = 1822;
    SmpGlobalLog[2 * v33 + 3] = v10;
    *(_QWORD *)&SmpGlobalLog[2 * v33 + 4] = 0LL;
    return 3221225473LL;
  }
  else if ( v9 == -1073741820 )
  {
    Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, ProcessInformation);
    v12 = Heap;
    if ( !Heap )
    {
      v1 = -1073741670;
      SmpInitProgressByLine = 1779;
      SmpInitReturnStatus = -1073741670;
      SmpInitLastCall = (__int64)RtlAllocateHeap;
      v13 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v13 + 2] = 1780;
      SmpGlobalLog[2 * v13 + 3] = -1073741670;
      *(_QWORD *)&SmpGlobalLog[2 * v13 + 4] = 0LL;
      return v1;
    }
    v14 = NtQuerySystemInformation(SystemSummaryMemoryInformation|0x80, Heap, ProcessInformation, &ProcessInformation);
    if ( v14 >= 0 )
    {
      SmpManufacturingMode = *v12 & 1;
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v12);
      LOBYTE(v16) = 1;
      SecurityDescriptors = SmpCreateSecurityDescriptors(v16);
      v1 = SecurityDescriptors;
      if ( SecurityDescriptors < 0 )
      {
        SmpInitProgressByLine = 1834;
        SmpInitReturnStatus = SecurityDescriptors;
        SmpInitLastCall = (__int64)SmpCreateSecurityDescriptors;
        v18 = _InterlockedIncrement(SmpGlobalLog) % 64;
        v3 = 2LL * v18;
        SmpGlobalLog[4 * v18 + 2] = 1835;
        goto LABEL_3;
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v38;
      ObjectAttributes.Attributes = 0;
      ObjectAttributes.SecurityDescriptor = SmpApiPortSecurityDescriptor;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      memset_0(v41, 0, 0x48uLL);
      v41[0] = 0x20000;
      v42 = 328LL;
      v43 = 1000000LL;
      v19 = NtAlpcCreatePort(&SmpApiConnectionPort, &ObjectAttributes, v41);
      v1 = v19;
      if ( v19 < 0 )
      {
        SmpInitProgressByLine = 1858;
        SmpInitReturnStatus = v19;
        SmpInitLastCall = (__int64)NtAlpcCreatePort;
        v20 = _InterlockedIncrement(SmpGlobalLog) % 64;
        v3 = 2LL * v20;
        SmpGlobalLog[4 * v20 + 2] = 1859;
        goto LABEL_3;
      }
      SmpUniqueProcessId = LODWORD(KeGetPcr()->NtTib.Self[1].StackBase);
      SmpActiveProcessorCount = MEMORY[0x7FFE03C0];
      v21 = NtQuerySystemInformation(SystemNumaProcessorMap, SystemInformation, 0x408u, 0LL);
      v1 = v21;
      if ( v21 < 0 )
      {
        SmpInitProgressByLine = 1877;
        SmpInitReturnStatus = v21;
        SmpInitLastCall = (__int64)NtQuerySystemInformation;
        v22 = _InterlockedIncrement(SmpGlobalLog) % 64;
        v3 = 2LL * v22;
        SmpGlobalLog[4 * v22 + 2] = 1878;
        goto LABEL_3;
      }
      SmpMaximumNodeCount = SystemInformation[0] + 1;
      RtlInitializeBitMap(&SmpNodeBitmap, &SmpNodeBitmapBuffer, SystemInformation[0] + 1);
      RtlClearAllBits(&SmpNodeBitmap);
      v23 = SmpMaximumNodeCount;
      for ( i = 0; i < v23; ++i )
      {
        if ( *(_QWORD *)&SystemInformation[4 * i + 2] )
        {
          RtlSetBits(&SmpNodeBitmap, i, 1u);
          v23 = SmpMaximumNodeCount;
        }
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v39;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v25 = NtOpenEvent(&EventHandle, 0x1F0003u, &ObjectAttributes);
      if ( v25 < 0 )
      {
        v26 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
        EventHandle = 0LL;
        SmpGlobalLog[2 * v26 + 2] = 1927;
        SmpGlobalLog[2 * v26 + 3] = v25;
        *(_QWORD *)&SmpGlobalLog[2 * v26 + 4] = 0LL;
      }
      v27 = SmpInitializePendingRename();
      v1 = v27;
      if ( v27 < 0 )
      {
        SmpInitProgressByLine = 1939;
        SmpInitReturnStatus = v27;
        SmpInitLastCall = (__int64)SmpInitializePendingRename;
        v28 = _InterlockedIncrement(SmpGlobalLog) % 64;
        v3 = 2LL * v28;
        SmpGlobalLog[4 * v28 + 2] = 1941;
        goto LABEL_3;
      }
      DataFromRegistry = SmpLoadDataFromRegistry(EventHandle);
      if ( v25 >= 0 )
        NtClose(EventHandle);
      if ( DataFromRegistry >= 0 )
      {
        v30 = InitializeWow64OnBoot();
        DataFromRegistry = v30;
        if ( v30 < 0 )
        {
          SmpInitProgressByLine = 1971;
          SmpInitReturnStatus = v30;
          SmpInitLastCall = (__int64)InitializeWow64OnBoot;
          v31 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
          SmpGlobalLog[2 * v31 + 2] = 1973;
          SmpGlobalLog[2 * v31 + 3] = DataFromRegistry;
          *(_QWORD *)&SmpGlobalLog[2 * v31 + 4] = 0LL;
        }
      }
      return (unsigned int)DataFromRegistry;
    }
    else
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v12);
      SmpInitProgressByLine = 1797;
      SmpInitReturnStatus = v14;
      SmpInitLastCall = (__int64)NtQuerySystemInformation;
      v15 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v15 + 2] = 1799;
      SmpGlobalLog[2 * v15 + 3] = v14;
      *(_QWORD *)&SmpGlobalLog[2 * v15 + 4] = 0LL;
      return (unsigned int)v14;
    }
  }
  else
  {
    SmpInitProgressByLine = 1814;
    SmpInitReturnStatus = v9;
    SmpInitLastCall = (__int64)NtQuerySystemInformation;
    v32 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v32 + 2] = 1816;
    SmpGlobalLog[2 * v32 + 3] = v10;
    *(_QWORD *)&SmpGlobalLog[2 * v32 + 4] = 0LL;
    return v10;
  }
}
