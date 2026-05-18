/*
 * XREFs of sub_1800A01D8 @ 0x1800A01D8
 * Callers:
 *     sub_1800A0450 @ 0x1800A0450 (sub_1800A0450.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_1800A01D8(__int64 a1, _DWORD *a2)
{
  char *result; // rax

  result = *(char **)(a1 + 8);
  if ( result == *(char **)(a1 + 16) )
    return sub_18009FED4((void **)a1, *(_QWORD *)(a1 + 8), a2);
  *(_DWORD *)result = *a2;
  *(_QWORD *)(a1 + 8) = result + 4;
  return result;
}
