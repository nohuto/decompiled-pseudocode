/*
 * XREFs of LdrpGetImageSize @ 0x1402F7008
 * Callers:
 *     LdrpAccessResourceData @ 0x140755B5C (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140755C38 (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     LdrpKrnGetDataTableEntry @ 0x1402F7214 (LdrpKrnGetDataTableEntry.c)
 */

__int64 __fastcall LdrpGetImageSize(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  __int64 SizeOfImage; // rdi
  PIMAGE_NT_HEADERS v6; // rax
  __int64 DataTableEntry; // rax
  __int64 result; // rax
  unsigned __int16 Magic; // cx

  v3 = 0;
  SizeOfImage = 0LL;
  v6 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( !v6 )
    goto LABEL_9;
  if ( (a1 & 1) == 0 )
  {
    Magic = v6->OptionalHeader.Magic;
    if ( Magic == 267 || Magic == 523 )
    {
      SizeOfImage = v6->OptionalHeader.SizeOfImage;
      goto LABEL_5;
    }
LABEL_9:
    v3 = -1073741701;
    goto LABEL_5;
  }
  DataTableEntry = LdrpKrnGetDataTableEntry(a1);
  if ( DataTableEntry )
    SizeOfImage = *(unsigned int *)(DataTableEntry + 64);
LABEL_5:
  result = v3;
  *a2 = SizeOfImage;
  return result;
}
