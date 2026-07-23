/*
 * XREFs of sub_14097838C @ 0x14097838C
 * Callers:
 *     sub_140757FFC @ 0x140757FFC (sub_140757FFC.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 */

_WORD *__fastcall sub_14097838C(__int64 a1, __int64 *a2, void *a3)
{
  _WORD *result; // rax
  _WORD *v6; // rdx
  __int64 v7; // rax
  ULONG Size; // [rsp+48h] [rbp+20h] BYREF

  result = RtlImageDirectoryEntryToData(a3, 1u, 0, &Size);
  v6 = result;
  if ( result )
  {
    v7 = *a2;
    if ( *a2 >= 0 )
      return (_WORD *)(a1 + v7 + 2);
    else
      return (_WORD *)(unsigned __int16)(v7 - v6[8]);
  }
  return result;
}
