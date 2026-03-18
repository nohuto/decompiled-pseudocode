/*
 * XREFs of CitUserChange @ 0x1C00A2C10
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A2C48 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1)
{
  if ( xmmword_1C029A230 && *((_QWORD *)xmmword_1C029A230 + 12) && *((_QWORD *)xmmword_1C029A230 + 13) != a1 )
    CitpLogoff(xmmword_1C029A230);
}
