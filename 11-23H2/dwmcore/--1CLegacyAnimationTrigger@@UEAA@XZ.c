/*
 * XREFs of ??1CLegacyAnimationTrigger@@UEAA@XZ @ 0x1801C1A7C
 * Callers:
 *     ??_GCLegacyAnimationTrigger@@UEAAPEAXI@Z @ 0x1801C2C70 (--_GCLegacyAnimationTrigger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007F480 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CLegacyAnimationTrigger::~CLegacyAnimationTrigger(CLegacyAnimationTrigger *this)
{
  *(_QWORD *)this = &CLegacyAnimationTrigger::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 64);
  CResource::~CResource(this);
}
