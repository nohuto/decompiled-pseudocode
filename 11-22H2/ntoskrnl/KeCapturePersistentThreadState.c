/*
 * XREFs of KeCapturePersistentThreadState @ 0x140554360
 * Callers:
 *     DbgkpWerCaptureLiveTriageDump @ 0x14093B91C (DbgkpWerCaptureLiveTriageDump.c)
 *     LkmdTelCreateReport @ 0x140A76B94 (LkmdTelCreateReport.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140222070 (KeQueryActiveProcessorCountEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     MmIsAddressValidEx @ 0x1402E5FB0 (MmIsAddressValidEx.c)
 *     RtlGetNtProductType @ 0x1402F7F40 (RtlGetNtProductType.c)
 *     SecureDump_GetSecureDumpSettings @ 0x140393FC4 (SecureDump_GetSecureDumpSettings.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     IoGetLoadedDriverInfo @ 0x1405507A4 (IoGetLoadedDriverInfo.c)
 *     IopAddCodeRegion @ 0x140551E08 (IopAddCodeRegion.c)
 *     IopValidateSectionSize @ 0x140553F04 (IopValidateSectionSize.c)
 *     IopWriteDriverList @ 0x140554114 (IopWriteDriverList.c)
 *     KdCopyDataBlock @ 0x140567170 (KdCopyDataBlock.c)
 */

__int64 __fastcall KeCapturePersistentThreadState(
        __int64 a1,
        struct _KTHREAD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        size_t Size)
{
  size_t v8; // rbx
  struct _KTHREAD *CurrentThread; // r14
  char *v13; // rdx
  unsigned __int64 v14; // rcx
  _DWORD *v15; // r10
  __int64 v16; // r9
  __int64 v17; // r8
  ULONG ActiveProcessorCount; // eax
  __int64 v19; // rdx
  unsigned int v20; // esi
  _OWORD *v21; // rcx
  int v22; // eax
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // rdx
  __int64 v27; // rcx
  size_t v28; // r8
  int v29; // esi
  __int64 v30; // rcx
  size_t v31; // r8
  int v32; // esi
  const void *StackLimit; // rax
  void *StackBase; // rdi
  const void *v35; // r14
  unsigned int v36; // edi
  unsigned int i; // r15d
  int v38; // edi
  size_t v39; // r8
  struct _KTHREAD *v40; // rax
  unsigned int v41; // edi
  __int64 v42; // rcx
  int v43; // r14d
  unsigned int v44; // r15d
  __int64 v45; // rdx
  int v46; // eax
  __int64 result; // rax
  int v48; // [rsp+20h] [rbp-20h] BYREF
  __int64 v49; // [rsp+28h] [rbp-18h] BYREF
  int v50; // [rsp+30h] [rbp-10h]

