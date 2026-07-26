/*
 * XREFs of ndisPktMonRegisterComponentsCallback @ 0x1C0092930
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1C0092494 (-ndisPktMonRegisterAllFilters@@YAXXZ.c)
 *     ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1C00925FC (-ndisPktMonRegisterAllMiniports@@YAXXZ.c)
 *     ?ndisPktMonRegisterAllOpens@@YAXXZ @ 0x1C009275C (-ndisPktMonRegisterAllOpens@@YAXXZ.c)
 */

void ndisPktMonRegisterComponentsCallback()
{
  ndisPktMonRegisterAllMiniports();
  ndisPktMonRegisterAllFilters();
  ndisPktMonRegisterAllOpens();
}
