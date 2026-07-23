/*
 * XREFs of sub_1406734EC @ 0x1406734EC
 * Callers:
 *     sub_140206200 @ 0x140206200 (sub_140206200.c)
 *     LdrResSearchResource @ 0x140673120 (LdrResSearchResource.c)
 *     sub_1406E3AE0 @ 0x1406E3AE0 (sub_1406E3AE0.c)
 * Callees:
 *     sub_1402D7504 @ 0x1402D7504 (sub_1402D7504.c)
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     ZwQueryVirtualMemory @ 0x14041BBC0 (ZwQueryVirtualMemory.c)
 */

NTSTATUS __fastcall sub_1406734EC(unsigned __int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbx
  NTSTATUS result; // eax
  bool v8; // r14
  WORD Magic; // dx
  unsigned __int64 SizeOfImage; // rdi
  PVOID *v11; // rax
  __int128 MemoryInformation; // [rsp+40h] [rbp-58h] BYREF
  __int128 v13; // [rsp+50h] [rbp-48h]
  __int128 v14; // [rsp+60h] [rbp-38h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+A0h] [rbp+8h] BYREF

  OutHeaders = 0LL;
  MemoryInformation = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( !a1 || !a2 )
    return -1073741811;
  v5 = 0LL;
  if ( (a3 & 0x80000) != 0 )
  {
    v6 = *a2;
LABEL_5:
    result = 0;
LABEL_29:
    if ( v5 && v5 < v6 )
      return -1073741793;
    *a2 = v6;
    return result;
  }
  if ( (a3 & 0x20000) != 0 )
    v5 = *a2;
  *a2 = 0LL;
  v6 = 0LL;
  v8 = 0;
  if ( (a3 & 0x100) != 0 )
    v8 = (a1 & 1) == 0;
  result = RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
  if ( result >= 0 )
  {
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 || Magic == 523 )
    {
      SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
    }
    else
    {
      SizeOfImage = 0LL;
      result = -1073741701;
    }
    if ( result >= 0 )
    {
      if ( v8 && SizeOfImage )
      {
        v6 = SizeOfImage;
        goto LABEL_5;
      }
      v11 = sub_1402D7504(a1);
      if ( v11 )
        v6 = *((unsigned int *)v11 + 16);
      if ( v6 )
      {
        result = 0;
      }
      else
      {
        result = ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL),
                   MemoryRegionInformation,
                   &MemoryInformation,
                   0x30uLL,
                   0LL);
        if ( result >= 0 )
          v6 = v13;
      }
      if ( !v6 && SizeOfImage )
      {
        v6 = SizeOfImage;
        result = 0;
      }
      if ( result >= 0 )
        goto LABEL_29;
    }
  }
  return result;
}
