/*
 * XREFs of sub_14028866C @ 0x14028866C
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1402031E0 (FsRtlCreateSectionForDataScan.c)
 *     sub_1402D9E3C @ 0x1402D9E3C (sub_1402D9E3C.c)
 *     sub_14066D4BC @ 0x14066D4BC (sub_14066D4BC.c)
 *     sub_1406FD140 @ 0x1406FD140 (sub_1406FD140.c)
 *     sub_140707E70 @ 0x140707E70 (sub_140707E70.c)
 * Callees:
 *     CcPurgeCacheSection @ 0x14027F0E0 (CcPurgeCacheSection.c)
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     FsRtlAcquireFileExclusive @ 0x1406FE2E0 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 */

void __fastcall sub_14028866C(PFILE_OBJECT FileObject)
{
  char v1; // di
  PVOID FsContext; // rcx
  char v4; // al
  int v5[6]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  *(_OWORD *)v5 = 0LL;
  if ( !*((_QWORD *)KeGetCurrentThread() + 162) )
  {
    v1 = 1;
    *((_QWORD *)KeGetCurrentThread() + 162) = 1LL;
    FsRtlAcquireFileExclusive(FileObject);
  }
  FsContext = FileObject->FsContext;
  v4 = *((_BYTE *)FsContext + 4);
  if ( (v4 & 0x40) != 0 )
  {
    ExAcquireFastMutex(*((PFAST_MUTEX *)FsContext + 6));
    *((_BYTE *)FileObject->FsContext + 4) |= 0x20u;
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)FileObject->FsContext + 6));
  }
  else
  {
    *((_BYTE *)FsContext + 4) = v4 | 0x20;
  }
  if ( (*((_BYTE *)FileObject->FsContext + 6) & 4) != 0 )
  {
    sub_140283030((__int64)FileObject->SectionObjectPointer, 0LL, 0, 0LL, 0, v5);
    if ( !v5[0] )
      CcPurgeCacheSection(FileObject->SectionObjectPointer, 0LL, 0, 0);
  }
  if ( v1 )
  {
    *((_QWORD *)KeGetCurrentThread() + 162) = 0LL;
    FsRtlReleaseFile(FileObject);
  }
}
