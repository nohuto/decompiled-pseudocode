/*
 * XREFs of ??1InputProvider@@QEAA@XZ @ 0x18007F9A0
 * Callers:
 *     _InputProviderManager::InitializeHelper_::_1_::dtor$1 @ 0x180055F38 (_InputProviderManager--InitializeHelper_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall InputProvider::~InputProvider(InputProvider *this)
{
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 2);
}
