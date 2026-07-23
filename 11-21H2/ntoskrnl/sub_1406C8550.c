/*
 * XREFs of sub_1406C8550 @ 0x1406C8550
 * Callers:
 *     sub_1406C82F8 @ 0x1406C82F8 (sub_1406C82F8.c)
 *     sub_140783A9C @ 0x140783A9C (sub_140783A9C.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 */

LONG __fastcall sub_1406C8550(CCHAR a1)
{
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  if ( qword_140C164D8->StackSize < a1 )
    qword_140C164D8->StackSize = a1;
  return KeReleaseMutex(&Object, 0);
}
