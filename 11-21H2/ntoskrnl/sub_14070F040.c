/*
 * XREFs of sub_14070F040 @ 0x14070F040
 * Callers:
 *     sub_14070EF5C @ 0x14070EF5C (sub_14070EF5C.c)
 *     sub_14070EFE4 @ 0x14070EFE4 (sub_14070EFE4.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     RtlQueryImageFileKeyOption @ 0x1406CC700 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall sub_14070F040(__int64 a1, const WCHAR *a2, ULONG *a3)
{
  void *v4; // rcx
  NTSTATUS ImageFileKeyOption; // eax
  unsigned int v7; // ebx
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v8) = 0;
  if ( !a1 )
    return 3221225485LL;
  v4 = *(void **)(a1 + 192);
  if ( !v4 )
    return 3221225485LL;
  ImageFileKeyOption = RtlQueryImageFileKeyOption(v4, a2, 0, a3, 0x18u, (ULONG *)&v8);
  v7 = ImageFileKeyOption;
  if ( ImageFileKeyOption == -2147483643 )
  {
    return (unsigned int)-1073741820;
  }
  else if ( ImageFileKeyOption >= 0 )
  {
    memset((char *)a3 + (unsigned int)v8, 0, (unsigned int)(24 - v8));
  }
  return v7;
}
