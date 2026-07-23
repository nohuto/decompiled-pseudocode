/*
 * XREFs of sub_140760F98 @ 0x140760F98
 * Callers:
 *     sub_140760B20 @ 0x140760B20 (sub_140760B20.c)
 *     MmResetDriverPaging @ 0x140760ED0 (MmResetDriverPaging.c)
 *     sub_140AD6FD0 @ 0x140AD6FD0 (sub_140AD6FD0.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     sub_140B0872C @ 0x140B0872C (sub_140B0872C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140760F98(__int64 a1)
{
  unsigned int v1; // edx
  char v3; // al

  v1 = 0;
  if ( *(_DWORD *)a1 == 1633969454 )
  {
    return 1;
  }
  else if ( *(_DWORD *)a1 == 1162297680 )
  {
    v3 = *(_BYTE *)(a1 + 4);
    v1 = 1;
    if ( v3 == 75 )
    {
      if ( *(_BYTE *)(a1 + 5) == 68 )
        return (unsigned __int8)byte_140C40503;
    }
    else if ( v3 == 86 )
    {
      if ( *(_BYTE *)(a1 + 5) == 82 && *(_BYTE *)(a1 + 6) == 70 )
        return (dword_140D06880 & 1) == 0;
    }
    else if ( v3 == 67 && *(_BYTE *)(a1 + 5) == 77 && *(_BYTE *)(a1 + 6) == 82 && *(_BYTE *)(a1 + 7) == 67 )
    {
      return dword_140C54CA0 == 0;
    }
  }
  return v1;
}
