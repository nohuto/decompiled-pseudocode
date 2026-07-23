/*
 * XREFs of sub_140963330 @ 0x140963330
 * Callers:
 *     KeSetTracepoint @ 0x140962320 (KeSetTracepoint.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14096324C @ 0x14096324C (sub_14096324C.c)
 *     sub_140AB332C @ 0x140AB332C (sub_140AB332C.c)
 */

__int64 __fastcall sub_140963330(ULONG_PTR a1, char a2, const void *a3, void *a4, unsigned int Size, __int64 a6)
{
  unsigned int v10; // esi
  int v11; // ebx

  *(_OWORD *)a6 = 0LL;
  *(_OWORD *)(a6 + 16) = 0LL;
  *(_QWORD *)(a6 + 32) = 0LL;
  v10 = 4096 - ((unsigned __int16)a3 & 0xFFF);
  if ( v10 > 0xF )
    v10 = 15;
  v11 = sub_14096324C(a1, a2, a3, (void *)(a6 + 6), v10);
  if ( v11 >= 0 )
  {
    *(_BYTE *)(a6 + 5) = v10;
    v11 = sub_140AB332C(a6);
    if ( v11 == -1073741306 )
    {
      if ( v10 >= 0xF )
        return (unsigned int)v11;
      *(_OWORD *)a6 = 0LL;
      *(_OWORD *)(a6 + 16) = 0LL;
      *(_QWORD *)(a6 + 32) = 0LL;
      v11 = sub_14096324C(a1, a2, a3, (void *)(a6 + 6), 0xFu);
      if ( v11 < 0 )
        return (unsigned int)v11;
      *(_BYTE *)(a6 + 5) = 15;
      v11 = sub_140AB332C(a6);
    }
    if ( v11 >= 0 )
      memmove(a4, (const void *)(a6 + 6), Size);
  }
  return (unsigned int)v11;
}
