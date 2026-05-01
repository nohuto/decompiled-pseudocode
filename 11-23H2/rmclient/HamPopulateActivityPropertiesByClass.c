/*
 * XREFs of HamPopulateActivityPropertiesByClass @ 0x1800080C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008150 @ 0x180008150 (sub_180008150.c)
 */

__int64 __fastcall HamPopulateActivityPropertiesByClass(_WORD *a1, _WORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  _WORD *v6; // rax
  int v7; // ebx
  _WORD *i; // rax

  if ( !a1 )
    return 3221225711LL;
  v4 = 64LL;
  v5 = 64LL;
  v6 = a1;
  v7 = 0;
  while ( *v6 )
  {
    ++v6;
    if ( !--v5 )
    {
      v7 = -2147024809;
      break;
    }
  }
  if ( v7 < 0 )
    return 3221225711LL;
  if ( a2 )
  {
    for ( i = a2; *i; ++i )
    {
      if ( !--v4 )
        return 3221225712LL;
    }
  }
  if ( (unsigned int)a3 > 8 )
    return 3221225713LL;
  sub_180008150(a1, a2, a3, a4);
  return 0LL;
}
