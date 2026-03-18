/*
 * XREFs of XmStoreResult @ 0x1403B8FA8
 * Callers:
 *     XmLoopOp @ 0x140396A50 (XmLoopOp.c)
 *     XmRolOp @ 0x1403989A0 (XmRolOp.c)
 *     XmStosOp @ 0x140398F10 (XmStosOp.c)
 *     XmRorOp @ 0x140399200 (XmRorOp.c)
 *     XmMulOp @ 0x14039EC10 (XmMulOp.c)
 *     XmPopaOp @ 0x14039ECF0 (XmPopaOp.c)
 *     XmNotOp @ 0x1403A1A80 (XmNotOp.c)
 *     XmDivOp @ 0x1403A57B0 (XmDivOp.c)
 *     XmShlOp @ 0x1403B6630 (XmShlOp.c)
 *     XmShrOp @ 0x1403B6750 (XmShrOp.c)
 *     XmXchgOp @ 0x1403B83C0 (XmXchgOp.c)
 *     XmInOp @ 0x1403B8580 (XmInOp.c)
 *     XmAddOperands @ 0x1403B8628 (XmAddOperands.c)
 *     XmSetLogicalResult @ 0x1403B8790 (XmSetLogicalResult.c)
 *     XmSubOperands @ 0x1403B8818 (XmSubOperands.c)
 *     XmPopOp @ 0x1403B89F0 (XmPopOp.c)
 *     XmPushStack @ 0x1403B8F30 (XmPushStack.c)
 *     XmMovOp @ 0x1403B8F90 (XmMovOp.c)
 *     XmCmpxchgOp @ 0x140533370 (XmCmpxchgOp.c)
 *     XmXaddOp @ 0x140533430 (XmXaddOp.c)
 *     XmRclOp @ 0x1405336F0 (XmRclOp.c)
 *     XmRcrOp @ 0x1405337B0 (XmRcrOp.c)
 *     XmSarOp @ 0x140533850 (XmSarOp.c)
 *     XmShldOp @ 0x140533930 (XmShldOp.c)
 *     XmShrdOp @ 0x140533A70 (XmShrdOp.c)
 *     XmLahfOp @ 0x140533BD0 (XmLahfOp.c)
 *     XmInsOp @ 0x140533C00 (XmInsOp.c)
 *     XmLodsOp @ 0x140534110 (XmLodsOp.c)
 *     XmMovsOp @ 0x140534190 (XmMovsOp.c)
 *     XmBsfOp @ 0x1405342C0 (XmBsfOp.c)
 *     XmBsrOp @ 0x140534300 (XmBsrOp.c)
 *     XmBtcOp @ 0x140534350 (XmBtcOp.c)
 *     XmBtrOp @ 0x140534390 (XmBtrOp.c)
 *     XmBtsOp @ 0x1405343E0 (XmBtsOp.c)
 *     XmCbwOp @ 0x140534420 (XmCbwOp.c)
 *     XmCwdOp @ 0x140534460 (XmCwdOp.c)
 *     XmBswapOp @ 0x140534560 (XmBswapOp.c)
 *     XmSmswOp @ 0x1405345D0 (XmSmswOp.c)
 *     XmImulOp @ 0x1405345F0 (XmImulOp.c)
 *     XmImulxOp @ 0x1405346A0 (XmImulxOp.c)
 *     XmIdivOp @ 0x1405347A0 (XmIdivOp.c)
 *     XmSxxOp @ 0x1405348D0 (XmSxxOp.c)
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
