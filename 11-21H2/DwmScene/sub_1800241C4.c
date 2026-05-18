/*
 * XREFs of sub_1800241C4 @ 0x1800241C4
 * Callers:
 *     sub_180024B70 @ 0x180024B70 (sub_180024B70.c)
 *     sub_180025520 @ 0x180025520 (sub_180025520.c)
 * Callees:
 *     <none>
 */

const char *__fastcall sub_1800241C4(char a1)
{
  const char *result; // rax

  result = "success";
  if ( !a1 )
    return "fail";
  return result;
}
