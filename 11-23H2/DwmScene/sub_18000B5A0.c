/*
 * XREFs of sub_18000B5A0 @ 0x18000B5A0
 * Callers:
 *     sub_18000AF98 @ 0x18000AF98 (sub_18000AF98.c)
 *     sub_18000B0C0 @ 0x18000B0C0 (sub_18000B0C0.c)
 * Callees:
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000BEA0 (-__uncaught_exception@@YA_NXZ.c)
 */

char sub_18000B5A0()
{
  int v0; // eax
  PVOID StackBase; // rcx
  signed __int64 v2; // rax

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
  {
    StackBase = NtCurrentTeb()->NtTib.StackBase;
    while ( 1 )
    {
      v2 = _InterlockedCompareExchange64(&qword_1801D31A8, (signed __int64)StackBase, 0LL);
      if ( !v2 )
        break;
      if ( StackBase == (PVOID)v2 )
        return 1;
    }
  }
  return 0;
}
