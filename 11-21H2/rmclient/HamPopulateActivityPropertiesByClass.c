/*
 * XREFs of HamPopulateActivityPropertiesByClass @ 0x180008360
 * Callers:
 *     <none>
 * Callees:
 *     ?HampActivityPropertiesInitializeByClass@@YAXPEBG0W4_HAM_ACTIVITY_CLASS@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800083D0 (-HampActivityPropertiesInitializeByClass@@YAXPEBG0W4_HAM_ACTIVITY_CLASS@@PEAU_HAM_ACTIVITY_PROPE.c)
 */

__int64 __fastcall HamPopulateActivityPropertiesByClass(_WORD *a1, _WORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  _WORD *v5; // rax
  __int64 v6; // r10
  _WORD *i; // rax

  if ( !a1 )
    return 3221225711LL;
  v4 = 64LL;
  v5 = a1;
  v6 = 64LL;
  while ( *v5 )
  {
    ++v5;
    if ( !--v6 )
      return 3221225711LL;
  }
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
  HampActivityPropertiesInitializeByClass(a1, a2, a3, a4);
  return 0LL;
}
