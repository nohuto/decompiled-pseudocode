/*
 * XREFs of sub_140429670 @ 0x140429670
 * Callers:
 *     sub_1407043D0 @ 0x1407043D0 (sub_1407043D0.c)
 *     sub_1407045D0 @ 0x1407045D0 (sub_1407045D0.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1407035C0 @ 0x1407035C0 (sub_1407035C0.c)
 */

LONG __fastcall sub_140429670(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  LONG result; // eax
  PRKEVENT Event[9]; // [rsp+C0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 120);
  result = sub_1407035C0(a1, *a4, Event);
  if ( (_BYTE)result )
    _fxrstor((void *)(v4 + 256));
  if ( Event[0] )
    return KeSetEvent(Event[0], 1, 0);
  return result;
}
