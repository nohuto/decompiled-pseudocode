/*
 * XREFs of IoGetSfioStreamIdentifier @ 0x140459D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_14055802C @ 0x14055802C (sub_14055802C.c)
 */

PVOID __stdcall IoGetSfioStreamIdentifier(PFILE_OBJECT FileObject, PVOID Signature)
{
  void *v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( !FileObject || !Signature )
    return 0LL;
  sub_14055802C((_DWORD)FileObject, 0, (_DWORD)Signature, (unsigned int)&v3, 0);
  return v3;
}
