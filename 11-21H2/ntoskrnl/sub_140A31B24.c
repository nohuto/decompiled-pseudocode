/*
 * XREFs of sub_140A31B24 @ 0x140A31B24
 * Callers:
 *     sub_140A31A94 @ 0x140A31A94 (sub_140A31A94.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_140A31B24(_WORD *a1, char *a2)
{
  _WORD *v3; // r9
  signed __int64 v5; // r11
  __int16 *v6; // r10
  __int16 v7; // cx
  __int16 v8; // r8
  __int16 v9; // dx
  __int16 v10; // cx

  v3 = a1;
  if ( !*(_WORD *)a2 )
    return a1;
  if ( *a1 )
  {
    v5 = (char *)a1 - a2;
    while ( 2 )
    {
      v6 = (__int16 *)a2;
      do
      {
        v7 = *v6;
        if ( !*v6 )
          return v3;
        v8 = *(__int16 *)((char *)v6 + v5);
        v9 = v7 - 32;
        if ( (unsigned __int16)(v7 - 97) > 0x19u )
          v9 = *v6;
        v10 = v8 - 32;
        if ( (unsigned __int16)(v8 - 97) > 0x19u )
          v10 = *(__int16 *)((char *)v6 + v5);
        if ( v10 != v9 )
          break;
        ++v6;
      }
      while ( *(__int16 *)((char *)v6 + v5) );
      if ( !*v6 )
        return v3;
      ++v3;
      v5 += 2LL;
      if ( *v3 )
        continue;
      break;
    }
  }
  return 0LL;
}
