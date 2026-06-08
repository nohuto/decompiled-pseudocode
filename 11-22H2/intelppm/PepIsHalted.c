/*
 * XREFs of PepIsHalted @ 0x1C000D8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PepIsHalted(_QWORD *BugCheckParameter4)
{
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(BugCheckParameter3) = 0;
  if ( (int)PoFxProcessorNotification(*BugCheckParameter4, 7LL, &BugCheckParameter3) < 0 )
    KeBugCheckEx((ULONG)323, 1uLL, 7uLL, (ULONG_PTR)&BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  return BugCheckParameter3;
}
