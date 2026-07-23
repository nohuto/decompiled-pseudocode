/*
 * XREFs of XmStoreResult @ 0x1403B97E8
 * Callers:
 *     XmLoopOp @ 0x1403987B0 (XmLoopOp.c)
 *     XmRolOp @ 0x140398E70 (XmRolOp.c)
 *     XmStosOp @ 0x1403993E0 (XmStosOp.c)
 *     XmRorOp @ 0x1403996D0 (XmRorOp.c)
 *     XmMulOp @ 0x14039F0E0 (XmMulOp.c)
 *     XmPopaOp @ 0x14039F1C0 (XmPopaOp.c)
 *     XmNotOp @ 0x1403A2420 (XmNotOp.c)
 *     XmDivOp @ 0x1403A60F0 (XmDivOp.c)
 *     XmShlOp @ 0x1403B6E70 (XmShlOp.c)
 *     XmShrOp @ 0x1403B6F90 (XmShrOp.c)
 *     XmXchgOp @ 0x1403B8C00 (XmXchgOp.c)
 *     XmInOp @ 0x1403B8DC0 (XmInOp.c)
 *     XmAddOperands @ 0x1403B8E68 (XmAddOperands.c)
 *     XmSetLogicalResult @ 0x1403B8FD0 (XmSetLogicalResult.c)
 *     XmSubOperands @ 0x1403B9058 (XmSubOperands.c)
 *     XmPopOp @ 0x1403B9230 (XmPopOp.c)
 *     XmPushStack @ 0x1403B9770 (XmPushStack.c)
 *     XmMovOp @ 0x1403B97D0 (XmMovOp.c)
 *     XmCmpxchgOp @ 0x140533810 (XmCmpxchgOp.c)
 *     XmXaddOp @ 0x1405338D0 (XmXaddOp.c)
 *     XmRclOp @ 0x140533B90 (XmRclOp.c)
 *     XmRcrOp @ 0x140533C50 (XmRcrOp.c)
 *     XmSarOp @ 0x140533CF0 (XmSarOp.c)
 *     XmShldOp @ 0x140533DD0 (XmShldOp.c)
 *     XmShrdOp @ 0x140533F10 (XmShrdOp.c)
 *     XmLahfOp @ 0x140534070 (XmLahfOp.c)
 *     XmInsOp @ 0x1405340A0 (XmInsOp.c)
 *     XmLodsOp @ 0x1405345B0 (XmLodsOp.c)
 *     XmMovsOp @ 0x140534630 (XmMovsOp.c)
 *     XmBsfOp @ 0x140534760 (XmBsfOp.c)
 *     XmBsrOp @ 0x1405347A0 (XmBsrOp.c)
 *     XmBtcOp @ 0x1405347F0 (XmBtcOp.c)
 *     XmBtrOp @ 0x140534830 (XmBtrOp.c)
 *     XmBtsOp @ 0x140534880 (XmBtsOp.c)
 *     XmCbwOp @ 0x1405348C0 (XmCbwOp.c)
 *     XmCwdOp @ 0x140534900 (XmCwdOp.c)
 *     XmBswapOp @ 0x140534A00 (XmBswapOp.c)
 *     XmSmswOp @ 0x140534A70 (XmSmswOp.c)
 *     XmImulOp @ 0x140534A90 (XmImulOp.c)
 *     XmImulxOp @ 0x140534B40 (XmImulxOp.c)
 *     XmIdivOp @ 0x140534C40 (XmIdivOp.c)
 *     XmSxxOp @ 0x140534D70 (XmSxxOp.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall XmStoreResult(__int64 a1, int a2)
{
  int v2; // r8d
  _WORD *result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  result = *(_WORD **)(a1 + 88);
  if ( v2 )
  {
    if ( v2 == 1 )
      *result = a2;
    else
      *(_DWORD *)result = a2;
  }
  else
  {
    *(_BYTE *)result = a2;
  }
  return result;
}
