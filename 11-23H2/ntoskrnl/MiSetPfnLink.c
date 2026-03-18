/*
 * XREFs of MiSetPfnLink @ 0x1402DF09C
 * Callers:
 *     MiPfPrepareReadList @ 0x1406F62A0 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x140706194 (MiAllocateTopLevelPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1407446E0 (MiPfPrepareSequentialReadList.c)
 *     MiInitializeDynamicBitmap @ 0x14081C7A4 (MiInitializeDynamicBitmap.c)
 *     MiCaptureSparsePages @ 0x140A42ED4 (MiCaptureSparsePages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnLink(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
