/*
 * XREFs of sub_1407EF6BC @ 0x1407EF6BC
 * Callers:
 *     sub_1407EF430 @ 0x1407EF430 (sub_1407EF430.c)
 *     sub_1407EF514 @ 0x1407EF514 (sub_1407EF514.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall sub_1407EF6BC(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return L"PowerUserPresent";
  v1 = a1 - 1;
  if ( !v1 )
    return L"PowerUserNotPresent";
  if ( v1 == 1 )
    return L"PowerUserInactive";
  return L"Invalid";
}
