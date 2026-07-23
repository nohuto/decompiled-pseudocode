/*
 * XREFs of sub_140B0872C @ 0x140B0872C
 * Callers:
 *     sub_1407610B4 @ 0x1407610B4 (sub_1407610B4.c)
 *     sub_140B0856C @ 0x140B0856C (sub_140B0856C.c)
 *     sub_140B085F8 @ 0x140B085F8 (sub_140B085F8.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402FD820 @ 0x1402FD820 (sub_1402FD820.c)
 *     MmLockPagableImageSection @ 0x1406F5E50 (MmLockPagableImageSection.c)
 *     sub_140760F98 @ 0x140760F98 (sub_140760F98.c)
 *     sub_140761128 @ 0x140761128 (sub_140761128.c)
 */

void __fastcall sub_140B0872C(_QWORD *a1, int a2)
{
  void *v2; // rsi
  PIMAGE_NT_HEADERS v4; // rax
  int NumberOfSections; // edi
  __int64 v6; // rbx

  v2 = (void *)a1[6];
  if ( sub_140761128(a1, (unsigned __int64)v2) )
  {
    v4 = RtlImageNtHeader(v2);
    NumberOfSections = v4->FileHeader.NumberOfSections;
    v6 = (__int64)&v4->OptionalHeader + v4->FileHeader.SizeOfOptionalHeader;
    if ( v4->FileHeader.NumberOfSections )
    {
      do
      {
        if ( (unsigned int)sub_140760F98(v6) )
        {
          if ( a2 )
            MmLockPagableImageSection((ULONG_PTR)v2 + *(unsigned int *)(v6 + 12));
          else
            sub_1402FD820(v6, 0LL);
        }
        v6 += 40LL;
        --NumberOfSections;
      }
      while ( NumberOfSections );
    }
  }
}
