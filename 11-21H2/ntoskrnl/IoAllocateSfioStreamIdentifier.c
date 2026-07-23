/*
 * XREFs of IoAllocateSfioStreamIdentifier @ 0x1405573D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14055802C @ 0x14055802C (sub_14055802C.c)
 */

NTSTATUS __stdcall IoAllocateSfioStreamIdentifier(
        PFILE_OBJECT FileObject,
        ULONG Length,
        PVOID Signature,
        PVOID *StreamIdentifier)
{
  if ( !FileObject )
    return -1073741585;
  if ( Length - 1 > 0xFFFFFFDE )
    return -1073741584;
  if ( Signature )
    return sub_14055802C((_DWORD)FileObject, Length, (_DWORD)Signature, (_DWORD)StreamIdentifier, 1);
  return -1073741583;
}
