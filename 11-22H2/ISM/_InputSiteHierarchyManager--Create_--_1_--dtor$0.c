/*
 * XREFs of _InputSiteHierarchyManager::Create_::_1_::dtor$0 @ 0x18008345A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICursorBroker@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A91C0 (--1-$ComPtr@UICursorBroker@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall InputSiteHierarchyManager::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<ICursorBroker>::~ComPtr<ICursorBroker>(*(void **)(a2 + 64));
  }
}
