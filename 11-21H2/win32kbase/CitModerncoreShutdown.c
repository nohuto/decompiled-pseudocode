/*
 * XREFs of CitModerncoreShutdown @ 0x1C0240A10
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A2C48 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitModerncoreShutdown()
{
  if ( xmmword_1C029A230 )
    CitpLogoff(xmmword_1C029A230);
}
