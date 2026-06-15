/*
 * XREFs of _CCaptureNotifier::AcquireReference_::_1_::dtor$0 @ 0x18011A31D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VEffectPack@@@std@@QEAA@XZ @ 0x1800CBDA8 (--1-$shared_ptr@VEffectPack@@@std@@QEAA@XZ.c)
 */

void __fastcall CCaptureNotifier::AcquireReference_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    std::shared_ptr<EffectPack>::~shared_ptr<EffectPack>(*(_QWORD *)(a2 + 136));
  }
}
