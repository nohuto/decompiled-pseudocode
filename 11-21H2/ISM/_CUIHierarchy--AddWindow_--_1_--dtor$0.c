/*
 * XREFs of _CUIHierarchy::AddWindow_::_1_::dtor$0 @ 0x180084B3B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIInputSystemInternalProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18004D240 (--1-$ComPtr@UIInputSystemInternalProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CUIHierarchy::AddWindow_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<IInputSystemInternalProxy>::~ComPtr<IInputSystemInternalProxy>(*(__int64 **)(a2 + 88));
  }
}
