/*
 * XREFs of sub_14052E468 @ 0x14052E468
 * Callers:
 *     sub_14052DC38 @ 0x14052DC38 (sub_14052DC38.c)
 * Callees:
 *     sub_140522410 @ 0x140522410 (sub_140522410.c)
 *     sub_14052F0E8 @ 0x14052F0E8 (sub_14052F0E8.c)
 */

__int64 __fastcall sub_14052E468(__int64 a1, __int64 a2)
{
  int v4; // ebp
  unsigned int v5; // ebx
  unsigned int i; // edi
  PHYSICAL_ADDRESS v8; // [rsp+58h] [rbp+10h] BYREF

  v8.QuadPart = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v4 = 0;
    if ( !*(_DWORD *)(a2 + 32) )
    {
      v5 = 0;
      for ( i = 64; i < 0x80; i += 64 )
      {
        v4 = sub_140522410(
               a2 + 8 * (v5 + 7LL),
               0x1000u,
               0x1000u,
               (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272),
               &v8,
               a2 + 8 * (v5 + 7LL));
        if ( v4 < 0 )
          break;
        *(_DWORD *)(a2 + 32) = i;
        sub_14052F0E8(a1, a2, v5++);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v4;
}
