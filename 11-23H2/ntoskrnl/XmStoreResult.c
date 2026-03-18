/*
 * XREFs of XmStoreResult @ 0x1403B9608
 * Callers:
 *     XmLoopOp @ 0x1403985D0 (XmLoopOp.c)
 *     XmRolOp @ 0x140398C90 (XmRolOp.c)
 *     XmStosOp @ 0x140399200 (XmStosOp.c)
 *     XmRorOp @ 0x1403994F0 (XmRorOp.c)
 *     XmMulOp @ 0x14039EF00 (XmMulOp.c)
 *     XmPopaOp @ 0x14039EFE0 (XmPopaOp.c)
 *     XmNotOp @ 0x1403A2240 (XmNotOp.c)
 *     XmDivOp @ 0x1403A5F10 (XmDivOp.c)
 *     XmShlOp @ 0x1403B6C90 (XmShlOp.c)
 *     XmShrOp @ 0x1403B6DB0 (XmShrOp.c)
 *     XmXchgOp @ 0x1403B8A20 (XmXchgOp.c)
 *     XmInOp @ 0x1403B8BE0 (XmInOp.c)
 *     XmAddOperands @ 0x1403B8C88 (XmAddOperands.c)
 *     XmSetLogicalResult @ 0x1403B8DF0 (XmSetLogicalResult.c)
 *     XmSubOperands @ 0x1403B8E78 (XmSubOperands.c)
 *     XmPopOp @ 0x1403B9050 (XmPopOp.c)
 *     XmPushStack @ 0x1403B9590 (XmPushStack.c)
 *     XmMovOp @ 0x1403B95F0 (XmMovOp.c)
 *     XmCmpxchgOp @ 0x1405332C0 (XmCmpxchgOp.c)
 *     XmXaddOp @ 0x140533380 (XmXaddOp.c)
 *     XmRclOp @ 0x140533640 (XmRclOp.c)
 *     XmRcrOp @ 0x140533700 (XmRcrOp.c)
 *     XmSarOp @ 0x1405337A0 (XmSarOp.c)
 *     XmShldOp @ 0x140533880 (XmShldOp.c)
 *     XmShrdOp @ 0x1405339C0 (XmShrdOp.c)
 *     XmLahfOp @ 0x140533B20 (XmLahfOp.c)
 *     XmInsOp @ 0x140533B50 (XmInsOp.c)
 *     XmLodsOp @ 0x140534060 (XmLodsOp.c)
 *     XmMovsOp @ 0x1405340E0 (XmMovsOp.c)
 *     XmBsfOp @ 0x140534210 (XmBsfOp.c)
 *     XmBsrOp @ 0x140534250 (XmBsrOp.c)
 *     XmBtcOp @ 0x1405342A0 (XmBtcOp.c)
 *     XmBtrOp @ 0x1405342E0 (XmBtrOp.c)
 *     XmBtsOp @ 0x140534330 (XmBtsOp.c)
 *     XmCbwOp @ 0x140534370 (XmCbwOp.c)
 *     XmCwdOp @ 0x1405343B0 (XmCwdOp.c)
 *     XmBswapOp @ 0x1405344B0 (XmBswapOp.c)
 *     XmSmswOp @ 0x140534520 (XmSmswOp.c)
 *     XmImulOp @ 0x140534540 (XmImulOp.c)
 *     XmImulxOp @ 0x1405345F0 (XmImulxOp.c)
 *     XmIdivOp @ 0x1405346F0 (XmIdivOp.c)
 *     XmSxxOp @ 0x140534820 (XmSxxOp.c)
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
