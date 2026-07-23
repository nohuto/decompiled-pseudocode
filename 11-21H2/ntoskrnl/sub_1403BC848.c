/*
 * XREFs of sub_1403BC848 @ 0x1403BC848
 * Callers:
 *     sub_1403BC620 @ 0x1403BC620 (sub_1403BC620.c)
 * Callees:
 *     sub_1403ACEFC @ 0x1403ACEFC (sub_1403ACEFC.c)
 */

ULONG_PTR *sub_1403BC848()
{
  ULONG_PTR *result; // rax
  ULONG_PTR *v1; // rax

  result = sub_1403ACEFC(3, 256, 0, 0, 1);
  if ( result )
  {
    v1 = sub_1403ACEFC(4, 0, 0, 0, 1);
    if ( v1 )
      *((_DWORD *)v1 + 56) &= 0xFFFFF0FF;
    result = sub_1403ACEFC(2, 0, 0, 0, 1);
    if ( result )
      *((_DWORD *)result + 56) &= 0xFFFFF0FF;
  }
  return result;
}
