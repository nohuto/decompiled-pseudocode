/*
 * XREFs of ??1InputProvider@@QEAA@XZ @ 0x18009690C
 * Callers:
 *     _InputProviderManager::InitializeHelper_::_1_::dtor$1 @ 0x18006C941 (_InputProviderManager--InitializeHelper_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall InputProvider::~InputProvider(InputProvider *this)
{
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 2);
}
