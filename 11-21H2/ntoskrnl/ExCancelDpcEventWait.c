/*
 * XREFs of ExCancelDpcEventWait @ 0x14063E1E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140232968 @ 0x140232968 (sub_140232968.c)
 */

char __fastcall ExCancelDpcEventWait(__int64 a1)
{
  return sub_140232968(*(volatile signed __int32 **)(a1 + 56), (__int64 *)a1);
}
