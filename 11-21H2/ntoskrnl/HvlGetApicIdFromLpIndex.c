/*
 * XREFs of HvlGetApicIdFromLpIndex @ 0x1405439E0
 * Callers:
 *     sub_1403C1A84 @ 0x1403C1A84 (sub_1403C1A84.c)
 * Callees:
 *     sub_14039E528 @ 0x14039E528 (sub_14039E528.c)
 */

int *__fastcall HvlGetApicIdFromLpIndex(unsigned int a1, _DWORD *a2)
{
  int *result; // rax
  _DWORD *v3; // r10

  *a2 = -1;
  result = (int *)dword_140D0688C;
  if ( (dword_140D0688C & 2) != 0 )
  {
    result = sub_14039E528(a1);
    if ( result )
    {
      result = (int *)(unsigned int)result[2];
      *v3 = (_DWORD)result;
    }
  }
  return result;
}
