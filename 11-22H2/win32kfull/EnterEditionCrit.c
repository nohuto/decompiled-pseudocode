/*
 * XREFs of EnterEditionCrit @ 0x1C00BB950
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122344 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

__int64 EnterEditionCrit()
{
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() )
    return 1LL;
  EnterCrit(1LL, 0LL);
  return 0LL;
}
