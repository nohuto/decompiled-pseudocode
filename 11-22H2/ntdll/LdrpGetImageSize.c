/*
 * XREFs of LdrpGetImageSize @ 0x180088608
 * Callers:
 *     LdrpAccessResourceData @ 0x180022C2C (LdrpAccessResourceData.c)
 * Callees:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x1800270A0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlImageNtHeader @ 0x18002EEB0 (RtlImageNtHeader.c)
 *     ZwQueryVirtualMemory @ 0x18009F250 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpGetImageSize(__int64 a1, __int64 *a2)
{
  void *v3; // rbp
  NTSTATUS VirtualMemory; // ebx
  __int64 SizeOfImage; // rdi
  PIMAGE_NT_HEADERS v7; // rax
  _BYTE MemoryInformation[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]

  v3 = (void *)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  VirtualMemory = 0;
  SizeOfImage = 0LL;
  v7 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( !v7 )
    goto LABEL_8;
  if ( (a1 & 1) == 0 )
  {
    if ( v7->OptionalHeader.Magic == 267 || v7->OptionalHeader.Magic == 523 )
    {
      SizeOfImage = v7->OptionalHeader.SizeOfImage;
      goto LABEL_4;
    }
LABEL_8:
    VirtualMemory = -1073741701;
    goto LABEL_4;
  }
  SizeOfImage = LdrpGetFileSizeFromLoadAsDataTable(a1);
  if ( !SizeOfImage )
  {
    VirtualMemory = ZwQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      v3,
                      MemoryRegionInformation,
                      MemoryInformation,
                      0x30uLL,
                      0LL);
    if ( VirtualMemory < 0 )
      VirtualMemory = -1073741793;
    else
      SizeOfImage = v10;
  }
LABEL_4:
  *a2 = SizeOfImage;
  return (unsigned int)VirtualMemory;
}
