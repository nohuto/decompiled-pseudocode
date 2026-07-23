/*
 * XREFs of sub_140B2F008 @ 0x140B2F008
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     ntoskrnl_12 @ 0x1406AD260 (ntoskrnl_12.c)
 */

__int64 sub_140B2F008()
{
  char v0; // al
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rax
  __int64 result; // rax

  qword_140D3CC70 = qword_140D06CB8;
  if ( dword_140D3B118 == 4 && dword_140D3B11C == 4 && qword_140D3B160 )
  {
    v0 = 1;
  }
  else
  {
    v0 = 0;
    if ( dword_140D3B118 == 8 && dword_140D3B11C == 11 && qword_140D3B160 )
      goto LABEL_20;
  }
  if ( !v0 )
  {
    v1 = qword_140D06CB8 / 3uLL;
    goto LABEL_5;
  }
LABEL_20:
  v1 = qword_140D3B160;
  byte_140D3CA07 = 1;
  if ( qword_140D3B160 >= ((((unsigned __int64)qword_140D06CB8 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL) )
    v1 = (((unsigned __int64)qword_140D06CB8 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_5:
  qword_140D3B068 = v1;
  if ( v1 > 0xFFFFFFFF )
  {
    v1 = 0xFFFFFFFFLL;
    qword_140D3B068 = 0xFFFFFFFFLL;
  }
  if ( v1 < 0x1000000 )
  {
    v1 = 0x1000000LL;
    qword_140D3B068 = 0x1000000LL;
  }
  qword_140D3B1F8 = 95 * (v1 / 0x64);
  if ( dword_140C54CC8 )
  {
    result = (unsigned int)(dword_140C54CC8 << 20);
  }
  else
  {
    if ( (ntoskrnl_12(0) & 0xFFFFFFFFFFFFFFFEuLL) < 0xC0000 )
      v2 = (unsigned __int64)ntoskrnl_12(0) >> 1;
    else
      LODWORD(v2) = 393216;
    result = (unsigned int)((_DWORD)v2 << 12);
  }
  dword_140C54CC8 = result;
  return result;
}
