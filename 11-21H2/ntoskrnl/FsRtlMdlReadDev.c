/*
 * XREFs of FsRtlMdlReadDev @ 0x14092DA90
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     IoSetTopLevelIrp @ 0x140288140 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x140288160 (IoGetTopLevelIrp.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 */

BOOLEAN __stdcall FsRtlMdlReadDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG LockKey,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v7; // rsi
  LONGLONG v11; // rbx
  PVOID FsContext; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char v14; // al
  LONGLONG v15; // rax

  v7 = Length;
  if ( !IoGetTopLevelIrp() )
  {
    if ( !(_DWORD)v7 )
    {
      IoStatus->Status = 0;
      IoStatus->Information = 0LL;
      return 1;
    }
    v11 = FileOffset->QuadPart + v7;
    FsContext = FileObject->FsContext;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    __incgsdword(0x8444u);
    ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    if ( FileObject->PrivateCacheMap )
    {
      v14 = *((_BYTE *)FsContext + 5);
      if ( v14 )
      {
        if ( v14 != 2 || (unsigned __int8)sub_14042A5E0(FileObject, FileOffset) )
        {
          v15 = *((_QWORD *)FsContext + 4);
          if ( v11 > v15 )
          {
            if ( FileOffset->QuadPart >= v15 )
            {
              IoStatus->Status = -1073741807;
              IoStatus->Information = 0LL;
LABEL_12:
              ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
              sub_1402F9540((__int64)KeGetCurrentThread());
              return 1;
            }
            LODWORD(v7) = v15 - FileOffset->LowPart;
          }
          IoSetTopLevelIrp((PIRP)4);
          CcMdlRead(FileObject, FileOffset, v7, MdlChain, IoStatus);
          FileObject->Flags |= 0x80000u;
          IoSetTopLevelIrp(0LL);
          goto LABEL_12;
        }
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    sub_1402F9540((__int64)KeGetCurrentThread());
    __incgsdword(0x8448u);
  }
  return 0;
}
