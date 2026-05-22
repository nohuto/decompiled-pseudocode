/*
 * XREFs of ??1?$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x1801C5588
 * Callers:
 *     _DWMInputRouter::Initialize_::_1_::dtor$34 @ 0x180081F87 (_DWMInputRouter--Initialize_--_1_--dtor$34.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<GameInputProcessor>::~ComPtr<GameInputProcessor>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<GameInputProcessor>::InternalRelease(a1);
}
