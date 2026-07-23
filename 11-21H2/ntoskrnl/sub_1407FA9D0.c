/*
 * XREFs of sub_1407FA9D0 @ 0x1407FA9D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1403A72E4 @ 0x1403A72E4 (sub_1403A72E4.c)
 *     sub_1407FAA3C @ 0x1407FAA3C (sub_1407FAA3C.c)
 *     sub_14085D380 @ 0x14085D380 (sub_14085D380.c)
 */

signed __int16 __fastcall sub_1407FA9D0(__int64 a1)
{
  signed __int16 result; // ax

  if ( *(_BYTE *)(a1 + 372) )
  {
    *(_BYTE *)(a1 + 372) = 0;
    sub_14085D380(a1);
  }
  else
  {
    sub_1407FAA3C();
  }
  if ( *(_DWORD *)(a1 + 256) )
    sub_1403A72E4(*(_QWORD *)(a1 + 360), *(_DWORD *)(a1 + 368));
  result = _InterlockedCompareExchange16((volatile signed __int16 *)(*(_QWORD *)(a1 + 264) + 56LL), 0, 1);
  if ( result == 2 )
    return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 264) + 32LL), 0, 0);
  return result;
}
