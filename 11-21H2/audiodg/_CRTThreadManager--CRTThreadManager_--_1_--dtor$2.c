/*
 * XREFs of _CRTThreadManager::CRTThreadManager_::_1_::dtor$2 @ 0x1400395F2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRTThreadManager::CRTThreadManager_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CCriticalSection::~CCriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 48) + 40LL));
}