  v8 = Size;
  v49 = 0LL;
  v50 = 0;
  CurrentThread = a2;
  if ( !Size )
    return 0LL;
  if ( !a2 )
    CurrentThread = KeGetCurrentThread();
  if ( ForceDumpDisabled || !AllowCrashDump || (int)SecureDump_GetSecureDumpSettings((__int64)&v49) < 0 || (_BYTE)v49 )
    return 0LL;
  memset((void *)(v8 + 4), 0, 0x3FFFCuLL);
  v13 = (char *)v8;
  if ( (v8 & 4) != 0 )
  {
    v13 = (char *)(v8 + 4);
    v14 = 1023LL;
    v15 = (_DWORD *)(v8 + 4);
    v16 = 1LL;
    v17 = 8184LL;
  }
  else
  {
    v15 = (_DWORD *)(v8 + 4);
    v14 = 1024LL;
    v16 = 0LL;
    v17 = 8188LL;
  }
  memset64(v13, 0x4547415045474150uLL, v14);
  if ( v16 )
    *(_DWORD *)&v13[v17] = 1162297680;
  *(_DWORD *)v8 = 1162297680;
  *v15 = 875976004;
  *(_DWORD *)(v8 + 12) = (unsigned __int16)NtBuildNumber;
  *(_DWORD *)(v8 + 8) = (unsigned int)NtBuildNumber >> 28;
  *(_QWORD *)(v8 + 16) = CurrentThread->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)(v8 + 24) = MmPfnDatabase;
  *(_QWORD *)(v8 + 32) = &PsLoadedModuleList;
  *(_QWORD *)(v8 + 40) = &PsActiveProcessHead;
  *(_DWORD *)(v8 + 48) = 34404;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  *(_QWORD *)(v8 + 3848) = 0LL;
  *(_DWORD *)(v8 + 3864) = 0;
  *(_DWORD *)(v8 + 52) = ActiveProcessorCount;
  *(_QWORD *)(v8 + 72) = a5;
  *(_QWORD *)(v8 + 80) = a6;
  *(_QWORD *)(v8 + 88) = a7;
  *(_DWORD *)(v8 + 56) = a3;
  *(_QWORD *)(v8 + 64) = a4;
  *(_DWORD *)(v8 + 3840) = -2147483645;
  *(_DWORD *)(v8 + 3844) = 1;
  *(_QWORD *)(v8 + 3856) = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(v8 + 4000) = 0x40000LL;
  *(_DWORD *)(v8 + 4008) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(v8 + 4012) = MEMORY[0xFFFFF78000000018];
  *(_DWORD *)(v8 + 4144) = MEMORY[0xFFFFF78000000008];
  *(_DWORD *)(v8 + 4148) = MEMORY[0xFFFFF7800000000C];
  *(_DWORD *)(v8 + 3992) = 4;
  *(_DWORD *)(v8 + 4152) = 130;
  *(_DWORD *)(v8 + 4176) = 24;
  RtlGetNtProductType((PNT_PRODUCT_TYPE)(v8 + 4160));
  v19 = 9LL;
  *(_DWORD *)(v8 + 4164) = MEMORY[0xFFFFF780000002D0];
  v20 = 8320;
  v21 = (_OWORD *)a1;
  *(_DWORD *)(v8 + 4180) = MEMORY[0xFFFFF780000002C4];
  *(_DWORD *)(v8 + 8260) = 0;
  v22 = CmNtCSDVersion;
  *(_DWORD *)(v8 + 8256) = 0;
  *(_DWORD *)(v8 + 0x2000) = v22;
  v23 = (_OWORD *)(v8 + 840);
  *(_DWORD *)(v8 + 8196) = 0x40000;
  *(_DWORD *)(v8 + 8208) = 3840;
  *(_DWORD *)(v8 + 4152) |= 1u;
  *(_DWORD *)(v8 + 8204) = 840;
  do
  {
    *v23 = *v21;
    v23[1] = v21[1];
    v23[2] = v21[2];
    v23[3] = v21[3];
    v23[4] = v21[4];
    v23[5] = v21[5];
    v23[6] = v21[6];
    v23 += 8;
    v24 = v21[7];
    v21 += 8;
    *(v23 - 1) = v24;
    --v19;
  }
  while ( v19 );
  v25 = *v21;
  LODWORD(Size) = 928;
  *v23 = v25;
  v23[1] = v21[1];
  v23[2] = v21[2];
  v23[3] = v21[3];
  v23[4] = v21[4];
  if ( IopValidateSectionSize(0x2080u, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 0x400u;
    *(_QWORD *)(v8 + 128) = &KdDebuggerDataBlock;
    *(_DWORD *)(v8 + 8304) = 8320;
    *(_DWORD *)(v8 + 8308) = 928;
    KdCopyDataBlock(v8 + 8320, v26);
    v20 = 9248;
  }
  LODWORD(Size) = 48896;
  if ( IopValidateSectionSize(v20, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 4u;
    *(_DWORD *)(v8 + 8220) = v20;
    memmove((void *)(v8 + v20), KeGetCurrentPrcb(), (unsigned int)Size);
    v20 += Size;
  }
  LODWORD(Size) = 2944;
  if ( IopValidateSectionSize((v20 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 8u;
    v28 = (unsigned int)Size;
    v29 = v27;
    *(_DWORD *)(v8 + 8224) = v27;
    memmove((void *)(v8 + v27), CurrentThread->ApcState.Process, v28);
    v20 = Size + v29;
  }
  LODWORD(Size) = 2320;
  if ( IopValidateSectionSize((v20 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 0x10u;
    v31 = (unsigned int)Size;
    v32 = v30;
    *(_DWORD *)(v8 + 8228) = v30;
    memmove((void *)(v8 + v30), CurrentThread, v31);
    v20 = Size + v32;
  }
  if ( CurrentThread == KeGetCurrentThread() && (*((_DWORD *)&CurrentThread->0 + 1) & 0x20000) != 0 )
  {
    StackLimit = CurrentThread->StackLimit;
    StackBase = CurrentThread->StackBase;
    v35 = *(const void **)(a1 + 152);
    if ( (StackLimit > v35 || StackBase <= v35) && (v35 = StackLimit, StackBase <= StackLimit) )
      v36 = 0;
    else
      v36 = (_DWORD)StackBase - (_DWORD)v35;
    if ( v36 >= 0x7FFF )
      v36 = 0x7FFF;
    for ( i = 0; i < v36; ++i )
    {
      if ( !MmIsAddressValidEx((__int64)v35 + i) )
        break;
    }
    LODWORD(Size) = i;
    if ( i )
    {
      if ( !IopValidateSectionSize(v20, (unsigned int *)&Size) )
        *(_DWORD *)(v8 + 8260) |= 0x100u;
      *(_DWORD *)(v8 + 4152) |= 0x20u;
      v38 = Size;
      v39 = (unsigned int)Size;
      *(_DWORD *)(v8 + 8232) = v20;
      *(_DWORD *)(v8 + 8236) = v38;
      *(_QWORD *)(v8 + 8264) = v35;
      memmove((void *)(v8 + v20), v35, v39);
      v20 += v38;
    }
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    v40 = KeGetCurrentThread();
    LODWORD(Size) = 0;
    v48 = 0;
    v41 = (v20 + 7) & 0xFFFFFFF8;
    --v40->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    if ( (int)IoGetLoadedDriverInfo(v42, &Size, &v48) >= 0 )
    {
      v43 = Size;
      LODWORD(Size) = 144 * Size;
      if ( (_DWORD)Size
        && IopValidateSectionSize(v41, (unsigned int *)&Size)
        && (v44 = v41 + Size, LODWORD(Size) = (v48 + 7 + 6 * v43) & 0xFFFFFFF8, (_DWORD)Size)
        && IopValidateSectionSize(v44, (unsigned int *)&Size) )
      {
        if ( (int)IopWriteDriverList(v8, v45, v41, v44) >= 0 )
        {
          *(_DWORD *)(v8 + 4152) |= 0x40u;
          v46 = Size;
          *(_DWORD *)(v8 + 8240) = v41;
          *(_DWORD *)(v8 + 8244) = v43;
          *(_DWORD *)(v8 + 8248) = v44;
          v20 = v44 + v46;
          *(_DWORD *)(v8 + 8252) = v46;
        }
      }
      else
      {
        *(_DWORD *)(v8 + 8260) |= 0x100u;
      }
      IopAddCodeRegion(a1, v20, (_DWORD *)v8);
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegion();
  }
  *(_DWORD *)(v8 + 8200) = 262140;
  result = 0x40000LL;
  *(_DWORD *)(v8 + 262140) = 1145524820;
  return result;
}
