/*
 * XREFs of NtPssCaptureVaSpaceBulk @ 0x140A054A0
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     IoAllocateMdl @ 0x14022E3B0 (IoAllocateMdl.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     MmProbeAndLockPages @ 0x140238860 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     Feature_1597180219__private_IsEnabledDeviceUsage @ 0x140412CCC (Feature_1597180219__private_IsEnabledDeviceUsage.c)
 *     ZwPssCaptureVaSpaceBulk @ 0x14041D990 (ZwPssCaptureVaSpaceBulk.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     MmQueryVirtualMemory @ 0x1406F8560 (MmQueryVirtualMemory.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtPssCaptureVaSpaceBulk(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PNTPSS_MEMORY_BULK_INFORMATION BulkInformation,
        SIZE_T BulkInformationLength,
        PSIZE_T ReturnLength)
{
  _NTPSS_MEMORY_BULK_INFORMATION *MappedSystemVa; // r14
  unsigned int v7; // ebx
  struct _MDL *v8; // r15
  NTSTATUS VirtualMemory; // edi
  char PreviousMode; // r13
  __int64 v12; // rcx
  struct _MDL *Mdl; // rax
  SIZE_T v14; // r12
  _NTPSS_MEMORY_BULK_INFORMATION *v15; // r13
  char *BaseAddressa; // [rsp+58h] [rbp-E0h]
  ULONG_PTR v17; // [rsp+60h] [rbp-D8h] BYREF
  PMDL MemoryDescriptorList; // [rsp+68h] [rbp-D0h]
  PSIZE_T v19; // [rsp+70h] [rbp-C8h]
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp-C0h]
  PVOID Object; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+88h] [rbp-B0h] BYREF
  _NTPSS_MEMORY_BULK_INFORMATION v23; // [rsp+90h] [rbp-A8h]
  HANDLE v24; // [rsp+A0h] [rbp-98h]
  PVOID v25; // [rsp+A8h] [rbp-90h]
  PNTPSS_MEMORY_BULK_INFORMATION v26; // [rsp+B0h] [rbp-88h]
  SIZE_T v27; // [rsp+B8h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-78h]
  $115DCDF994C6370D29323EAB0E0C9502 v29; // [rsp+C8h] [rbp-70h] BYREF

  MappedSystemVa = BulkInformation;
  BaseAddressa = (char *)BaseAddress;
  BugCheckParameter1 = (ULONG_PTR)ProcessHandle;
  v24 = ProcessHandle;
  v25 = BaseAddress;
  v26 = BulkInformation;
  v27 = BulkInformationLength;
  v19 = ReturnLength;
  Object = 0LL;
  memset(&v29, 0, sizeof(v29));
  v22 = 0LL;
  v17 = 0LL;
  v7 = 0;
  v8 = 0LL;
  MemoryDescriptorList = 0LL;
  VirtualMemory = 0;
  if ( BulkInformationLength < 0x10 )
    return -1073741820;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v23 = 0LL;
    ProbeForWrite(BulkInformation, BulkInformationLength, 8u);
    if ( ReturnLength )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v12 = (__int64)ReturnLength;
      *(_QWORD *)v12 = *(_QWORD *)v12;
    }
    v23 = *MappedSystemVa;
    BaseAddress = BaseAddressa;
  }
  else
  {
    v23 = *BulkInformation;
  }
  if ( !v23.QueryFlags )
    goto LABEL_11;
  if ( (v23.QueryFlags & 0xFFFFFFFC) != 0 )
  {
    VirtualMemory = -1073741637;
    goto LABEL_45;
  }
  if ( (unsigned __int64)BaseAddress > 0x7FFFFFFEFFFFLL )
  {
    VirtualMemory = -1073741503;
    goto LABEL_45;
  }
  if ( !PreviousMode )
  {
    v8 = 0LL;
    goto LABEL_27;
  }
  if ( !(unsigned int)Feature_1597180219__private_IsEnabledDeviceUsage() || BulkInformationLength <= 0xFFFFFFFF )
  {
    Mdl = IoAllocateMdl(MappedSystemVa, BulkInformationLength, 0, 0, 0LL);
    v8 = Mdl;
    MemoryDescriptorList = Mdl;
    if ( !Mdl
      || ((MmProbeAndLockPages(Mdl, 0, IoWriteAccess), v7 = 2, (v8->MdlFlags & 5) == 0)
        ? (MappedSystemVa = (_NTPSS_MEMORY_BULK_INFORMATION *)MmMapLockedPagesSpecifyCache(
                                                                v8,
                                                                0,
                                                                MmCached,
                                                                0LL,
                                                                0,
                                                                0x40000010u))
        : (MappedSystemVa = (_NTPSS_MEMORY_BULK_INFORMATION *)v8->MappedSystemVa),
          !MappedSystemVa) )
    {
      VirtualMemory = -1073741670;
      goto LABEL_45;
    }
LABEL_27:
    if ( BugCheckParameter1 != -1LL )
    {
      VirtualMemory = ObpReferenceObjectByHandleWithTag(
                        BugCheckParameter1,
                        4096,
                        (__int64)PsProcessType,
                        PreviousMode,
                        0x41737350u,
                        &Object,
                        0LL,
                        0LL);
      if ( VirtualMemory < 0 )
        goto LABEL_45;
      if ( (*((_DWORD *)Object + 543) & 0x1000) != 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x41737350u);
        VirtualMemory = -1073741790;
        goto LABEL_45;
      }
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v29);
      v7 |= 1u;
    }
    if ( PreviousMode )
    {
      VirtualMemory = ZwPssCaptureVaSpaceBulk(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        BaseAddressa,
                        MappedSystemVa,
                        BulkInformationLength,
                        &v17);
    }
    else
    {
      MappedSystemVa->NumberOfEntries = 0;
      v17 = 16LL;
      v14 = BulkInformationLength - 16;
      v15 = MappedSystemVa + 1;
      while ( v14 >= 0x30 )
      {
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
        {
          VirtualMemory = -1073741749;
          goto LABEL_45;
        }
        VirtualMemory = MmQueryVirtualMemory(
                          0xFFFFFFFFFFFFFFFFuLL,
                          (unsigned __int64)BaseAddressa,
                          0,
                          (unsigned __int64)v15,
                          0x30uLL,
                          (__int64)&v22,
                          2);
        if ( VirtualMemory < 0 )
        {
          if ( MappedSystemVa->NumberOfEntries )
            VirtualMemory = 0;
          break;
        }
        v14 -= v22;
        v17 += v22;
        BaseAddressa = (char *)v15[1].NextValidAddress + *(_QWORD *)&v15->QueryFlags;
        v15 += 3;
        ++MappedSystemVa->NumberOfEntries;
        MappedSystemVa->NextValidAddress = BaseAddressa;
      }
      if ( VirtualMemory >= 0 && MappedSystemVa->NextValidAddress != (PVOID)0x7FFFFFFF0000LL )
        VirtualMemory = 261;
    }
    goto LABEL_45;
  }
LABEL_11:
  VirtualMemory = -1073741811;
LABEL_45:
  if ( (v7 & 1) != 0 )
    KiUnstackDetachProcess(&v29);
  if ( v8 )
  {
    if ( v7 >= 2 )
      MmUnlockPages(v8);
    IoFreeMdl(v8);
  }
  if ( ReturnLength )
    *ReturnLength = v17;
  return VirtualMemory;
}
