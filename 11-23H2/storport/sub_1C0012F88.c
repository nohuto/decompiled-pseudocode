/*
 * XREFs of sub_1C0012F88 @ 0x1C0012F88
 * Callers:
 *     sub_1C0012E40 @ 0x1C0012E40 (sub_1C0012E40.c)
 *     sub_1C0026320 @ 0x1C0026320 (sub_1C0026320.c)
 *     sub_1C0044FB8 @ 0x1C0044FB8 (sub_1C0044FB8.c)
 *     sub_1C00480F8 @ 0x1C00480F8 (sub_1C00480F8.c)
 *     sub_1C004A6B0 @ 0x1C004A6B0 (sub_1C004A6B0.c)
 *     sub_1C004CB40 @ 0x1C004CB40 (sub_1C004CB40.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_1C0012F88(int *a1, unsigned int a2)
{
  int v2; // r8d
  char *result; // rax
  unsigned __int64 v4; // rax

  v2 = *a1;
  result = 0LL;
  if ( *a1 == 1 )
  {
    if ( a2 < a1[2] )
    {
      v4 = ((unsigned __int64)a2 << 6) + 16;
      return (char *)a1 + v4;
    }
  }
  else if ( (v2 == 3 || v2 == 2) && a2 < a1[2] )
  {
    v4 = ((unsigned __int64)a2 << 6) + 24;
    return (char *)a1 + v4;
  }
  return result;
}
