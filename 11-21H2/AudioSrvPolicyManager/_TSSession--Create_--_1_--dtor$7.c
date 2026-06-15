/*
 * XREFs of _TSSession::Create_::_1_::dtor$7 @ 0x180045F0F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TSSession::Create_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 40) + 16LL));
}
