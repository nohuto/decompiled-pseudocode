/*
 * XREFs of ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C000C15C
 * Callers:
 *     SpbCheckRect @ 0x1C000BF1C (SpbCheckRect.c)
 *     SpbCheckPwnd @ 0x1C001390C (SpbCheckPwnd.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsSpbPresentOrNull(struct tagSPB *a1)
{
  struct tagSPB *i; // rax

  if ( a1 )
  {
    for ( i = *(struct tagSPB **)(gpDispInfo + 32LL); i; i = *(struct tagSPB **)i )
    {
      if ( i == a1 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    LOBYTE(i) = 1;
  }
  return (char)i;
}
