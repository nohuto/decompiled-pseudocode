/*
 * XREFs of sub_140835490 @ 0x140835490
 * Callers:
 *     sub_1408351BC @ 0x1408351BC (sub_1408351BC.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406C2E68 @ 0x1406C2E68 (sub_1406C2E68.c)
 *     RtlQueryImageFileKeyOption @ 0x1406CC700 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall sub_140835490(__int64 a1, const WCHAR *a2, __int64 a3, ULONG *a4)
{
  int ImageFileKeyOption; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  ImageFileKeyOption = sub_1406C2E68(&Handle);
  if ( ImageFileKeyOption >= 0 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, a2, 4, a4, 4u, 0LL);
    if ( dword_140D01438 )
      ZwClose(Handle);
  }
  return (unsigned int)ImageFileKeyOption;
}
