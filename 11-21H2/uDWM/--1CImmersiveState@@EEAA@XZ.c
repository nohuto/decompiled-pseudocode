/*
 * XREFs of ??1CImmersiveState@@EEAA@XZ @ 0x1800BFB88
 * Callers:
 *     ??_GCImmersiveState@@EEAAPEAXI@Z @ 0x1800BFBC0 (--_GCImmersiveState@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CImmersiveState::~CImmersiveState(CImmersiveState *this)
{
  *(_QWORD *)this = &CImmersiveState::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 2);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
