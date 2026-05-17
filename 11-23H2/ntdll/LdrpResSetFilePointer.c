/*
 * XREFs of LdrpResSetFilePointer @ 0x1800F1028
 * Callers:
 *     LdrpResReadFile @ 0x1800F0870 (LdrpResReadFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800F0924 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     ZwSetInformationFile @ 0x1800A1390 (ZwSetInformationFile.c)
 */

__int64 __fastcall LdrpResSetFilePointer(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return ZwSetInformationFile();
}
