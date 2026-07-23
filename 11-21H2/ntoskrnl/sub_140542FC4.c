/*
 * XREFs of sub_140542FC4 @ 0x140542FC4
 * Callers:
 *     FsRtlPostPagingFileStackOverflow @ 0x140542F10 (FsRtlPostPagingFileStackOverflow.c)
 *     FsRtlPostStackOverflow @ 0x140542F30 (FsRtlPostStackOverflow.c)
 * Callees:
 *     KeInsertQueue @ 0x1402624D0 (KeInsertQueue.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

LONG __fastcall sub_140542FC4(
        struct _LIST_ENTRY *a1,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3,
        unsigned __int8 a4)
{
  __int64 v5; // rbx
  _LIST_ENTRY *Pool2; // rax

  v5 = a4;
  Pool2 = (_LIST_ENTRY *)ExAllocatePool2(66LL, 56LL, 1936872262LL);
  if ( !Pool2 )
  {
    if ( !(_BYTE)v5 )
      RtlRaiseStatus(-1073741670);
    KeWaitForSingleObject(&stru_140C48A20, Executive, 0, 0, 0LL);
    Pool2 = (_LIST_ENTRY *)&unk_140C48A40;
  }
  Pool2[2].Blink = a1;
  Pool2[3].Flink = a2;
  Pool2[2].Flink = a3;
  Pool2->Flink = 0LL;
  Pool2[1].Flink = (struct _LIST_ENTRY *)sub_140542F50;
  Pool2[1].Blink = Pool2;
  return KeInsertQueue((PRKQUEUE)&unk_140C489A0 + v5, Pool2);
}
