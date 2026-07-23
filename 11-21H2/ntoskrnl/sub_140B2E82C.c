/*
 * XREFs of sub_140B2E82C @ 0x140B2E82C
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     strstr @ 0x1403E0C40 (strstr.c)
 */

int __fastcall sub_140B2E82C(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // edx
  int v3; // edx
  int result; // eax

  byte_140C53554 = 4;
  if ( byte_140C4AD98 )
    v1 = *((_DWORD *)KeGetCurrentPrcb() + 39);
  else
    v1 = 1;
  dword_140C50728 = v1;
  if ( (((dword_140D06880 ^ (dword_140D06880 ^ (dword_140D06C10 << 22)) & 0xC00000u) >> 22) & 3) != 0 )
  {
    switch ( ((dword_140D06880 ^ (dword_140D06880 ^ (dword_140D06C10 << 22)) & 0xC00000u) >> 22) & 3 )
    {
      case 1u:
        word_140C51864 = 0;
        break;
      case 2u:
        word_140C51864 = 256;
        break;
      case 3u:
        word_140C51864 = 1;
        break;
      case 0u:
        goto LABEL_16;
    }
    if ( dword_140D06B00 > 0 )
    {
      byte_140C02453 = 4;
      qword_140C50780 = 1LL << ((unsigned __int8)dword_140D06B00 - 1);
      byte_140C02452 = dword_140D06B00 - 1;
    }
  }
  else
  {
    word_140C51864 = 1;
  }
LABEL_16:
  v2 = (dword_140D06880 ^ (dword_140D06880 ^ (dword_140D06C10 << 22)) & 0xC00000) & 0xF7FFFFFF;
  dword_140D06880 = (dword_140D06880 ^ (dword_140D06880 ^ (dword_140D06C10 << 22)) & 0xC00000) & 0xE7FFFFFF | 0x10000000;
  if ( dword_140D01958 == 1 )
  {
    v3 = v2 | 0x14000000;
  }
  else
  {
    if ( dword_140D01958 != 2 )
      goto LABEL_21;
    v3 = v2 & 0xE7FFFFFF;
  }
  dword_140D06880 = v3;
LABEL_21:
  if ( strstr(*(const char **)(a1 + 216), "NOACCESSBITREPLACEMENT") )
    dword_140D06880 &= 0xE7FFFFFF;
  result = dword_140D06880;
  if ( (((unsigned int)dword_140D06880 >> 27) & 3) == 1 )
  {
    byte_140C506CE = 1;
  }
  else if ( (((unsigned int)dword_140D06880 >> 27) & 3) == 2 )
  {
    byte_140C506CE = -1;
  }
  else
  {
    byte_140C506CE = 0;
  }
  if ( (qword_140D068D8 & 0x200000) != 0 )
  {
    result = dword_140D06880 | 0x100;
  }
  else
  {
    if ( (qword_140D068D8 & 0x1000000) == 0 )
      goto LABEL_33;
    result = dword_140D06880 | 0x200;
  }
  dword_140D06880 = result;
LABEL_33:
  if ( (qword_140D068D8 & 0x400000000000LL) != 0 )
  {
    result |= 0x2000000u;
    dword_140D06880 = result;
  }
  return result;
}
