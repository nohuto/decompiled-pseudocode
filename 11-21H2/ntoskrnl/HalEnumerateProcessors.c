/*
 * XREFs of HalEnumerateProcessors @ 0x1403DD110
 * Callers:
 *     sub_140544A9C @ 0x140544A9C (sub_140544A9C.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 *     sub_1403B3BA0 @ 0x1403B3BA0 (sub_1403B3BA0.c)
 */

__int64 __fastcall HalEnumerateProcessors(unsigned int a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // edx
  int v4; // r8d
  int v5; // r9d
  _DWORD *v6; // rcx
  unsigned int v7; // eax

  v2 = 1;
  v3 = 1;
  v4 = ~(*((_DWORD *)KeGetCurrentPrcb() + 39) * *((_DWORD *)KeGetCurrentPrcb() + 38) - 1);
  v5 = v4 & *(_DWORD *)(qword_140C4E210 + 8);
  if ( (unsigned int)dword_140C54A90 > 1 )
  {
    v6 = (_DWORD *)(qword_140C4E210 + 72);
    do
    {
      if ( v5 != (v4 & *v6) )
      {
        ++v3;
        v5 = v4 & *v6;
        if ( v3 > a1 )
          break;
      }
      ++v2;
      v6 += 16;
    }
    while ( v2 < (unsigned int)dword_140C54A90 );
  }
  if ( dword_140D014BC && dword_140D014BC < v2 )
    v2 = dword_140D014BC;
  if ( (unsigned int)sub_14036FA84() - 1 > 3 )
    v2 = 1;
  v7 = sub_1403B3BA0();
  if ( v2 >= v7 )
    return v7;
  return v2;
}
