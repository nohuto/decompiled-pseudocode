/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x140854690
 * Callers:
 *     PsBootPhaseComplete @ 0x1408543BC (PsBootPhaseComplete.c)
 * Callees:
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     RtlQueryImageFileKeyOption @ 0x1406B6070 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1407CE1DC (RtlpOpenBaseImageFileOptionsKey.c)
 */

__int64 __fastcall RtlQueryImageFileExecutionOptions(__int64 a1, const WCHAR *a2, __int64 a3, ULONG *a4)
{
  int ImageFileKeyOption; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  ImageFileKeyOption = RtlpOpenBaseImageFileOptionsKey(&Handle);
  if ( ImageFileKeyOption >= 0 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, a2, 4, a4, 4u, 0LL);
    if ( RtlpDisableIFEOCaching )
      ZwClose(Handle);
  }
  return (unsigned int)ImageFileKeyOption;
}
