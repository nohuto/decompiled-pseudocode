/*
 * XREFs of sub_1405CC160 @ 0x1405CC160
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1405CC460 @ 0x1405CC460 (sub_1405CC460.c)
 */

LONG __fastcall sub_1405CC160(ULONG_PTR BugCheckParameter3)
{
  LONG result; // eax

  do
    sub_1405CC460(BugCheckParameter3);
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter3 + 952), 0xFFFFFFFF) != 1 );
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter3 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(BugCheckParameter3 + 248), 0, 0);
  return result;
}
