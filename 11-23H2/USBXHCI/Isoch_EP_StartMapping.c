/*
 * XREFs of Isoch_EP_StartMapping @ 0x1C0001C10
 * Callers:
 *     <none>
 * Callees:
 *     Isoch_MapTransfers @ 0x1C0001C9C (Isoch_MapTransfers.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00074BC (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 */

char __fastcall Isoch_EP_StartMapping(__int64 a1)
{
  char v2; // si
  __int32 v3; // eax

  v2 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v2 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
  _InterlockedExchange((volatile __int32 *)(a1 + 328), 0);
  *(_DWORD *)(a1 + 376) = 0;
  v3 = _InterlockedExchange((volatile __int32 *)(a1 + 108), 3);
  if ( !v3 )
    LOBYTE(v3) = Isoch_MapTransfers(a1);
  if ( v2 )
  {
    LOBYTE(v3) = KeGetCurrentIrql();
    if ( (_BYTE)v3 == 2 )
      LOBYTE(v3) = Controller_LowerAndTrackIrql(*(_QWORD *)(a1 + 40));
  }
  return v3;
}
