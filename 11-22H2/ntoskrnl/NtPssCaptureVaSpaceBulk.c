/*
 * XREFs of NtPssCaptureVaSpaceBulk @ 0x140A052C0
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     IoAllocateMdl @ 0x14022E2C0 (IoAllocateMdl.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     MmProbeAndLockPages @ 0x140238770 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027CE40 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x1402ACFB0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwPssCaptureVaSpaceBulk @ 0x14041CF40 (ZwPssCaptureVaSpaceBulk.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtPssCaptureVaSpaceBulk(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PNTPSS_MEMORY_BULK_INFORMATION BulkInformation,
        SIZE_T BulkInformationLength,
        PSIZE_T ReturnLength)
{
  ULONG v5; // r10d
  _NTPSS_MEMORY_BULK_INFORMATION *MappedSystemVa; // r14
  unsigned int v7; // ebx
  struct _MDL *v8; // r15
  NTSTATUS VirtualMemory; // edi
  char PreviousMode; // r12
  __int64 v12; // rcx
  ULONG_PTR v13; // r13
  struct _MDL *Mdl; // rax
  unsigned __int64 v15; // r12
  _NTPSS_MEMORY_BULK_INFORMATION *v16; // r13
  char *BaseAddressa; // [rsp+58h] [rbp-F0h]
  ULONG_PTR v18; // [rsp+60h] [rbp-E8h] BYREF
  ULONG Length[2]; // [rsp+68h] [rbp-E0h]
  PMDL MemoryDescriptorList; // [rsp+70h] [rbp-D8h]
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp-D0h]
  PSIZE_T v22; // [rsp+80h] [rbp-C8h]
  PVOID Object; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+90h] [rbp-B8h] BYREF
  _NTPSS_MEMORY_BULK_INFORMATION v25; // [rsp+98h] [rbp-B0h]
  HANDLE v26; // [rsp+A8h] [rbp-A0h]
  PVOID v27; // [rsp+B0h] [rbp-98h]
  PNTPSS_MEMORY_BULK_INFORMATION v28; // [rsp+B8h] [rbp-90h]
  SIZE_T v29; // [rsp+C0h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-80h]
  $115DCDF994C6370D29323EAB0E0C9502 v31; // [rsp+D0h] [rbp-78h] BYREF

  v5 = BulkInformationLength;
  *(_QWORD *)Length = BulkInformationLength;
  MappedSystemVa = BulkInformation;
  BaseAddressa = (char *)BaseAddress;
  BugCheckParameter1 = (ULONG_PTR)ProcessHandle;
  v26 = ProcessHandle;
  v27 = BaseAddress;
  v28 = BulkInformation;
  v29 = BulkInformationLength;
  v22 = ReturnLength;
  Object = 0LL;
  memset(&v31, 0, sizeof(v31));
  v24 = 0LL;
  v18 = 0LL;
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
    v25 = 0LL;
    ProbeForWrite(BulkInformation, BulkInformationLength, 8u);
    if ( ReturnLength )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v12 = (__int64)ReturnLength;
      *(_QWORD *)v12 = *(_QWORD *)v12;
    }
    v25 = *MappedSystemVa;
    BaseAddress = BaseAddressa;
    v5 = Length[0];
    v13 = BugCheckParameter1;
  }
  else
  {
    v25 = *BulkInformation;
    v13 = (ULONG_PTR)ProcessHandle;
  }
  if ( v25.QueryFlags )
  {
    if ( (v25.QueryFlags & 0xFFFFFFFC) != 0 )
    {
      VirtualMemory = -1073741637;
    }
    else
    {
      if ( (unsigned __int64)BaseAddress <= 0x7FFFFFFEFFFFLL )
      {
        if ( PreviousMode )
        {
          Mdl = IoAllocateMdl(MappedSystemVa, v5, 0, 0, 0LL);
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
            goto LABEL_44;
          }
        }
        else
        {
          v8 = 0LL;
        }
        if ( v13 != -1LL )
        {
          VirtualMemory = ObpReferenceObjectByHandleWithTag(
                            v13,
                            4096,
                            (__int64)PsProcessType,
                            PreviousMode,
                            0x41737350u,
                            &Object,
                            0LL,
                            0LL);
          if ( VirtualMemory < 0 )
            goto LABEL_44;
          if ( (*((_DWORD *)Object + 543) & 0x1000) != 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x41737350u);
            VirtualMemory = -1073741790;
            goto LABEL_44;
          }
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v31);
          v7 |= 1u;
        }
        if ( PreviousMode )
        {
          VirtualMemory = ZwPssCaptureVaSpaceBulk(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            BaseAddressa,
                            MappedSystemVa,
                            *(SIZE_T *)Length,
                            &v18);
        }
        else
        {
          MappedSystemVa->NumberOfEntries = 0;
          v18 = 16LL;
          v15 = *(_QWORD *)Length - 16LL;
          v16 = MappedSystemVa + 1;
          while ( v15 >= 0x30 )
          {
            if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
            {
              VirtualMemory = -1073741749;
              goto LABEL_44;
            }
            VirtualMemory = MmQueryVirtualMemory(
                              0xFFFFFFFFFFFFFFFFuLL,
                              (unsigned __int64)BaseAddressa,
                              0,
                              (unsigned __int64)v16,
                              0x30uLL,
                              (__int64)&v24,
                              2);
            if ( VirtualMemory < 0 )
            {
              if ( MappedSystemVa->NumberOfEntries )
                VirtualMemory = 0;
              break;
            }
            v15 -= v24;
            v18 += v24;
            BaseAddressa = (char *)v16[1].NextValidAddress + *(_QWORD *)&v16->QueryFlags;
            v16 += 3;
            ++MappedSystemVa->NumberOfEntries;
            MappedSystemVa->NextValidAddress = BaseAddressa;
          }
          if ( VirtualMemory >= 0 && MappedSystemVa->NextValidAddress != (PVOID)0x7FFFFFFF0000LL )
            VirtualMemory = 261;
        }
        goto LABEL_44;
      }
      VirtualMemory = -1073741503;
    }
  }
  else
  {
    VirtualMemory = -1073741811;
  }
LABEL_44:
  if ( (v7 & 1) != 0 )
    KiUnstackDetachProcess(&v31);
  if ( v8 )
  {
    if ( v7 >= 2 )
      MmUnlockPages(v8);
    IoFreeMdl(v8);
  }
  if ( ReturnLength )
    *ReturnLength = v18;
  return VirtualMemory;
}
