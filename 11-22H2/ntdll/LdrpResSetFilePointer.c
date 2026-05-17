/*
 * XREFs of LdrpResSetFilePointer @ 0x1800EFC18
 * Callers:
 *     LdrpResReadFile @ 0x1800EF460 (LdrpResReadFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800EF514 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     ZwSetInformationFile @ 0x18009F2D0 (ZwSetInformationFile.c)
 */

__int64 __fastcall LdrpResSetFilePointer(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return ZwSetInformationFile();
}
