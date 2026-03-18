/*
 * XREFs of IoSetDumpRange @ 0x140552F60
 * Callers:
 *     IopAddPageDumpRange @ 0x140553D34 (IopAddPageDumpRange.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     MmIsAddressValidEx @ 0x14028FBF0 (MmIsAddressValidEx.c)
 *     IopAddPageToPageMap @ 0x140553F1C (IopAddPageToPageMap.c)
 */

__int64 __fastcall IoSetDumpRange(__int64 a1, char *a2, unsigned __int64 a3, int a4)
{
  int v4; // r11d
  int v5; // eax
  unsigned __int64 v6; // rbp
  char *v7; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // rdi
  char v10; // al
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned int v15; // r9d
  _QWORD *v16; // rdx
  unsigned __int64 v17; // rcx
  char v18; // si
  PHYSICAL_ADDRESS v19; // rax
  int v20; // eax

  v4 = a4;
  v5 = a4 & 0xF;
  v6 = a3;
  v7 = a2;
  if ( v5 == 1 )
  {
    PhysicalAddress = MmGetPhysicalAddress(a2);
    v10 = *(_BYTE *)(a1 + 40) & 1;
    v7 = (char *)((unsigned __int64)PhysicalAddress.QuadPart >> 12);
    v4 = 0;
LABEL_20:
    v11 = IopAddPageToPageMap(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), (_DWORD)v7, v6, v10, v4);
    if ( v11 != -1073741503 )
      return v11;
  }
  else if ( v5 == 2 )
  {
    v11 = -1073741503;
    v12 = 0;
    if ( *(_DWORD *)MmPhysicalMemoryBlock )
    {
      v13 = (char *)MmPhysicalMemoryBlock + 24;
      do
      {
        v14 = *(v13 - 1);
        if ( v14 > (unsigned __int64)v7 )
          break;
        if ( *v13 + v14 > (unsigned __int64)v7 )
        {
          if ( v6 > *((_QWORD *)MmPhysicalMemoryBlock + 2 * v12 + 2)
                  + *((_QWORD *)MmPhysicalMemoryBlock + 2 * v12 + 3)
                  - (_QWORD)v7 )
            break;
LABEL_19:
          v10 = *(_BYTE *)(a1 + 40) & 1;
          goto LABEL_20;
        }
        ++v12;
        v13 += 2;
      }
      while ( v12 < *(_DWORD *)MmPhysicalMemoryBlock );
    }
    if ( SpecialMemoryRanges )
    {
      v15 = 0;
      if ( *(_DWORD *)SpecialMemoryRanges )
      {
        v16 = (_QWORD *)(SpecialMemoryRanges + 24);
        do
        {
          v17 = *(v16 - 1);
          if ( v17 > (unsigned __int64)v7 )
            break;
          if ( *v16 + v17 > (unsigned __int64)v7 )
          {
            if ( v6 > *(_QWORD *)(SpecialMemoryRanges + 16LL * v15 + 16)
                    + *(_QWORD *)(SpecialMemoryRanges + 16LL * v15 + 24)
                    - (_QWORD)v7 )
              break;
            goto LABEL_19;
          }
          ++v15;
          v16 += 2;
        }
        while ( v15 < *(_DWORD *)SpecialMemoryRanges );
      }
    }
  }
  else
  {
    v18 = 1;
    if ( !a3 )
      return 0;
    do
    {
      if ( MmIsAddressValidEx((__int64)v7) )
      {
        v19 = MmGetPhysicalAddress(v7);
        v20 = IopAddPageToPageMap(
                *(_QWORD *)(a1 + 24),
                *(_QWORD *)(a1 + 16),
                *(_QWORD *)(a1 + 32),
                (unsigned __int64)v19.QuadPart >> 12,
                1LL,
                *(_BYTE *)(a1 + 40) & 1,
                0);
        if ( v20 == -1073741789 )
          return 3221225507LL;
        if ( v20 < 0 )
          v18 = 0;
      }
      v7 += 4096;
      --v6;
    }
    while ( v6 );
    if ( v18 == 1 )
      return 0;
    v11 = -1073741503;
  }
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    return 0;
  return v11;
}
