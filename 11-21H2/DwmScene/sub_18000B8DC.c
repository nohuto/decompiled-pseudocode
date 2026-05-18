/*
 * XREFs of sub_18000B8DC @ 0x18000B8DC
 * Callers:
 *     sub_18000AF98 @ 0x18000AF98 (sub_18000AF98.c)
 *     sub_18000B0C0 @ 0x18000B0C0 (sub_18000B0C0.c)
 * Callees:
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000BEB0 (-__uncaught_exception@@YA_NXZ.c)
 */

char __fastcall sub_18000B8DC(char a1)
{
  int v2; // eax

  LOBYTE(v2) = __uncaught_exception();
  if ( v2 && !a1 )
    _InterlockedExchange64(&qword_1801F7298, 0LL);
  return v2;
}
