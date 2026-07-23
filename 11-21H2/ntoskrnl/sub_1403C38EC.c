/*
 * XREFs of sub_1403C38EC @ 0x1403C38EC
 * Callers:
 *     sub_1403C3548 @ 0x1403C3548 (sub_1403C3548.c)
 *     sub_1405EF24C @ 0x1405EF24C (sub_1405EF24C.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     sub_14075AEA4 @ 0x14075AEA4 (sub_14075AEA4.c)
 */

NTSTATUS __fastcall sub_1403C38EC(PVOID BaseOfImage, ULONG64 Size, int *a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // esi
  NTSTATUS result; // eax
  int v10; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+58h] [rbp+20h] BYREF

  v3 = Size;
  OutHeaders = 0LL;
  v6 = sub_14075AEA4(BaseOfImage);
  if ( !v6 || *(_DWORD *)v6 < 0xC8u )
    return -1073741637;
  if ( *(_DWORD *)v6 < 0xE6u )
  {
    if ( *(_QWORD *)(v6 + 192) )
    {
      v10 = *(_DWORD *)(v6 + 192) - (_DWORD)BaseOfImage;
      goto LABEL_8;
    }
    return -1073741637;
  }
  v7 = *(unsigned __int16 *)(v6 + 228);
  v8 = *(_DWORD *)(v6 + 224);
  if ( !(_WORD)v7 )
    return -1073741637;
  result = RtlImageNtHeaderEx(0, BaseOfImage, v3, &OutHeaders);
  if ( result < 0 )
    return result;
  if ( (unsigned __int16)v7 > OutHeaders->FileHeader.NumberOfSections )
    return -1073741701;
  v10 = v8 + *(_DWORD *)((char *)OutHeaders + 40 * v7 + OutHeaders->FileHeader.SizeOfOptionalHeader - 4);
LABEL_8:
  *a3 = v10;
  return 0;
}
