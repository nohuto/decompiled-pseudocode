/*
 * XREFs of sub_140544640 @ 0x140544640
 * Callers:
 *     sub_1403C1A84 @ 0x1403C1A84 (sub_1403C1A84.c)
 *     sub_1403DEDD0 @ 0x1403DEDD0 (sub_1403DEDD0.c)
 *     HvlGetLpIndexFromApicId @ 0x140543A10 (HvlGetLpIndexFromApicId.c)
 *     sub_1409312DC @ 0x1409312DC (sub_1409312DC.c)
 * Callees:
 *     <none>
 */

int *__fastcall sub_140544640(int a1)
{
  int *result; // rax
  unsigned int v2; // edx

  result = dword_140D125E0;
  v2 = 0;
  if ( !(_DWORD)NumOfElements )
    return 0LL;
  while ( result[2] != a1 )
  {
    ++v2;
    result += 30;
    if ( v2 >= (unsigned int)NumOfElements )
      return 0LL;
  }
  return result;
}
