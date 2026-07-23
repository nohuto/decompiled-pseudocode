/*
 * XREFs of sub_140A852B0 @ 0x140A852B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

__int64 __fastcall sub_140A852B0(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, unsigned int a4)
{
  __int64 v8; // rsi
  int v9; // edi

  sub_140A88738(a1);
  v8 = sub_140A88430(a1);
  v9 = sub_14042A5E0(a1, a2);
  if ( v9 == -1073741811 )
  {
    sub_140A88948(
      byte_140C0D8E4,
      "MDL-backed common buffer creation failed due to invalid extended configurations (%p, count 0x%x) or an incompatible MDL (%p)",
      (const void *)0x26,
      a3,
      (const void *)a4);
    sub_1405FFA20(0xE6u, 0x26uLL, a3, a4, a2, byte_140C0D8E4);
  }
  else if ( v9 >= 0 && v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 172));
  }
  return (unsigned int)v9;
}
