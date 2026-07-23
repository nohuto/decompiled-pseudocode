/*
 * XREFs of sub_14081CB40 @ 0x14081CB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_14081CB40(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  if ( (_DWORD)Argument1 == 3 )
  {
    if ( (_DWORD)Argument2 )
    {
      if ( (_DWORD)Argument2 == 1 )
        byte_140C15F71 = 0;
    }
    else
    {
      byte_140C15F71 = 1;
    }
  }
}
