/*
 * XREFs of IoGetOplockKeyContext @ 0x140557630
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A3A14 @ 0x1402A3A14 (sub_1402A3A14.c)
 */

POPLOCK_KEY_ECP_CONTEXT __stdcall IoGetOplockKeyContext(PFILE_OBJECT FileObject)
{
  __int64 v1; // rax
  _OPLOCK_KEY_ECP_CONTEXT *v2; // r10

  v1 = sub_1402A3A14((__int64)FileObject, 6, 0LL);
  if ( v1 && (*(_BYTE *)(v1 + 2) & 2) != 0 )
    return (POPLOCK_KEY_ECP_CONTEXT)(v1 + 20);
  return v2;
}
