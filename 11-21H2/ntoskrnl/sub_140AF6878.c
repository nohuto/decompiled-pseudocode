/*
 * XREFs of sub_140AF6878 @ 0x140AF6878
 * Callers:
 *     sub_140AF67F0 @ 0x140AF67F0 (sub_140AF67F0.c)
 * Callees:
 *     sub_1403B7AA0 @ 0x1403B7AA0 (sub_1403B7AA0.c)
 */

__int64 sub_140AF6878()
{
  ULONG SecondLevelCacheSize; // r8d
  unsigned int SecondLevelCacheAssociativity; // eax
  unsigned int v2; // ecx
  unsigned int v3; // edx
  int v5; // ecx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v7; // rdx
  char *v8; // rcx
  __int64 result; // rax

  SecondLevelCacheSize = KeGetPcr()->SecondLevelCacheSize;
  dword_140C50718 = SecondLevelCacheSize;
  SecondLevelCacheAssociativity = KeGetPcr()->SecondLevelCacheAssociativity;
  if ( (_BYTE)SecondLevelCacheAssociativity )
    SecondLevelCacheSize /= SecondLevelCacheAssociativity;
  if ( SecondLevelCacheSize )
  {
    _BitScanReverse(&v2, SecondLevelCacheSize);
    SecondLevelCacheSize = 1 << v2;
  }
  if ( SecondLevelCacheSize - 8 > 0xF8 )
  {
    if ( qword_140C590D0 < 0x80000 )
      SecondLevelCacheSize = qword_140C590D0 < 0x40000 ? 64 : 128;
    else
      SecondLevelCacheSize = 256;
  }
  dword_140C5073C = SecondLevelCacheSize;
  dword_140C50738 = SecondLevelCacheSize - 1;
  v3 = (SecondLevelCacheSize >> 4) + 1;
  if ( (SecondLevelCacheSize & 0xF) == 0 )
    v3 = SecondLevelCacheSize >> 4;
  if ( _BitScanReverse((unsigned int *)&v5, v3) )
    v3 = 1 << v5;
  dword_140C507C8 = v3;
  sub_1403B7AA0();
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = *((unsigned int *)CurrentPrcb + 8613);
  v8 = (char *)CurrentPrcb + 34392;
  if ( (_DWORD)v7 )
  {
    do
    {
      if ( *v8 == 1 && (*((_DWORD *)v8 + 2) & 0xFFFFFFFD) == 0 )
        dword_140C5071C = *((_DWORD *)v8 + 1);
      v8 += 12;
      --v7;
    }
    while ( v7 );
  }
  result = 0x4000LL;
  if ( (unsigned int)dword_140C5071C < 0x4000 )
    dword_140C5071C = 0x4000;
  dword_140C5074C = 256;
  return result;
}
