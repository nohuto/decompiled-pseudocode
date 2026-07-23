/*
 * XREFs of sub_140AF67F0 @ 0x140AF67F0
 * Callers:
 *     sub_140AF4DB0 @ 0x140AF4DB0 (sub_140AF4DB0.c)
 * Callees:
 *     sub_140AF6878 @ 0x140AF6878 (sub_140AF6878.c)
 */

__int64 sub_140AF67F0()
{
  unsigned int v0; // ecx
  unsigned int v1; // eax
  unsigned __int8 v2; // cl
  unsigned int v3; // eax
  __int64 result; // rax

  sub_140AF6878();
  _BitScanReverse(&v0, dword_140C5073C);
  LOBYTE(v1) = 1;
  byte_140C506CD = v0;
  v2 = 1;
  byte_140C2A070 = 1;
  if ( (unsigned int)dword_140D05004 > 1 )
  {
    do
    {
      v1 = (unsigned __int8)(2 * v1);
      byte_140C2A070 = v1;
      v2 = v1;
    }
    while ( v1 < dword_140D05004 );
  }
  byte_140D069E2 = v2 - 1;
  _BitScanReverse(&v3, v2);
  byte_140C506CC = v3 + byte_140C506CD;
  dword_140C506C0 = (1 << (v3 + byte_140C506CD)) - 1;
  result = (unsigned int)dword_140C50738;
  *((_DWORD *)KeGetCurrentPrcb() + 8343) = dword_140C50738;
  return result;
}
