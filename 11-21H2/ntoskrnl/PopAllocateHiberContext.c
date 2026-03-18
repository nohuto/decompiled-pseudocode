/*
 * XREFs of PopAllocateHiberContext @ 0x140802068
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     MmGetHighestPhysicalPage @ 0x14020DB30 (MmGetHighestPhysicalPage.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     MmBuildMdlForNonPagedPool @ 0x14027C410 (MmBuildMdlForNonPagedPool.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopInternalAddToDumpFile @ 0x1405C6658 (PopInternalAddToDumpFile.c)
 *     PopFreeHiberContext @ 0x140800338 (PopFreeHiberContext.c)
 *     PopBcdEstablishResumeObject @ 0x140800680 (PopBcdEstablishResumeObject.c)
 *     PopBcdSetPendingResume @ 0x140800808 (PopBcdSetPendingResume.c)
 *     PopHiberInitializeResources @ 0x140801D60 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x140802020 (MmMarkHiberRange.c)
 *     BcdForciblyUnloadStore @ 0x1408072C0 (BcdForciblyUnloadStore.c)
 *     PopLoadResumeContext @ 0x140807A78 (PopLoadResumeContext.c)
 *     MmLockPreChargedPagedPool @ 0x140808190 (MmLockPreChargedPagedPool.c)
 *     IoGetDumpStack @ 0x1408089F0 (IoGetDumpStack.c)
 *     BcdCloseStore @ 0x1408124A0 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x1408125C4 (BcdOpenStore.c)
 *     BcdCloseObject @ 0x140812D00 (BcdCloseObject.c)
 *     HvlpAllocatePageListResources @ 0x14093146C (HvlpAllocatePageListResources.c)
 *     VslAllocateSecureHibernateResources @ 0x1409315C4 (VslAllocateSecureHibernateResources.c)
 *     PopCheckpointSystemSleep @ 0x140A4B974 (PopCheckpointSystemSleep.c)
 *     BgkResumePrepare @ 0x140A4E794 (BgkResumePrepare.c)
 *     PopDiscardRange @ 0x140A4F9D8 (PopDiscardRange.c)
 *     PopAllocatePages @ 0x140A4FC08 (PopAllocatePages.c)
 *     PopGenerateUnHibernatedMdl @ 0x140A50B90 (PopGenerateUnHibernatedMdl.c)
 *     PopGetBitlockerKeyLocation @ 0x140A52500 (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x140A52AD8 (PopGetHwConfigurationSignature.c)
 */

