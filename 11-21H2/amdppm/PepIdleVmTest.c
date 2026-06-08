/*
 * XREFs of PepIdleVmTest @ 0x1C0009AF0
 * Callers:
 *     <none>
 * Callees:
 *     PepIdleTest @ 0x1C0009A40 (PepIdleTest.c)
 */

__int64 __fastcall PepIdleVmTest(__int64 *a1, __int64 a2, int a3)
{
  if ( a3 == -1 )
    return 0LL;
  else
    return PepIdleTest(a1, 0xFFFFFFFF, a3);
}
