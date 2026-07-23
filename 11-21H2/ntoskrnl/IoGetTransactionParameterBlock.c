/*
 * XREFs of IoGetTransactionParameterBlock @ 0x14021D040
 * Callers:
 *     sub_1406D3128 @ 0x1406D3128 (sub_1406D3128.c)
 * Callees:
 *     <none>
 */

PTXN_PARAMETER_BLOCK __stdcall IoGetTransactionParameterBlock(PFILE_OBJECT FileObject)
{
  PTXN_PARAMETER_BLOCK *FileObjectExtension; // rax

  FileObjectExtension = (PTXN_PARAMETER_BLOCK *)FileObject->FileObjectExtension;
  if ( !FileObjectExtension || FileObjectExtension == off_140C06A80 )
    return 0LL;
  else
    return FileObjectExtension[1];
}
