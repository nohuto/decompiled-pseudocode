/*
 * XREFs of ndisPktMonRegisterComponentsCallback @ 0x1C0092950
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1C00924B4 (-ndisPktMonRegisterAllFilters@@YAXXZ.c)
 *     ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1C009261C (-ndisPktMonRegisterAllMiniports@@YAXXZ.c)
 *     ?ndisPktMonRegisterAllOpens@@YAXXZ @ 0x1C009277C (-ndisPktMonRegisterAllOpens@@YAXXZ.c)
 */

void ndisPktMonRegisterComponentsCallback()
{
  ndisPktMonRegisterAllMiniports();
  ndisPktMonRegisterAllFilters();
  ndisPktMonRegisterAllOpens();
}
