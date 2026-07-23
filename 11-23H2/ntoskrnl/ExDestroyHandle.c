/*
 * XREFs of ExDestroyHandle @ 0x14073FC8C
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     RtlpFreeHandleForAtom @ 0x14069ED40 (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x1407151C0 (RtlpInsertStringAtom.c)
 *     ObCloseHandleTableEntry @ 0x14073FFB4 (ObCloseHandleTableEntry.c)
 *     PspThreadDelete @ 0x1407475B0 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 *     AlpcpFreeMessageFunction @ 0x1407C6460 (AlpcpFreeMessageFunction.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x1402BEDA8 (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x140740588 (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x1409F94E8 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExDestroyHandle(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ebx

  if ( *(_QWORD *)(a1 + 96) )
    ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a2, 2LL);
  v6 = ExSweepSingleHandle(a1, a3);
  ExpFreeHandleTableEntry(a1, a2, a3);
  return v6;
}
