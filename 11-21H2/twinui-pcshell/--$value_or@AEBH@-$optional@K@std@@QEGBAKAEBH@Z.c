/*
 * XREFs of ??$value_or@AEBH@?$optional@K@std@@QEGBAKAEBH@Z @ 0x1801E8C30
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1805FB4D8 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::optional<unsigned long>::value_or<int const &>(_BYTE *a1)
{
  if ( a1[4] )
    return *(unsigned int *)a1;
  else
    return 100LL;
}