__int64 PopAllocateHiberContext()
{
  __int64 HighestPhysicalPage; // rax
  char *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // r8
  ULONG_PTR *v4; // r15
  int DumpStack; // edi
  ULONG_PTR v6; // r14
  char v7; // cl
  char v8; // r8
  __int16 v9; // dx
  char v10; // cl
  __int64 v11; // r8
  __int16 v12; // dx
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r13
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned int v22; // edx
  unsigned __int64 v23; // rcx
  __int64 Pages; // rax
  __int64 v25; // rax
  PVOID *v26; // rdi
  __int64 v27; // rsi
  __int64 UnHibernatedMdl; // rax
  __int64 v29; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int16 v33; // ax
  __int64 **v34; // r12
  __int64 *i; // rdi
  int v36; // eax
  PVOID *v37; // r15
  __int16 v38; // [rsp+80h] [rbp+48h] BYREF
  __int64 v39; // [rsp+88h] [rbp+50h] BYREF
  __int64 v40; // [rsp+90h] [rbp+58h] BYREF
  unsigned __int64 v41; // [rsp+98h] [rbp+60h] BYREF

  v40 = 0LL;
  v41 = 0LL;
  v38 = 0;
  if ( dword_140C227E8 != 5 )
    return 0;
  v39 = 0LL;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v1 = (char *)MemoryMap;
  qword_140C22800 = (ULONG_PTR)MemoryMap;
  PopHiberScratchPages = PopHiberLoaderScratchPages
                       + ((((unsigned __int64)(HighestPhysicalPage + 32) >> 3) + 4092) >> 12);
  memset(MemoryMap, 0, 0x1C8uLL);
  MmLockPreChargedPagedPool(qword_140C22C10, Length);
  PopNumberOfPagesForHibernateProcess = 0;
  *((_OWORD *)v1 + 3) = xmmword_140C22C30;
  *((_QWORD *)v1 + 25) = qword_140C22C20;
  *((_QWORD *)v1 + 40) = qword_140C22C70;
  *((_QWORD *)v1 + 27) = qword_140C22C50;
  *((_QWORD *)v1 + 28) = qword_140C22C80;
  *((_QWORD *)v1 + 29) = qword_140C22C78;
  *((_OWORD *)v1 + 2) = xmmword_140C22C40;
  *((_QWORD *)v1 + 9) = v1 + 64;
  *((_QWORD *)v1 + 8) = v1 + 64;
  if ( !FileObject )
  {
    DumpStack = -1073741809;
    v31 = 42LL;
LABEL_68:
    PopCheckpointSystemSleep(v31);
    goto LABEL_42;
  }
  v4 = (ULONG_PTR *)(v1 + 168);
  DumpStack = IoGetDumpStack(v2, v1 + 168, v3, PopSimulate & 0x10);
  if ( DumpStack < 0 )
  {
    v31 = 43LL;
    goto LABEL_68;
  }
  v6 = *v4;
  v7 = 0;
  if ( dword_140C227CC < 0 && dword_140C227D4 == 2 )
    v7 = 2;
  v8 = v7 | 1;
  v9 = __readcr4();
  v10 = v7 | 9;
  if ( (v9 & 0x1000) == 0 )
    v10 = v8;
  v11 = *((_QWORD *)v1 + 27);
  v1[1] = v10;
  v12 = qword_140C22C28;
  v13 = qword_140C22C28 & 0xFFFFFFFFFFFFF000uLL;
  v14 = qword_140C22C28;
  *(_QWORD *)v11 = 0LL;
  *(_WORD *)(v11 + 10) = 0;
  *(_QWORD *)(v11 + 32) = v13;
  *(_DWORD *)(v11 + 44) = v12 & 0xFFF;
  *(_WORD *)(v11 + 8) = 8 * ((((unsigned __int64)(v14 & 0xFFF) + 102399) >> 12) + 6);
  *(_DWORD *)(v11 + 40) = 98304;
  MmBuildMdlForNonPagedPool(*((PMDL *)v1 + 27));
  v15 = *((_QWORD *)v1 + 28);
  if ( v15 )
  {
    v32 = qword_140C22C78;
    v33 = qword_140C22C78;
    *(_QWORD *)v15 = 0LL;
    *(_WORD *)(v15 + 10) = 0;
    *(_DWORD *)(v15 + 40) = 4096;
    *(_WORD *)(v15 + 8) = 8 * (((unsigned __int16)((v33 & 0xFFF) + 0x1FFF) >> 12) + 6);
    *(_QWORD *)(v15 + 32) = v32 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v15 + 44) = v32 & 0xFFF;
    MmBuildMdlForNonPagedPool(*((PMDL *)v1 + 28));
  }
  DumpStack = PopLoadResumeContext(v1);
  if ( DumpStack < 0 )
  {
    v31 = 44LL;
    goto LABEL_68;
  }
  DumpStack = BcdOpenStore(0LL, 2LL, &v40);
  if ( DumpStack < 0 )
  {
    v31 = 45LL;
    goto LABEL_68;
  }
  v16 = v40;
  DumpStack = PopBcdEstablishResumeObject(v40, &v39);
  if ( DumpStack < 0 )
  {
    BcdCloseStore(v16);
    v31 = 46LL;
    goto LABEL_68;
  }
  DumpStack = PopBcdSetPendingResume(v16, v17, v18, v39);
  BcdCloseObject(v39);
  if ( DumpStack < 0 )
  {
    BcdCloseStore(v16);
    v31 = 47LL;
    goto LABEL_68;
  }
  BcdForciblyUnloadStore(v16);
  RtlClearAllBits((PRTL_BITMAP)v1 + 2);
  RtlSetAllBits((PRTL_BITMAP)v1 + 3);
  *((_DWORD *)v1 + 112) = PopGetHwConfigurationSignature();
  PopHiberInitializeResources(v1);
  LODWORD(v19) = 0;
  if ( (int)PopGetBitlockerKeyLocation(&v41) >= 0 )
  {
    v20 = v41 >> 12;
    *((_QWORD *)v1 + 39) = v41 >> 12;
    PopDiscardRange(v1, v20, 4LL);
  }
  if ( !KdPitchDebugger || KdEventLoggingEnabled )
  {
    PoSetHiberRange(v1, 2u, &KdTimerDifference, 0LL, 0x20676244u);
    PoSetHiberRange(v1, 2u, &KdDebuggerLock, 0LL, 0x20676244u);
  }
  MmMarkHiberRange((__int64)v1, qword_140C22BE8);
  ((void (__fastcall *)(char *))off_140C01BF8[0])(v1);
  v21 = (4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12;
  v22 = v21;
  *((_DWORD *)v1 + 38) = v21;
  if ( *((_QWORD *)v1 + 30) )
  {
    v23 = *((unsigned int *)v1 + 62);
    if ( v23 > v21 )
    {
      *((_DWORD *)v1 + 38) = v23;
      v22 = v23;
    }
  }
  Pages = PopAllocatePages(v22);
  DumpStack = *((_DWORD *)v1 + 47);
  *((_QWORD *)v1 + 18) = Pages;
  if ( DumpStack < 0 )
  {
    v31 = 48LL;
    goto LABEL_68;
  }
  if ( *(_BYTE *)(*v4 + 280) )
  {
    v34 = (__int64 **)(*(_QWORD *)(*v4 + 272) + 40LL);
    for ( i = *v34; i != (__int64 *)v34; i = (__int64 *)*i )
    {
      v36 = *((_DWORD *)i + 16);
      if ( v36 )
      {
        if ( (v36 & 0xFFF) != 0 )
        {
          PopInternalAddToDumpFile((__int64)(i - 1), 0x70u, 0LL);
          PopInternalAddToDumpFile((__int64)v1, 0x1C8u, 0LL);
          PopCheckpointSystemSleep(49LL);
          KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v6, (ULONG_PTR)v1);
        }
        v37 = (PVOID *)(i + 9);
        v19 = 2LL;
        do
        {
          if ( *v37 )
            PoSetHiberRange(v1, 0x8000u, *v37, *((unsigned int *)i + 16), 0x66756263u);
          ++v37;
          --v19;
        }
        while ( v19 );
      }
    }
  }
  else
  {
    v25 = PopAllocatePages(16LL);
    *(_QWORD *)(v6 + 8) = v25;
    if ( !v25 )
    {
      DumpStack = *((_DWORD *)v1 + 47);
      PopCheckpointSystemSleep(50LL);
      if ( DumpStack >= 0 )
        return (unsigned int)DumpStack;
LABEL_42:
      PopFreeHiberContext();
      return (unsigned int)DumpStack;
    }
    PoSetHiberRange(v1, 0x8000u, (PVOID)(v25 + 0x2000), 0xE000uLL, 0x6D656D44u);
    if ( (*(_DWORD *)(v6 + 112) & 0xFFF) != 0 )
    {
      PopInternalAddToDumpFile(v6, 0x108u, 0LL);
      PopInternalAddToDumpFile((__int64)v1, 0x1C8u, 0LL);
      PopCheckpointSystemSleep(51LL);
      KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v6, (ULONG_PTR)v1);
    }
    v26 = (PVOID *)(v6 + 16);
    v27 = 2LL;
    do
    {
      if ( *v26 )
        PoSetHiberRange(v1, 0x8000u, *v26, *(unsigned int *)(v6 + 112), 0x66756263u);
      ++v26;
      --v27;
    }
    while ( v27 );
  }
  UnHibernatedMdl = PopGenerateUnHibernatedMdl(v1, (unsigned int)PopHiberScratchPages);
  *((_QWORD *)v1 + 15) = UnHibernatedMdl;
  if ( !UnHibernatedMdl )
  {
    DumpStack = -1073741670;
    v31 = 52LL;
    goto LABEL_68;
  }
  if ( VslVsmEnabled != (_BYTE)v19 )
  {
    v1[452] = 1;
    DumpStack = VslAllocateSecureHibernateResources(v1);
    if ( DumpStack >= 0 )
      goto LABEL_33;
    v31 = 53LL;
    goto LABEL_68;
  }
  v1[452] = v19;
LABEL_33:
  if ( (int)ZwQuerySystemInformation(145LL, (__int64)&v38) >= 0 )
    v1[453] = v38;
  if ( (int)BgkResumePrepare(v1) >= 0 )
    PopBgkResumePrepared = 1;
  *((_DWORD *)v1 + 48) = *((_DWORD *)v1 + 64) - 1;
  if ( (HvlpFlags & 2) != 0 )
    HvlpAllocatePageListResources(v29, 16LL);
  return (unsigned int)v19;
}
