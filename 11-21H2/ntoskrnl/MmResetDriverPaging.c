/*
 * XREFs of MmResetDriverPaging @ 0x140760ED0
 * Callers:
 *     sub_1406176B0 @ 0x1406176B0 (sub_1406176B0.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140760F98 @ 0x140760F98 (sub_140760F98.c)
 *     sub_1407610B4 @ 0x1407610B4 (sub_1407610B4.c)
 *     sub_140761128 @ 0x140761128 (sub_140761128.c)
 */

void __stdcall MmResetDriverPaging(PVOID AddressWithinSection)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  void *v3; // rbp
  PIMAGE_NT_HEADERS v4; // rbx
  __int64 SizeOfOptionalHeader; // rcx
  IMAGE_OPTIONAL_HEADER64 *p_OptionalHeader; // rdi
  int NumberOfSections; // ebx
  _DWORD *i; // rdi
  unsigned int v9; // edx
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8

  v1 = sub_140761128(0LL, AddressWithinSection);
  v2 = v1;
  if ( v1 )
  {
    v3 = *(void **)(v1 + 48);
    v4 = RtlImageNtHeader(v3);
    sub_1407610B4(v2);
    SizeOfOptionalHeader = v4->FileHeader.SizeOfOptionalHeader;
    p_OptionalHeader = &v4->OptionalHeader;
    NumberOfSections = v4->FileHeader.NumberOfSections;
    for ( i = (_DWORD *)((char *)&p_OptionalHeader->Magic + SizeOfOptionalHeader); NumberOfSections; --NumberOfSections )
    {
      if ( (i[9] & 0x2000000) == 0 && !(unsigned int)sub_140760F98(i) )
      {
        v9 = i[4];
        if ( v9 < i[2] )
          v9 = i[2];
        sub_140313C70((unsigned __int64)v3 + i[3] + v9 - 1);
        v11 = sub_140313C70((unsigned __int64)v3 + v10);
        sub_140312BB0(v2, v11, v12, 2);
      }
      i += 10;
    }
  }
}
