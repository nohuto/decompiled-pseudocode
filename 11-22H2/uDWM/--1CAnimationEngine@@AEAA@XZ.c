/*
 * XREFs of ??1CAnimationEngine@@AEAA@XZ @ 0x1800AAC9C
 * Callers:
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002C750 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18002F440 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180043790 (-Release@CAnimationEngine@@UEAAKXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CAnimationEngine::~CAnimationEngine(CAnimationEngine *this)
{
  *(_QWORD *)this = &CAnimationEngine::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 9);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 5);
}
