/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$6 @ 0x1804BF6F1
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1801BFB34 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~1u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 376));
  }
}
