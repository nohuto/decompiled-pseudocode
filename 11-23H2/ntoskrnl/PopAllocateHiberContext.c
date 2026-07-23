/*
 * XREFs of PopAllocateHiberContext @ 0x140987F38
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14020D950 (MmBuildMdlForNonPagedPool.c)
 *     RtlClearAllBits @ 0x140290FE0 (RtlClearAllBits.c)
 *     RtlSetAllBits @ 0x1402E1D70 (RtlSetAllBits.c)
 *     MmGetHighestPhysicalPage @ 0x1402F8BC8 (MmGetHighestPhysicalPage.c)
 *     ZwQuerySystemInformation @ 0x14041B7B0 (ZwQuerySystemInformation.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopInternalAddToDumpFile @ 0x140583650 (PopInternalAddToDumpFile.c)
 *     PoSetHiberRange @ 0x14058ED90 (PoSetHiberRange.c)
 *     PopBcdEstablishResumeObject @ 0x140802260 (PopBcdEstablishResumeObject.c)
 *     BcdCloseStore @ 0x1408030C4 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140803368 (BcdOpenStore.c)
 *     BcdCloseObject @ 0x1408051D0 (BcdCloseObject.c)
 *     HvlpAllocatePageListResources @ 0x140941890 (HvlpAllocatePageListResources.c)
 *     VslAllocateSecureHibernateResources @ 0x140941A0C (VslAllocateSecureHibernateResources.c)
 *     IoGetDumpStack @ 0x140943C2C (IoGetDumpStack.c)
 *     PopLoadResumeContext @ 0x140980E78 (PopLoadResumeContext.c)
 *     PopFreeHiberContext @ 0x1409887F0 (PopFreeHiberContext.c)
 *     PopHiberInitializeResources @ 0x140988A24 (PopHiberInitializeResources.c)
 *     PopBcdSetPendingResume @ 0x14099D040 (PopBcdSetPendingResume.c)
 *     MmLockPreChargedPagedPool @ 0x140A30C00 (MmLockPreChargedPagedPool.c)
 *     MmMarkHiberRange @ 0x140A30D20 (MmMarkHiberRange.c)
 *     BcdForciblyUnloadStore @ 0x140A5C540 (BcdForciblyUnloadStore.c)
 *     BgkResumePrepare @ 0x140A998E4 (BgkResumePrepare.c)
 *     PopGetBitlockerKeyLocation @ 0x140AA0608 (PopGetBitlockerKeyLocation.c)
 *     PopAllocatePages @ 0x140AA18B8 (PopAllocatePages.c)
 *     PopDiscardRange @ 0x140AA266C (PopDiscardRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x140AA298C (PopGenerateUnHibernatedMdl.c)
 *     PopGetHwConfigurationSignature @ 0x140AA2A3C (PopGetHwConfigurationSignature.c)
 *     PopCheckpointSystemSleep @ 0x140AAA358 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopAllocateHiberContext(_DWORD *a1)
{
  int DumpStack; // edi
  __int64 HighestPhysicalPage; // rax
  char *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  ULONG_PTR *v8; // r12
  ULONG_PTR v9; // r15
  char v10; // cl
  char v11; // r8
  __int16 v12; // dx
  char v13; // cl
  __int64 v14; // r8
  __int16 v15; // dx
  unsigned __int64 v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int16 v20; // ax
  HANDLE v21; // r14
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  bool v24; // zf
  unsigned int v25; // edx
  unsigned __int64 v26; // rcx
  __int64 Pages; // rax
  __int64 **v28; // r13
  __int64 *i; // rdi
  int v30; // eax
  __int64 v31; // rax
  PVOID *v32; // r12
  __int64 UnHibernatedMdl; // rax
  __int64 v34; // rax
  PVOID *v35; // rdi
  __int64 v36; // r14
  __int64 v37; // rcx
  unsigned __int64 v39; // [rsp+30h] [rbp-10h] BYREF
  __int16 SystemInformation; // [rsp+88h] [rbp+48h] BYREF
  HANDLE BcdObjectHandle; // [rsp+90h] [rbp+50h] BYREF
  HANDLE BcdStoreHandle; // [rsp+98h] [rbp+58h] BYREF

  BcdStoreHandle = 0LL;
  v39 = 0LL;
  SystemInformation = 0;
  if ( dword_140C3CDA8 != 5 )
    return 0;
  BcdObjectHandle = 0LL;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v4 = (char *)MemoryMap;
  qword_140C3CDC0 = (ULONG_PTR)MemoryMap;
  PopHiberScratchPages = PopHiberLoaderScratchPages
                       + ((((unsigned __int64)(HighestPhysicalPage + 32) >> 3) + 4092) >> 12);
  memset(MemoryMap, 0, 0x1C8uLL);
  MmLockPreChargedPagedPool(qword_140C3CFB0, Length);
  PopNumberOfPagesForHibernateProcess = 0;
  *((_OWORD *)v4 + 3) = xmmword_140C3CFD0;
  *((_QWORD *)v4 + 25) = qword_140C3CFC0;
  *((_QWORD *)v4 + 40) = qword_140C3D010;
  *((_QWORD *)v4 + 27) = qword_140C3CFF0;
  *((_QWORD *)v4 + 28) = qword_140C3D020;
  *((_QWORD *)v4 + 29) = qword_140C3D018;
  *((_OWORD *)v4 + 2) = xmmword_140C3CFE0;
  *((_QWORD *)v4 + 9) = v4 + 64;
  *((_QWORD *)v4 + 8) = v4 + 64;
  if ( !FileObject )
  {
    DumpStack = -1073741809;
    *a1 = 10;
    v7 = 42LL;
LABEL_58:
    PopCheckpointSystemSleep(v7);
    goto LABEL_59;
  }
  v8 = (ULONG_PTR *)(v4 + 168);
  DumpStack = IoGetDumpStack(v5, (__int64)(v4 + 168), v6, PopSimulate & 0x10);
  if ( DumpStack < 0 )
  {
    *a1 = 10;
    v7 = 43LL;
    goto LABEL_58;
  }
  v9 = *v8;
  v10 = 0;
  if ( dword_140C3CD8C < 0 && dword_140C3CD94 == 2 )
    v10 = 2;
  v11 = v10 | 1;
  v12 = __readcr4();
  v13 = v10 | 9;
  if ( (v12 & 0x1000) == 0 )
    v13 = v11;
  v14 = *((_QWORD *)v4 + 27);
  v4[1] = v13;
  v15 = qword_140C3CFC8;
  v16 = qword_140C3CFC8 & 0xFFFFFFFFFFFFF000uLL;
  v17 = qword_140C3CFC8;
  *(_QWORD *)v14 = 0LL;
  *(_WORD *)(v14 + 10) = 0;
  *(_QWORD *)(v14 + 32) = v16;
  *(_DWORD *)(v14 + 44) = v15 & 0xFFF;
  *(_WORD *)(v14 + 8) = 8 * ((((unsigned __int64)(v17 & 0xFFF) + 102399) >> 12) + 6);
  *(_DWORD *)(v14 + 40) = 98304;
  MmBuildMdlForNonPagedPool(*((PMDL *)v4 + 27));
  v18 = *((_QWORD *)v4 + 28);
  if ( v18 )
  {
    v19 = qword_140C3D018;
    v20 = qword_140C3D018;
    *(_QWORD *)v18 = 0LL;
    *(_WORD *)(v18 + 10) = 0;
    *(_DWORD *)(v18 + 40) = 4096;
    *(_WORD *)(v18 + 8) = 8 * (((unsigned __int16)((v20 & 0xFFF) + 0x1FFF) >> 12) + 6);
    *(_QWORD *)(v18 + 32) = v19 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v18 + 44) = v19 & 0xFFF;
    MmBuildMdlForNonPagedPool(*((PMDL *)v4 + 28));
  }
  DumpStack = PopLoadResumeContext((__int64)v4);
  if ( DumpStack < 0 )
  {
    *a1 = 12;
    v7 = 44LL;
    goto LABEL_58;
  }
  DumpStack = BcdOpenStore(0LL, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle);
  if ( DumpStack < 0 )
  {
    *a1 = 13;
    v7 = 45LL;
    goto LABEL_58;
  }
  v21 = BcdStoreHandle;
  DumpStack = PopBcdEstablishResumeObject(BcdStoreHandle, &BcdObjectHandle);
  if ( DumpStack < 0 )
  {
    *a1 = 14;
    BcdCloseStore(v21);
    v7 = 46LL;
    goto LABEL_58;
  }
  DumpStack = PopBcdSetPendingResume(v21);
  BcdCloseObject(BcdObjectHandle);
  if ( DumpStack < 0 )
  {
    *a1 = 15;
    BcdCloseStore(v21);
    v7 = 47LL;
    goto LABEL_58;
  }
  BcdForciblyUnloadStore(v21);
  RtlClearAllBits((PRTL_BITMAP)v4 + 2);
  RtlSetAllBits((PRTL_BITMAP)v4 + 3);
  *((_DWORD *)v4 + 112) = PopGetHwConfigurationSignature();
  PopHiberInitializeResources(v4);
  if ( (int)PopGetBitlockerKeyLocation(&v39) >= 0 )
  {
    v22 = v39 >> 12;
    *((_QWORD *)v4 + 39) = v39 >> 12;
    PopDiscardRange(v4, v22, 4LL);
  }
  if ( !KdPitchDebugger || KdEventLoggingEnabled )
  {
    PoSetHiberRange(v4, 2u, &KdTimerDifference, 0LL, 0x20676244u);
    PoSetHiberRange(v4, 2u, &KdDebuggerLock, 0LL, 0x20676244u);
  }
  MmMarkHiberRange(v4, qword_140C3CF88, 77824LL);
  ((void (__fastcall *)(char *))off_140C019B8[0])(v4);
  v23 = (4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12;
  v24 = *((_QWORD *)v4 + 30) == 0LL;
  v25 = v23;
  *((_DWORD *)v4 + 38) = v23;
  if ( !v24 )
  {
    v26 = *((unsigned int *)v4 + 62);
    if ( v26 > v23 )
    {
      *((_DWORD *)v4 + 38) = v26;
      v25 = v26;
    }
  }
  Pages = PopAllocatePages(v25);
  DumpStack = *((_DWORD *)v4 + 47);
  *((_QWORD *)v4 + 18) = Pages;
  if ( DumpStack < 0 )
  {
    *a1 = 16;
    v7 = 48LL;
    goto LABEL_58;
  }
  if ( *(_BYTE *)(*v8 + 280) )
  {
    v28 = (__int64 **)(*(_QWORD *)(*v8 + 272) + 40LL);
    for ( i = *v28; i != (__int64 *)v28; i = (__int64 *)*i )
    {
      v30 = *((_DWORD *)i + 16);
      if ( v30 )
      {
        if ( (v30 & 0xFFF) != 0 )
        {
          PopInternalAddToDumpFile((__int64)(i - 1), 0x70u, 0LL);
          PopInternalAddToDumpFile((__int64)v4, 0x1C8u, 0LL);
          PopCheckpointSystemSleep(49LL);
          KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v9, (ULONG_PTR)v4);
        }
        v31 = 2LL;
        v32 = (PVOID *)(i + 9);
        BcdObjectHandle = (HANDLE)2;
        do
        {
          if ( *v32 )
          {
            PoSetHiberRange(v4, 0x8000u, *v32, *((unsigned int *)i + 16), 0x66756263u);
            v31 = (__int64)BcdObjectHandle;
          }
          ++v32;
          BcdObjectHandle = (HANDLE)--v31;
        }
        while ( v31 );
      }
    }
  }
  else
  {
    v34 = PopAllocatePages(16LL);
    *(_QWORD *)(v9 + 8) = v34;
    if ( !v34 )
    {
      DumpStack = *((_DWORD *)v4 + 47);
      *a1 = 17;
      PopCheckpointSystemSleep(50LL);
      if ( DumpStack >= 0 )
        return (unsigned int)DumpStack;
LABEL_59:
      PopFreeHiberContext();
      return (unsigned int)DumpStack;
    }
    PoSetHiberRange(v4, 0x8000u, (PVOID)(v34 + 0x2000), 0xE000uLL, 0x6D656D44u);
    if ( (*(_DWORD *)(v9 + 112) & 0xFFF) != 0 )
    {
      PopInternalAddToDumpFile(v9, 0x108u, 0LL);
      PopInternalAddToDumpFile((__int64)v4, 0x1C8u, 0LL);
      PopCheckpointSystemSleep(51LL);
      KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v9, (ULONG_PTR)v4);
    }
    v35 = (PVOID *)(v9 + 16);
    v36 = 2LL;
    do
    {
      if ( *v35 )
        PoSetHiberRange(v4, 0x8000u, *v35, *(unsigned int *)(v9 + 112), 0x66756263u);
      ++v35;
      --v36;
    }
    while ( v36 );
  }
  UnHibernatedMdl = PopGenerateUnHibernatedMdl(v4, (unsigned int)PopHiberScratchPages);
  *((_QWORD *)v4 + 15) = UnHibernatedMdl;
  if ( !UnHibernatedMdl )
  {
    *a1 = 18;
    v7 = 52LL;
    DumpStack = -1073741670;
    goto LABEL_58;
  }
  if ( VslVsmEnabled )
  {
    v4[452] = 1;
    DumpStack = VslAllocateSecureHibernateResources(v4);
    if ( DumpStack < 0 )
    {
      *a1 = 19;
      v7 = 53LL;
      goto LABEL_58;
    }
  }
  else
  {
    v4[452] = 0;
  }
  if ( ZwQuerySystemInformation(SystemSecureBootInformation, &SystemInformation, 2u, 0LL) >= 0 )
    v4[453] = SystemInformation;
  if ( (int)BgkResumePrepare(v4) >= 0 )
    PopBgkResumePrepared = 1;
  *((_DWORD *)v4 + 48) = *((_DWORD *)v4 + 64) - 1;
  if ( (HvlpFlags & 2) != 0 )
    HvlpAllocatePageListResources(v37, 16);
  return 0;
}
