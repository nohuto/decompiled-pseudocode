/*
 * XREFs of _CProcess::CProcess_::_1_::dtor$1 @ 0x1800449E2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::CProcess_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 48) + 24LL));
}
