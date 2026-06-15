/*
 * XREFs of _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$20 @ 0x18004559C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor_20(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 64) + 16LL));
}
