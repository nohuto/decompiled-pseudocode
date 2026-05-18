/*
 * XREFs of unknown_libname_8 @ 0x180058978
 * Callers:
 *     sub_1800587AC @ 0x1800587AC (sub_1800587AC.c)
 * Callees:
 *     sub_18003212C @ 0x18003212C (sub_18003212C.c)
 */

// Microsoft VisualC v7/14 64bit runtime
char *__fastcall unknown_libname_8(char *a1, char *a2, char *a3)
{
  char *i; // rdi

  for ( i = a1; i != a2; i += 32 )
  {
    sub_18003212C(a3, i);
    a3 += 32;
  }
  return a3;
}
