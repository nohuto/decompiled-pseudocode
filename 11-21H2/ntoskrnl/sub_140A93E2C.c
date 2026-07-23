/*
 * XREFs of sub_140A93E2C @ 0x140A93E2C
 * Callers:
 *     sub_140A93398 @ 0x140A93398 (sub_140A93398.c)
 *     sub_140A93C34 @ 0x140A93C34 (sub_140A93C34.c)
 * Callees:
 *     <none>
 */

PVOID *__fastcall sub_140A93E2C(__int64 a1, unsigned int a2, PVOID *a3)
{
  __int64 v3; // r9
  unsigned int v5; // ecx

  v3 = 0LL;
  if ( !a3 )
    a3 = (PVOID *)xmmword_140C1B1F0;
  while ( a3 != &xmmword_140C1B1F0 )
  {
    v5 = 0;
    if ( a2 )
    {
      while ( *(PVOID *)(a1 + 8LL * v5) != a3[2] )
      {
        if ( ++v5 >= a2 )
          goto LABEL_7;
      }
      return a3;
    }
LABEL_7:
    a3 = (PVOID *)*a3;
  }
  return (PVOID *)v3;
}
