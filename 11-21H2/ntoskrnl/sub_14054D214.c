/*
 * XREFs of sub_14054D214 @ 0x14054D214
 * Callers:
 *     sub_14054991C @ 0x14054991C (sub_14054991C.c)
 *     sub_140549A48 @ 0x140549A48 (sub_140549A48.c)
 *     sub_14054A610 @ 0x14054A610 (sub_14054A610.c)
 *     sub_14054B018 @ 0x14054B018 (sub_14054B018.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14054D1E8 @ 0x14054D1E8 (sub_14054D1E8.c)
 *     sub_14054DE6C @ 0x14054DE6C (sub_14054DE6C.c)
 */

unsigned __int8 __fastcall sub_14054D214(__int64 a1, void *a2, _DWORD *a3)
{
  int v5; // ebx
  unsigned __int8 result; // al
  const void **v7; // rsi
  unsigned int v8; // eax
  size_t Size; // [rsp+30h] [rbp+8h] BYREF

  LODWORD(Size) = 0;
  v5 = a1;
  if ( (_DWORD)a1 )
  {
    result = byte_140C48822;
    v7 = (const void **)&unk_140C48828;
  }
  else
  {
    result = byte_140C48802;
    v7 = (const void **)&unk_140C48808;
  }
  if ( result )
  {
    LOBYTE(a1) = (_DWORD)a1 == 0;
    sub_14054DE6C(a1, &Size);
    if ( a3 )
    {
      v8 = Size;
      if ( (unsigned int)Size <= *a3 )
      {
        *a3 = Size;
        if ( v8 )
          memmove(a2, *v7, v8);
      }
    }
    return (unsigned __int8)sub_14054D1E8(v5);
  }
  return result;
}
