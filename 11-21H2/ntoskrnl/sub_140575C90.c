/*
 * XREFs of sub_140575C90 @ 0x140575C90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14039C41C @ 0x14039C41C (sub_14039C41C.c)
 */

LONG __fastcall sub_140575C90(__int64 a1, __int64 a2)
{
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a2 + 40) )
    sub_14039C41C(a1, *(__int64 **)(a2 + 32));
  else
    **(_BYTE **)(a2 + 32) |= 1u;
  return KeSetEvent((PRKEVENT)a2, 0, 0);
}
