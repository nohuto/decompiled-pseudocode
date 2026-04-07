/*
 * XREFs of ??1CAnimationEngine@@AEAA@XZ @ 0x1800A5894
 * Callers:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CAnimationEngine::~CAnimationEngine(CAnimationEngine *this)
{
  *(_QWORD *)this = &CAnimationEngine::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 9);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 5);
}
