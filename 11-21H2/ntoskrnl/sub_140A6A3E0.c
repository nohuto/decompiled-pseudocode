/*
 * XREFs of sub_140A6A3E0 @ 0x140A6A3E0
 * Callers:
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     MmTrimAllSystemPagableMemory @ 0x1405976F0 (MmTrimAllSystemPagableMemory.c)
 *     sub_140A69FD8 @ 0x140A69FD8 (sub_140A69FD8.c)
 */

char __fastcall sub_140A6A3E0(int a1)
{
  char *v2; // rbx
  __int64 v3; // rdi

  if ( !a1 )
    return sub_140A69FD8();
  if ( a1 == 1 )
  {
    if ( (unsigned int)dword_140C529C4 < 2 )
    {
      dword_140C529C4 = 2;
      if ( (dword_140C23508 & 2) != 0 )
      {
        MmTrimAllSystemPagableMemory(1);
        if ( Count )
        {
          v2 = (char *)&unk_140C590E0;
          v3 = Count;
          do
          {
            if ( (*(_WORD *)(*(_QWORD *)v2 + 204LL) & 0x840) == 0 )
              ObfDereferenceObject(*(PVOID *)(*(_QWORD *)v2 + 56LL));
            v2 += 8;
            --v3;
          }
          while ( v3 );
        }
      }
    }
  }
  else if ( (unsigned int)dword_140C529C4 < 3 )
  {
    dword_140C529C4 = 3;
  }
  return 1;
}
