/*
 * XREFs of MiFreeKernelPadSections @ 0x140B6892C
 * Callers:
 *     MiInitializeDriverImages @ 0x140B497A0 (MiInitializeDriverImages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     MiIsKernelHalPadSection @ 0x1403A6A40 (MiIsKernelHalPadSection.c)
 *     MiFreeInitializationCode @ 0x140703BAC (MiFreeInitializationCode.c)
 *     VslReserveProtectedPages @ 0x140886034 (VslReserveProtectedPages.c)
 */

void __fastcall MiFreeKernelPadSections(_QWORD *a1, int a2)
{
  int v2; // ebp
  PIMAGE_NT_HEADERS v4; // rax
  int v5; // r14d
  __int64 v6; // r10
  int NumberOfSections; // esi
  _DWORD *v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // rdx
  unsigned int v11; // r8d
  int v12; // r13d
  __int64 v13; // r15

  v2 = a2;
  if ( dword_140D1D228 != 2 )
  {
    v4 = RtlImageNtHeader(a1);
    v5 = 0;
    v6 = 0x7FFFFFFFF8LL;
    NumberOfSections = v4->FileHeader.NumberOfSections;
    v8 = (_DWORD *)((char *)&v4->OptionalHeader.Magic + v4->FileHeader.SizeOfOptionalHeader);
    if ( v4->FileHeader.NumberOfSections )
    {
      do
      {
        if ( MiIsKernelHalPadSection((__int64)v8) )
        {
          v9 = v8[4];
          v10 = (unsigned int)v8[3];
          if ( v9 < v8[2] )
            v9 = v8[2];
          ++v5;
          v11 = (v9 + 4095) & 0xFFFFF000;
          v12 = v11 + v10;
          if ( v5 != 1 || dword_140D1D228 != 1 )
          {
            v13 = (unsigned int)v8[3];
            if ( (MiFlags & 0x4000) != 0 )
            {
              VslReserveProtectedPages(0LL, (__int64)a1 + v10, v11 >> 12, 2u);
              v6 = 0x7FFFFFFFF8LL;
            }
            MiFreeInitializationCode(
              a1,
              (v6 & (((unsigned __int64)a1 + v13) >> 9)) - 0x98000000000LL,
              (v6 & (((unsigned __int64)a1 + (unsigned int)(v12 - 1)) >> 9)) - 0x98000000000LL,
              1);
            v6 = 0x7FFFFFFFF8LL;
          }
        }
        v8 += 10;
        --NumberOfSections;
      }
      while ( NumberOfSections );
      v2 = a2;
    }
    if ( (*(_QWORD *)&v2 & 0x1FFFFFLL) != 0 && (MiFlags & 4) != 0 )
      MiFreeInitializationCode(
        a1,
        (v6 & (((unsigned __int64)a1 + (unsigned int)(v2 - (_DWORD)a1)) >> 9)) - 0x98000000000LL,
        (v6 & (((unsigned __int64)a1 + ((v2 - (_DWORD)a1 + 0x1FFFFF) & 0xFFE00000) - 1) >> 9)) - 0x98000000000LL,
        1);
  }
}
