/*
 * XREFs of sub_14057657C @ 0x14057657C
 * Callers:
 *     sub_1403AF3B4 @ 0x1403AF3B4 (sub_1403AF3B4.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

NTSTATUS __fastcall sub_14057657C(struct _KEVENT *a1, char a2)
{
  if ( a2 )
    return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
  else
    return KeSetEvent(a1, 0, 0);
}
