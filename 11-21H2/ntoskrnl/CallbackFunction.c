/*
 * XREFs of CallbackFunction @ 0x1405439C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14054B670 @ 0x14054B670 (sub_14054B670.c)
 */

void __fastcall CallbackFunction(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  if ( (_DWORD)Argument1 == 3 && (_DWORD)Argument2 == 1 )
    sub_14054B670(CallbackContext, Argument1);
}
