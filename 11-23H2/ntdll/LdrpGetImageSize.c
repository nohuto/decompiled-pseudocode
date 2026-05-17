/*
 * XREFs of LdrpGetImageSize @ 0x180088E08
 * Callers:
 *     LdrpAccessResourceData @ 0x180022B10 (LdrpAccessResourceData.c)
 * Callees:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180026F50 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlImageNtHeader @ 0x18002ECE0 (RtlImageNtHeader.c)
 *     ZwQueryVirtualMemory @ 0x1800A1310 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpGetImageSize(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rbp
  int VirtualMemory; // ebx
  __int64 FileSizeFromLoadAsDataTable; // rdi
  __int64 v7; // rax
  _BYTE v9[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]

  v3 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  VirtualMemory = 0;
  FileSizeFromLoadAsDataTable = 0LL;
  v7 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( !v7 )
    goto LABEL_8;
  if ( (a1 & 1) == 0 )
  {
    if ( *(_WORD *)(v7 + 24) == 267 || *(_WORD *)(v7 + 24) == 523 )
    {
      FileSizeFromLoadAsDataTable = *(unsigned int *)(v7 + 80);
      goto LABEL_4;
    }
LABEL_8:
    VirtualMemory = -1073741701;
    goto LABEL_4;
  }
  FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
  if ( !FileSizeFromLoadAsDataTable )
  {
    VirtualMemory = ZwQueryVirtualMemory(-1LL, v3, 3LL, v9, 48LL, 0LL);
    if ( VirtualMemory < 0 )
      VirtualMemory = -1073741793;
    else
      FileSizeFromLoadAsDataTable = v10;
  }
LABEL_4:
  *a2 = FileSizeFromLoadAsDataTable;
  return (unsigned int)VirtualMemory;
}
