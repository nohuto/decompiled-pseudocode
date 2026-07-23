/*
 * XREFs of sub_1406DDE9C @ 0x1406DDE9C
 * Callers:
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_1406DDA18 @ 0x1406DDA18 (sub_1406DDA18.c)
 *     sub_1406DDB48 @ 0x1406DDB48 (sub_1406DDB48.c)
 * Callees:
 *     sub_14025592C @ 0x14025592C (sub_14025592C.c)
 */

__int64 __fastcall sub_1406DDE9C(char **a1)
{
  char *v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( !*a1 )
      break;
    *a1 = *(char **)v2;
    result = sub_14025592C(v2);
  }
  return result;
}
