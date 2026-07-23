/*
 * XREFs of sub_140355774 @ 0x140355774
 * Callers:
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     sub_140355144 @ 0x140355144 (sub_140355144.c)
 *     sub_140355534 @ 0x140355534 (sub_140355534.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140355830 @ 0x140355830 (sub_140355830.c)
 *     sub_140355A50 @ 0x140355A50 (sub_140355A50.c)
 */

LONG __fastcall sub_140355774(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  LONG result; // eax

  _InterlockedOr((volatile signed __int32 *)(a2 + 88), 0x80000000);
  KeSetEvent((PRKEVENT)(a2 + 104), 0, 0);
  if ( a3 )
    sub_140355A50(a2);
  sub_140355830(BugCheckParameter2, *(unsigned int *)(a2 + 16));
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 248), 0, 0);
  return result;
}
