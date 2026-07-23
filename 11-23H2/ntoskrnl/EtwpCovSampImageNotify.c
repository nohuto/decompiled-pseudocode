/*
 * XREFs of EtwpCovSampImageNotify @ 0x1408A9A70
 * Callers:
 *     EtwpCovSampEnumerateDriver @ 0x1409F25E0 (EtwpCovSampEnumerateDriver.c)
 *     EtwpCovSampEnumerateProcess @ 0x1409F2640 (EtwpCovSampEnumerateProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x1408A86BC (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampModuleDereference @ 0x1408A9B80 (EtwpCovSampModuleDereference.c)
 *     EtwpCovSampProcessEnsureContext @ 0x1408A9C00 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCovSampContextGetModule @ 0x1409F151C (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampProcessAddModule @ 0x1409F2AF4 (EtwpCovSampProcessAddModule.c)
 */

void __fastcall EtwpCovSampImageNotify(PUNICODE_STRING FullImageName, struct _LIST_ENTRY *ProcessId, char *ImageInfo)
{
  __int64 v3; // rbx
  int v6; // r15d
  char *v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdi
  __int64 v10; // rbp
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v6 = (int)FullImageName;
  if ( (*(_DWORD *)ImageInfo & 0x400) == 0 )
    return;
  v7 = ImageInfo - 8;
  if ( (int)EtwpCovSampAcquireSamplerRundown(&v12) >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = qword_140C31C58 + 16;
    Process = CurrentThread->ApcState.Process;
    if ( ProcessId )
    {
      if ( ProcessId == Process[1].Header.WaitListHead.Flink
        && (int)EtwpCovSampProcessEnsureContext(CurrentThread->ApcState.Process) >= 0 )
      {
        v10 = Process[2].ActiveProcessors.StaticBitmap[1];
        goto LABEL_9;
      }
    }
    else if ( (*(_DWORD *)ImageInfo & 0x100) != 0 )
    {
      v10 = qword_140C31C58 + 1264;
LABEL_9:
      if ( (int)EtwpCovSampContextGetModule(v3, (_DWORD)Process, v10, v6, (__int64)v7, (__int64)&v11) >= 0 )
        EtwpCovSampProcessAddModule(v10, v3, v11, *((_QWORD *)ImageInfo + 1));
    }
  }
  if ( v11 )
    EtwpCovSampModuleDereference(v3);
  if ( v12 )
  {
    ExReleaseRundownProtection_0(&stru_140C31C60);
    KeLeaveCriticalRegion();
  }
}
