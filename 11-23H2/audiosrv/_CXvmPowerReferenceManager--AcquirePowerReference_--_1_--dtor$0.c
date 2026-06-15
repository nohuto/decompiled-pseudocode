/*
 * XREFs of _CXvmPowerReferenceManager::AcquirePowerReference_::_1_::dtor$0 @ 0x18011A15E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VEffectPack@@@std@@QEAA@XZ @ 0x1800CBDA8 (--1-$shared_ptr@VEffectPack@@@std@@QEAA@XZ.c)
 */

void __fastcall CXvmPowerReferenceManager::AcquirePowerReference_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::shared_ptr<EffectPack>::~shared_ptr<EffectPack>(*(_QWORD *)(a2 + 136));
  }
}
