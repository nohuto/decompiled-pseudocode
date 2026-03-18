/*
 * XREFs of UserIsWindowOnDesktopAndComposed @ 0x1C00ED388
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C0097BB8 (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00ECC20 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowOnDesktopAndComposed(int a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  v4 = HMValidateHandleNoSecure(a1, 1);
  if ( v4 && a2 == ***(_QWORD ***)(*(_QWORD *)(v4 + 24) + 8LL) )
    return (unsigned int)IsWindowDesktopComposed(v4) != 0;
  return v3;
}
