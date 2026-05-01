/*
 * XREFs of _CApplicationManager::GetApplication_::_1_::dtor$0 @ 0x1802E30CE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::GetApplication_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 80));
}
