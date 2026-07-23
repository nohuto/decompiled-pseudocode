/*
 * XREFs of sub_1402035C0 @ 0x1402035C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14042ABE0 @ 0x14042ABE0 (sub_14042ABE0.c)
 */

__int64 __fastcall sub_1402035C0(__int64 a1)
{
  int v2; // eax
  __int64 v4; // rcx

  v2 = sub_14042ABE0(
         *(_QWORD *)(a1 + 32),
         *(_QWORD *)(a1 + 40),
         *(_QWORD *)(a1 + 48),
         *(_QWORD *)(a1 + 56),
         *(_QWORD *)(a1 + 64));
  if ( v2 < 0 )
  {
    v4 = *(_QWORD *)(a1 + 80);
    if ( *(int *)(v4 + 28) >= 0 )
      *(_DWORD *)(v4 + 28) = v2;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 80) + 24LL), 0xFFFFFFFF) == 1 )
    KeSetEvent(*(PRKEVENT *)(a1 + 80), 0, 0);
  return sub_140203D88(&unk_140CE1D40, a1);
}
