/*
 * XREFs of ExCancelDpcEventWait @ 0x14060C410
 * Callers:
 *     <none>
 * Callees:
 *     KiDeregisterObjectWaitBlock @ 0x14033C6C0 (KiDeregisterObjectWaitBlock.c)
 */

__int64 __fastcall ExCancelDpcEventWait(__int64 a1)
{
  return KiDeregisterObjectWaitBlock(*(volatile signed __int32 **)(a1 + 56), (__int64 *)a1);
}
