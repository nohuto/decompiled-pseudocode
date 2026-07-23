/*
 * XREFs of sub_1405D6E40 @ 0x1405D6E40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B6BDC @ 0x1403B6BDC (sub_1403B6BDC.c)
 */

void __fastcall sub_1405D6E40(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx

  if ( (_DWORD)Argument1 )
  {
    v3 = (_DWORD)Argument1 - 1;
    if ( !v3 )
    {
LABEL_6:
      byte_140C204D0 = 0;
      return;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      sub_1403B6BDC(0);
      return;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return;
      goto LABEL_6;
    }
  }
  byte_140C204D0 = 1;
}
