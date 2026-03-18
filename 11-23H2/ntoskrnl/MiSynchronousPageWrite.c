/*
 * XREFs of MiSynchronousPageWrite @ 0x1403C1A68
 * Callers:
 *     MiZeroPageWrite @ 0x1403C17F4 (MiZeroPageWrite.c)
 *     MiZeroPageFileFirstPage @ 0x140833E80 (MiZeroPageFileFirstPage.c)
 * Callees:
 *     IoSynchronousPageWriteEx @ 0x140250F80 (IoSynchronousPageWriteEx.c)
 */

NTSTATUS __fastcall MiSynchronousPageWrite(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        _QWORD *a3,
        struct _KEVENT *a4,
        char a5,
        __int64 a6,
        struct _IO_STATUS_BLOCK *a7)
{
  return IoSynchronousPageWriteEx(a1, a2, a3, a4, a5, a6, a7);
}
