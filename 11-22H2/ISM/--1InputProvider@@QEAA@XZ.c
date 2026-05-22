/*
 * XREFs of ??1InputProvider@@QEAA@XZ @ 0x1800A91CC
 * Callers:
 *     _InputProviderManager::InitializeHelper_::_1_::dtor$1 @ 0x180081D83 (_InputProviderManager--InitializeHelper_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall InputProvider::~InputProvider(InputProvider *this)
{
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 2);
}
