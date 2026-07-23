/*
 * XREFs of sub_14030DA10 @ 0x14030DA10
 * Callers:
 *     sub_1407B92D0 @ 0x1407B92D0 (sub_1407B92D0.c)
 *     sub_1407BDB60 @ 0x1407BDB60 (sub_1407BDB60.c)
 * Callees:
 *     sub_14097D244 @ 0x14097D244 (sub_14097D244.c)
 */

__int64 __fastcall sub_14030DA10(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  unsigned int v3; // ecx
  unsigned __int64 v4; // rax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x200000) != 0 )
  {
    if ( (v1 & 0x800000) == 0 && (v1 & 0x180000) < 0x100000 )
      goto LABEL_4;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 64) & 0x1000000) == 0 )
    {
LABEL_4:
      if ( (*(_BYTE *)(a1 + 48) & 0x70) == 0x30 )
      {
        v4 = sub_14097D244(a1);
        if ( v4 == 512 )
          return 1LL;
        if ( v4 >= 0x40000 )
          return 2LL;
      }
      return 0LL;
    }
    v1 = *(_DWORD *)(a1 + 48);
  }
  v3 = dword_140037160[(v1 >> 19) & 3];
  if ( v3 > 1 )
    return 0LL;
  result = 1LL;
  if ( !v3 )
    return 2LL;
  return result;
}
