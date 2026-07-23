/*
 * XREFs of sub_14063A4B0 @ 0x14063A4B0
 * Callers:
 *     sub_14055CF88 @ 0x14055CF88 (sub_14055CF88.c)
 *     sub_140A66EB4 @ 0x140A66EB4 (sub_140A66EB4.c)
 * Callees:
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 */

__int64 __fastcall sub_14063A4B0(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 *v2; // rsi
  unsigned int v3; // edi
  int v5; // eax
  int v6; // eax

  v1 = 0;
  v2 = (__int64 *)&qword_140C117A0;
  v3 = 0;
  while ( 1 )
  {
    if ( *v2 )
    {
      v5 = sub_140593218(a1, *v2, 80 * qword_140C157C8);
      if ( v5 < 0 )
      {
        v1 = v5;
        if ( v5 == -1073741789 )
          break;
      }
    }
    ++v3;
    ++v2;
    if ( v3 >= 0x800 )
    {
      if ( *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) )
      {
        v6 = sub_140593218(
               a1,
               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 896LL),
               80 * qword_140C11768);
        if ( v6 < 0 )
          return (unsigned int)v6;
      }
      return v1;
    }
  }
  return v1;
}
