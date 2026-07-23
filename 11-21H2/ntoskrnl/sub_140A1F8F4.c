/*
 * XREFs of sub_140A1F8F4 @ 0x140A1F8F4
 * Callers:
 *     sub_140A1E890 @ 0x140A1E890 (sub_140A1E890.c)
 * Callees:
 *     ZwEnumerateBootEntries @ 0x14041D3E0 (ZwEnumerateBootEntries.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140813B50 @ 0x140813B50 (sub_140813B50.c)
 *     sub_140813BA8 @ 0x140813BA8 (sub_140813BA8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A1F8F4(_QWORD *a1, _DWORD *a2)
{
  int v4; // ebx
  PVOID PoolWithTag; // rax
  void *v6; // rdi
  NTSTATUS v7; // eax
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = sub_140813BA8(0x16u, (__int64)&v10);
  if ( v4 >= 0 )
  {
    LODWORD(NumberOfBytes) = 0x2000;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x2000uLL, 0x4B444342u);
    v6 = PoolWithTag;
    LODWORD(NumberOfBytes) = PoolWithTag != 0LL ? NumberOfBytes : 0;
    while ( 1 )
    {
      v7 = ZwEnumerateBootEntries(PoolWithTag, (PULONG)&NumberOfBytes);
      v4 = v7;
      if ( v7 != -1073741789 )
        break;
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v4 = -1073741670;
        goto LABEL_12;
      }
    }
    if ( v7 >= 0 )
    {
      *a2 = NumberOfBytes;
      *a1 = v6;
    }
    else
    {
      sub_1408138F0(4LL, L"Failed to enumerate boot entries. Status: %x", (unsigned int)v7);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
    }
LABEL_12:
    sub_140813B50((unsigned int *)&v10);
  }
  return (unsigned int)v4;
}
