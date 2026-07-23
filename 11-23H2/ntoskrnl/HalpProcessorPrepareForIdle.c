/*
 * XREFs of HalpProcessorPrepareForIdle @ 0x140334EE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 HalpProcessorPrepareForIdle()
{
  void (*v1)(void); // rax

  if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[2]) > 0 && (KeGetCurrentPrcb()->HalReserved[2] & 1) == 0 )
  {
    v1 = (void (*)(void))HalpProfileInterface[9];
    if ( v1 )
      v1();
  }
  return 0LL;
}
