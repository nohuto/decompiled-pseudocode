/*
 * XREFs of CcSetFileSizes @ 0x1402F2810
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x1402F1230 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
