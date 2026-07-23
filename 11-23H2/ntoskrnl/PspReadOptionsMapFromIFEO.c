/*
 * XREFs of PspReadOptionsMapFromIFEO @ 0x1406B4540
 * Callers:
 *     PspReadIFEOMitigationOptions @ 0x1406B445C (PspReadIFEOMitigationOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x1406B44E4 (PspReadIFEOMitigationAuditOptions.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     RtlQueryImageFileKeyOption @ 0x1406B6220 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall PspReadOptionsMapFromIFEO(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rcx
  int ImageFileKeyOption; // eax
  unsigned int v7; // ebx
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v8) = 0;
  if ( !a1 )
    return 3221225485LL;
  v4 = *(void **)(a1 + 192);
  if ( !v4 )
    return 3221225485LL;
  ImageFileKeyOption = RtlQueryImageFileKeyOption(v4, 24, (__int64)&v8);
  v7 = ImageFileKeyOption;
  if ( ImageFileKeyOption == -2147483643 )
  {
    return (unsigned int)-1073741820;
  }
  else if ( ImageFileKeyOption >= 0 )
  {
    memset((void *)(a3 + (unsigned int)v8), 0, (unsigned int)(24 - v8));
  }
  return v7;
}
